#include<stdio.h>
 
int main(){

int i=0,j=0,k=0,N;
char s[N] ;
printf("enter la taille de votre chainne de caracteres ");
scanf("%d",&N);
printf("enter votre chaine de caractres   : \n ");
scanf("%S", s);
for (i=0;i<N-1;i++){
    for(j=i+1;j<N;j++){
        if(s[i]==s[j]){
                     k=1;}break;
        

    }

if (i==N-1 || k==1){printf(" ",s[i]);}break;

}



return 0;}

