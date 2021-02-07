#include <stdio.h>
#include <stdlib.h>

void merge(int arr[],int sorted[], int left, int mid,int right){
    int i, j, k, l;
    i = left;
    j = mid+1;
    k =left;
    while(i<=mid&&j<=right){
        if(arr[i]<=arr[j])
            sorted[k++] = arr[i++];
        else
            sorted[k++] = arr[j++];
    }
    if (i>mid){
        for(l = j; l<= right; l++)
            sorted[k++] = arr[l];
    }
    else{
        for(l = i;l<=mid;l++)
            sorted[k++] = arr[l];
    }
    for(l = left;l<=right;l++){
        arr[l] = sorted[l];
    }
}

void merge_sort(int arr[],int sorted[], int left, int right){
    int mid;
    if (left<right){
        mid = (left+right)/2;
        merge_sort(arr,sorted,left,mid);
        merge_sort(arr,sorted,mid+1,right);
        merge(arr,sorted,left,mid,right);
    }
}

int main(){
    int N;
    scanf("%d", &N);
    int nums[N];
    int sorted[1000000];
    for (int i = 0; i<N;i++){
        scanf("%d", &nums[i]);
    }
    merge_sort(nums,sorted,0, N-1);
    for (int i = 0; i<N;i++){
        printf("%d\n", nums[i]);   
    }
    return 0;
}