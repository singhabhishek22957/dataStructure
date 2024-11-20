#include<stdio.h>

struct students{
  int roll;
  char name[50];
  int age;
};



int main(){

  struct students s1 = {84,"Abhishek Kumar Singh",23};

  // s1.roll = 84;
  // s1.name = "Abbhishek Kumar Singh";
  // s1.age = 24;
  printf("Student roll number: %d\n",s1.roll);
  printf("Student Name: %s\n",s1.name);
  printf("Student age: %d\n",s1.age);




  return 0;
}