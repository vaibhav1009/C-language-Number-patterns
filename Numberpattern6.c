// *********************************************************************
//  Author - Vaibhav Kagathara
//  Date :- 29th October 2019
//  Language :- C Language
//  About :- Number Pattern 6
//  *********************************************************************
	

//  //////////////////////////////////////////////////////////////////////
/*
	    1                                                                                                                         
	  2 3 4                                                                                                                       
	5 6 7 8 9
	
*/
//  //////////////////////////////////////////////////////////////////////

#include<stdio.h>

void main()
{
  int i, j, k=1;
  
  for(i=1; i<=5; i=i+2)
  {
    for(j=5 ; j>=1 ; j--)
    {
      if(j>i)
        printf(" ");
      else
        printf("%d ",k++);
    }
    
    printf("\n") ;
  }
  
}
