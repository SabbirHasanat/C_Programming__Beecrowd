#include <stdio.h>
int main() {
    int n,i;
    float a,b,c,m;
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        scanf("%f %f %f",&a,&b,&c);
        m=((a*2)+(b*3)+(c*5))/(2+3+5);
        printf("%.1f\n",m);
    }
    return 0;
}
