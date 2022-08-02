#include <stdio.h>
#include<math.h>
int main() {
    int i;
    float s=0,j=1;
    for(i=1;i<=39;i+=2){
        s=s+(i/j);
        j=j+j;
    }
    printf("%.2f\n",s);
    return 0;
}