#include <stdio.h>

typedef struct student
{
  int roll;
  char name[20];
  int age;
} STUDENT;

void main()
{

  printf("Hello Pointer\n");
  STUDENT s1, *ptr_s1;
  ptr_s1 = &s1;
  printf("Enter the details of student\n");
  printf("Enter Roll number: ");
  scanf("%d", &(*ptr_s1).roll); // use to access through pointer var (*pointer_name).var_name or pointer_var->var_name ;
  getchar();
  printf("Enter Name: ");
  fgets(ptr_s1->name,sizeof(ptr_s1->name),stdin);
  printf("Enter Age: ");
  scanf("%d",&ptr_s1->age);


  printf("Details of Student\n");
  printf("Roll Number: %d\n",(*ptr_s1).roll);
  printf("Name: %s\n",ptr_s1->name);
  printf("Age: %d\n",ptr_s1->age);
  
}