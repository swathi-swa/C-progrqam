#!/bin/python3

import math
import os
import random
import re
import sys



#
# Complete the 'efficientJanitor' function below.
#
# The function is expected to return an INTEGER.
# The function accepts FLOAT_ARRAY weight as parameter.
#

def efficientJanitor(weight):
    # Write your code here
    count=0
    v=len(weight)
    for i in range(0,v-2):
        if(weight[i]==3.00):
            count+=1
        
        elif(weight[i]+random.randint(i,weight_count)<=3.00):
            count+=1
        else:
            count+=1
        weight.pop(i)
        v=len(weight)
    return count
if __name__ == '__main__':
