#!/usr/bin/env python3

import os
import argparse

from pygithub3 import Github

def main():
    gh = Github(user='tupolov', repo='cfp')
    
    pull_requests = gh.pull_requests.list().all()
    
    for request in pull_requests:
        files = gh.pull_requests.list_files(request.number).all()
        
        for file in files:
            # print file.filename
            if '.sqf' in file.filename:
                print file
        
if __name__ == "__main__":
    main()