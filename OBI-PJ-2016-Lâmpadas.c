#include<stdio.h>
int main()
{
int n,v,l1,l2,i;
l1=0;
l2=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&v);
        if(v==1){
            l1++;
        }
        else if(v==2){
            l2++;
            l1++;
        }
    }
l1=l1%2;
l2=l2%2;
    printf("%d\n%d",l1,l2);
    return 0;
}
