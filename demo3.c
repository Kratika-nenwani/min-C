#include<stdio.h>
void main()
{
int x=10;
int *p=&x;
printf("%d\n",p);
p++;
printf("%d",p);
}