#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
 int edad;
 char nombre [10]; 
 	main(){
 	
 	    printf("ingrese nombre\n");
 	    	gets(nombre);
 	
 		printf("ingrese edad\n");
 		scanf("%d",&edad);
 		if(edad>=18){
 			printf("%s es mayor de edad",nombre);
		 }else{
		 	printf("%s es menor de edad",nombre);
		 }
		 	
		 	
	 }
	 
