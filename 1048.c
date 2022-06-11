#include <stdio.h>
 
int main() {
 
    float salary,a,b,c,d,e,f,g,h,i,j;
    scanf("%f",&salary);
    if(salary>=0 && salary<=400){
        a=(salary*0.15)+salary;
        b=salary*0.15;
        printf("Novo salario: %.2f\n",a);
        printf("Reajuste ganho: %.2f\n",b);
        printf("Em percentual: 15 %\n");
    }
    else if(salary>=400.01 && salary<=800){
        c=(salary*0.12)+salary;
        d=salary*0.12;
        printf("Novo salario: %.2f\n",c);
        printf("Reajuste ganho: %.2f\n",d);
        printf("Em percentual: 12 %\n");
    }
    else if(salary>=800.01 && salary<=1200){
        e=(salary*0.1)+salary;
        f=salary*0.1;
        printf("Novo salario: %.2f\n",e);
        printf("Reajuste ganho: %.2f\n",f);
        printf("Em percentual: 10 %\n");
    }
    else if(salary>=1200.01 && salary<=2000){
        g=(salary*0.07)+salary;
        h=salary*0.07;
        printf("Novo salario: %.2f\n",g);
        printf("Reajuste ganho: %.2f\n",h);
        printf("Em percentual: 7 %\n");
    }
    else if(salary>2000){
        i=(salary*0.04)+salary;
        j=salary*0.04;
        printf("Novo salario: %.2f\n",i);
        printf("Reajuste ganho: %.2f\n",j);
        printf("Em percentual: 4 %\n");
    }
    else{
        printf("Invalid input\n");
    }
 
    return 0;
}