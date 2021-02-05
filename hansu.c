

#include <stdio.h>


int check_hansu(n){
    int digit0 = n%10;
    int digit1 = n/10;
    int digit2 = n/100;
    int digit3 = n/1000;
    int num_digit;
    int check;
    
    if (n == 1000){
        check = 0;
        return check;
    }
    
    if (digit1 == 0){
        num_digit = 1;
    }
    else{
        if (digit2 == 0){
            num_digit = 2;
        }
        else{
            num_digit = 3;
        }
    }

    if (num_digit == 3){
        int diff1 = (n%100)/10 - digit0;
        int diff2 = digit2 - (n%100)/10;
        if (diff1 == diff2){check = 1;}
        else {check =0;}
    }
    else {check = 1;}
    return check;
}

int count_hansu(N){
    int count;
    for (int i = 1;i<N+1;i++){
        if(check_hansu(i)){count ++;} 
    }
    return count;
}




int main(){

    int N;
    scanf("%d", &N);
    printf("%d", count_hansu(N));
    return 0;
}