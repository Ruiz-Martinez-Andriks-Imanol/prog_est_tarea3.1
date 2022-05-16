/* Autor: Andriks Imanol Ruiz Mártinez, Realizado: 17/02/2022
Escuela: Universidad del Valle de Mexico Campus Villahermosa
Materia: Programación Estructurada
Ciclo: 01/2022

Este es un programa de ciclos en Lenguaje C de la materia de Programación Estructurada
Muestra el uso de:

    -Variables flotantes y enteras
    -printf para mostrar mensajes y variables
    -scanf    
	-El uso de include para las librerías
    -Ciclos
    -Contador
    -Comentarios para la documentación interna del programa
*/
#include<stdio.h>
int main() {
	//Declaración de variables
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
