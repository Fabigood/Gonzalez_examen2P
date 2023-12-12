#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define meses  12 
#define num_insumo 30 //definicion de num de insumos y meses


void ingresarDatosRandom(int ingresos[][meses], int egresos[][meses]) {
    for (int i = 0; i < num_insumo; ++i) {
        for (int j = 0; j < meses; ++j) {
            ingresos[i][j] = generarNumRan();
            egresos[i][j] = generarNumRan(); //poner valor a cada una de estas con radom
        }
    }
}
int generarNumRan() {
    return rand() % 100 + 1;
    }

void printfdetalle(int ingresos[][meses], int egresos[][meses]) {
    printf("Detalle de ingresos y egresos por cada insumo y mes:\n");
    for (int i = 0; i < num_insumo; ++i) {
        printf("Insumo %d:\n", i + 1); //mensual de ingresos e egresos
        for (int j = 0; j < meses; ++j) {
            printf("     Mes %d:   Ingresos: %d,    Egresos: %d\n", j + 1, ingresos[i][j], egresos[i][j]);
        }
    }
}

void Totalano(int ingresos[][meses], int egresos[][meses]) {
    printf("\nTotales de ingresos y egresos en todo el año por cada insumo:\n");
    for (int i = 0; i < num_insumo; ++i) {
        int totalIngresos = 0;
        int totalEgresos = 0; //funcion para tener los valores totaltes de ingreso y egresos
        for (int j = 0; j < meses; ++j) {
            totalIngresos += ingresos[i][j];
            totalEgresos += egresos[i][j];
        }
        printf("    Insumo %d:   Ingresos: %d,      Egresos: %d\n", i + 1, totalIngresos, totalEgresos);
    }
}





int main() { //num randomm
srand(time(NULL)); 

    int ingresos[num_insumo][meses];
    int egresos[num_insumo][meses];

    ingresarDatosRandom(ingresos, egresos);

    int opcion;
    do {
        printf("\n Menu :\n");
        printf("1.. Ingresos y egresos por cada insumo y mes.\n");
        printf("2.Total de ingresos y egresos en todo el ano por cada insumo.\n");
        printf("0. Salir.\n");
        printf("Seleccione opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1: //menu para pedir difenretes emnsuales y anuales 
                 printfdetalle(ingresos, egresos);                                  //mensuales
                break;
            case 2:
                Totalano(ingresos, egresos);
                break;  //anuales 
            case 0:
                printf("Exit del programa.\n");//salir programa
                break;
            default:
                printf("Opción no válida. Intente de nuevo.\n");
        }
    } while (opcion != 0);

    return 0;
}
