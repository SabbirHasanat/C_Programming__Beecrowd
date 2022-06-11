#include <stdio.h>
 
int main() {
    char name;
    double salary,total,sold;
    scanf("%s %lf %lf", &name,&salary,&total);
    sold=salary + (total*.15);
    printf("TOTAL = R$ %.2lf\n", sold);
    return 0;
}