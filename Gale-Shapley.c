#include <stdio.h>
#include <stdlib.h>
#include "Gale-Shapley.h"
#include "cs4050A0.h"

/*
GALE–SHAPLEY (preference lists for hospitals and students) 
INITIALIZE	M to empty matching.
WHILE	(some hospital h is unmatched and hasn’t proposed to every student)
s	 first student on h’s list to whom h has not yet proposed.
IF	(s is unmatched)
Add h–s to matching M.
ELSE IF	(s prefers h to current partner h) Replace h–s with h–s in matching M.
ELSE
s rejects h.


RETURN stable matching M.

*/

Match * GaleShapley(char * Optimals[], char * Pessimals[], 
                    Match OptimalPreferences[], Match PessimalPreferences[], int n)
{
    return NULL;
}
