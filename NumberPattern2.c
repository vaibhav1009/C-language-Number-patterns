// *********************************************************************
//  Author - Vaibhav Kagathara
//  Date :- 23rd October 2019
//  Language :- C Language
//  About :- Star Pattern 1
//  *********************************************************************

//  *********************************************************************
/*  Output :-
	12345
	1234
	123
	12
	1
*/
//  *********************************************************************


#include <stdio.h>

int main()
{
    int i, j;
    
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        
        printf("\n");
    }
}

