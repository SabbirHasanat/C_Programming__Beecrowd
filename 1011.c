#include <stdio.h>
 
int main() {
 
    double pi=3.14159,r,sphere;
    scanf("%lf",&r);
    sphere=((4/3.0)*pi*r*r*r);
    printf("VOLUME = %.3lf\n", sphere);
 
    return 0;
}