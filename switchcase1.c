

#include <stdio.h>

int main()
{
   int a,b;
  printf("1.School of Computer Science\n");
  printf("2.School of Business\n");
  printf("3.School of Engineering\n");
  printf("make your selection\n");
  scanf("%d",&a);
  switch (a)
  {
    case 1: 
      
      printf("if school of computer science is chosen");
      break;
    case 2: 
      
      printf("if school of business is chosen");
      printf("Available Departments\n");
      printf("1.Department of commerce\n");
      printf("2.Department of purchasing\n");
      printf("Make your selection.\n");
      scanf("%d",&b);
      switch(b) 
      { 
        case 1:
        // code to be executed if b = 1;
        printf("You chose Department of commerce\n" );
        break;
        case 2: 
        // code to be executed if b = 2;
        printf("You chose Department of purchasing" );
        break;
      }	  
      break;
  }
}
