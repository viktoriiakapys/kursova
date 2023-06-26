#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
void QuickS (int Array[], /* масив для сортування */
		unsigned int Count_Q, /* розмір масиву */
		int Left_B, /* ліва межа сортування */ 
		int Right_B, /* права межа сортування */
        int sort) /* напрямок сортування */
{
    int i = Left_B; 
    int j = Right_B;
    
    int middle = (Right_B+Left_B)/2;
}