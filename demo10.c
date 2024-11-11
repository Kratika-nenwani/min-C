#include<stdio.h>
void show(int a[])
{
a[2]=555;
}
void main()
{
	int x[]={10,20,30,40,50};

	show(x);
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d\n",x[i]);
		
	}

}