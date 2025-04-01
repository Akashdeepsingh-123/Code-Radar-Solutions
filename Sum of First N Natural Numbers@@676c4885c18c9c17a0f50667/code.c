// Your code here...
#include <stdio.h>
int sumn(int);
int sumn(int n){
    if(n==1){
        return 1;
    }
    else{
        return sumn(n-1)+n;
    }
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",sumn(n));

    return 0;
}