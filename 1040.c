#include<stdio.h>
int main(){

    float n1,n2,n3,n4,o,m,n;
    scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
    m=((n1*2)+(n2*3)+(n3*4)+(n4*1))/(2+3+4+1);
    printf("Media: %.1f\n",m);
    if(m>=7){
        printf("Aluno aprovado.\n");
    }
    else if(m<5){
        printf("Aluno reprovado.\n");
    }
    else if(m>=5 && m<=6.9){
        printf("Aluno em exame.\n");

        scanf("%f",&o);
        printf("Nota do exame: %.1f\n",o);
        n=(m+o)/2;
        if(n>=5){
            printf("Aluno aprovado.\n");
        }
        else if(n<=4.9){
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n",n);
    }


    return 0;
}