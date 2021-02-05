#include <stdio.h>

int main(){

    int C;
    scanf("%d", &C);
    for (int i = 0;i <C; i ++){
        int x[1000];
        int  n;
        scanf("%d",&n) ;
        x[0] = n;
        float sum = 0; 
        for(int j =1 ;j<=n;j++){
            scanf("%d", &x[j]);
            sum = sum + x[j];
        }
        float avg = sum/n;
        
        float count = 0;
        for(int j =1 ;j<=n;j++){
            if (x[j]>avg){
                count++;
            }
        }
        printf("%.3f", count/n*100);
        printf("%%\n");
        
    }
    return 0 ;
}