##############################################################################
# Makefile for Gale-Shapley Assignment
# CMP_SC 4050
# Fall 2024
# By Jim Ries (RiesJ@missouri.edu)
##############################################################################

# Macros
CC = gcc
CPP = g++
CFLAGS = -Wall -Werror -c -g -std=c11 -I.
CPPFLAGS = -Wall -Werror -c -g -I.
LDFLAGS = -lm -lcs4050A0 -L.

# Rules
%.o : %.c 
	@echo Compiling $^ 
	@$(CC) $(CFLAGS) $^

# Default target
default: gs

# Other targets
debug: CFLAGS += -DDEBUG
debug: clean gs

gs : main.o Gale-Shapley.o
	@echo Linking $@ 
	@$(CC) $^ $(LDFLAGS) -o $@

libcs4050A0.a : cs4050A0.o
	@echo Building library $@
	@ar -crs $@ $^

clean : 
	@rm -rf *.o
	@rm -rf gs
	@rm -rf testcc
	@echo All Clean!
