#include <stdio.h>
#include <string.h>


typedef struct student{
  int roll;
  char name[20];
  int age;

}STUDENT;


void display( STUDENT  s1){
  printf("Roll No: %d\n",s1.roll);
  printf("Name: %s",s1.name);
  printf("Age: %d\n\n",s1.age);



}

void inputStudent(STUDENT s1[], int size,STUDENT *ptr_s1){
  printf("List Of Student \n"); 
  for (int i = 0; i < size; i++){
    ptr_s1 = &s1[i];
    printf("Enter Roll No: ");
    scanf("%d",&ptr_s1->roll);
    printf("Enter Age: ");
    scanf("%d",&ptr_s1->age);
    getchar();
    printf("Enter Name: ");
    fgets(ptr_s1->name, sizeof(ptr_s1->name),stdin);
    printf("Add Successfully\n");
    
  }
  printf("\n");
}

void main()
{

  printf("Hello Abhishek , Function Structure\n");
  printf("Enter number student:");
  int size;
  scanf("%d",&size);
  

  STUDENT s1[size],*ptr_s1;
  inputStudent(s1,size,&ptr_s1);
  

  for (int  j = 0; j < size; j++){
    display(s1[j]);
  }
  
  



    
}