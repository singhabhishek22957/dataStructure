#include <stdio.h>


typedef struct date{
  int mm;
  int dd;
  int yyyy;
} DATE;

typedef struct  name{
  char firstName[20];
  char middleName[20];
  char lastName[20];
}NAME;

typedef struct  person {
  int id;
  NAME name;
  DATE DOB;
  double salary;
} PERSON;

void main()
{

  printf("Nested   structure \n");

  PERSON p1;
  p1.id = 1;
  strcpy(p1.name.firstName,"Abhishek");
  strcpy(p1.name.middleName,"Kumar");
  strcpy(p1.name.lastName,"Singh");
  p1.DOB.mm = 04;
  p1.DOB.dd = 13;
  p1.DOB.yyyy = 2003;
  p1.salary=4500.0;

  printf("Person Details\n");

  printf("%d\n",p1.id);
  printf("%s",p1.name.firstName);
  printf("%s",p1.name.middleName);
  printf("%s\n",p1.name.lastName);
  printf("%d/%d/%d\n",p1.DOB.dd,p1.DOB.mm,p1.DOB.yyyy);
  printf("%.2f",p1.salary);

  
}