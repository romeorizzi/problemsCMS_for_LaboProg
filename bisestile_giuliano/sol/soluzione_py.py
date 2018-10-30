#!/usr/bin/env python3
# -*- coding: latin-1 -*-

num_days_non_bisestile = 365; # earth planet
num_days_bisestile = 366; # earth planet

N = int(input())

def num_days_of_year(n):
    if (n % 4) == 0:        
        return num_days_bisestile
    return num_days_non_bisestile

print(num_days_of_year(N) )
