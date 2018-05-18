#!/usr/bin/env python
"""
Usage:
    python sample_from_file.py file_name [n_samples, def=10]

Open a file and sample a number of lines from it and write them into a new
file with a "random" number attached (nothing is done to prevent possible
collisions, but if you're worried about that, this script isn't for you).
"""
from __future__ import print_function
import sys
import random

fname = sys.argv[1]
with open(fname, 'r') as f:
    lines = f.readlines()

n_files = 10
if len(sys.argv) > 2:
    n_files = int(sys.argv[2])

random.shuffle(lines)
out_name = fname.split('.')[0] + str(random.randint(1000000, 2000000)) + '.txt'

with open(out_name, 'w') as f:
    for line in lines[:n_files]:
        f.write(line)
