#include <stdio.h>

void caesarEncrypt(char *encryptMessage);

void caesarDecrypt(char *decryptMessage);

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
    
    case 1:
      printf("Case 1 is runningn\n");
      char encryptMessage[]="TESTZ@";
      caesarEncrypt(encryptMessage);  
      break;    
      
    case 2:
    
      printf("case 2 is running\n");
      char decryptMessage[]="UFTU";
      caesarDecrypt(decryptMessage);
      break;
    
    case 3:
    printf("case 3 is running\n");
    //char encryptRotate[]="HELP";
    break;
    
    case 4:
    printf("case 4 is running\n");
    //char decryptRotate[]="QWER";
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

void caesarEncrypt(char *encryptMessage) 
{
      int i, temp, key =1;
      for (i=0;encryptMessage[i]!='\0';i++) 
      {   
        temp=encryptMessage[i];
        
        if (temp>89) 
        {
            encryptMessage[i] = encryptMessage[i]-26;
        }
        else if (temp<65) 
        {
            printf("error");
            break;
        }
      printf("%c",encryptMessage[i]+key);    
      }
}

      
void caesarDecrypt(char *decryptMessage) {
      int i, key =1;
      for (i=0;decryptMessage[i]!='\0';i++) 
      {   
      printf("%c",decryptMessage[i]-key);    
      }
  }

