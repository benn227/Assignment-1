#include <stdio.h>


int main() 
  {
      char select=97;
      
      do {
      printf("Please enter a selection\n"); //user choice as task
      printf("Press 'a' to run task 1\n");
      printf("Press 'b' to run task 2\n");
      printf("Press 'c' to run task 3\n");
      printf("Press 'd' to run task 4\n");
      printf("Press 'e' to run task 5\n");
      printf("Press 'f' to run task 6\n");
      //scanf("%c", &select);
  }

      while (select<97 || select>102);


printf("Run switch %c\n", select);

select=select-96;
printf("%d\n", select);

switch(select) {
    case 1:
    printf("its running");
    break;
    default:
    printf("its not running");
    break;
}

return 0;
}