# makefile for sd20
#
sd20: sd20.cpp
	g++ -Wall -g sd20.cpp -o ./Build/DEBUG/sd20

.PHONY: clean
clean:
	rm Build/DEBUG/*
