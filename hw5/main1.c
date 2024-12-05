#include <stdio.h>

int main()
{
    int i = 7;
    for(int j = i; j > 0; j--){
        for(int k = 1; k <= 2*i - j ; k++){
            if(k >= j){
                if((k-j)%2 == 0){
                    printf("%d",(i-j+1));
                }
                else{
                    printf(" ");
                }
            }
            else
                printf(" ");
            
        }
        printf("\n");
    }

    return 0;
}
