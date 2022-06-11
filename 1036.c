#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c,m,n;
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a==0 || ((b*b)-4*a*c)<0){
        printf("Impossivel calcular\n");
    }
    else{
        m= (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
        n= (-b-sqrt(pow(b,2)-4*a*c))/(2*a);

        printf("R1 = %.5lf\n",m);
        printf("R2 = %.5lf\n",n);
    }
    return 0;
}