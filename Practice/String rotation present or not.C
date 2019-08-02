#include <stdio.h>
int main() {
	char str[30],s[30],temp;
	int ind,len,l,c=0,flag=0;
	scanf("%s",str);
	scanf("%s",s);
	for(len=0;str[len];len++);
	l=len;
	while(l-1)
	{
    	temp=str[0];
    	for(ind=0;ind<len;ind++)
    	    str[ind]=str[ind+1];
    	    str[len-1]=temp;
    	for(ind=0;ind<len;ind++)
    	{
    	    if(str[ind]==s[ind])
    	    c++;
    	}
    	if(c==len)
    	{
    	    flag=1;
    	    break;
    	}
    	l--;
	}
	if(flag==1)
	printf("1");
	else
	printf("-1");
    return 0;
}


INPUT:

sample
plesam

OUTPUT:

1

INPUT:

sample
plessa

OUTPUT:

-1
