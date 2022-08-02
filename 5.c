#include <stdio.h>
int main(){

    int a,b,c,m; // m1 & m2 এর বদলে  tecnically একটা  m নিলেই  চলে
    scanf("%d%d%d",&a,&b,&c);

    //abs mean পরম মান (absolute).

    m=(a+b+abs(a-b))/2; // a and b এর মধ্যে বড়টা বের করার ফর্মুলা  ।

    m=(m+c+abs(m-c))/2; // আগেরটাই বড়টা m. তাই আগেরটা & c এর মধ্যে বড়টা এইখানে বের করলাম ।

    printf("%d eh o maior\n",m); // ৩ টার মধ্যে বড়টা এইখানে দেখানো হয়েছে ।

return 0;
}
