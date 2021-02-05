#include <stdio.h>
#include <string.h>

int check_groupword(char *word){
    int len = strlen(word);
    enum DFA_STATE { 
        NEWCHAR,
        AGAINCHAR,
    };
    int STATE = NEWCHAR;
    int cross = 0;
    char temp;
    while(1){
    
        switch(STATE){
            case NEWCHAR:
                //printf("%s\n","im here !0");
                temp  = word[cross];
                
                int count_cross = 0;
                if(cross !=0){
                    for ( int i = 0;i<cross;i++){
                        if (word[i] == temp){count_cross++;}
                    }
                }
                //printf("%d\n", count_cross);
                if (count_cross != 0){return 0;}
                cross++;
                if (cross == len){return 1;}//check whether it is end
                
                if (word[cross] == temp){STATE = AGAINCHAR;}
                else{STATE = NEWCHAR;}
                break;
            case AGAINCHAR:
                temp = word[cross];
                cross++;
                if (cross == len){return 1;}//check whether it is end
                
                if (word[cross] == temp){STATE = AGAINCHAR;}
                else{STATE = NEWCHAR;}
                break;
        }
    }
    return 0;
}


int main(){
    int N;
    scanf("%d",&N);
    int count = 0;
    
    for (int i = 0; i<N;i++){
        char tmp[101];
        scanf("%s", tmp);
        for(int j = 0;j<strlen(tmp);j++){
            if((tmp[j]<97)||(tmp[j]>122)){
                printf("%s", "ERROR: incorrect input form");
                return 0;
            }
        }
        if (check_groupword(tmp)){count++;}
    }
    printf("%d", count);
    return 0;
}