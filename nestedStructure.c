#include <stdio.h>
#include <string.h>

typedef struct address
{
  int pin_code;
  int house_no;
  char village_name[40];
  char city[30];
  char state[20];
} ADDRESS;

typedef struct date
{
  int day;
  int month;
  int year;
} DATE;

typedef struct name
{
  char first_name[20];
  char middle_name[20];
  char last_name[20];

} NAME;

typedef struct Student
{
  int roll_no;
  NAME name;
  char course[30];
  DATE DOB;
  ADDRESS address;
  float fees;

} STUDENT;

void main()
{
 
 
  printf("Hello Abhishek\n");
  STUDENT s1;
  s1.roll_no = 1;
  strcpy(s1.name.first_name, "Abhishek");
  strcpy(s1.name.middle_name, "Kumar");
  strcpy(s1.name.last_name, "Singh");
  strcpy(s1.course, "Btech");
  s1.DOB.day = 1;
  s1.DOB.month = 1;
  s1.DOB.year = 1999;
  s1.address.pin_code = 845459;
  s1.address.house_no = 1;
  strcpy(s1.address.village_name, "Pakadiya");
  strcpy(s1.address.city, "Dehradun");
  strcpy(s1.address.state, "Bihar");
  s1.fees = 10000.0;
  printf("Roll No: %d\n", s1.roll_no);
  printf("First Name: %s\n", s1.name.first_name);
  printf("Middle Name: %s\n", s1.name.middle_name);
  printf("DOB: %d/%d/%d\n", s1.DOB.day, s1.DOB.month, s1.DOB.year);
  printf("Address: %d, %s, %s, %s,-%d\n", s1.address.house_no, s1.address.village_name, s1.address.city, s1.address.state, s1.address.pin_code);
  printf("Fees: %.2f\n",s1.fees);


}