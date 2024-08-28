/*
    CMP_SC 4050 FS2024
    A0 - Gale-Shapley Stable Matching
    Gale-Shapley.h
    By Jim Ries (jer676), RiesJ@missouri.edu
    August 28, 2024
*/
#ifndef _GALE_SHAPLEY_H
#define _GALE_SHAPLEY_H

struct _Match
{
    int optimal;
    int pessimal;
    int indexLastProposed;
};
typedef struct _Match Match;

Match * GaleShapley(char * Optimals[], char * Pessimals[], Match OptimalPreferences[], Match PessimalPreferences[], int n);

#endif