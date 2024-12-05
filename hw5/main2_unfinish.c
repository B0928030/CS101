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
        i = PI*100000 + 0.5;
    }
    printf("%.5f\n",PI);
    printf("%d",x-=2);
    return 0;
}
