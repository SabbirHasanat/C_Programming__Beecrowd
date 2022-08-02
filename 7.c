#include<stdio.h>
int main(){

int notes;
scanf("%d", &notes);
printf("NOTAS:\n");

int x1=notes/100;
int y1=notes%100;
printf("%d nota(s) de R$ 100.00\n",x1);

int x2=y1/50;
int y2=y1%50;
printf("%d nota(s) de R$ 50.00\n",x2);

int x3=y2/20;
int y3=y2%20;
printf("%d nota(s) de R$ 20.00\n",x3);

int x4=y3/10;
int y4=y3%10;
printf("%d nota(s) de R$ 10.00\n",x4);

int x5=y4/5;
int y5=y4%5;
printf("%d nota(s) de R$ 5.00\n",x5);

int x6=y5/2;
int y6=y5%2;
printf("%d nota(s) de R$ 2.00\n",x6);

printf("MOEDAS:\n");

int x7=y6/1;
int y7=y6%1;
printf("%d nota(s) de R$ 1.00\n",x7);

double x8=y7/0.50;
double y8 = y7 % (0.50);
printf("%lf nota(s) de R$ 0.50\n",x8);

float x9=y8/0.25;
float y9=y8%0.25;
printf("%d nota(s) de R$ 0.25\n",x9);

float x10=y9/0.10;
float y10=y9%0.10;
printf("%d nota(s) de R$ 0.10\n",x10);

float x11=y10/0.05;
float y11=y10%0.05;
printf("%d nota(s) de R$ 0.05\n",x11);

float x12=y11/0.01;
//int y12=y11%0.01;
printf("%d nota(s) de R$ 0.01\n",x12);

return 0;}
