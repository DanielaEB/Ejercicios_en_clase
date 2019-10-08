/******************************************************************************
Los organizadores de un acto electoral solicitaron realizar un programa para 
manejar el conteo de votos. En la elección hay cinco candidatos, los cuales se 
representan con los valores comprendidos entre 1 y 5. El programa debe obtener 
el número de votos de cada candidato y el porcentaje que obtuvo respecto al 
total de los votantes. Se ingresa los votos  de manera desordenada, el final 
de ingreso de los votos se representa por un cero.
*******************************************************************************/
#include <stdio.h>
#include <math.h>
void main()
{
    int total,voto,voto1,voto2,voto3,voto4,voto5;
    float prom1,prom2,prom3,prom4,prom5;
    printf("Ingrese su voto: ");
    scanf ("%i",&voto);
    if (voto==1)
        voto1++;
    else if (voto==2)
        voto2++;
    else if (voto==3)
        voto3++;
    else if (voto==4)
        voto4++;
    else if (voto==5)
        voto5++;
    total=voto1+voto2+voto3+voto4+voto5;
    prom1=(voto1/total)*100;
    prom2=(voto2/total)*100;
    prom3=(voto3/total)*100;
    prom4=(voto4/total)*100;
    prom5=(voto5/total)*100;
    printf("Votos Candidato1 %d tiene un porcentaje %.2f", voto1,prom1);
    printf("Votos Candidato2 %d tiene un porcentaje %.2f", voto2,prom2);
    printf("Votos Candidato3 %d tiene un porcentaje %.2f", voto3,prom3);
    printf("Votos Candidato4 %d tiene un porcentaje %.2f", voto4,prom4);
    printf("Votos Candidato5 %d tiene un porcentaje %.2f", voto5,prom5);
}
