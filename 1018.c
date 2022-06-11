#include <stdio.h>
 
int main() {
    
    int notes;
scanf("%d", &notes);
printf("%d\n", notes);

int x1=notes/100;
int y1=notes%100;
printf("%d nota(s) de R$ 100,00\n",x1);

int x2=y1/50;
int y2=y1%50;
printf("%d nota(s) de R$ 50,00\n",x2);

int x3=y2/20;
int y3=y2%20;
printf("%d nota(s) de R$ 20,00\n",x3);

int x4=y3/10;
int y4=y3%10;
printf("%d nota(s) de R$ 10,00\n",x4);

int x5=y4/5;
int y5=y4%5;
printf("%d nota(s) de R$ 5,00\n",x5);

int x6=y5/2;
int y6=y5%2;
printf("%d nota(s) de R$ 2,00\n",x6);

int x7=y6/1;
//int y7=y6%1;
printf("%d nota(s) de R$ 1,00\n",x7);
    
    return 0;
}