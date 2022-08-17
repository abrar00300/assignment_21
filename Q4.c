#include<stdio.h>
struct Employee
{
    int id,salary;
    char name[40];
};
struct Employee input();
int sal(struct Employee[]);
int main()
{
    struct Employee e[10];
    for(int i=0;i<10;i++)
        e[i]=input();
    printf("highest salary Employee is %s   with salary of %d",e[sal(e)].name,e[sal(e)].salary);
    return 0;
}
int sal(struct Employee e[])
{
    int max=0,k;
    for(int i=0;i<10;i++)
    {
        if(e[i].salary>max)
        {
            max=e[i].salary;
            k=i;
        }
    }
    return k;
}
struct Employee input()
{
    struct Employee e;
    printf("Enter Employee id =");
    scanf("%d",&e.id);
    fflush(stdin);
    printf("Enter Employee name=");
    fgets(e.name,40,stdin);
    printf("Enter Employee salary=");
    scanf("%d",&e.salary);
    return e;
}
