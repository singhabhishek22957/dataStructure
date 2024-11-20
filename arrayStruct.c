#include <stdio.h>

typedef struct date
{
  int day;
  int month;
  int year;
} DATE;

typedef struct student
{
  int roll;
  char name[40];
  DATE dob;
  float fees;
} Student;

void main()
{
  Student MCA_students[5];
  for (int i = 0; i < 5; i++)
  {
    printf("Enter Student Name: ");
    scanf("%s", MCA_students[i].name);
    printf("Enter Student Roll: ");
    scanf("%d", &MCA_students[i].roll);
    printf("Enter Student DOB (DD MM YYYY): ");
    scanf("%d %d %d", &MCA_students[i].dob.day, &MCA_students[i].dob.month, &MCA_students[i].dob.year);
    printf("Enter Student Fees: ");
    scanf("%f", &MCA_students[i].fees);
  }
  for (int i = 0; i < 5; i++)
  {
    printf("********** Student %d Data **********\n", i + 1);
    printf("Student Name: %s\n", MCA_students[i].name);
    printf("Student Roll: %d\n", MCA_students[i].roll);
    printf("Student DOB: %d/%d/%d\n",MCA_students->dob.day,MCA_students->dob.month,MCA_students->dob.year);
    printf("Student Fees: %.2f\n\n", MCA_students[i].fees);
  }

  printf("Array Structure \n");
}