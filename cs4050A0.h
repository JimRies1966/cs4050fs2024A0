/*
    CMP_SC 4050 FS2024
    A0 - Gale-Shapley Stable Matching
    cs4050A0.h
    By Jim Ries (jer676), RiesJ@missouri.edu
    August 28, 2024
*/

#ifndef _CS4050A0_H
#define _CS4050A0_H

#include "Gale-Shapley.h"

void PrintMatch(char * optimals[], char * pessimals[], Match match);
void PrintMatches(char * optimals[], char * pessimals[], Match matches[], int n);

#endif