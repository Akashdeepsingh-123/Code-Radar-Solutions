#include <stdio.h>
int main(){
    int num,i,j;
    scanf("%d",num);
    for(i=1;i<=num;i++){
        for(j=1;j<2*num-1;j++){
            if(j>=n-(i-1) && j<=n+(i-1)){
                printf("* ");
            }
            else
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}