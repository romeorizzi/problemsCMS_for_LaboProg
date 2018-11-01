#!/usr/bin/python3

with open("input.txt","r") as infile:
 st = int(infile.readline())
b=""
for a in range(1,st+1):
 b += str(a) + " "
with open("output.txt", "w+") as outfile:
 outfile.write(b+"\n")
