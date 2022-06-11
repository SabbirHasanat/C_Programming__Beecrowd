#include<stdio.h>
int main(){
    int x,y;
    float a,b,c,d,e;
    scanf("%d %d",&x,&y);

    switch(x){
    case 1:
        a=y*4;
        printf("Total: R$ %.2f\n",a);
        break;
    case 2:
        b=y*4.50;
        printf("Total: R$ %.2f\n",b);
        break;
    case 3:
        c=y*5;
        printf("Total: R$ %.2f\n",c);
        break;
    case 4:
        d=y*2;
        printf("Total: R$ %.2f\n",d);
        break;
    case 5:
        e=y*1.50;
        printf("Total: R$ %.2f\n",e);
        break;
    }
    return 0;
}