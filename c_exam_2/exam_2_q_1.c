//WAP to find area of below formula using basic ways ( ans = a2 + 2*a*b + b2 ) //
#include<stdio.h>
#include<conio.h>
    int main (){
 	 int a,b,ans;
 	printf("Enter value of a : ");
 	scanf("%d",&a);
 	printf("Enter value of b : ");
 	scanf("%d",&b);
 	ans = (a*a) + (2*a*b) + (b*b);
 	printf("Quadratic value = %d",ans);
 	return 0;
 	
 }
