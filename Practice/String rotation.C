#include <stdio.h>

int main() {
	char str[30],temp;
	int ind,len;
	scanf("%s",str);
	for(len=0;str[len];len++);
	temp=str[0];
	for(ind=0;ind<len;ind++)
	str[ind]=str[ind+1];
	str[len-1]=temp;
	printf("%s",str);
	return 0;
}

INPUT:
sample

OUTPUT:
amples
