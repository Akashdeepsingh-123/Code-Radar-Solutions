#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int i,j;
    for(i=1;i<=num;i++){
        for(j=1;j<=2*num-1;j++){
            if(j>=num-(i-1) && j<=num+(i-1)){
                printf("*");
            }
            else
            printf("   ");
        }
        printf("\n");
    }
    return 0;
}