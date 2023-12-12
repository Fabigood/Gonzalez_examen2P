#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {



    int opcion;
    do {
        printf("\n Menu :\n");
        printf("1.. Ingresos y egresos por cada insumo y mes.\n");
        printf("2.Total de ingresos y egresos en todo el año por cada insumo.\n");
        printf("0. Salir.\n");
        printf("Seleccione opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1: //menu para pedir difenretes emnsuales y anuales 
                                                       //mensuales
                break;
            case 2:
                
                break;  //anuales 
            case 0:
                printf("Exit  del programa.\n");//salir programa
                break;
            default:
                printf("Opción no válida. Intente de nuevo.\n");
        }
    } while (opcion != 0);

    return 0;
}
