#include<stdio.h>
int main()
{
	int x=10;
	int*p=&x;
	printf("Adress of x:%p\n",&x);
	printf("value of p:%p\n",p);
	printf("value at p (*p):%d\n",*p);
	return 0;
}
