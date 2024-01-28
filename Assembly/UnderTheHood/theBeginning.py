#!/usr/bin/python3
import sys

if len(sys.argv)==2:
    print(f"Knock, knock, {sys.argv[1]}")
else:
    sys.stderr.write("Usage: {0} <usage>\n".format(sys.argv[0]))
