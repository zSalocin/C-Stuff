//V- 1.9.4
#include <stdio.h>
#include <stdlib.h>
#define max 5

void conversor(){
int y,j=-1,x[999],a,o;;
for(;;){
        system("pause");
        system("cls");
    printf("0-Sair\n1-Decimal->Binario\n2-Binario->Decimal\nSua opcao: ");
scanf("%d",&y);
j=-1;
switch(y){
case 0:
    break;
case 1:
    printf("digite um numero: ");
    scanf("%d",&a);
    for(;;){
        j++;
        if((a==1)||(a==0)){
            if(a==1){
                x[j]=1;
            }
            if(a==0){
                x[j]=0;
            }
            break;
        }else{
            x[j]=a%2;
            a=a/2;
        }
    }
    for(o=j;o>=0;o--)
        printf("%d",x[o]);
        printf("\n");
    break;
case 2:
    printf("\nainda em desenvolvimento\n");
    break;
default:
   printf("\nopcao invalida\n");

}
if(y==0)
    break;
    }
}

void remov(int *memo,int *ind){
//funciona no entanto se eu retiro da posição 3 na hora de prencher ele prenche na 1
int n,j;
if(*ind==-1){
    printf("\nLista vazia\n");
}else{
    printf("\ndigite a posicao da qual deseja remover\n");
    scanf("%d",&n);
        if((n>max-1)||(n<0)){
            printf("numero invalido");
        }else{
            if(n>*ind){
                printf("\nposicao vazia\n");
            }else{
                printf("\nSaida: %d\n",memo[n]);
                for(j=n;j!=max;j++){
                    memo[j]=memo[j+1];
                }
            }
        }
    }
}

void sob(int * memo,int *ind){
int n,j,o,p;
if(*ind==max-1){
    printf("\nLista cheia\n");
}else{
    if(*ind==-1)
        printf("\nensira a posicao disponivel de 0 a 0: ",*ind);
    if(*ind>-1)
        printf("\nensira a posicao disponivel de 0 a %d: ",*ind+1);
    scanf("%d",&n);
    printf("\ninsira o numero: ");
    scanf("%d",&o);
    if((n<0)||(n>*ind+1)){
        printf("\nposicao invalida\n");
    }else{
        p=0;
        for(j=0;j<=max;j++){
            if(memo[j]==o){
            p=1;
            }
        }
        if(p==1){
            printf("\nnumero repetido\n");
        }else{
                for(j=max-2;j!=n;j--){
                    memo[j+1]=memo[j];
                }
            memo[n]=o;
            *ind=*ind+1;
        }
    }
}
}

void ins(int *memo,int *ind){
int p,n,j;
if(*ind==max-1){
        printf("\nlista cheia\n");
}else{
    printf("\ndigite um numero: ");
    scanf("%d",&n);
    fflush(stdin);
    p=0;
    for(j=0;j!=max;j++){
        if(memo[j]==n){
            p=9;
        }
    }
    if(p==9){
        printf("\nnumero repetido\n");
    }else{
        *ind=*ind+1;
        memo[*ind]=n;
        }
    }
}

void listagem(int *memo,int *ind){
int n;
if(*ind==-1){
    printf("\nlista vazia\n");
}else{
    for(n=0;n<=*ind;n++){
            printf("\n%d\n",memo[n]);
    }
}
}

void listagemp(int *memo,int *ind){
int n;
if(*ind==-1){
    printf("\nlista vazia\n");
}else{
    for(n=*ind;n>=0;n--){
        printf("\n%d\n",memo[n]);
        }
    }
}

void pro(int *memo){
int n,j,o,p;
printf("\ndigite o numero: ");
scanf("%d",&j);
o=0;
for(n=0;n!=max;n++)
    if(memo[n]==j){
            p=n;
            o=1;
    }
if(o==1){
    printf("\nposicao do numero %d\n",p);
}else{
    printf("\nnumero nao encontrado\n");
    }
}

