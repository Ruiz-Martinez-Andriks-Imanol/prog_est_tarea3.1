/* Autor: Andriks Imanol Ruiz M�rtinez, Realizado: 17/02/2022
Escuela: Universidad del Valle de Mexico Campus Villahermosa
Materia: Programaci�n Estructrada
Ciclo: 01/2022

Este es un programa de ciclos en Lenguaje C de la materia de Programaci�n Estructurada
Muestra el uso de:

    -Variables flotantes y enteras
    -printf para mostrar mensajes y variables
    -scanf    
	-El uso de include para las librer�as
    -Ciclos
    -Contador
    -Comentarios para la documentaci�n interna del programa
*/
#include<stdio.h>
int main() {
	//Declaraci�n de variables
	float suma=0;
	int i=1, numero;
	//Proceso
	printf("Introduce un numero: ");
	scanf("%d", &numero);
	//ciclo	
	while(i <= numero) {
		suma= suma + 1.0/i;
		i++;
	}
	//Salida
	printf("La suma es %f", suma);
	return 0;	
}
