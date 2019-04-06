#include <stdio.h>


int main() 
  {
      char select=100;
      
      do {
      printf("Please enter a selection\n"); //user choice as task
      printf("Press 'a' to run task 1\n");
      printf("Press 'b' to run task 2\n");
      printf("Press 'c' to run task 3\n");
      printf("Press 'd' to run task 4\n");
      printf("Press 'e' to run task 5\n");
      printf("Press 'f' to run task 6\n");
      scanf("%c", &select);
  }

      while (select<96 || select>102);


printf("%c", select);
return 0;
}