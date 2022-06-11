#include <stdio.h>
 
int main() {
 
    int a,b;
    double c;
    scanf("%d\n %d\n %lf", &a,&b,&c);
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", a,b*c);
    
 
    return 0;
}