#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp; 
}


int count_points(int x1, int y1, int r1, int x2, int y2, int r2){
    int counts;
    int dx = x2-x1;
    int dy = y2-y1;
    int dist = dx*dx + dy*dy; 
    
    if(r1> r2){swap(r1,r2);}
    int add = r1+r2;
    int minus = r2- r1;
    add = add*add;
    minus = minus*minus;
    if (add > dist && dist > minus ){
            //printf("r1+ r2: %d, dist: %d",add,dist_sqr);
            counts = 2;
    }
    else if (dist == add || (dist == minus && dist!= 0)){
        counts = 1;
        //printf("r1+ r2: %d, dist: %d",add,dist_sqr);
    }
    else if (dist<minus || dist >add){
        counts = 0;
        //printf("r1+ r2: %d, dist: %d",add,dist_sqr);
    }
    else if (dist == 0){
        if (r1 == r2){
            counts = -1;
        }
        else counts = 0;
    }
        //printf("r1+ r2: %d, di./turst: %d",add,dist_sqr);
    return counts;
}

int  main(){    
    int T;
    scanf("%d",&T);
    
    for (int i = 0;i<T;i++){
        int x1,y1,r1;
        int x2,y2,r2;
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1 ,&x2, &y2, &r2 );
        int m = count_points(x1, y1, r1, x2, y2, r2);
        printf("%d\n", m);
    }
    return 0;
}