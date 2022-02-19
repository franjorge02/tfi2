#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <cmath>
#include <ctime>
#include <strings.h>
//modulo del recepcionista 

main(){
  int a;
do{
  printf("\nModulo del recepcionista");
  printf("\n========================");
  printf("\n1.- Iniciar sesion");
  printf("\n2.- Registrar cliente");
  printf("\n3.- Atenciones por profesional");
  printf("\n4.- Listado de Atenciones por Profesional y Fecha");
  printf("\n5.- Cerrar programa");
  printf("\n\n");
  printf("\n Ingrese una opcion: ") ;
  scanf("%d",&a);
  if(a>5){
	printf("\nIngresar una opcion valida");
  }
  else if (a<1){
	printf("\nIngresar una opcion valida");
  }
  printf("\n");
  system("pause");
  system("cls");

  switch (a){
		   case 1: /* Iniciar sesion */
		   break;
 
		   case 2:  /* Registrar cliente */
             break;

		   case 3: /* Atencion por profesional */
		   break;

		   case 4: /* Listado de Atenciones por profesional y fecha */
             break; 
  }
}
while(a!=5);
getch();
}

