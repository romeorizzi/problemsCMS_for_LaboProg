#!/usr/bin/env python3
# -*- coding: latin-1 -*-

n = int(input())


def divides(d, n):
# tells whether the natural a divides the natural b    
    if n%d:
        return False
    return True

for i in range(1,n+1):
    if divides(i, n):
        print(i)
