#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define anchopant2 75
#define anchopant 60
#define anchopant4 70
#define anchopant3 50

void evaluacion(int ej){
char boole;
switch(ej){
case 1:
    printf("--------------------------------------------------------------------------\n\n");
    printf("Escriba V o F de respuesta\n");
    scanf(" %c",&boole);
    if((boole=='V')||(boole=='v')){
        printf("Incorrecto, se hace invalido cuando se tiene un valor de 1\n\n\n");
    }else if((boole=='F')||(boole=='f')){
        printf("Correcto\n\n\n");
    }else{
        printf("Respuesta invalida\n\n\n");
    }
  printf("--------------------------------------------------------------------------\n\n");
    printf("\n\n\n");
  system("PAUSE");
  system("CLS");
    break;

case 2:
    printf("--------------------------------------------------------------------------\n\n");
    printf("Escriba V o F de respuesta\n");
    scanf(" %c",&boole);
    if((boole=='V')||(boole=='v')){
        printf("Correcto\n\n\n");
    }else if((boole=='F')||(boole=='f')){
        printf("Incorrecto, el trinomio tiene raices que igualan la ecuacion a 0\n\n\n");
    }else{
        printf("Respuesta invalida\n\n\n");
    }
  printf("--------------------------------------------------------------------------\n\n");
    printf("\n\n\n");
  system("PAUSE");
  system("CLS");
    break;

    case 3:
    printf("--------------------------------------------------------------------------\n\n");
    printf("Escriba V o F de respuesta\n");
    scanf(" %c",&boole);
    if((boole=='V')||(boole=='v')){
        printf("Correcto\n\n\n");
    }else if((boole=='F')||(boole=='f')){
        printf("Incorrecto, se cumple cuando se usa el valor de 5\n\n\n");
    }else{
        printf("Respuesta invalida\n\n\n");
    }
  printf("--------------------------------------------------------------------------\n\n");
    printf("\n\n\n");
  system("PAUSE");
  system("CLS");
    break;

    case 4:
    printf("--------------------------------------------------------------------------\n\n");
    printf("Escriba V o F de respuesta\n");
    scanf(" %c",&boole);
    if((boole=='V')||(boole=='v')){
        printf("Incorrecto, los valores 9,14,y 20 no son primos\n\n\n");
    }else if((boole=='F')||(boole=='f')){
        printf("Correcto\n\n\n");
    }else{
        printf("Respuesta invalida\n\n\n");
    }
  printf("--------------------------------------------------------------------------\n\n");
    printf("\n\n\n");
  system("PAUSE");
  system("CLS");
    break;

    case 5:
    printf("--------------------------------------------------------------------------\n\n");
    printf("Escriba V o F de respuesta\n");
    scanf(" %c",&boole);
    if((boole=='V')||(boole=='v')){
        printf("Incorrecto, no hay valor que cumpla\n\n\n");
    }else if((boole=='F')||(boole=='f')){
        printf("Correcto\n\n\n");
    }else{
        printf("Respuesta invalida\n\n\n");
    }
  printf("--------------------------------------------------------------------------\n\n");
    printf("\n\n\n");
  system("PAUSE");
  system("CLS");
    break;

}
}


