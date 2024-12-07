//Write a C program to count the number of digits in a number.
#include<stdio.h>
#include<conio.h>
 void main (){
 	 int a,last_dig,i,count;
 	 printf("Enter a number : ");
 	 scanf("%d",&a);
 	 last_dig =a % 10;
 	 
 	 for(i=5;i>=last_dig;i++){
 	 	count++;
	  }
	  printf("%d",count);
 }
