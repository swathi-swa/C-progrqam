#include <stdio.h>

int main(void) 
{
	int num,i;
	scanf("%d",&num);
	num=num*100*100;
	for(i=1;i*i<num;i++);
	printf("%.2f",(float)i/100);
	return 0;
}


INPUT:
7

OUTPUT:
2.65
