#include<stdio.h>
#include<string.h>
struct marks
{
    int roll,p_mark,c_mark,m_mark;
    char n[30];
};
struct marks input();
float per(struct marks);
int main()
{
    struct marks m[5];
    for(int i=0;i<3;i++)
        m[i]=input();
    for(int i=0;i<3;i++)
        printf("\npercentage of %s is %.2f%",m[i].n,per(m[i]));
    return 0;
}
struct marks input()
{
    struct marks s;
    printf("\n Enter student roll number =");
    scanf("%d",&s.roll);
    printf("Enter student name =");
    fflush(stdin);
    fgets(s.n,40,stdin);
   printf("Enter physics marks=");
   scanf("%d",&s.p_mark);
   printf("Enter chemistry marks =");
   scanf("%d",&s.c_mark);
   printf("Enter maths marks =");
   scanf("%d",&s.m_mark);
   int l=strlen(s.n);
   s.n[l-1]=s.n[l-1]-1;
    return s;
};
float per(struct marks m)
{
    float p;
    p=(m.c_mark+m.m_mark+m.p_mark)/3.0;
    return p;
}
