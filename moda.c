#include<stdio.h>//libreria e/s
int nA,i,j,cal[12],mayor,frecuencia[12];
float prom,proms;
main()
{
printf("Cuantos alumnos vas a introducir???\n");
scanf("%d\n",&nA);
for(i=1;i<=nA;i++)
{
printf("damle la calif:\n");
scanf("%d\n",&cal[i]);
prom=(prom+cal[i]);
}
frecuencia[j]=cal[i];
for (j=0;j<=10;j++)
{
if (frecuencia[j]> mayor)
mayor=frecuencia[i];
}
for (j=0;j<=10;j++)
{
if (mayor==frecuencia[j])
printf ("nLa moda es: %dn\n",j);
}

proms=prom/nA;
printf("el promedio es %.2fn\n",proms);
}
