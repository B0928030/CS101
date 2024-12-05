#include <stdio.h> 
int main() { 
    double PI = 0;
    int x = 1;
    int i = 0;
    while(i !=  314159){
        double tmp = x;
        if((x/2)%2 == 0){
            PI = PI + 4/tmp;
        }
        else{
            PI = PI - 4/tmp;
            
        }
        x+=2;
        i = PI*100000;
    }
    printf("%d\n",i);
    printf("%.6f\n",PI);
    i = PI*100000;
    printf("%d\n",i);
    printf("%d",x);
    return 0;
}
