#!/usr/bin/env python3
# -*- coding: latin-1 -*-

from __future__ import print_function

n = int(input())


def divides(d, n):
# tells whether the natural a divides the natural b    
    if n%d:
        return False
    return True
if n==1:
    print(n)
else:
    first = True
    i = 2
    while i <= n:
        while divides(i, n):
            if first:
                print(i,end="")
                first = False
            else:    
                print("*%d" % i,end="")
            n /= i
        i += 1
    print()
