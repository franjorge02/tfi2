#include<ctime>
#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
#include<conio.h>

int opcion(int opc){
	if(opc>=1 && opc<=4){
		opc=opc;
}
	else{
		printf("\nIngrese una opcion valida: ");
		scanf("%d",&opc);
	}
	switch(opc){
		case 1:
			printf("\nIniciar sesion: ");
			break;
		case 2:
			printf("\nVisualizar Turnos: ");
			break;
		case 3:
			printf("\nRegistar Evolucion: ");
			break;
		case 4:
			printf("\nHasta luego <3.");
			break;
	}
	return opc;
}

main(){
	int opc;
	printf("\nModulo Espacios ");
	printf("\n----------------");
	printf("\n1.- Iniciar Sesion.");
	printf("\n2.- Visualizar Lista de Espera de Turnos (informe).");
	printf("\n3.- Registrar Evolucion del Tratamiento.\n");
	printf("\n4.- Cerrar la aplicación.\n");
	printf("\nIngrese una opción: ");
	scanf("%d",&opc);
	opcion(opc);
}
