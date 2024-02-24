#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<time.h>
char user_input[5]; 
 int main()
 {
      printf("welocome to AI chat bot\n ");
     while (1)
     {
       printf("==>");  
       gets(user_input);
       if(strcmp(user_input,"exit")==0)
       {
           printf("bot ==>ok byy\n");
           break;
       }
       else if(strcmp(user_input,"hi")==0)
       {
           printf("bot==> hi sir");  
       }
           else if(strcmp(user_input,"what is your name")==0)
           {
               printf("bot==> my name is krishna kashikar");  
     }
     else if(strcmp(user_input,"how are you")==0)
           {
               printf("bot==> i am fine what about you");
        
           }
           
           else if(strcmp(user_input,"what is your age")==0)
           {
               printf("bot==> my age is 18 years"); 
           } 

         else if(strcmp(user_input,"open chrome")==0)
       {
           printf("ok sir, opening chrome\n");  
           system("start chrome");
       }
       else if(strcmp(user_input,"open notepad")==0)
       {
           printf("ok sir, opening notepad editor\n");  
           system("start notepad");
       }

         else if(strcmp(user_input,"open notepad++")==0)
       {
           printf("ok sir ,opening notpad  editor++\n");  
           system("start notepad++");
       } 
       
       } 
      return 0;
     }