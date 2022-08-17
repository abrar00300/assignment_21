#include<stdio.h>
struct Time input();
void output(struct Time);
struct Time
{
    int h,m,s;
};
int main()
{
    struct Time t1,t2,t;
    t1=input();
    t2=input();
    if(t1.h>t2.h)
    {
        t.h=t1.h-t2.h;
        if(t2.m>t1.m)
        {
            t1.m=t1.m+60;
            t.h--;
             t.m=t1.m-t2.m;
        }
        else
            t.m=t1.m-t2.m;
        if(t2.s>t1.s)
        {
            t1.s=t1.s+60;
            t.m--;
            t.s=t1.s-t2.s;
        }
        else
            t.s=t1.s-t2.s;
    }
    else
    {
        t.h=t2.h-t1.h;
        if(t1.m>t2.m)
        {
            t2.m=t2.m+60;
            t.h--;
            t.m=t2.m-t1.m;
        }
        else
            t.m=t2.m-t1.m;
        if(t1.s>t1.s)
        {
            t2.s=t2.s+60;
            t.m--;
            t.s=t2.s-t1.s;
        }
        else
            t.s=t2.s-t1.s;
    }
    output(t);
}
struct Time input()
{
    struct Time t;
    printf("enter hours=");
    scanf("%d",&t.h);
     printf("enter minutes=");
    scanf("%d",&t.m);
     printf("enter seconds=");
    scanf("%d",&t.s);
    printf("\n\n");
    return t;
};
void output(struct Time t)
{
    if(t.s>61)
    {
        t.m++;
        t.s=t.s-60;
    }
    if(t.m>61)
        {
            t.h++;
            t.m=t.m-60;
        }
    printf("\n%d hours %d minutes %d seconds",t.h,t.m,t.s);
}
