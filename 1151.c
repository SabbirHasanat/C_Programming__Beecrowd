#include <stdio.h>
int main() {
    int n,n1=0,n2=1,next,i;
    scanf("%d",&n);
    for(i=1;i<=n-1;i++){
        printf("%d ",n1);
        next=n1+n2;
        n1=n2;
        n2=next;
    }
    printf("%d\n",n1);
    return 0;
}