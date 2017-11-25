This page describes how you can setup your development environment for CFP, allowing you to properly build CFP and utilize file patching.

## 1. Requirements
* Arma 3
* A proper installation of the Arma 3 Tools (available on Steam)
* A properly setup P-drive
* Run Arma 3 and Arma 3 Tools directly from steam once to install registry entries (and again after every update)
* Python 3.x
* Mikero Tools: DePbo, DeRap, DeOgg, Rapify, MakePbo, PboProject >=1.70
* *.hpp removed from PboProject’s “Exclude From Pbo” list
* Python, Mikero Tools and Git in PATH environment variable
* CBA mod (release or development version)

## 2. Why so complicated?
If you have made other mods you might be used to an easier build process. CFP, however, we wanted to have an automated way of testing, building and releasing the mod and CFP makes use of CBA macros to simplify things and give the developer access to a better debug process, which requires a stricter build environment. Additionally, Mikero’s Tools are stricter and report more errors than AddonBuilder does. The structure of this development environment also allows for file patching, which is very useful for debugging.

Not offering .exes for the Python scripts we use allows us to make easy changes without the hassle of compiling self-extracting exes all the time.

## 3. Getting Source Code
To actually get the CFP source code on your machine, it is recommended that you use Git. Tutorials for this are all around the web, and it allows you to track your changes and easily update your local copy. Here are the basics:

1. Installing GitHub Desktop - https://help.github.com/desktop/guides/getting-started-with-github-desktop/installing-github-desktop/
2. Clone our repo (https://github.com/tupolov/cfp.git) - https://help.github.com/desktop/guides/contributing-to-projects/cloning-a-repository-from-github-to-github-desktop/

If you just want to create a quick and dirty build, you can also directly download the source code using the “Download ZIP” button on the front page of the GitHub repo.

## 4. Setup and Building
### 4.1 Initial Setup
Navigate to tools folder in command line.

`cd "[location of the CFP project]\tools"`

Execute `setup.py` to create symbolic links to P-drive and Arma 3 directory required for building.

Should the script fail, you can create the required links manually. First, create x folders both in your Arma 3 directory and on your P-drive. Then run the following commands as admin, replacing the text in brackets with the appropriate paths:

`mklink /J "[Arma 3 installation folder]\x\cfp" "[location of the CFP project]"`
`mklink /J "P:\x\cfp" "[location of the CFP project]"`

Then, copy the cba folder from the tools folder to P:\x\cba. Create the x folder if needed. That folder contains the parts of the CBA source code that are required for the macros to work.

### 4.2 Creating a Test Build

To create a development build of CFP to test changes or to debug something, run the `config_validator.py` and then `build.py` files in the tools folder. This will populate the addons folder with binarized PBOs. These PBOs still point to the source files in their respective folders however, which allows you to use file patching. This also means that you cannot distribute this build to others.

To start the game using this build, you can use the following modline:

`-mod=@CBA_A3;x\cfp`

### 4.3 Adding factions and Committing changes to the repo

To add a faction, simply create a folder in P:\x\cfp\addons that matches the name of your faction. Always prefix it with the side letter I.e. B, I, O, C and then follow our standard for faction naming I.e. Alpha-2 country code followed by military branch I.e. US for country code and ARMY for military branch = B_USARMY. The name of your folder will be B_USARMY. 

To create a faction you have a number of options:
1. Create the faction in ORBATRON and use Export Faction to File option
2. Copy an existing faction files into your folder and manually edit
3. Copy the o_regtemp folder files and edit the Faction.hpp file (this is for quick creation of standard regular forces)

To test your faction, simply run `config_validator.py` from the \x\cfp\tools folder in cmd.exe and make sure there are no errors. Run `build.py` in the tools folder to build your pbo, then launch Arma and test.

To commit your faction to the repo, make sure you PULL recent changes from the GitHub. Then follow these instructions to commit and push your changes.

- https://help.github.com/desktop/guides/contributing-to-projects/committing-and-reviewing-changes-to-your-project/

### 4.3 Creating a Release Build (You don't need to do this)

To create a complete build of CFP that you can use without the source files you will need to:

Ensure .hpp is NOT in pboProject’s “Exclude From Pbo” list

When the requirements are met:

Execute make.py version increment_build <other-increment-args> force checkexternal release in the tools folder, replacing <other-increment-args> with the part of version you want to increment (options described below)

This will populate the release folder with binarized PBOs, compiled extensions, copied extras, bisigns and a bikey. Additionally, an archive file will also be created in the folder. The folder and archive handle like those of any other mod.

Different make.py command line options include:

version - update version number in all files and leave them in working directory (leaving this out will still update the version in all files present in the release folder, but they will be reverted to not disturb the working directory)
increment_build - increments build version number
increment_patch - increments patch version number (ignored with increment_minor or increment_major)
increment_minor - increments minor version number and resets patch version number to 0 (ignored with increment_major)
increment_major - increments major version number and resets minor and patch version numbers to 0
force - force rebuild all PBOs, even those already present in the release directory (combined with compile it will also rebuild all extensions)
checkexternal - check external references (incompatible only with <component1> <component2> and force <component1> <component2>)
release - create release packages/archives
<component1> <component2> - build only specified component(s) (incompatible with release)
force <component1> <component2> - force rebuild specified component(s) (incompatible with release)

## 7. File Patching
File Patching allows you to change the files in an addon while the game is running, requiring only a restart of the mission. This makes it great for debugging, as it cuts down the time required between tests. Note that this only works with PBOs created using MakePBO, which build.py uses.

To run Arma 3 with file patching add the -filePatching startup parameter (since Arma 3 v1.50, file patching is disabled by default).

### 7.1 Disabling CBA Function Caching
By default CBA caches a compiled version of functions to reduce mission load times. This interferes with file patching. There are three ways to disable function caching:

Load cba_cache_disable.pbo (included in CBA’s optional folder - simply move it to addons folder for the time being)
Add the following to your test missions description.ext:
class CfgSettings {
    class CBA {
        class Caching {
            compile = 0;
            xeh = 0;
            functions = 0;
        };
    };
};
To only disable caching for a single module, hence greatly improving mission restart time, add the following line to the script_component.hpp file of said module (prepared in each CFP component, simply uncomment):
`#define DISABLE_COMPILE_CACHE`
All functions in module with DISABLE_COMPILE_CACHE line can be recompiled without mission restart with [] call CFP_PREP_RECOMPILE; command. You can add a addAction/keybind/pfeh with this code and use it for fast recompiling.

### 7.2 Restrictions
Files must exist in the built PBOs for file patching to work. If you create a new file you must rebuild the PBO or Arma will not find it in your file paths.

Configs are not patched during run time, only at load time. You do not have to rebuild a PBO to make config changes, just restart Arma. You can get around this though if you are on the dev branch of Arma 3 and running the diagnostic exe. That includes diag_mergeConfigFile which takes a full system path (as in diag_mergeConfigFile ["p:\x\cfp\addons\my_module\config.cpp"]) and allows you selectively reload config files.

If you need to add/remove files, then you’ll need to run build.py again without the game running, and restart. That is all that is required to add new files for further use in testing.
