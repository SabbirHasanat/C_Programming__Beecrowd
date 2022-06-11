#include <stdio.h>
 
int main() {
 
    float a,b,c,m,p;
    scanf("%f%f%f",&a,&b,&c);
    if((a+b)>c && (b+c)>a && (c+a)>b){
        p=a+b+c;
        printf("Perimetro = %.1f\n",p);
    }
    else{
        m=.5*(a+b)*c;
        printf("Area = %.1f\n",m);
    }

 
    return 0;
}