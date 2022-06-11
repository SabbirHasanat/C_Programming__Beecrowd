#include <stdio.h>
 
int main() {
   int sec,min,hr;
    scanf("%d", &sec);

    hr= sec/3600;
    sec=sec-(hr*3600);
    min=sec/60;
    sec=sec-(min*60);

 //   sec= (sec- ((hr*3600)||(min*60)));

    printf("%d:%d:%d\n",hr,min,sec);
    
    return 0;
}