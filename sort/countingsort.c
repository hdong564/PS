#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10000
#define MAX_NUM 1000
int main(){
    
    int N;
    int input[MAX_SIZE+1], output[MAX_SIZE+1],
        count[MAX_NUM+1], countsum[MAX_NUM+1];
    scanf("%d",&N);
    for (int i = 0;i<=N;i++){
        count[i] = 0;
    }
    for (int i = 1;i<=N;i++){
        scanf("%d", &input[i]);
        count[input[i]]++;
    }
    countsum[0] = count[0];
    for (int i = 1;i<=MAX_NUM;i++){
        countsum[i] = countsum[i-1]+count[i];
    }
    for(int i = N;i>=1;i--){
        output[countsum[input[i]]] = input[i];
        countsum[input[i]]--;
    }
    for(int i = 1;i<=N;i++){
        printf("%d", output[i]);
    }

    return 0;
}
//메모리초과 해결할 것