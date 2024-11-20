#include<stdio.h>
#include<string.h>

struct person{
  int age;
  char aadhar_number[13];
  char name[50];


}  person2 = {45,"980911057167","Abhishek Kumar Singh"};


int main(){
  struct person person1;

  printf("Enter your Name:");
  // char name[50];
  fgets(person1.name, sizeof(person1.name),stdin);
  // strcpy(person1.name,name);

  printf("Enter your age:");
  scanf("%d",&person1.age);

  printf("Enter your aadhar number:");
  scanf("%s",person1.aadhar_number);
  printf("Person 1: \n");
  printf("%d\n",person1.age);
  printf("%s\n",person1.aadhar_number);
  printf("%s\n",person1.name);
  printf("Person 2\n");
  printf("%d\n",person2.age);
  printf("%s\n",person2.aadhar_number);
  printf("%s\n",person2.name);






  return 0;
}