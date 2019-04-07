#include <stdio.h>


int main() 
  {
      char select=98;
      
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


printf("User selected %c\n", select);

select=select-96;
printf("Selected case %d\n", select);

switch(select) {
    int i;
    
    case 1:
    printf("case 1 is running\n");
      //scanf("%c", &encryptString[]);
      char encryptString[]="test";
      //scanf("%d", &enkey);
      int enkey =1;
      for (i=0;i<4;i++) 
      {   
      printf("%c", encryptString[i]+enkey);
      }
    break;
    
      
    case 2:
    printf("case 2 is running\n");
      //scanf("%c", &decryptString[]);
      char decryptString[]="uftu";
      //scanf("%d", &dekey);
      int dekey =1;
        for (i=0;i<4;i++) 
        {   
        printf("%c", decryptString[i]-dekey);
        }
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