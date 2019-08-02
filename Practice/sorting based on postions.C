#include <stdio.h>
#include<string.h>
int main(void)
{
    int arr[30],size,ind,t;
    scanf("%d",&size);
    for(ind=0;ind<size;ind++)
    scanf("%d",&arr[ind]);
    for(ind=0;ind<size-1;ind++)
    {
        if(ind%2==0)
        {
            if(arr[ind]>arr[ind+1])
            {
                t=arr[ind];
                arr[ind]=arr[ind+1];
                arr[ind+1]=t;
            }
        }
        else
        {
            if(arr[ind]<arr[ind+1])
            {
                t=arr[ind];
                arr[ind]=arr[ind+1];
                arr[ind+1]=t;
            }
        }
    }
    for(ind=0;ind<size;ind++)
    printf("%d ",arr[ind]);
    return 0;
}



INPUT:

7
4 3 7 6 8 9 1


OUTPUT:

3 7 4 8 6 9 1 
