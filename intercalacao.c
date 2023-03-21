#include <stdio.h>

int main (){
    double notas_ES[] = {7.5, 8.0, 9.0};
    double notas_CC[] = {7.0,8.0, 9.0};
    int tam_ES, tam_CC = 3;

    int tam_TOTAL = tam_CC+tam_ES;
    double notas_TOTAL[tam_TOTAL];

    int i, j, k = 0;
    

    while(k < tam_TOTAL){
        if(notas_CC[j] >= notas_ES[i]){
            notas_TOTAL[k] = notas_ES[i];
            i++;
        }else{
            notas_TOTAL[k] = notas_CC[j];
            j++;
        }
        k++;
    }
    for(int k = 0; k < 6; k++){
        printf("Nota: %f\n", notas_TOTAL[k]);
    }
    
}