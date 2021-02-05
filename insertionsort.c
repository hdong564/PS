#include <stdio.h>
#include <stdlib.h>

const int n = sizeof(int);

void swap(int *arr ,int i, int j){
    int num1 = arr[i];
    int num2 = arr[j];
    arr[j] = num1;
    arr[i] = num2;
}



void insertion_sort(int *arr, int N){
    int key;
    int cross;
    for(key = 1;key<N;key++){
        for(int i = 1;i<key+1;i++){
            cross = key;
            if(arr[cross]<arr[cross-i]){
                swap(arr, cross,cross-i);
                cross--;
                if(cross == 0) return;
            }
            else{return;}
            
        }
    }
}


int main(){
    int N;
    scanf("%d", &N);
    int *nums = (int *)malloc(N*sizeof(int));

    for (int i = 0; i<N;i++){
        scanf("%d", &nums[i]);
    }
    insertion_sort(nums, N);
    for (int i = 0; i<N;i++){
        printf("%d\n", nums[i]);   
    }
    free(nums);
    return 0;
}