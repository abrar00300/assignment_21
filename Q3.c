#include<stdio.h>
struct Employee
{
    int id,salary;
    char name[40];
};
struct Employee input();
void output(struct Employee);
int main()
{
    struct Employee e1;
    e1=input();
    output(e1);
    return 0;
}
void output(struct Employee e)
{
    printf("\nEmployee id =%d\nEmployee name =%sEmployee salary =%d\n",e.id,e.name,e.salary);
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

