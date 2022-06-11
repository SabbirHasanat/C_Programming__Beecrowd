#include <stdio.h>
 
int main() {
 
    int days,year,month,day;
    scanf("%d", &days);
    
    year=days/365;
    month=(days - 365*year)/30;
    day=days-(365*year + 30*month);
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", year,month,day);
 
    return 0;
}