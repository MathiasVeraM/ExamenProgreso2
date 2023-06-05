//Las bibliotecas a usar, stdio.h para imprimir valores, time.h y stdlib.h para generar numeros aleatorios
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//Constante de alumnos y progresos por semestre
#define alumnos 23
#define progreso 3
void CrearMatriz(){
    int i, j;
    int Semestre[progreso][alumnos];
    for(i=0;i<progreso;i++){
        for(j=0;j<alumnos;j++){
            Semestre[i][j]=rand()%11;
            printf("%d ", Semestre[i][j]);
        }
        printf("\n");
    }
}
int main(){
    srand(time(NULL));
    CrearMatriz();

    return 0;
}