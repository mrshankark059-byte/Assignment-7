Q. 5. Write a program to print the first 10 odd natural numbers in reverse order.


#include <stdio.h>
int main()
{ 
  int a=19;
  while(a>=1) 
  {
    printf("%d\n",a);
    a=a-2;
  }
  
    return 0;
}



Run.... 

19
17
15
13
11
9
7
5
3
1

[Process comp


#include <stdio.h>
int main()
{ 
  int a=1;
  while(a<=20) 
  {
    printf("%d\n",20-a);
    a=a+2;
  }
  
    return 0;
}