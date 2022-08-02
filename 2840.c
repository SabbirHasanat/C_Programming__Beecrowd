#include <stdio.h>
#include<math.h>
#define PI 3.1415
 
int main() {
 
    long long int r,l,s;
    scanf("%lld %lld",&r,&l);
    s= l/((4/3.0)*PI*pow(r,3));
    printf("%d\n",s);
 
    return 0;
}