//Las bibliotecas a usar, stdio.h para imprimir valores, time.h y stdlib.h para generar numeros aleatorios
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//Constante de alumnos y progresos por semestre
#define alumnos 23
#define progreso 3
int PromedioProgreso(int x){
    int promedio=x/23;
    return promedio;
}
void CrearMatriz(){
    int i, j, sumaProgreso=0;
    int Semestre[progreso][alumnos];
    for(i=0;i<progreso;i++){
        for(j=0;j<alumnos;j++){
            Semestre[i][j]=rand()%11;
            printf("%d ", Semestre[i][j]);
            sumaProgreso=Semestre[i][j];
        }
        printf("\n");
        sumaProgreso=0;
    }
}
int main(){
    srand(time(NULL));
    int sumaProgreso=0;
    CrearMatriz();
    int TotalProgreso = PromedioProgreso(sumaProgreso);
    printf("El promedio del progreso es %d ", TotalProgreso);
    return 0;
}