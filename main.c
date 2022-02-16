#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int Randoms(){
    int lower=1;
    int upper=3;
    int count=1;
	int i, num;
	for (i = 0; i < count; i++) {
		num = (rand() % (upper - lower + 1)) + lower;
	}
	return num;
}

int main(){
    
    srand(time(0));
    int attempt=3;
    while (attempt>0){
        int a=0,b=0,c=0;
        int d,e,f, x, q;
        srand(time(0));
        for (int i=0; i<30; i++){
            x=Randoms();
            switch(x){
                case 1: printf("o");
                        a++;
                        break;
                    
                case 2: printf("*");
                        b++;
                        break;
                    
                case 3: printf("|");
                        c++;
                        break;
                    
            }
        
        }
    
        printf("\n");
        
        q=Randoms();
        switch(q){
            case 1: printf("How many 'o' are there: \n ");
                    scanf("%d", &d);
                    if (d==a){
                        printf("Hello Human! \n");
                        return 0;
                    }
                    else{
                        attempt=attempt-1;
                        if (attempt==0){
                            printf(" You have 0 attempts left, Not human! \n");
                            return 0;
                        }
                    
                        printf("Error, you have %d attempts left \n", attempt);
                        break;
                    }
        
            case 2: printf("How many '*' are there: \n ");
                    scanf("%d", &e);
                    if (e==b){
                        printf("Hello Human! \n");
                        return 0;
                    }
                    else{
                        attempt=attempt-1;
                        if (attempt==0){
                            printf(" You have 0 attempts left, Not human! \n ");
                            return 0;
                        }
                    
                        printf("Error, you have %d attempts left \n", attempt);
                        break;
                    }
        
            case 3: printf("How many '|' are there: \n ");
                    scanf("%d", &f);
                    if (f==c){
                        printf("Hello Human! \n ");
                        return 0;
                    }
                    else{
                        attempt=attempt-1;
                        if (attempt==0){
                            printf(" You have 0 attempts left, Not human! \n ");
                            return 0;
                        }
                    
                        printf("Error, you have %d attempts left \n", attempt);
                        break;
                    }
        }
        
    }
	return 0;
}
