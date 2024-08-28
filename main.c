/*
    CMP_SC 4050 FS2024
    A0 - Gale-Shapley Stable Matching
    main.c
    By Jim Ries (jer676), RiesJ@missouri.edu
    August 28, 2024
*/
#include <stdio.h>
#include "cs4050A0.h"
#include "Gale-Shapley.h"

int main(void)
{
    char * Hospitals[] = 
    {
        "Atlanta",      // 0
        "Boston",       // 1
        "Chicago",      // 2
        "Detroit",      // 3
        "El Paso",      // 4
    };

    char * Students[] =
    {
        "Wayne",        // 0
        "Val",          // 1
        "Yolanda",      // 2
        "Zeus",         // 3
        "Xavier",       // 4
    };

    Match HospitalPreferences[] = 
    {
        {0,0},{0,1},{0,2},{0,3},{0,4},      // 0 - Atlanta
        {1,2},{1,0},{1,1},{1,4},{1,3},      // 1 - Boston
        {2,0},{2,3},{2,4},{2,2},{2,1},      // 2 - Chicago
        {3,1},{3,2},{3,4},{3,0},{3,3},      // 3 - Detroit
        {4,0},{4,2},{4,1},{4,3},{4,4},      // 4 - El Paso
    };

    Match StudentPreferences[] =
    {
        {2,0},{1,0},{3,0},{0,0},{4,0},      // 0 - Wayne
        {4,1},{0,1},{1,1},{3,1},{2,1},      // 1 - Val
        {0,2},{4,2},{3,2},{2,2},{1,2},      // 2 - Yolanda
        {3,3},{1,3},{4,3},{2,3},{0,3},      // 3 - Zeus
        {1,4},{2,4},{3,4},{4,4},{0,4},      // 4 - Xavier
    };

    int countHospitals = sizeof(Hospitals)/sizeof(char *);
    int countStudents = sizeof(Students)/sizeof(char *);

    printf("Hospital Preferences:\n");
    for (int i=0;i<5;i++)
    {
        PrintMatches(Hospitals,Students,&(HospitalPreferences[i*countHospitals]),countHospitals);
    }
    printf("\n");

    printf("Student Preferences:\n");
    for (int i=0;i<5;i++)
    {
        PrintMatches(Hospitals,Students,&(StudentPreferences[i*countStudents]),countStudents);
    }
    printf("\n");

    printf("*** Performing Gale-Shapley to find a stable match ***\n");
    Match * M = GaleShapley(Hospitals,Students,HospitalPreferences,StudentPreferences,countHospitals);

    printf("\nStable Match:\n");
    PrintMatches(Hospitals,Students,M,countHospitals);
}