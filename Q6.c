#include<stdio.h>
#include<string.h>
struct Employee
{
    int id,salary;
    char name[40];
};
struct Employee input();
void sort(struct Employee[]);
void output(struct Employee);
int main()
{
    struct Employee e[10];
    for(int i=0;i<5;i++)
        e[i]=input(e[i]);
            printf("\n All Employees after sorted Name wise\n");
    sort(e);
    for(int i=0;i<5;i++)
            output(e[i]);
    return 0;
}
void sort(struct Employee e[])
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(strcmp(e[i].name,e[j].name)==-1)
            {
                struct Employee temp=e[i];
                e[i]=e[j];
                e[j]=temp;
            }
        }
    }
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


