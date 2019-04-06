#include <stdio.h>


int main() 
  {
      char select=102;
      
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
    printf("case 1 is running\n");
    char messageString[]="test";
    int i;
      for (i=0;i<5;i++) 
      {   
      printf("%c", messageString[i]);
      }
    break;
    case 2:
    printf("case 2 is running\n");
    break;
    case 3:
    printf("case 3 is running\n");
    break;
    case 4:
    printf("case 4 is running\n");
    break;
    case 5:
    printf("case 5 is running\n");
    break;
    case 6:
    printf("case 6 is running\n");
    break;
    default:
    printf("its not running");
    break;
}

return 0;
}