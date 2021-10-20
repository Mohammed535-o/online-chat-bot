#include<stdio.h>
#include<string.h>
#include<conio.h>
#include"calc.h"
#include<windows.h>
#include<dos.h>
char command[1000];
int timer()
{
       int i,j,k,h,m,s;
             printf("enter hours : ");
              scanf("%2d",&h);
             printf("enter minutes : ");
              scanf("%2d",&m);
              printf("enter seconds : ");
              scanf("%2d",&s);
          for(int i=0;i<=23;i++)
            {
                    for(int j=0;j<=59;j++)
                {
                             for(int k=0;k<=59;k++)
                            {
                                        printf("\n%2d:%2d:%2d",i,j,k);
                                        Sleep(1000);
                                        system("cls");
                                        if(i>=h&&j>=m&&k>=s)
                                               break;
                             }
                     printf("\n%2d:%2d:%2d",i,j,k);
                     system("cls");
                     if(i>=h&&j>=m)
                              break;
                 }
              printf("\n%2d:%2d:%2d",i,j,k);
              system("cls");
              if(i>=h)
                            break;
           }
           printf("%2d:%2d:%2d\n\n",h,m,s);
}
int main()
{
       printf("*Welcome\n\n");
       char t[1000];

              s:
              {
                     fflush(stdin);
                     gets(t);
              }
       if(strcmp(t,"hi")==0||strcmp(t,"hello")==0||strcmp(t,"hey")==0||strcmp(t,"hello")==0)
       {
              printf("hello\n\n");
              char phrase[100] = "hello";
              strcpy(command,"espeak -v +m2 \"");
              strcat(command,phrase);
              strcat(command,"\"");
              system(command);
              goto s;
       }
      else if(strcmp(t,"how are you")==0)
      {
              printf("-->i am fine, how are you\n\n");
              char phrase[100] = "i am fine, how are you";
              strcpy(command,"espeak -v +m2 \"");
              strcat(command,phrase);
              strcat(command,"\"");
              system(command);
              char y[1000];
              gets(y);
       if(strcmp(y,"i am fine")==0||strcmp(y,"i am good")==0||strcmp(y,"good")==0||strcmp(y,"fine")==0)
       {
             printf("its good to hear that you are fine\n\n");
             char phrase[100] = "its good to hear that you are fine";
              strcpy(command,"espeak -v +m2 \"");
              strcat(command,phrase);
              strcat(command,"\"");
              system(command);
             goto s;
        }
        else
              goto s;
      }
      else if(strcmp(t,"bye")==0)
      {
             printf("-->bye! see you again\n\n");
             char phrase[100] = "bye! see you again";
            strcpy(command,"espeak -v +m2 \"");
              strcat(command,phrase);
              strcat(command,"\"");
              system(command);
      }
      else if(strcmp(t,"what's your name?")==0)
      {
             printf("-->people call me as TURGUT\n\n");
             char phrase[100] = "people call me as TURGUT";
              strcpy(command,"espeak -v +m2 \"");
              strcat(command,phrase);
              strcat(command,"\"");
              system(command);
             goto s;
      }
      else if(strcmp(t,"add")==0||strcmp(t,"+")==0)
      {
             int a,b;
             printf("enter two numbers to be added : ");
             char phrase[100] = "enter two numbers to be added : ";
              strcpy(command,"espeak -v +m2 \"");
              strcat(command,phrase);
              strcat(command,"\"");
              system(command);
             scanf("%d %d",&a,&b);
             add(a,b);
             goto s;
      }
      else if(strcmp(t,"-")==0||strcmp(t,"sub")==0)
      {
             int a,b;
             printf("enter two numbers to be subtracted : ");
             char phrase[100] = "enter two numbers to be subtracted : ";
              strcpy(command,"espeak -v +m2 \"");
              strcat(command,phrase);
              strcat(command,"\"");
              system(command);
             scanf("%d %d",&a,&b);
             sub(a,b);
             goto s;
      }
      else if(strcmp(t,"*")==0||strcmp(t,"mul")==0)
      {
             int a,b;
             printf("enter two numbers : ");
             char phrase[100] = "enter two numbers : ";
              strcpy(command,"espeak -v +m2 \"");
              strcat(command,phrase);
              strcat(command,"\"");
              system(command);
             scanf("%d %d",&a,&b);
             pdt(a,b);
             goto s;
      }
      else if(strcmp(t,"/")==0||strcmp(t,"divs")==0)
      {
             int a,b;
             printf("enter two numbers : ");
             char phrase[100] = "enter two numbers : ";
              strcpy(command,"espeak -v +m2 \"");
              strcat(command,phrase);
              strcat(command,"\"");
              system(command);
             scanf("%d %d",&a,&b);
             if(b!=0)
                  divs(a,b);
             else
                  printf("%d/%d = Infinity\n",a,b);
             goto s;
      }
      else if(strcmp(t,"sqrt")==0||strcmp(t,"2r")==0)
      {
             int a;
             printf("enter a number : ");
             char phrase[100] = "enter a number : ";
              strcpy(command,"espeak -v +m2 \"");
              strcat(command,phrase);
              strcat(command,"\"");
              system(command);
             scanf("%d",&a);
             sroot(a);
             goto s;
      }
      else if(strcmp(t,"fuck")==0)
      {
             printf("i did not expect this from u\n\n ");
             char phrase[100] = "i did not expect this from u";
              strcpy(command,"espeak -v +m2 \"");
              strcat(command,phrase);
              strcat(command,"\"");
              system(command);
             goto s;
      }
      else if(strcmp(t,"will u marry me")==0)
      {
             printf("i am sorry i am already married to my duty\n\n");
             char phrase[100] = "i am sorry i am already married to my duty";
              strcpy(command,"espeak -v +m2 \"");
              strcat(command,phrase);
              strcat(command,"\"");
              system(command);
             goto s;
      }
     else if(strcmp(t,"who is creator")==0||strcmp(t,"who created u")==0||strcmp(t,"who is your founder")==0)
     {
              printf("Mohammed Zubair Created me\n\n");
            char phrase[100] = "MOHAMMED ZUBAIR CREATED ME";
            strcpy(command,"espeak -v +m2 \"");
              strcat(command,phrase);
              strcat(command,"\"");
              system(command);
            goto s;
     }
      else if(strcmp(t,"what can you do for me")==0)
      {
             printf("i can do calculations for u,tell you jokes ,i can set timer and more than that i can chat with you\n\n");
             char phrase[100] = "i can do calculations for u,tell you jokes ,i can set timer and more than that i can chat with you";
              strcpy(command,"espeak -v +m2 \"");
              strcat(command,phrase);
              strcat(command,"\"");
              system(command);
             goto s;
      }
      else if(strcmp(t,"tell me a joke")==0)
      {
             printf("there was a man holding ice in his hand in the broad daylight\n a boy passing by asked the man that what he was doing\n the man replied'i am seeing from where the water is leaking'\n\n");
             char phrase[1000] = "there was a man holding ice in his hand in the broad daylight a boy passing by asked the man that what he was doing the man replied 'i am seeing from where the water is leaking' HAHAHAH";
              strcpy(command,"espeak -v +m2 \"");
              strcat(command,phrase);
              strcat(command,"\"");
              system(command);
             goto s;
      }
      else if(strcmp(t,"what came first egg or hen")==0||strcmp(t,"what came first hen or egg")==0||strcmp(t,"egg or hen first")==0)
      {
             printf("humans came first not their children,\n so similarly hen came first not egg\n end of the debate\n\n");
             char phrase[1000] = "humans came first not their children, so similarly hen came first not egg,   end of the debate hehe huhu hehe huhu hehe";
             strcpy(command,"espeak -v +m2 \"");
             strcat(command,phrase);
             strcat(command,"\"");
             system(command);
             goto s;
      }
      else if(strcmp(t,"ok")==0||strcmp(t,"good")==0)
      {
             printf("thank you sir\n\n");
             char phrase[100] = "thank you sir";
             strcpy(command,"espeak -v +m2 \"");
             strcat(command,phrase);
             strcat(command,"\"");
             system(command);
             goto s;
      }
      else if(strcmp(t,"set timer")==0||strcmp(t,"turgut set timer")==0||strcmp(t,"hey turgut set timer")==0)
      {

              timer();

              char phrase[100] = "time is up man";
              strcpy(command,"espeak -v +m2 \"");
              strcat(command,phrase);
              strcat(command,"\"");
              system(command);
              goto s;

      }
      else if(strcmp(t,"shutdown system turgut")==0)
      {

             printf("Shutting down....\n");
             char phrase[100] = "shutting down sir...";
             strcpy(command,"espeak -v +m2 \"");
             strcat(command,phrase);
             strcat(command,"\"");
             system(command);
             system("c:\\windows\\system32\\shutdown /s");
      }
      else if(strcmp(t,"open google")==0)
      {
             printf("Opening Google....\n");
             char phrase[100] = "Opening Google";
             strcpy(command,"espeak -v +m2 \"");
             strcat(command,phrase);
             strcat(command,"\"");
             system(command);
             system("START www.google.com");
             goto s;
      }
      else if(strcmp(t,"open youtube")==0)
      {

             printf("Opening Youtube....\n");
             char phrase[100] = "opening youtube";
             strcpy(command,"espeak -v +m2 \"");
             strcat(command,phrase);
             strcat(command,"\"");
             system(command);
             system("START www.youtube.com");
             goto s;
      }
      else if(strcmp(t,"weather")==0)
      {
             printf("Showing weather...\n");
             char phrase[100] = "showing weather";
             strcpy(command,"espeak -v +m2 \"");
             strcat(command,phrase);
             strcat(command,"\"");
             system(command);
             system("START https://www.google.com/search?q=weather+today");
             goto s;
      }
      else if(strcmp(t,"open facebook")==0)
      {
             printf("Opening Facebook...\n");
             char phrase[100] = "opening facebook";
             strcpy(command,"espeak -v +m2 \"");
             strcat(command,phrase);
             strcat(command,"\"");
             system(command);
             system("START www.facebook.com");
             goto s;
      }
      else if(strcmp(t,"open instagram")==0)
      {
             printf("Opening Instagram...\n");
             char phrase[100] = "opening instagram";
             strcpy(command,"espeak -v +m2 \"");
             strcat(command,phrase);
             strcat(command,"\"");
             system(command);
             system("START www.instagram.com");
             goto s;
      }
      else if(strcmp(t,"open codechef")==0)
      {
             printf("Opening Codechef...\n");
             char phrase[100] = "opening codechef";
             strcpy(command,"espeak -v +m2 \"");
             strcat(command,phrase);
             strcat(command,"\"");
             system(command);
             system("START www.codechef.com");
             goto s;
      }
      else if(strcmp(t,"open codeforces")==0)
      {
             printf("Opening Codeforces...\n");
             char phrase[100] = "opening codeforces";
             strcpy(command,"espeak -v +m2 \"");
             strcat(command,phrase);
             strcat(command,"\"");
             system(command);
             system("START www.codeforces.com");
             goto s;
      }
      else if(strcmp(t,"open wa")==0)
      {
             printf("Opening whatsapp...\n");
             char phrase[100] = "opening whatsapp";
             strcpy(command,"espeak -v +m2 \"");
             strcat(command,phrase);
             strcat(command,"\"");
             system(command);
             system("START https://web.whatsapp.com/");
             goto s;
      }
      else if(strcmp(t,"open fox")==0)
      {
             printf("Opening firefox...\n");
             char phrase[100] = "opening firefox";
             strcpy(command,"espeak -v +m2 \"");
             strcat(command,phrase);
             strcat(command,"\"");
             system(command);
             system("START firefox.exe");
             goto s;
      }
      else
      {
              printf("-->i did not get you, can you be more clear\n\n");
              char phrase[100] = "i did not get you, can you be more clear";
              strcpy(command,"espeak -v +m2 \"");
              strcat(command,phrase);
              strcat(command,"\"");
              system(command);
             goto s;
      }
      getch();
      return 0;
}
