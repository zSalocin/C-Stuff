#include <stdio.h>
#include <stdlib.h>
char v[3][3];
int j=0;
void limpa(){
int z,c;
for(z=0;z<3;z++){
     for(c=0;c<3;c++){
     v[z][c]=' ';
   }
}}
void check(){
if((v[0][0]=='X')&&(v[0][1]=='X')&&(v[0][2]=='X')){printf("O X ganhou\n");system("pause");exit(0);}
if((v[0][0]=='0')&&(v[0][1]=='0')&&(v[0][2]=='0')){printf("O 0 ganhou\n");system("pause");exit(0);}
if((v[1][0]=='X')&&(v[1][1]=='X')&&(v[1][2]=='X')){printf("O X ganhou\n");system("pause");exit(0);}
if((v[1][0]=='0')&&(v[1][1]=='0')&&(v[1][2]=='0')){printf("O 0 ganhou\n");system("pause");exit(0);}
if((v[2][0]=='X')&&(v[2][1]=='X')&&(v[2][2]=='X')){printf("O X ganhou\n");system("pause");exit(0);}
if((v[2][0]=='0')&&(v[2][1]=='0')&&(v[2][2]=='0')){printf("O 0 ganhou\n");system("pause");exit(0);}
if((v[0][0]=='X')&&(v[1][1]=='X')&&(v[2][2]=='X')){printf("O X ganhou\n");system("pause");exit(0);}
if((v[0][0]=='0')&&(v[1][1]=='0')&&(v[2][2]=='0')){printf("O 0 ganhou\n");system("pause");exit(0);}
if((v[2][0]=='X')&&(v[1][1]=='X')&&(v[0][2]=='X')){printf("O X ganhou\n");system("pause");exit(0);}
if((v[2][0]=='0')&&(v[1][1]=='0')&&(v[0][2]=='0')){printf("O 0 ganhou\n");system("pause");exit(0);}
if((v[0][0]=='X')&&(v[1][0]=='X')&&(v[2][0]=='X')){printf("O X ganhou\n");system("pause");exit(0);}
if((v[0][0]=='0')&&(v[1][0]=='0')&&(v[2][0]=='0')){printf("O 0 ganhou\n");system("pause");exit(0);}
if((v[0][1]=='X')&&(v[1][1]=='X')&&(v[2][1]=='X')){printf("O X ganhou\n");system("pause");exit(0);}
if((v[0][1]=='0')&&(v[1][1]=='0')&&(v[2][1]=='0')){printf("O 0 ganhou\n");system("pause");exit(0);}
if((v[0][2]=='X')&&(v[1][2]=='X')&&(v[2][2]=='X')){printf("O X ganhou\n");system("pause");exit(0);}
if((v[0][2]=='0')&&(v[1][2]=='0')&&(v[2][2]=='0')){printf("O 0 ganhou\n");system("pause");exit(0);}
}
void jogo(){
    int a,l1,c1,l2,c2;
char me,p;
 for(j=0;j<9;j++){
    a=j%2;
    if(a==0){p='X';}
    if(a==1){p='0';}
            for(;;){
                    system("cls");
        printf("\n   0   1   2");
        printf("\n0- %c | %c | %c",v[0][0],v[0][1],v[0][2]);
        printf("\n   _   _   _");
        printf("\n1- %c | %c | %c",v[1][0],v[1][1],v[1][2]);
        printf("\n   _   _   _");
        printf("\n2- %c | %c | %c",v[2][0],v[2][1],v[2][2]);
        printf("\nVez do %c, digite sua linha: ",p);
        scanf("%d",&l1);
        printf("\nVez do %c, digite sua coluna: ",p);
        scanf("%d",&c1);
              if((l1<0)||(l1>2)||(c1<0)||(c1>2)){
            printf("\nposicao invalida\n");
            system("pause");
                }else{
                  if(v[l1][c1]!=' '){
                  printf("\nposicao ja ocupada\n");
                  system("pause");
                   }else{
                   v[l1][c1]=p;
                   break;
                        }
                    }
    }
check();
 }
}
int main(){
limpa();
jogo();
 if(j==8){
 printf("\nVelha");}
}
