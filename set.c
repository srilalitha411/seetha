
#include<stdio.h>
void main()
{
        int num,pos,res;
        printf("enter a num and position\n");
        scanf("%d%d",&num,&pos);
        printf("before set a bit is:%d\n",num);
        res=num|(1<<pos);
        printf("after set a bit is:%d\n",res);
}
