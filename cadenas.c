#include <stdio.h>
#include <string.h> 
#include <stdlib.h>   // para system()


//Funciones
int longitud_cadena(char string[50]);
char concatenacion(char string1[50], char string2[50]);
char potencia(char string[50]);
char calculo_longitud(char string[50]);
char prefijos(char string[50]);
char sufijos(char string[50]);
char subcadenas(char string[50]);
char subsecuencias(char string[50]);
char mostrar_cadenas(char string[50]);

int main(){
    system("cls"); // limpiar pantalla
    char string1[50];
    char string2[50];

    char chadena[50][50];
    
    int opcion, eleccion_cadena;
    char* cadenas[50] = {string1, string2};

    printf("PRACTICA 1 \n");

    printf("Introduce la cadena 1: ");
    scanf("%s", chadena[0]);
    printf("Introduce la cadena 2: ");
    scanf("%s", &string2);
    system("cls");

    while(1){
        int continuar=0;

        printf("\n--------MENU------------");      
        printf("\n(1) Concatenacion");
        printf("\n(2) Potencia");
        printf("\n(3) Calculo longitud");
        printf("\n(4) Prefijos");
        printf("\n(5) Sufijos");
        printf("\n(6) Subcadenas");
        printf("\n(7) Subsecuencias");
        printf("\n(8) Ver cadenas");
        printf("\n(9) Salir");

        printf("\nSelecciona una opcion:");
        scanf("%d", &opcion);
        system("cls");
        
        switch (opcion){
            
            // case 1:
                do {
                    printf("(3) Calculo longitud");
                    printf("\nElige la cadena: ");
                    scanf("%d", &eleccion_cadena);
                    printf("\n\nDesea calcular otra cadena? (1-SI/0-NO): ");
                    scanf("%d", &continuar);

                } while(continuar == 1);

                system("cls");
                break;
            
            // case 2:
            
            case 3:
                do {
                    printf("(3) Calculo longitud");
                    printf("\nElige la cadena: ");
                    scanf("%d", &eleccion_cadena);

                    printf("La cadena '%s' tiene longitud de: %d",chadena[eleccion_cadena-1], longitud_cadena(chadena[eleccion_cadena-1]));

                    printf("\n\nDesea calcular otra cadena? (1-SI/0-NO): ");
                    scanf("%d", &continuar);

                } while(continuar == 1);

                system("cls");
                break;
            
            
            
            // case 4:
            
            // case 5:
            
            // case 6:
            
            // case 7:
            
            // case 8:
            
            // case 9:
        }
    }
    
    
    return 0;
}

int longitud_cadena(char string[50]){

    int tamano=0;
    for(int i=0; string[i]!='\0'; i++)
    {
        tamano++;
    }
    return tamano;    
}