#include <stdio.h>

int main() {
	int a[8],na[8],i,days,j,k;
	scanf("%d",&days);
	for(i=0;i<8;i++)
	    scanf("%d",&a[i]);
	for(i=0;i<days;i++)
	{
    	na[0]=a[1];
        na[7]=a[6];
    	for(j=1;j<7;j++)
    	    na[j]=a[j-1]^a[j+1];
    	for(k=0;k<8;k++)
    	    a[k]=na[k];
	}
	for(i=0;i<8;i++)
    	printf("%d ",na[i]);
	return 0;
}


INPUT:
2
1 0 0 0 0 1 0 0

OUTPUT:

1 0 1 1 0 0 0 1 
