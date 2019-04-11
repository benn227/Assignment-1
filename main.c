#include <stdio.h>

void caesarEncrypt(char *encryptMessage);

void caesarDecrypt(char *decryptMessage);

int main() 
  {
      char select=98;
      
      
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
      printf("Case 1 is running\n");
      char encryptMessage[]="TEST plus OTHER $#@T";
      caesarEncrypt(encryptMessage);  
      break;    
      
    case 2:
    
      printf("Case 2 is running\n");
      char decryptMessage[]="TVU TVAOTH: AOL KHAH IYVBNOA AV BZ IF AOL IVAOHU ZWPLZ WPUWVPUAZ AOL LEHJA SVJHAPVU VM AOL LTWLYVY'Z ULD IHAASL ZAHAPVU. DL HSZV RUVD AOHA AOL DLHWVU ZFZALTZ VM AOPZ KLHAO ZAHY HYL UVA FLA VWLYHAPVUHS. DPAO AOL PTWLYPHS MSLLA ZWYLHK AOYVBNOVBA AOL NHSHEF PU H CHPU LMMVYA AV LUNHNL BZ, PA PZ YLSHAPCLSF BUWYVALJALK. IBA TVZA PTWVYAHUA VM HSS, DL'CL SLHYULK AOHA AOL LTWLYVY OPTZLSM PZ WLYZVUHSSF VCLYZLLPUN AOL MPUHS ZAHNLZ VM AOL JVUZAYBJAPVU VM AOPZ KLHAO ZAHY. THUF IVAOHUZ KPLK AV IYPUN BZ AOPZ PUMVYTHAPVU";
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
      int i, key =1;
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