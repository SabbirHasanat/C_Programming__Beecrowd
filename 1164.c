#include <stdio.h>
int main(){
    int a,n,i,j,s=0;
    scanf("%d",&a);
    for(i=1; i<=a; i++){
        scanf("%d",&n);
        for(j=1; j<n; j++){
            if(n%j==0){
                s+=j;
            }
        }
        if(s==n){
            printf("%d eh perfeito\n",n);
        }

        else{
            printf("%d nao eh perfeito\n",n);
        }
        s=0;
    }
    return 0;
}