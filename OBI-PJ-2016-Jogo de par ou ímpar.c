#include<stdio.h>
int main()
{
int s,s2,r,d1,d2;
    scanf("%d %d %d",&r,&d1,&d2);
s=d1+d2;
s2=s%2;
    if(r=0){
        if(s2=0){
            printf("0\n");           
        }
        else 
        printf("1\n");
    }
    else if(r=1){
            if(s2=0){
            printf("1\n");           
        }
        else 
        printf("0\n");
    }

    return 0;
}
