#include<stdio.h>
int main()
{
int a,b,c,d,r1,r2;
    scanf("%d %d %d %d",&a,&b,&c,&d);
r1=a*b;
r2=c*d;
    if(r1>r2){
        printf("%d\n",r1);
    }
    else
     printf("%d\n",r2);
    return 0;
}
