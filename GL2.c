#include<stdio.h>
 
int main(){

int i=0,k=0,N;
char s[N] ;
printf("enter la taille de votre chainne de caracteres ");
scanf("%d",&N);
printf("enter votre chaine de caractres   : \n ");
scanf("%s", s);
while(s[i]!='\0'&& k==0){
if(s[i]==s[i+1]){printf(" ",s[i]);
k=1;}
else i++;

}if (i==N-1){prinf("NULL\n");}



return 0;}

