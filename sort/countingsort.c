#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10000000
#define MAX_NUM 10000
int main(){
    
    int N;
    int input[N+1], output[N+1],
        count[MAX_NUM+1];
    scanf("%d",&N);
    
    //initialize count array
    for (int i = 0;i<=N;i++){
        count[i] = 0;
    }

    //make count array
    for (int i = 1;i<=N;i++){
        scanf("%d", &input[i]);
        count[input[i]]++;
    }
    // 
    for (int i = 1;i<=N;i++){
        //countsum[i] = countsum[i-1]+count[i];
        count[i] = count[i-1]+count[i];
    }
    for(int i = N;i>=1;i--){
        output[count[input[i]]] = input[i];
        count[input[i]]--;
    }
    for(int i = 1;i<=N;i++){
        printf("%d", output[i]);
    }

    return 0;
}
//메모리초과 해결할 것