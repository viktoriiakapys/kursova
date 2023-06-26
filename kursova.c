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

    int method=0;
    int sorting=0;
    printf("What method do you want to see ?\n");
    printf("1 - Line method\n");
    printf("2 - Bulb method\n");
    printf("3 - Quick sort method\n");
    scanf("%d", &method);
    printf("How do You want to sort array: 1 - rising, 2 - falling ?\n");
    scanf("%d", &sorting);
    printf("Method - %d",method);
    printf(" sorting - %d\n",sorting);
    int Count;
    Count=CE;
    int M1[Count];
    int Count_B;
    Count_B=CE;
    int M2[Count_B];
    int Count_Q;
    Count_Q=CE;
    int M3[Count_Q];
    if (method == 1) goto LineMethod;
    if (method == 2) goto BulbMethod;
    if (method == 3) goto QuickMethod;

    LineMethod:
    printf("Initial array : \n");
    time_t t1;
    srand ( (unsigned) time (&t1));
    for (int I = 0; I < Count; I++) {
        M1[I]=rand()%100 + 1;
    }
    for (int I = 0; I < Count; I++) {
        printf(" %i", M1[I]);
    }
    printf("\n");

    printf("Line sorting method :\n");
    int A=0;
    int f1=0;
    for (int I = 0; I < Count; I++) {
        for (int J = I+1; J < Count; J++) {
            A+=1;
            if (sorting == 1) goto rising_L;
            if (sorting == 2) goto falling_L;
            rising_L:
            if (M1[I] > M1[J]) {
                int N=M1[I];
	            M1[I]=M1[J];
	            M1[J]=N;
                for (int L = 0; L < Count; L++) {
                    printf(" %i", M1[L]);
                }
                printf("    Iteration N %i\n ", A);
                        
            }
            goto fin_L;
            falling_L:
            if (M1[I] < M1[J]) {
                int N=M1[I];
	            M1[I]=M1[J];
	            M1[J]=N;
                for (int L = 0; L < Count; L++) {
                    printf(" %i", M1[L]);
                }
                printf("    Iteration N %i\n ", A);            
            }
            fin_L:
            f1+=1;
        }       
    }
    printf("\nSorted array : \n");
    for (int I = 0; I < Count; I++) {
        printf(" %i", M1[I]);
    }
    printf("\n");
    printf("Count of iterations %i", A); 
    printf("\n");
    return 0;
}