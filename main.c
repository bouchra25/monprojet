#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[],char *envp[]) {
char parametre[200];char nom_projet[50];char command[256];char command1[256];char command2[256];
char command3[256];char command4[256];char var[256];
 if(argc>1){
 //nom_projet="monprojet";
 printf("%d",argc);
 
    mkdir (argv[1]);
    
snprintf(command, sizeof command,"touch %s/main",argv[1]);
system(command);
snprintf(command1, sizeof command1,"touch %s/LICENSE",argv[1]);
system(command1);
snprintf(command2, sizeof command2,"touch %s/Makefile",argv[1]);
system(command2);
   
;return 0;}
  else{printf("Expected arguments, please check the help : initdev –help\n");

 return 1;}
  
 }

