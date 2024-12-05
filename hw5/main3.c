#include <stdio.h>

int main()
{
    for(int i = 11; i < 100; i++){
        if(i%10 == 0){
            printf("\n");
        }
        else{
            printf("%d*%d=%d\t",i/10,i%10,(i/10)*(i%10));    
        }
        
    }

    return 0;
}
