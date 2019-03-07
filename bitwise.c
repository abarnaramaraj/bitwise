#include<stdio.h>
int main()
{
int i;
int k;
printf("before swap",i,k);
scanf("%d%d",&i,&k);
i=i^k;
k=1^k;
i=i^k;
printf("after swap",i,k);
return 0;
}
