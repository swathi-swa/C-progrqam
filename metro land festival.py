#!/bin/python3

import math
import os
import random
import re
import sys



#
# Complete the 'minimizeCost' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER_ARRAY p
#  2. INTEGER_ARRAY x
#  3. INTEGER_ARRAY y
#

def minimizeCost(p, x, y):
    s=0
    for i in range(0,len(y)):
        s+=y[i]
    return s
if __name__ == '__main__':
