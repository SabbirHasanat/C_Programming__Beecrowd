#include <stdio.h>
 
int main() {
 
    double a,b,c,tri,cir,tra,qua,ret,pi=3.14159;
    scanf("%lf %lf %lf", &a,&b,&c);

    tri=1/2.0*a*c;
    cir=pi*c*c;
    tra=1/2.0*(a+b)*c;
    qua=b*b;
    ret=a*b;

    printf("TRIANGULO: %.3lf\n",tri);
    printf("CIRCULO: %.3lf\n",cir);
    printf("TRAPEZIO: %.3lf\n",tra);
    printf("QUADRADO: %.3lf\n",qua);
    printf("RETANGULO: %.3lf\n",ret);
    return 0;
}