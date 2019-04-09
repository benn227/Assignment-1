#include <stdio.h>

char caesarCipher(char encryptCaesar[]);

int main() 
  {
      char select=97;
      
      
      do {
      printf("Please enter a selection\n");
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
    int i, key;       
    
    case 1:
            
      printf("Enter a message to encrypt\n");      
      //scanf("%c", &encryptString[10]);
      char encryptCaesar[]="TEST";
      printf("Enter key value\n");      
      //scanf("%d", &enkey);
      encryptCaesar(encryptCaesar[]);
      printf("%c", encryptCaesar[i]+key);
      break;    
      
    case 2:
    
      printf("case 2 is running\n");
      //scanf("%c", &decryptString[]);
      char decryptCaesar[]="UFTU";
      //scanf("%d", &dekey);
      key =1;
        for (i=0;i<4;i++) 
        {   
        printf("%c", decryptCaesar[i]-key);
        }
       break;
    
    case 3:
    printf("case 3 is running\n");
    char encryptRotate[]="HELP";
    break;
    
    case 4:
    printf("case 4 is running\n");
    char decryptRotate[]="QWER";
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

char caesarCipher(char[]) {
    key =1;
      for (i=0;i<4;i++) 
      {   
      
      }
}