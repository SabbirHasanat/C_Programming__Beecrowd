#include <stdio.h>
 
int main() {
    double a,b,s;
    scanf("%lf\n%lf", &a,&b);
    s=(a*3.5 + b*7.5)/(3.5+7.5);
    printf("MEDIA = %.5lf\n", s);
    return 0;
}