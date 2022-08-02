#include <stdio.h>
int main() {
    int a[10],i,n;
    scanf("%d",&n);
    printf("N[0] = %d\n",n);
    for(i=1;i<10;i++){
        printf("N[%d] = %d\n",i,n*=2);
    }
    return 0;
}
