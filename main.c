#include <stdio.h>

void caesarEncrypt(char *encryptMessage);

void caesarDecrypt(char *decryptMessage);

void subEncrypt(char *subEncryptMessage, char *subEncryptString);

void subDecrypt(char *subDecryptMessage, char *subDecryptString);

int main() 
  {
      char select=100;
      
      
      do {
      
      printf("Press 'a' to run task 1\n");
      printf("Press 'b' to run task 2\n");
      printf("Press 'c' to run task 3\n");
      printf("Press 'd' to run task 4\n");
      printf("Press 'e' to run task 5\n");
      printf("Press 'f' to run task 6\n");
      printf("Please enter a selection: ");
      //scanf("%c", &select);
         }

      while (select<97 || select>102);


printf("You selected '%c'\n", select);

select=select-96;

switch(select) {
    
    case 1:
      printf("Enter the message to encrypt:\n");
      char encryptMessage[1024]="TEST A SENTENCE" ;
      //scanf("%c", &encryptMessage[1024]);
      printf("The encrypted message is: ");      
      caesarEncrypt(encryptMessage);  
      break;    
      
    case 2:    
      printf("Enter the message to decrypt:\n");
      char decryptMessage[]="TVU TVAOTH: AOL KHAH IYVBNOA AV BZ IF AOL IVAOHU ZWPLZ WPUWVPUAZ AOL LEHJA SVJHAPVU VM AOL LTWLYVY'Z ULD IHAASL ZAHAPVU. DL HSZV RUVD AOHA AOL DLHWVU ZFZALTZ VM AOPZ KLHAO ZAHY HYL UVA FLA VWLYHAPVUHS. DPAO AOL PTWLYPHS MSLLA ZWYLHK AOYVBNOVBA AOL NHSHEF PU H CHPU LMMVYA AV LUNHNL BZ, PA PZ YLSHAPCLSF BUWYVALJALK. IBA TVZA PTWVYAHUA VM HSS, DL'CL SLHYULK AOHA AOL LTWLYVY OPTZLSM PZ WLYZVUHSSF VCLYZLLPUN AOL MPUHS ZAHNLZ VM AOL JVUZAYBJAPVU VM AOPZ KLHAO ZAHY. THUF IVAOHUZ KPLK AV IYPUN BZ AOPZ PUMVYTHAPVU";
      printf("The decrypted message is: ");
      caesarDecrypt(decryptMessage);
      break;
    
    case 3:
    printf("case 3 is running\n");
    char subEncryptMessage[]="PLEASE GET MILK AT THE SHOPS";
    char subEncryptString[]= {'Q','W','E','R','T','Y','U','I','O','P','A','S','D','F','G','H','J','K','L','Z','X','C','V','B','N','M'};
    subEncrypt(subEncryptMessage, subEncryptString);
    break;
    
    case 4:
    printf("case 4 is running\n");
    char subDecryptMessage[]="HSTQLT UTZ DOSA QZ ZIT LIGHL";
    char subDecryptString[]= {'Q','W','E','R','T','Y','U','I','O','P','A','S','D','F','G','H','J','K','L','Z','X','C','V','B','N','M'};
    subDecrypt(subDecryptMessage, subDecryptString);
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
      int i, key =7;
      for (i=0;encryptMessage[i]!='\0';i++) 
      {   
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
      }
}

      
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

void subEncrypt(char *subEncryptMessage, char *subEncryptString)
{
    int i, n;
    
    for(i=0;subEncryptMessage[i]!='\0';i++)
    {
        
        if (subEncryptMessage[i]>=65 && subEncryptMessage[i]<=90 )
        {
            subEncryptMessage[i]=subEncryptMessage[i]-65; 
            n=subEncryptMessage[i]%26;
            printf("%c",subEncryptString[n]); 
        }
        else 
        {
            printf("%c", subEncryptMessage[i]);
        }
        
    }
        
}

void subDecrypt(char *subDecryptMessage, char *subDecryptString)
{
    int i, n, x, y;
    
    for(i=0;subDecryptMessage[i]!='\0';i++)
    {
        //printf("%d-", subDecryptMessage[i]);
        if (subDecryptMessage[i]>=65 && subDecryptMessage[i]<=90)
        {
            subDecryptMessage[i]=subDecryptMessage[i]-65; 
            n=subDecryptMessage[i]%26;
            printf("%c",subDecryptString[n]); 
        }
        else 
        {
            printf("%c", subDecryptMessage[i]);
        }
        
    }
}