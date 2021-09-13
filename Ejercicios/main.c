#include "stdio.h"
#include "stdint.h"

int i, a, b[]= {777,245,3,4,5,24,26,30}, tam, tam1;
double  c, d, resta=0,multip=0, divis=0, suma=0, suma1, resta1, mult1, divis1 ; 
int *pa, *pb;
double prueba [2], prueba1 [2];

int main(void)
{


/* OPERACIONES ARITMETICAS CON VARIABLES ENTERAS

printf("Ingrese un valor entero inicial para realizar las operaciones matematicas:");//
scanf("%lf", &c);
printf("Ingrese otro valor entero para realizar las operaciones matematicas: ");
scanf("%lf", &d);
suma=c+d;
resta=c-d;
multip=c*d;
divis=c/d;

printf("El resultado de la suma es: %f\r\n", suma);
printf("El resultado de la resta es: %f\r\n", resta);
printf("El resultado de la multiplicacion es: %f\r\n", multip);
printf("El resultado de la division es: %f\r\n", divis);



OPERACIONES ARITMETICAS CON VECTORES

tam1=sizeof(prueba)/sizeof(prueba[0]);
printf("Ingrese los %d valores del vector prueba \n ", tam1);
for ( i = 0; i < tam1; i++)
{
 printf("Valor del vector prueba en la posicion %i: \n", i+1);
 scanf("%lf",  &*(prueba+i));   
}
printf("Ingrese los %d valores del vector prueba1 \n ", tam1);

for ( i = 0; i < tam1; i++)
{
 printf("Valor del vector prueba en la posicion %i: \n", i+1);
 scanf("%lf",  &*(prueba1+i));
}

for ( i = 0; i < tam1; i++)
{
 printf("El valor del vector prueba en la posicion %d  es: %lf\n ",i+1,*(prueba+i));
}

printf("\n");

for ( i = 0; i < tam1; i++)
{
printf("El valor del vector prueba1 en la posicion %d  es: %lf\n ",i+1,*(prueba1+i));
}

for ( i=0; i<tam1; i++)
{

suma1=prueba[i]+prueba1[i];
resta1=prueba[i]-prueba1[i];
mult1=prueba[i]*prueba1[i];
divis1=prueba[i]/prueba1[i];

printf("\r\n");
printf("El valor de la suma entre vectores es: %f\r\n", suma1);
printf("El valor de la resta entre vectores es: %f\r\n", resta1);
printf("El valor de la multiplicacion entre vectores es: %f\r\n", mult1);
printf("El valor de la division entre vectores es: %f\r\n", divis1);

}
*/

/*CAMBIO DE VALORES DE UNA VARIABLE CON PUNTEROS*/

printf("Ingrese un valor entero para la variable a \n");
scanf("%i", &a);
printf("\n");
printf("Hola a todos");
printf("La direccion de memoria de la variable a es %p \n", &a);
pa=&a;
printf("La direccion de memoria del puntero pa es:%p\nEl valor del puntero pa es: %i \n", pa, *pa);
printf("\n");
printf("Ingrese un nuevo valor para el puntero pa \n");
scanf("%i",&*pa);
printf("El nuevo valor del puntero pa es: %i\n\n", *pa);


/*CAMBIO DE LOS VALORES DE UN VECTOR CON PUNTEROS*/

int *pb=b;
tam=sizeof(b)/sizeof(b[0]);
for ( i = 0; i < tam; i++)
{
   printf("El valor del vector en la posicion %d inicialmente es: %i\n ",i,*(pb+i));
}
printf("\n");
for (i=0; i < 1 ; i++)
{
 printf("Ingrese el nuevo valor del vector en la posicion %d \n ", i);
 scanf("%i",  &*(pb+i));
}
printf("\n");
for ( i = 0; i < tam; i++)
{
   printf("El valor del vector en la posicion %d finalmente es: %i\n ",i,*(pb+i));
}
printf("\n");


return 0;


}