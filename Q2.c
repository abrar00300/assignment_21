#include<stdio.h>
struct Employee
{
    int id,salary;
    char name[40];
};
struct Employee input();
int main()
{
    struct Employee e1;
    e1=input();
    return 0;
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
