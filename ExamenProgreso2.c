//Las bibliotecas a usar, stdio.h para imprimir valores, time.h y stdlib.h para generar numeros aleatorios
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//Constante de alumnos y progresos por semestre
#define alumnos 23
#define progreso 3
//El uso de funciones no me sirviò, asì que a usar main
int main(){
    srand(time(NULL));
    int i, j, sumaProgreso=0, sumaEstudiante=0, promedioProgreso=0, promedioEstudiante=0;
    int Semestre[progreso][alumnos];
    for(i=0;i<progreso;i++){
        for(j=0;j<alumnos;j++){
            Semestre[i][j]=rand()%11;
            sumaProgreso=sumaProgreso + Semestre[i][j];
            printf("%d ", Semestre[i][j]);
        }
        printf("\n");
        promedioProgreso = sumaProgreso/alumnos;
        printf("\tEl promedio del progreso %d es %d\n", i+1, promedioProgreso);
        sumaProgreso = 0;
        promedioProgreso = 0;
    }
    return 0;
}