#include <stdio.h>
#include <stdlib.h>
int main(){
int c,z,v[3][3],j,a,l1,c1,l2,c2;
   for(z=0;z<3;z++){
     for(c=0;c<3;c++){
v[z][c]=0;
   }
}
 for(j=0;j<9;j++){
    a=j%2;
    if(a==0){
            for(;;){
                    system("cls");
        printf("\n   0   1   2");
        printf("\n0- %d | %d | %d",v[0][0],v[0][1],v[0][2]);
        printf("\n   _   _   _");
        printf("\n1- %d | %d | %d",v[1][0],v[1][1],v[1][2]);
        printf("\n   _   _   _");
        printf("\n2- %d | %d | %d",v[2][0],v[2][1],v[2][2]);
        printf("\nVez do 1, digite sua linha: ");
        scanf("%d",&l1);
        printf("\nVez do 1, digite sua coluna: ");
        scanf("%d",&c1);
              if((l1<0)||(l1>2)||(c1<0)||(c1>2)){
            printf("\nposicao invalida\n");
            system("pause");
                }else{
                  if(v[l1][c1]!=0){
                  printf("\nposicao ja ocupada\n");

                   }else{
                   v[l1][c1]=1;
                   break;
                        }
                    }
    }}else{
        for(;;){
                system("cls");
        printf("\n   0   1   2");
        printf("\n0- %d | %d | %d",v[0][0],v[0][1],v[0][2]);
        printf("\n   _   _   _");
        printf("\n1- %d | %d | %d",v[1][0],v[1][1],v[1][2]);
        printf("\n   _   _   _");
        printf("\n2- %d | %d | %d",v[2][0],v[2][1],v[2][2]);
        printf("\nVez do 2, digite sua linha: ");
        scanf("%d",&l2);
        printf("\nVez do 2, digite sua coluna: ");
        scanf("%d",&c2);
           if((l2<0)||(l2>2)||(c2<0)||(c2>2)){
           printf("\nposicao invalida\n");
           system("pause");
             }else{
                if(v[l2][c2]!=0){
                printf("\nposicao ja ocupada\n");
                system("pause");
                  }else{
                   v[l2][c2]=2;
                   break;
                       }
                  }
    }}
if((v[0][0]==1)&&(v[0][1]==1)&&(v[0][2]==1)){printf("O 1 ganhou\n");system("pause");exit(0);}
if((v[0][0]==2)&&(v[0][1]==2)&&(v[0][2]==2)){printf("O 2 ganhou\n");system("pause");exit(0);}
if((v[1][0]==1)&&(v[1][1]==1)&&(v[1][2]==1)){printf("O 1 ganhou\n");system("pause");exit(0);}
if((v[1][0]==2)&&(v[1][1]==2)&&(v[1][2]==2)){printf("O 2 ganhou\n");system("pause");exit(0);}
if((v[2][0]==1)&&(v[2][1]==1)&&(v[2][2]==1)){printf("O 1 ganhou\n");system("pause");exit(0);}
if((v[2][0]==2)&&(v[2][1]==2)&&(v[2][2]==2)){printf("O 2 ganhou\n");system("pause");exit(0);}
if((v[0][0]==1)&&(v[1][1]==1)&&(v[2][2]==1)){printf("O 1 ganhou\n");system("pause");exit(0);}
if((v[0][0]==2)&&(v[1][1]==2)&&(v[2][2]==2)){printf("O 2 ganhou\n");system("pause");exit(0);}
if((v[2][0]==1)&&(v[1][1]==1)&&(v[0][2]==1)){printf("O 1 ganhou\n");system("pause");exit(0);}
if((v[2][0]==2)&&(v[1][1]==2)&&(v[0][2]==2)){printf("O 2 ganhou\n");system("pause");exit(0);}
if((v[0][0]==1)&&(v[1][0]==1)&&(v[2][0]==1)){printf("O 1 ganhou\n");system("pause");exit(0);}
if((v[0][0]==2)&&(v[1][0]==2)&&(v[2][0]==2)){printf("O 2 ganhou\n");system("pause");exit(0);}
if((v[0][1]==1)&&(v[1][1]==1)&&(v[2][1]==1)){printf("O 1 ganhou\n");system("pause");exit(0);}
if((v[0][1]==2)&&(v[1][1]==2)&&(v[2][1]==2)){printf("O 2 ganhou\n");system("pause");exit(0);}
if((v[0][2]==1)&&(v[1][2]==1)&&(v[2][2]==1)){printf("O 1 ganhou\n");system("pause");exit(0);}
if((v[0][2]==2)&&(v[1][2]==2)&&(v[2][2]==2)){printf("O 2 ganhou\n");system("pause");exit(0);}
 }
 printf("\nVelha");
}

