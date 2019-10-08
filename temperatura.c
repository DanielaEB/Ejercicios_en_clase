#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
 float centigrados,fahrenheit;
 int tdato;
void main()
{
    printf("ingrese 1 para centigrados y 2 para fahrenheit");
    scanf("%d",&tdato);
    if(tdato ==1){
   printf("ingrese grados centigrados");
   scanf("%f",&centigrados);
   fahrenheit=((centigrados*9)/5)+32;
   printf("los grados centigrados en fahrenheit = %f",fahrenheit);
   }if(tdato ==2){
   printf("ingrese grados fahrenheit");
   scanf("%f",&fahrenheit);
   centigrados=((fahrenheit-32)*5)/9;
   printf("los grados fahrenheit en centigrados = %f",centigrados);
   }
}
