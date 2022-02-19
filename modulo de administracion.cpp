    #include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <cmath>
#include <ctime>
#include <strings.h>
/*modulo del administracion:
? La gerencia del centro estético es la encargada de realizar la generación (rergistración) de los
nuevos profesionales que trabajan en el establecimiento, así como también de los empleados
recepcionistas que realizan la registración de los turnos y clientes.
? Es el área encargada de visualizar las atenciones realizadas por los profesionales según el mes
en curso, en este punto se debe obtener un listado u informe que indique por profesional
cuantas atenciones realizo en el mes actual.
? Para incentivar a los Profesionales, la gerencia otorga un bono mensual al que haya
registrado la mayor cantidad de turnos en ese periodo, por lo tanto, una necesidad del
sistema, es indicar cuál es el profesional que debe recibir el bon */


main(){
  int a;
do{
  printf("\nModulo del Administracion");
  printf("\n========================");
  printf("\n1.- Registrar un profesional");
  printf("\n2.- registrar usuario recepcionista");
  printf("\n3.- Atenciones por profesional");
  printf("\n4.- Ranking de Profesionales por atenciones");
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
		   case 1: /* Registrar un profesional */
		   break;
 
		   case 2:  /* Registrar un usuario recepcionista */
             break;

		   case 3: /* Atenciones por profesional */
		   break;

		   case 4: /* Ranking de profesionales por atenciones */
             break; 
  }
}
while(a!=5);
getch();
}
