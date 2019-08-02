#include <stdio.h>
int main() {
	char str[30],temp;
	int ind,len,l,i=0;
	scanf("%s",str);
	for(len=0;str[len];len++);
	l=len;
	while(l-1)
	{
    	temp=str[0];
    	for(ind=0;ind<len;ind++)
    	str[ind]=str[ind+1];
    	str[len-1]=temp;
    	printf("%s\n",str);
    	l--;
	}
	return 0;
}

INPUT:

sample

OUTPUT:

amples
mplesa
plesam
lesamp
esampl
