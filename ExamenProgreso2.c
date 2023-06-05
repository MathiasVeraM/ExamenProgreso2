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
    int i, j, k, sumaProgreso=0, sumaEstudiante=0, promedioProgreso=0, promedioEstudiante=0;
    int Semestre[progreso][alumnos];
    int PromedioProgreso[3];
    for(i=0;i<progreso;i++){
        for(j=0;j<alumnos;j++){
            Semestre[i][j]=rand()%11;
            printf("%d ", Semestre[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<progreso;i++){
        for(j=0;j<alumnos;j++){
            sumaProgreso=sumaProgreso + Semestre[i][j];
            promedioProgreso = sumaProgreso/alumnos;
        }
        for(k=0;k<3;k++){
            PromedioProgreso[k]=promedioProgreso;
        }
    }
    for(k=0;k<3;k++){
        printf("\tEl promedio del progreso %d es %d\n", k+1, PromedioProgreso[k]);
        sumaProgreso = 0;
        promedioProgreso = 0;
    }
    
    return 0;
}