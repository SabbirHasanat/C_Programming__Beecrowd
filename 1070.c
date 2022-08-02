#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    if(n%2==0){
        for(i=n;i<=(n+11);i++){
            if(i%2!=0){
                printf("%d\n",i);
            }
        }
    }
    else{
        for(i=n;i<=(n+10);i++){
            if(i%2!=0){
                printf("%d\n",i);
            }
        }
    }
    return 0;
}