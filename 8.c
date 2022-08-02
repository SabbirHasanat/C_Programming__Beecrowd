#include <stdio.h>

int main() {
 float n1,n2,n3,n4,n5,avg1,avg2;
 scanf("%f%f%f%f", &n1,&n2,&n3,&n4);
 avg1=(n1*2 + n2*3 + n3*4 + n4*1)/10;
 printf("Media: %.1f\n",avg1);
 if(avg1>=7){
     printf("Aluno aprovado.\n");
     if(avg1<5){
         printf("Aluno reprovado.\n");
         if(avg1>=5 && avg1<=6.9){
             printf("Aluno em exame.\n");
         }
     }
 }
 else{
     scanf("%f", &n5);
     printf("Nota do exame: %.1f\n");
     avg2=(n5+avg1)/2;
     if(avg2>=5){
         printf("Aluno aprovado.\n");
     }
     else if(avg2<=4.9){
         printf("Aluno reprovado.\n");
     }
     else{
         printf("Media final: %.1f\n",avg2);
     }
 }

    return 0;
}
