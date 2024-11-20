#include <stdio.h>

typedef struct complexNumber
{
  int real;
  int imag;
} Complex; Complex c1, c2, sum_c, sub_c;

void getComplex()
{
  int option ;
  do{
    printf("*********** Main Menu **********");
    printf("\n1. Read Complex Number");
    printf("\n2. Display Complex Number");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
      printf("Enter real part of first complex number: ");
      scanf("%d", &c1.real);
      printf("Enter imag part of first complex number: ");
      scanf("%d", &c1.imag);

      printf("Enter real part of second complex number: ");
      scanf("%d", &c2.real);
      printf("Enter imag part of second complex number: ");
      scanf("%d", &c2.imag);
      break;
    case 2:
      printf("Complex Number 1 : %d+%di\n", c1.real, c1.imag);
      printf("Complex Number 2 : %d+%di\n", c2.real, c2.imag);
      break;
      default:{
        printf("Invalid Option");
      }
    }
  }
  while (option != 3);
}

void performComplex(){
  int option;
  do
  {
    printf("*********** Main Menu **********");
    
    printf("\n1. Add Complex Number");
    printf("\n2. Subtract Complex Number");
    printf("\n3. Exit");
    scanf("%d", &option);

    switch (option)
    {
   
    case 1:
      sum_c.real = c1.real + c2.real;
      sum_c.imag = c1.imag + c2.imag;
      printf("sum of complex number is %d+%di\n", sum_c.real, sum_c.imag);
      break;
    case 2:
      sub_c.real = c1.real - c2.real;
      sub_c.imag = c1.imag - c2.imag;
      printf("Subtract of complex number: %d+%di", sub_c.real, sub_c.imag);
    }

  } while (option != 3);

}

int main()
{

  getComplex();
  performComplex();

  

  return 0;
}