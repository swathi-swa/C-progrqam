#!/bin/python3

import math
import os
import random
import re
import sys



#
# Complete the 'primeJump' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts INTEGER_ARRAY A as parameter.
#

def primeJump(A):
    p=[]
    result=[]
    m=max(A)
    for num in range(2,m):
        for j in range(2,num):
            if(num%j==0):
                break
            else:
                p.append(num)
    c=1
    for i in range(0,len(A)):
        for j in range(0,len(p)):
            if(A[i]*p[j] in A):
                c+=1
                result.append(c)
                break
            else:
                b=1
                result.append(b)
                break
    return result
                
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    A_count = int(input().strip())

    A = []

    for _ in range(A_count):
        A_item = int(input().strip())
        A.append(A_item)

    result = primeJump(A)

    fptr.write('\n'.join(map(str, result)))
    fptr.write('\n')

    fptr.close()

