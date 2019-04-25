//--------------------------------------------------------------------------------------
//*********************************Engg1003 Assignment**********************************
//--------------------------------------------------------------------------------------

/*This program allows the user to Cipher and Decipher text in two ways.
The first is with the caesar rotation method, and the second is
with the substitution method.*/

//***********************************inluded libraries**********************************
#include <stdio.h>

//******************************all function prototypes**********************************

//Task 1 function prototype
void caesarEncrypt(char *encryptMessage);

//Task 2 function prototype
void caesarDecrypt(char *decryptMessage);

//Task 3 function prototype
void subEncrypt(char *subEncryptMessage, char *subEncryptString);

//Task 4 function prototype
void subDecrypt(char *subDecryptMessage, char *subDecryptString);

//******************************end of function prototypes*********************************

//**********************************Main body of program***********************************

int main() 
  {
      //char variable for user input to select task
      char select; 
      
      /* the do while loop allows the user to select which task they would like to run
      It has the condition to keep running while the user selects any value less than 
      97 or greater than 102 because the ASCII value for 'a' is 97 and 'f' is 102
      and they are the only selections we want. */
      
      do {
      
      printf("Press 'a' to run task 1\n");
      printf("Press 'b' to run task 2\n");
      printf("Press 'c' to run task 3\n");
      printf("Press 'd' to run task 4\n");
      printf("Press 'e' to run task 5\n");
      printf("Press 'f' to run task 6\n");
      printf("Please enter a selection and press enter: ");
      scanf("%c", &select);
         }

      while (select<97 || select>102);

//printing users selection to the screen
printf("You selected '%c'\n", select);

// subtracted 96 from selection value to get a value between 1 and 6 for the switch statement
select=select-96;

// A switch statement is used to run each assignment task 
switch(select) {
    
// Case 1 runs task 1
    case 1:
      printf("You are running Task 1: Rotation Encryption with key\n");
      printf("The encrypted message is:\n");
      char encryptMessage[1024];
      
      FILE *input;
      input = fopen("message.txt", "r");
      
      if (input==NULL)
      {
          perror("fopen()");
          return 0;
      }
      
      while (!feof(input))
      {
          fscanf(input, "%c", encryptMessage);
          caesarEncrypt(encryptMessage);
      }
      
      fclose(input);
      printf("End of program\n");
      break;    
     
// Case 2 runs task 2
    case 2:   
      printf("You are running Task 2: Rotation Decryption with key\n");
      printf("The decrypted message is:\n");
      char decryptMessage[100000];
      
      FILE *input2;
      input2 = fopen("message2.txt", "r");
      
      if (input2==NULL)
      {
          perror("fopen()");
          return 0;
      }
      
      while (!feof(input2))
      {
          fscanf(input2, "%c", decryptMessage);
          caesarDecrypt(decryptMessage);
      }
           
      fclose(input2);
      printf("\n");
      break;

// Case 3 runs task 3  
    case 3:
    printf("You are running Task 3: Substitution Encryption with key\n");
    char subEncryptMessage[]="PLEASE GET MILK AT THE SHOPS";
    char subEncryptString[]= "QWERTYUIOPASDFGHJKLZXCVBNM";
    subEncrypt(subEncryptMessage, subEncryptString);
    break;
    
// Case 4 runs task 4
    case 4:
    printf("You are running Task 4: Substitution Decryption with key\n");
    char subDecryptMessage[]="HSTQLT UTZ DOSA QZ ZIT LIGHL";
    char subDecryptString[]= "QWERTYUIOPASDFGHJKLZXCVBNM";
    subDecrypt(subDecryptMessage, subDecryptString);
    break;
    
    case 5:
    printf("Sorry Task 5 is currently unavailiable\n");
    break;
    
    case 6:
    printf("Sorry Task 6 is currently unavailiale\n");
    break;
    
    default:
    printf("Error please start again\n");
    break;
}

return 0;
}

//****************************End of main body************************************************

//****************************All function definitions****************************************

//Task 1 function definition
void caesarEncrypt(char *encryptMessage) 
{
      int i=0, key =1;
      //for (i=0;encryptMessage[i]!='\0';i++) 
      //{   
        if (encryptMessage[i]<65||encryptMessage[i]>90 )
        {
            printf("%c",encryptMessage[i]); 
        }
        else 
        {
           encryptMessage[i]=encryptMessage[i]-65; 
           encryptMessage[i]=(encryptMessage[i]+key)%26;
           encryptMessage[i]=encryptMessage[i]+65;
           printf("%c",encryptMessage[i]);
        }

      //}
}

//Task 2 Function definition
void caesarDecrypt(char *decryptMessage) 

{
      int i, key =7;
      for (i=0;decryptMessage[i]!='\0';i++) 
      {
         if (decryptMessage[i]<65||decryptMessage[i]>90 )
        {
            printf("%c",decryptMessage[i]); 
        }
        else 
        {
           decryptMessage[i]=decryptMessage[i]-65; 
           decryptMessage[i]=(decryptMessage[i]-key+26)%26;
           decryptMessage[i]=decryptMessage[i]+65;
           printf("%c",decryptMessage[i]);   
        }
      }
      
}

//Task 3 function definition
void subEncrypt(char *subEncryptMessage, char *subEncryptString)
{
    int i, n;
    
    for(i=0;subEncryptMessage[i]!='\0';i++)
    {
        
        if (subEncryptMessage[i]>=65 && subEncryptMessage[i]<=90 )
        {
            n=subEncryptMessage[i]-65;
            printf("%c",subEncryptString[n]); 
        }
        else 
        {
            printf("%c", subEncryptMessage[i]);
        }
        
    }
        
}

//Task 4 function definition
void subDecrypt(char *subDecryptMessage, char *subDecryptString)
{
    int i, n;
    char key;
    
    for(i=0;subDecryptMessage[i]!='\0';i++)
    {
        if (subDecryptMessage[i]>=65 && subDecryptMessage[i]<=90)
        {
            for (n=0;subDecryptString[n]!=subDecryptMessage[i];n++)
            {
                key=n;
            }
            key=n+65;
            printf("%c", key);
        }
        else 
        {
            printf("%c", subDecryptMessage[i]);
        }
        
    }
}
//****************************End of function definitions***************************