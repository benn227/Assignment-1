//--------------------------------------------------------------------------------------
//*********************************ENGG1003 Assignment**********************************
//--------------------------------------------------------------------------------------

/*This program allows the user to Cipher and Decipher text in two ways.
The first is with the caesar rotation method, and the second is with the substitution method. 
The program needs to be run in the termminal so the scanf function works in the initial task 
selection. The messages in task 1 and 2 are read from a text file, and the messages in task 3 
and 4 are hard coded in the string initilisation. Tasks 5 and 6 are not done.*/

//*******************************inluded libraries***************************************
#include <stdio.h>

//****************************all function prototypes***********************************

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
    //char variable for store user input from scanf, to select task in switch statement
    char select; 
      
    /* the 'do while' loop allows the user to select which task they would like to run
    It has the condition to keep running while the user selects any value less than 
    97 or greater than 102 because the ASCII value for 'a' is 97 and 'f' is 102
    and they are the only selections we want. */
    do 
    {
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

    /* subtracted 96 from selection value to get a value between 1 and 6 for the switch 
    statement. ASCII value of 'a' is 97. So by subtracting 96 it will assign 1 to select 
    variable to run case 1*/
    select=select-96;

    // A switch statement is used to run each assignment task 
    switch(select) 
    {
        // Case 1 runs task 1
        case 1:
        //print text just to inform user
        printf("You are running Task 1: Rotation Encryption with key\n");
        printf("The encrypted message is:\n");
        //char array to store message string
        char encryptMessage[1000000];
      
        //open a text file called message and read it
        FILE *input;
        input = fopen("message.txt", "r");
      
        //if can not open input print error message
        if (input==NULL)
        {
            perror("fopen()");
            return 0;
        }
      
        //read input while not end of file and store it in encryptMessage
        while (!feof(input))
        {
            fscanf(input, "%c", encryptMessage);
            //run caesarEncrypt function
            caesarEncrypt(encryptMessage);
        }
      
        //close text file
        fclose(input);
      
        //print text just to tell user the program is finished
        printf("\nEnd of program\n");
        break;    
     
        // Case 2 runs task 2
        case 2:
        //print text just to inform user
        printf("You are running Task 2: Rotation Decryption with key\n");
        printf("The decrypted message is:\n");
        // char array to store message string
        char decryptMessage[1000000];
      
        //open a text file called message2 and read it
        FILE *input2;
        input2 = fopen("message2.txt", "r");
      
        //if can not open input2 print error message
        if (input2==NULL)
        {
            perror("fopen()");
            return 0;
        }
      
        //read input2 while not end of file and store it in decryptMessage
        while (!feof(input2))
        {
            fscanf(input2, "%c", decryptMessage);
            //run caesarDecrypt function
            caesarDecrypt(decryptMessage);
        }
      
        //close text file
        fclose(input2);
      
        //print text just to tell user the program is finished
        printf("\nEnd of program\n");
        break;

        // Case 3 runs task 3  
        case 3:
        //print text just to inform user
        printf("You are running Task 3: Substitution Encryption with key\n");
    
        //2 char arrays to store message string and key string
        char subEncryptMessage[]="PLEASE GET MILK AT THE SHOPS";
        char subEncryptString[]= "QWERTYUIOPASDFGHJKLZXCVBNM";
        
        //run subEncrypt function
        subEncrypt(subEncryptMessage, subEncryptString);
    
        //print text just to tell user the program is finished
        printf("\nEnd of program\n");
        break;
    
        // Case 4 runs task 4
        case 4:    
        //print text just to inform user
        printf("You are running Task 4: Substitution Decryption with key\n");
    
        //Two char arrays to store message string and key string
        char subDecryptMessage[]="HSTQLT UTZ DOSA QZ ZIT LIGHL";
        char subDecryptString[]= "QWERTYUIOPASDFGHJKLZXCVBNM";
    
        //run subDecrypt function
        subDecrypt(subDecryptMessage, subDecryptString);
    
        //print text just to tell user the program is finished
        printf("\nEnd of program\n");
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

/*This function takes an input from a pointer to the encryptMessage string (initialised to
1000000 bytes), then encrypts the message by rotating the value the key ammount, then printing 
it to the screen. It has no return value*/

void caesarEncrypt(char *encryptMessage) 
{
    //set i to the first position of the string
    int i=0, key =7;
      
    // if statement to just print all charactors that are not capital letters
    if (encryptMessage[i]<65||encryptMessage[i]>90 )
    {
         printf("%c",encryptMessage[i]); 
    }
    //else statement to encrypt capital letters
    else 
    {
        //subtract 65 from ASCII value of char to give a value between 0 and 26
        encryptMessage[i]=encryptMessage[i]-65; 
        //add the key value to rotate the message char, 
        //then find modulus to rotate value when it becomes larger than 26
        encryptMessage[i]=(encryptMessage[i]+key)%26;
        //add 65 to get final ASCII value
        encryptMessage[i]=encryptMessage[i]+65;
        printf("%c",encryptMessage[i]);
    }
}

//Task 2 Function definition
/*This function takes an input from the pointer to the decryptMessage string (initialised
to 1000000 bytes) and decrypts the message by rotating the value back the ammount of the key, 
then printing it to the screen. It has no return value*/

void caesarDecrypt(char *decryptMessage) 
{    
    //set i to the first position of the string
    int i=0, key =7;
      
    // if statement to just print all charactors that are not capital letters
    if (decryptMessage[i]<65||decryptMessage[i]>90 )
    {
         printf("%c",decryptMessage[i]); 
    }
    // else staement to decrypt capital letters
    else 
    {
        //subtract 65 from ASCII value of char to give a value between 0 and 26
        decryptMessage[i]=decryptMessage[i]-65; 
        //subtract the key value to rotate the message char back,
        //also add 26 to ensure the value is always positive
        //then find modulus to rotate value when it becomes larger than 26
        decryptMessage[i]=(decryptMessage[i]-key+26)%26;
        //add 65 to get final ASCII value
        decryptMessage[i]=decryptMessage[i]+65;
        printf("%c",decryptMessage[i]);   
    }  
}

//Task 3 function definition
/*This function takes an input from two pointers. One from the subEncryptMessage string and 
the other from the subEncryptString, which are both initialised automatically in the hard code. 
It then substitutes the subEncryptMessage char with one in subEncryptString. 
It has no return value*/

void subEncrypt(char *subEncryptMessage, char *subEncryptString)
{
    //integer declared to use for counting each string position
    int i, n;
    
    printf("The decrpted message is:\n");
    
    //for loop to read each charator in the subDecryptMessage string
    //i is set to 0 so it starts from the first position in the string
    //then keeps adding 1 until it sees the terminating 0 (NULL)
    for(i=0;subEncryptMessage[i]!='\0';i++)
    {
        //if statement to encrypt only capital letters
        if (subEncryptMessage[i]>=65 && subEncryptMessage[i]<=90 )
        {
            n=subEncryptMessage[i]-65;
            printf("%c",subEncryptString[n]); 
        }
        //else statement just prints all charactors that are not capitals
        else 
        {
            printf("%c", subEncryptMessage[i]);
        }
        
    }
        
}

//Task 4 function definition
/*This function takes an input from two pointers. One from the subDecryptMessage string and 
the other from the subDecryptString, which are both initialised automatically in the hard code. 
It then substitutes the subDecryptMessage char with one in subDecryptString. 
It has no return value*/
void subDecrypt(char *subDecryptMessage, char *subDecryptString)
{
    // integer declared to use for counting each string position
    int i, n;
    //char declared to use for the decrypted letter
    char key;
    
    printf("The decrypted message is:\n");
    
    //for loop to read each charator in the subDecryptMessage string
    //i is set to 0 so it starts from the first position in the string
    //then keeps adding 1 until it sees the terminating 0 (NULL)
    for(i=0;subDecryptMessage[i]!='\0';i++)
    {
        //if statement to encrypt only capital letters
        if (subDecryptMessage[i]>=65 && subDecryptMessage[i]<=90)
        {
            //for loop tests subDecryptMessage string until it equals subDecryptString char 
            //value, then stores the position it is at in key variable
            for (n=0;subDecryptString[n]!=subDecryptMessage[i];n++)
            {
                key=n;
            }
            //add 65 to give ASCII value of the char
            key=n+65;
            printf("%c", key);
        }
        //else statement just prints all charactors that are not capitals
        else 
        {
            printf("%c", subDecryptMessage[i]);
        }
        
    }
}
//****************************End of function definitions***************************