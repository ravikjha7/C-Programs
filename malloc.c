#include<stdio.h>
#include<stdlib.h>
struct stu
{
    int no;
    char name[20];
    int marks;
};
void main()
{
    struct stu* ptr;
    ptr=(struct stu*) malloc(sizeof(ptr));
    if(ptr==NULL)
    printf("Out of memory\n");
    else
    {
        printf("Enter Student Details:\n");
    scanf("%d   %s  %u",&ptr->no,ptr->name,&ptr->marks);
    printf("Student Roll No:%d\n",ptr->no);
    printf("Student Name:%s\n",ptr->name);
    printf("Student Marks out of 500:%u",ptr->marks);
    }
}

