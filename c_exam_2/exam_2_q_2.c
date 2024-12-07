//WAP to find lowest value from 3 numbers using nested if else
#include<stdio.h>
#include<conio.h>
  int  main (){
 	 int num1,num2,num3;
 	 while(1){
	  
 	printf("\nEnter first number : ");
 	scanf("%d",&num1);
 	printf("Enter second number : ");
 	scanf("%d",&num2);
 	printf("Enter third number : ");
 	scanf("%d",&num3);
 	
 	if(num1!=num2 && num1!=num3 && num2!=num3){
 		if(num1<num2 && num1<num3){
 			printf("First number(%d) is lowest ",num1);
		 }
		else if(num2<num1 && num2<num3){
 			printf("Second number(%d) is lowest ",num2);
		 }
		 else{
		 	printf("Third number(%d) is lowest ",num3);
		 }
	 }
	 else{
	 	if(num1==num2 && num1==num3 && num2==num3) {
		 	printf("All numbers are equal");
		 }
	 	 else if(num1==num2){
	 		   if( num3<num1 && num3<num2 ){
	 			printf("First and Second number is equal and Third number is  lowest ");
			 }
			 else{
			 	printf("First and Second number is equal and also lowest ");
			 }
		 }
		 else if(num1==num3){
	 		if( num2<num1 && num2<num3 ){
	 			printf("First and Third number is equal and Second number is  lowest ");
			 }
			 else{
			 	printf("First and third number is equal and also lowest ");
			 }
		 }
		 else if(num2==num3){
	 		if( num1<num2 && num1<num3 ){
	 			printf("Second and Third number is equal and First number is  lowest ");
			 }
			 else{
			 	printf("Second and third number is equal and also lowest ");
			 }
		 }
		  
	 }
}
	 getch();
	 return 0;
 }