int main(int argc, char const *argv[])
{
    int o,e,xd, xd2;

    do{
    system("COLOR 4b");
    printf("\n\n");
    printf("%*s\n", anchopant4,"     LOGICA DE PRIMER ORDEN");
    printf("%*s\n", anchopant,"Y ");
    printf("%*s\n", anchopant4,"    CUANTIFICADORES   ");
    printf("\n\n");
    printf("%*s\n", anchopant,"MENU");
    printf("\n1. Teoria\n2. Ejemplos\n3. Ejercicios\n4. Salir\n Opcion: ");
    scanf("%i",&o);
    printf("%i",o);
    system("CLS");

    switch(o){

    case 1:
        printf("\n\n\n");
     printf(" La Logica de Predicados o Logica de Primer Orden (POL o FOL) es una extension de Logica Proposicional.\n Las equivalencias y reglas de inferencia vistas en la logica proposicional siguen siendo validas en la logica de \n predicados.  La diferencia entre la logica proposicional y la logica de predicados. El concepto de \n predicado y el de cuantificador.\n");
    printf("Un predicado es una sentencia declarativa que contiene un numero definido de variables y que se vuelve en una \n proposicion cuando las variables son sustituidas por valores. El dominio de un predicado es el conjunto de todos los \n valores que pueden ser sustituidos en las variables.\n \n");
    printf("Cuantificador Universal: Sea Q(x) un predicado y D el dominio de Q. Una afirmacion universal es una declaracion, y es \n definida a ser verdadera si y solo si Q(x) es verdadera para todo elemento x que esta en el dominio D. La afirmacion es falsa si y solo si Q(x) es falsa al menos para un elemento x del dominio \n \n");
    printf("Cuantificador Existencial: Sea Q(x) un predicado con dominio D. Una afirmacion existencial es una declaracion, y es \n definida a ser verdadera si y solo si existe en el dominio D al menos un valor de x para el cual Q(x) es verdadera.  A este valor lo referiremos a un ejemplo para la afirmacion existencial. La afirmacion sera falsa si para todo x en el \n dominio Q(x) es falsa.\n");
printf("\n\n\n");
system("PAUSE");
system("CLS");
    break;

    case 2:
        do{

        system("color 5f");
        printf("%*s\n", anchopant,"Selecciona de que tema quieres ver ejemplos ");
        printf("\n\n  1. Cuantificador Universal (\\-/x) \n  2. Cuantificador Existencial (Ex) \n  3. Salir \n Opcion: ");
        scanf("%i",&xd);
        system("CLS");
        switch(xd){
        case 1:
            system("color 5a");
            printf("\n\n");
             printf("%*s\n", anchopant2,"Ejemplo de Cuantificador Universal");
             printf("\n\n");
             printf("Para conocer el valor de verdad de un Cuantificador debemos de asignarle valores al rango que estemos evaluando. \n En este ejemplo nuestro rango sera R={3,4,5} y tendremos que evaluar el valor de verdad es esta expresion:");
            printf("\n\n                                               \\-/x,%cR,x%c > 2X \n\n",156,253);
            printf("Para poder conocer el valor debemos remplazar TODOS los valores del rango en ''x'' y evaluar los resultados obtenidos.\n");
            printf("%*s\n", anchopant,"Y nos quedan los valores de la siguiente manera:");
            printf("%*s\n", anchopant,"   9 > 6");
            printf("%*s\n", anchopant,"  16 > 8");
            printf("%*s\n", anchopant,"  25 > 10");
            printf("\nEn TODOS los casos las expresiones son verdaderas, por lo tanto podemos decir que el enunciado es VERDADERO\n");printf("\n\n");
            xd2=xd2+1;
            system("PAUSE");
            system("CLS");
        break;
        case 2:
            system("color 5b");
            printf("\n\n");
             printf("%*s\n", anchopant2,"Ejemplo de Cuantificador Existencial");
             printf("\n\n");
             printf("Para conocer el valor de verdad de un Cuantificador debemos de asignarle valores al rango que estemos evaluando. \n En este ejemplo nuestro rango sera R={3,4,5} y tendremos que evaluar el valor de verdad es esta expresion:");
            printf("\n\n                                                  Ex,%cR,x%c < 2X+4 \n\n",156,253);
            printf("Para poder conocer el valor debemos remplazar TODOS los valores del rango en ''x'' y evaluar los resultados obtenidos.\n");
            printf("%*s\n", anchopant3,"Y nos quedan los valores de la siguiente manera:");
            printf("%*s\n", anchopant,"   9 < 10");
            printf("%*s\n", anchopant,"  16 < 12");
            printf("%*s\n", anchopant,"  25 < 14");
            printf("\nEn aste caso solo un valor de 'x' fue verdadero, sin embargo, como es un cuantificador EXISTENCIAL, con que al menos\n UNO sea verdadero, el enunciado sera VERDADERO\n");
            xd2=xd2+1;
            printf("\n\n");
            system("PAUSE");
            system("CLS");
        break;
        case 3:
            xd=3;
            system("CLS");

        }

        }while(xd!=3);


    break;

    case 3:
        system("COLOR 1f");
        do{
    printf("\nOprima 0 si quiere volver al menu principal\nIntroduce el numero de un ejercicio ( \\x/ Cuantificador Universal, E Cuantificador Existencial):\n\nEvaluar Verdadero o Falso\n     1. \\-/x,%cR x<(x^2)\n     2. Ex,%cR, x^2 + 6x + 9 = 0\n     3. Ex que pertenece a Dominio(1,2,3,4,5), (x-1)>3\n",156,156);
    printf("     4. \\-/x que pertenece a Dominio(2,5,9,14,20), x es primo\n     5. Ex que pertenece a dominio(1,3,5,7,9,11,13),  (x+3)<(x^2)\n\n");
    scanf("%i",&e);
    evaluacion(e);
        }while(e!=0);
  printf("--------------------------------------------------------------------------\n\n");

  system("CLS");
        break;
    }
    }while(o!=4);
    system("color 1e");
    printf("\n\n");
    printf("\n");
    printf("  Programa creado por: THE ZERO ONE'S \n      ALBERTO CASTA%cEDA - A01250647\n      JESUS MORALES - A01703455\n      SANTIAGO CASTELLANOS - A01701302",165);
    printf("\n\n");
            system("PAUSE");
            system("CLS");
    printf("\n\n\n\n\n\n\n\n\n\n\n");
    printf("%*s\n", anchopant2,"GRACIAS POR USAR NUESTRO PROGRAMA :D");

   return 0;
}
