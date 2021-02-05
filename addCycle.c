#include <stdio.h>
int main(){

    int N;
    scanf("%d", &N);
    if (N< 10){N = N*10;}
    int oNum = N;
    int cycle = 0;
    int ans = 0;
    
    while(ans == 0){
        
        int digit10 = N/10;
        
        
        int digit1 = N%10;
        int new_N = digit1+digit10;
        N = digit1*10 + (new_N)%10;
        cycle++;
        if (N == oNum){ 
            ans = 1;
        }
    } 
    printf("%d" ,cycle);
    return 0;
}

