//Write a C program to check whether an Alphabet is a vowel or Constant using switch case
#include<stdio.h>
#include<conio.h>
 void main (){
 	 char alpha;
 	 printf("Enter a alphabet : ");
 	 scanf("%c",&alpha);
 	 
 	 if(alpha >='a' && alpha <='z' && alpha >='A' && alpha <='Z'){
	  
 	 switch(alpha){
 	 	case 'a' : printf("Entered alphabet is vowel");
 	 	break;
 	 	
 	 	case 'e' : printf("Entered alphabet is vowel");
 	 	break;
 	 	
 	 	case 'i' : printf("Entered alphabet is vowel");
 	 	break;
 	 	
 	 	case 'o' : printf("Entered alphabet is vowel");
 	 	break;
 	 	
 	 	case 'u' : printf("Entered alphabet is vowel");
 	 	break;
 	 	
 	 	case 'A' : printf("Entered alphabet is vowel");
 	 	break;
 	 	
 	 	case 'E' : printf("Entered alphabet is vowel");
 	 	break;
 	 	
 	 	case 'I' : printf("Entered alphabet is vowel");
 	 	break;
 	 	
 	 	case 'O' : printf("Entered alphabet is vowel");
 	 	break;
 	 	
 	 	case 'U' : printf("Entered alphabet is vowel");
 	 	break;
 	 	
 	 	default : printf("Entered alphabet is constonant");
 	 	break;
	  }
}
else{
	printf("Enter character is not a alphabet");
}
	 getch();
 } 
