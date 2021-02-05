#include <stdio.h>

int main(){
    int N, X;
    scanf("%d %d", &N,&X);
    int A[10000];
    for (int i = 0; i<N;i++){
        scanf("%d",&A[i]);
    }
    for (int j = 0; j<N;j++){
        if (A[j] < X){
            printf("%d ", A[j]);
        }
    }


    return 0;

}