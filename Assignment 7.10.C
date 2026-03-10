Q. 10. Write a program to print a table of 5.

#include <stdio.h>
int main()
{ 
  int a=1;
  while(a<=10) 
  {
    printf("%d\n",a*5);
    a++;
  }
  
    return 0;
}


Run..... 

5
10
15
20
25
30
35
40
45
50

[Process completed - press Enter]




#include <stdio.h>
int main()
{ 
  int a=5;
  while(a<=50) 
  {
    printf("%d\n",a);
    a=a+5;
  }
  
    return 0;
}