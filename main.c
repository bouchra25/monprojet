#include <stdio.h>
#include <stdlib.h>
#include <dir.h>
#include <windows.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 int initdev(char nom_projet[50])
 {printf("enterez le nom de votre projet :");
  scanf("%s",&nom_projet);
 nom_projet="monprojet";
    mkdir (nom_projet);

    FILE* fichier1 = NULL;
    FILE* fichier2 = NULL;
    FILE* fichier3 = NULL;
  fichier1 = fopen("C:/Users/micro/Desktop/initdev/monprojet/main","w");//a LINUX on ecrit fichier = fopen("/home/mateo/dossier/readme.txt", "w");
  fichier2 = fopen("C:/Users/micro/Desktop/initdev/monprojet/LICENSE","w");
  fichier3 = fopen("C:/Users/micro/Desktop/initdev/monprojet/Makefile","w");
  return 0;
 }
int main(int argc, char *argv[]) {
 int r ;char nom_projet[50];

r=initdev(nom_projet);
if(r!=0)
{
printf("Expected arguments, please check the help : initdev –help");
return 1;}

return 0;}
