#include <stdio.h>
#include<string.h>

int main() {
	char str[30],ns[30];
	int len,ind,count=0,sum;
	scanf("%[^\n]s",str);
	for(len=0;str[len];len++);
	for(ind=len-1;ind>=0;ind--)
	{
	    if(str[ind]!=' ')
	    {
	        sum=str[ind]+count;
	        count++;
	        if(sum>122)
	        sum=sum-26;
	        ns[ind]=sum;
	        
	    }
	    if(str[ind]==' ')
	    {
	        count=0;
	        ns[ind]=' ';
	    }
	}
	for(ind=0;ind<len;ind++)
	printf("%c",ns[ind]);
	return 0;
}


INPUT:
 yum feed
(210 3210)
OUTPUT:

 avm igfd
