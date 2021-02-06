#include <stdio.h>
#include <stdlib.h>

const int n = sizeof(int);

void swap(int *arr ,int i, int j){
    int num1 = arr[i];
    int num2 = arr[j];
    arr[j] = num1;
    arr[i] = num2;
}
int partition(int *arr, int left, int right){
    int pivot, temp;
    int low, high;
    low = left;
    high = right+1;
    pivot = arr[left];
    do{
        do{
            low++;
        }
        while(low<= high&&arr[low]<pivot);
        do{
            high--;
        }while (high>=left && arr[high]>pivot);
        if (low<high){
            swap(arr, low, high);
        }
    }while (low<high);

    swap(arr,left, high);
    return high;
}


void sort(int *arr, int left, int right){
    if (left<right){
        int q =partition(arr, left, right);
        sort(arr, left, q-1);
        sort(arr, q+1,right);
    }
}


int main(){
    int N;
    scanf("%d", &N);
    int *nums = (int *)malloc(N*sizeof(int));

    for (int i = 0; i<N;i++){
        scanf("%d", &nums[i]);
    }
    sort(nums,0, N-1);
    for (int i = 0; i<N;i++){
        printf("%d\n", nums[i]);   
    }
    free(nums);
    
    return 0;
}