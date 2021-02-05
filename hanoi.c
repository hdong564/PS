#include <stdio.h>

int hanoi(int n){
    int count;    
    //base case
    if (n == 1) return 1;
    //recursive case
    count = 2*hanoi(n-1)+1;
    return count;
}

int trace(int n, int direc){
    int STATE;
    while(1){
    if (direc == 12){STATE = 1;}
    if (direc == 13){STATE = 2;}
    if (direc == 23){STATE = 3;}
    if (direc == 21){STATE = 4;}
    if (direc == 31){STATE = 5;}
    if (direc == 32){STATE = 6;}
        switch(STATE){
            case 1:
            if(n == 1){
                printf("%s\n","1 2");
                return 0;
            } 
            else{
                trace( n-1, 13);
                printf("%s\n","1 2");
                trace( n-1,32);
                return 0;
            }
            break;

            case 2:
                if(n == 1){
                    printf("%s\n","1 3");
                    return 0;
                    }

                else{
                    trace( n-1, 12);
                    printf("%s\n","1 3");
                    trace( n-1,23);
                    return 0;
                }
                break;
            case 3:
                if(n == 1){
                    printf("%s\n","2 3");
                    return 0;
                    }


                else{
                    trace( n-1, 21);
                    printf("%s\n","2 3");
                    trace( n-1,13);
                    return 0;
                }
                break;
            case 4:
                if(n == 1){
                    printf("%s\n","2 1");
                    return 0;
                    }
                else {
                    trace( n-1, 23);
                    printf("%s\n","2 1");
                    trace( n-1,31);
                    return 0;
                }        
                break;
            case 5:
                if(n == 1){
                    printf("%s\n","3 1");
                    return 0;
                    }
                else {
                    trace( n-1, 32);
                    printf("%s\n","3 1");
                    trace( n-1,21);
                    return 0;
                }
                break;
            case 6:
                if(n == 1){
                    printf("%s\n","3 2");
                    return 0;}
                else {
                    trace( n-1, 31);
                    printf("%s\n","3 2");
                    trace( n-1, 12);
                    return 0;
                    }
                break;
        }
    }
    return 0;
}

int main(){
    int N;
    scanf("%d", &N);
    printf("%d\n", hanoi(N));
    trace(N, 13);
    return 0;
}