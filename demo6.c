#include<stdio.h>
void main()
{
int x[]={10,20,30,40,50};
int *p=&x[0];
for(int i=0;i<5;i++)
{
	printf("%d\n",*p);
	p++;
}
for(int i=0;i<5;i++)
{
	printf("%d\n",*p);
	p--;
}

}