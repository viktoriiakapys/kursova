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
    int x = Array [middle];
    int w ;
    do
    {
        if (sort == 1) {
        while (Array[i]<x)
        { i++ ; }

        while (x<Array[j])
        { j-- ; }
        }

        if (sort == 2) {
        while (Array[i]>x)
        { i++ ; }

        while (x>Array[j])
        { j-- ; }
        }

        if (i<=j) 
        {
           w = Array [i]; 
           Array [i] = Array [j] ;
           Array [j] = w ;
           
           i++ ;
           j-- ;
        }
    }
    while (i<j) ;
    
    if (Left_B<j) 
    { QuickS (Array, Count_Q, Left_B, j, sort); } 
    
    if (i<Right_B)
    { QuickS (Array, Count_Q, i, Right_B, sort);}
}
int main () {
    int CE=0;
    Count_E:
    printf("Enter please count of elements (<=30) ");
    scanf(" %d", &CE);
    if (CE > 30) {
        printf("You enter greater then 30 elements, please input again.\n\n");
        goto Count_E;}
}