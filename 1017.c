#include <stdio.h>
 
int main() {
 
    float spend,average_speed,fuel_need,a=12;
    scanf("%f%f", &spend,&average_speed);
    fuel_need=(spend*average_speed)/a;
    printf("%.3f\n",fuel_need);

    
 
    return 0;
}