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
    int mayor=0, alumnoPromedioMayor=0;
    int Semestre[progreso][alumnos];
    int PromedioProgreso[3];
    for(i=0;i<progreso;i++){
        for(j=0;j<alumnos;j++){
            Semestre[i][j]=rand()%11;
            printf("%d ", Semestre[i][j]);
            sumaProgreso=sumaProgreso + Semestre[i][j];
            promedioProgreso = sumaProgreso/alumnos;
        }
        printf("\n");
        printf("\tEl promedio del progreso %d es %d\n", i+1,promedioProgreso);
        sumaProgreso = 0;
        promedioProgreso = 0;
    }
    for(i=0;i<alumnos;i++){
        j=0;
        sumaEstudiante = sumaEstudiante + Semestre[i][j];
        promedioEstudiante = sumaEstudiante/progreso;
        if(promedioEstudiante>mayor){
            mayor=promedioEstudiante;
            alumnoPromedioMayor=i+1;
        }
        j++;
    }
    printf("El estudiante %d es el que tiene mayor promedio, un promedio de %d en el semestre ", alumnoPromedioMayor, promedioEstudiante);
    printf("El promedio del alumno %d es %d\n", i+1, promedioEstudiante);
    sumaEstudiante = 0;
    promedioEstudiante = 0; 
    return 0;
}