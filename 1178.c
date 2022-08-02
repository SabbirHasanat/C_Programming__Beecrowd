#include <stdio.h>
int main()
{
   int i;
    double n,N[100];
    scanf("%lf", &n);
    N[i]=n;
    for(i=0; i<100;i++)
    {
        printf("N[%d] = %.4lf\n", i, N[i]);
        n/=2;
        N[i+1]=n;
    }
    return 0;
}
