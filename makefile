###############################################################
# Program:
#     Ratio test program.
# Author:
#     Jamie Hurd
# Summary:
#    Return the ratio of integers from a vector up to
#	six decimals from the decimal.
###############################################################
a.out:	ratio.o
	g++	ratio.o

ratio.o:	ratio.h	ratio.cpp
	g++	-c ratio.o