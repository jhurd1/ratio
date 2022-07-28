###############################################################
# Program:
#     Ratio test program.
# Author:
#     Jamie Hurd
# Summary:
#    Return the ratio of integers from a vector up to
#	six decimals from the decimal.
###############################################################
a.out:	ratio.o	RatioDriver.o
	g++	ratio.o	RatioDriver.o

ratio.o:	ratio.h	ratio.cpp
	g++	-c ratio.cpp

RatioDriver.o:	RatioDriver.cpp
	g++	-c	RatioDriver.cpp