#include <stdio.h>
#include <math.h>

long long count_min_path(long long x, long y){
    long long count = 0;
    long long k = 1;
    long long start = 1;
    long long arrive = y - x -1;
    //base case
    if (start == arrive+1){
        count = 1;
        goto EXIT;
    }
    //updating parameter tmp1, tmp2
    long long tmp1 = 1;
    long long tmp2 = 1;
    count++;count++;
    while (1){
        if ((arrive>=tmp1)&(arrive<=tmp2)){
            goto EXIT;
        }
        else{
            tmp1 = tmp2+1;
            tmp2 = tmp1 + k; 
            k++;
            count++;
            //printf("%lld %lld\tcount: %lld\n",tmp1, tmp2, count);


        }
    }
    EXIT:
        return count;

}

int  main(){    
    long long T;
    scanf("%lld",&T);
    long long* ans;
    for (long long i = 0;i<T;i++){
        long long x,y;
        scanf("%lld %lld", &x, &y);
        if (x>= y){return 0;}
        if (y>= pow(2,31)){return 0;}
        long long m = count_min_path(x,y);
        printf("%lld\n", m);
    }
    return 0;
}