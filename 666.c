#include <stdio.h>
    
int digit_num(int n){
    int num = n;
    int count = 0;
    while(num != 0){
        num = num/10;
        ++count;
    }
    return count;
} 

int check_666(int n){
    int check = 0;
    int digit = digit_num(n);
    int arr[1000];
    int temp = 0;
    while(n!=0){
        arr[temp] = n%10;
        n = n/10;
        temp++;
    }
    for(int i = 0; i < digit;i++){
        if(i <digit-2){
            if(arr[i]==6){
                if (arr[i+1] == 6){
                    if (arr[i+2] == 6){
                        return 1;
                    }
                }
                else continue;
            }
            else continue;
        }
        else continue;
    }
    return 0;
    
}

int main(){
    int N;
    scanf("%d", &N);
    for(int i = 1;i<9999999999;i++){
        if(check_666(i) == 1){
            N--;
        }
        if(N == 0){
            printf("%d", i); return 0 ;
        }
    }
    return 0;
}

