#include <stdio.h>

void main()
{

    printf("Pointer  to a pointer\n");
    // int x = 10 ;
    // printf("address of x = %d\n",&x);
    // int j = &x;
    // printf(" address store without pointer (but it gives address): %d\n",j);
    // int *j = &x;
    // printf("address of  x  store in pointer j  = %d\n",j);
    // int *k = x;
    // printf("address of  x  store in pointer k  = %d\n",k);   output is 10 but it gives warring

    // always use those type variable also pointer  use  those types to  store   address like: 
    // int a = 10;
    // int *p = &a;
    // char ab = 'a';
    // char *q = &ab;
    // float c = 10.5;
    // float *r = &c;
    // printf("Output is : \n");
    // printf("%d , %d , %d \n",p,q,r);

    // Extended concept of pointer 
    // int x = 5;
    // int *p,**q,***r;
    // p = &x;    // first level of pointer 
    // q = &p;    // second level of pointer   
    // r = &q;    // third level of pointer 
    // printf("value of x = %d\n",x);
    // printf("value of p = %d\n",p);
    // printf("value of q = %d\n",q);
    // printf("value of r = %d\n",r);
    // // Arithmetic operator 
    // printf("Arithmetic Operator\n");
    // int num1 = 20, num2 = 3, sum = 0,sub = 0, mul = 0, div = 1;
    // int *ptr1, *ptr2;
    // ptr1 = &num1;
    // ptr2 = &num2;
    // sum = *ptr1 + *ptr2;
    // sub = *ptr1 - *ptr2;
    // mul = *ptr1 * *ptr2;
    // div = *ptr1 / *ptr2;
    // printf("%d\n",ptr1);
    // printf("%d\n",ptr1+1);
    // printf("%d\n",ptr1-1);
    // // printf("%d\n",ptr1*2);
    // // printf("%d\n",ptr1/2);
    // printf("%d\n",sum);
    // printf("%d\n",sub);
    // printf("%d\n",mul);
    // printf("%d\n",div);

    printf("Hello Abhishek \n");

    
    int am = 34;
    int am , *ptr = &am;
    printf("value of am using *ptr: %d\n",*ptr);


     

    
}