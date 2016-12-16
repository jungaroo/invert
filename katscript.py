# -*- coding: utf-8 -*-
"""
Created on Fri Dec 16 13:21:19 2016

@author: Thar
"""



file = '/mnt/i/home/Desktop/chrX.fa'

def cgcounter(file):
  with open (file, "r") as countfile:
    filedata=countfile.read().replace('\n', '')
  index = 0
  count = 0
  while index < len(filedata):
    index = filedata.find('CG' or 'cg', index)
    if index == -1: # means no match i.e. got to end of string
      break
    index += 1
    count += 1
  index2 = 0
  while index2 < len(filedata):
    index2 = filedata.find('cg', index2)
    if index2 == -1: # means no match i.e. got to end of string
      break
    index2 += 1
    count += 1
  print(count)
  return(count)
  
cgcounter(file)