void lista(){
int y,o;
struct lista{
    int memo[max];
    int ind;
};
struct lista lis;
lis.ind=-1;
for(;;){
    system("pause");
    system("cls");
    printf("digite:\n0-Sair\n1-Inserir\n2-Remover\n3-Listar\n4-Buscar numero\n5-Inserir AnyWhere\n6-Remover AnyWhere\nSua opcao: ");
    scanf("%d",&y);
    switch(y){
case 0:
    break;
case 1:
    ins(lis.memo,&lis.ind);
    break;
case 2:
    if(lis.ind==-1){
            printf("\ninvalido\n");
    }else{
       printf("\nsaida: %d\n",lis.memo[0]);
       lis.ind=lis.ind-1;
       for(o=1;o!=max;o++){
            lis.memo[o-1]=lis.memo[o];
            }
       }
    break;
case 3:
    listagem(lis.memo,&lis.ind);
    break;
case 4:
    pro(lis.memo);
    break;
case 5:
    sob(lis.memo,&lis.ind);
    break;
case 6:
     remov(lis.memo,&lis.ind);
    break;
default:
    printf("\nComando Invalido\n");
    }
if(y==0)
    break;
}
}

void pilha(){
int y;
struct pilha{
    int me[max];
    int in;
};
struct pilha pi;
pi.in=-1;
for(;;){
    system("pause");
    system("cls");
    printf("digite:\n0-Sair\n1-Inserir\n2-Remover\n3-Listar\n4-Buscar\n5-Topo\nsua opcao: ");
    scanf("%d",&y);
    switch(y){
case 0:
    break;
case 1:
    ins(pi.me,&pi.in);
    break;
case 2:
    if(pi.in==-1){
        puts("lista vazia");
    }else{
        printf("\nsaida: %d\n",pi.me[pi.in]);
        pi.me[pi.in]=rand();
        pi.in=pi.in-1;
    break;
case 3:
    listagemp(pi.me,&pi.in);
    break;
case 4:
    pro(pi.me);
    break;
case 5:
    if(pi.in==-1){
        printf("\nLista Vazia\n");
    }else{
        printf("\nTopo: %d\n",pi.me[pi.in]);
    }
    break;
default:
    printf("\nnumero invalido\n");
}
if(y==0)
    break;
    }
}
}

void fila(){
int y,o,p;
struct fila{
    int ind;
    int memo[max];
};
struct fila fil;
fil.ind=-1;
for(;;){
    system("pause");
    system("cls");
    printf("0-Sair\n1-Inserir\n2-Remover\n3-Listar\n4-Preferencial\n5-Furar Fila\nDigite sua opcao: ");
    scanf("%d",&y);
    switch(y){
case 0:
    break;
case 1:
    ins(fil.memo,&fil.ind);
    break;
case 2:
    if(fil.ind==-1){
        printf("\ninvalido\n");
    }else{
       printf("\nsaida: %d\n",fil.memo[0]);
       fil.ind=fil.ind-1;
       for(o=1;o!=max;o++){
            fil.memo[o-1]=fil.memo[o];
       }
    }
    break;
case 3:
    listagem(fil.memo,&fil.ind);
    break;
case 4:
    if(fil.ind=max-1){
        printf("\nfila cheia\n");
    }else{
        printf("\nInsira o numero: ");
        scanf("%d",&p);
        for(o=1;o!=max;o++){
            fil.memo[o-1]=fil.memo[o];
        }
        fil.memo[0]=p;
    }
    break;
case 5:
    sob(fil.memo,&fil.ind);
    break;
default:
    printf("\nposicao invalida\n");
    }
if(y==0)
    break;
}}
//fazendo atualmente
void fila_circular(){
    int y;
struct fila_circular{
    int memo[max];
    int c,f,tot;
};
struct fila_circular fil;
for(;;){
    system("pause");
    system("cls");
    printf("0-Sair\n1-Adicionar\n2-Remover\n3-Listar\nSua opcao: ");
    scanf("%d",&y);

}
}

int main(){
    int x;
for(;;){
    system("pause");
system("cls");
printf("Digite: \n0-Sair\n1-Lista\n2-Pilha\n3-Conversor Decimal<->Binario\n4-Fila\n5-Fila Circular\nsua opcao: ");
scanf("%d",&x);
switch(x){
case 0:
    break;
case 1:
    lista();
    break;
case 2:
    pilha();
    break;
case 3:
    conversor();
    break;
case 4:
    fila();
    break;
case 5:
    fila_circular();
    break;
default:
    puts("opcao invalida");
}
if(x==0)
    break;
}}
