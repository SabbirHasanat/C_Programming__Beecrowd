#include <stdio.h>
int main() {
    int n,a,b,t,i,j,s=0;
    scanf("%d",&n);
    for(j=1;j<=n;j++){
        scanf("%d %d",&a,&b);
        if(a>b){
            t=b;
            b=a;
            a=t;
        }
        if(a==b){
            s=0;
        }

        for(i=a+1,s=0;i<b;i++){
            if(i%2!=0){
                s+=i;
            }
        }
        printf("%d\n",s);
    }
    return 0;
}