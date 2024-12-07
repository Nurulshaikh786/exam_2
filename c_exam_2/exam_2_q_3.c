//Write a C program to print all natural numbers in reverse using while loop (from n to 1) 
#include<stdio.h>
#include<conio.h>
 void main (){
 	 int n,i ;
 	 printf("Enter a nutural number : ");
 	 scanf("%d",&n);
 	 printf("\n");
 	 i=n;
 	 printf("%d",i);
 	while(i>1){
 		i--;
 		printf(" %d ",i);
	 }
	 getch();
 } 
