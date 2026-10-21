#include <stdio.h>
int main(void){int n=6;unsigned long long f=1;for(int i=2;i<=n;i++)f*=i;printf("%d! = %llu\n",n,f);return 0;}