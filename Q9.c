#include<stdio.h>
#include<string.h>
struct student
{
    int id,age;
    char n[30];
};
struct student input();
void output(struct student);
int main()
{
    int n;
    printf("Enter total number of students=");
    scanf("%d",&n);
    struct student s[n];
    for(int i=0;i<n;i++)
    {
        s[i]=input();
    }
    printf("\n\n");
    for(int j=0;j<n;j++)
    {
        output(s[j]);
    }
    return 0;
}
struct student input()
{
    struct student s;
    printf("\n Enter student roll number =");
    scanf("%d",&s.id);
    printf("Enter student name =");
    fflush(stdin);
    fgets(s.n,40,stdin);
    printf("Enter student age =");
    scanf("%d",&s.age);
    return s;
};
void output(struct student s)
{
    int l=strlen(s.n);
    s.n[l-1]=s.n[l-1]-1;
    printf("\nRoll no.=%d  Name =%s  Age =%d",s.id,s.n,s.age);
}
