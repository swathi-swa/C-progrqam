#include <stdio.h>

int main() {
    int n,m,itr,jtr,s;
    scanf("%d%d",&n,&m);
    int a[n],na[n];
    for(itr=0;itr<n;itr++)
    scanf("%d",&a[itr]);
    for(itr=0;itr<n;itr++)
    {
        s=0;
        for(jtr=0;jtr<m;jtr++)
        s=s+a[(itr+jtr)%n];
        na[itr]=s;
    }
    for(itr=0;itr<n;itr++)
    printf("%d ",na[itr]);
	return 0;
}

INPUT:

7 3

10 20 30 40 50 60 70

OUTPUT:

60 90 120 150 180 140 100
