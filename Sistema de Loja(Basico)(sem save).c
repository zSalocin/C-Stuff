#include <stdio.h>
#include <stdlib.h>
struct abc{
char nome[100];
int num,val,quant;
float valor;
};
int main(){
    struct abc reg[100];
int m,la,cod,x,ou=0,gg,tr,ct;
for(;;){
printf("1-Registrar Produto\n2-Consultar Produto\n3-Atualizar Estoque\n4-Venda de Produto\n5-Listar\n6-Sair\nsua opcao: ");
scanf("%d",&m);
system("cls");
if((m!=1)&&(m!=2)&&(m!=3)&&(m!=4)&&(m!=5)&&(m!=6)){printf("Opcao Invalida");}else{
if(m==1){
    for(x=ou;x!=100;x++){
    printf("caso deseje sair do registro digite -1 no codigo do produto");
    for(;;){
            ct=1;
printf("\ndigite o codigo do produto: ");
scanf("%d",&gg);
getchar();
for(tr=0;tr!=100;tr++){
    if(reg[tr].num==gg){printf("\ncodigo ja utilizado\n");ct=9;system("pause");system("cls");}
}
if(ct==1){reg[x].num=gg;break;}
}
if(reg[x].num==-1){reg[x].num=0;break;}else{
    printf("\ndigite o nome do produto: ");
    gets(reg[x].nome);
    printf("\ndigite a data de validade do produto no seguinte formato ddmmaaaa: ");
    scanf("%d",&reg[x].val);
    getchar();
    printf("digite o valor unitario do produto: ");
    scanf("%f",&reg[x].valor);
    getchar();
    printf("digite a quantidade de produto em estoque: ");
    scanf("%d",&reg[x].quant);
    getchar();
    system("cls");
}
}
ou=x;
la=1;
}
if(m==2){
        int po,y=-1;
    printf("digite o codigo do produto: ");
    scanf("%d",&po);
    getchar();
    for(y!=100;y++;){
        if(reg[y].num==po){
            printf("nome: %s\nvalor unitario: %.2f\nquantidade em estoque: %d\n",reg[y].nome,reg[y].valor,reg[y].quant);
            break;
        }
        printf("\nProduto nao cadastrado\n");
        system("pause");system("cls");
    }
}
if(m==3){
        int pa,l=-1;
    printf("digite o codigo do produto: ");
    scanf("%d",&pa);
    getchar();
    for(l!=100;l++;){
        if(reg[l].num==pa){
            printf("Estoque Atual: %d",reg[l].quant);
            printf("\ndigite o novo estoque: ");
            scanf("%d",&reg[l].quant);
            getchar();
            break;
        }
        printf("\nProduto nao cadastrado\n");
        system("pause");system("cls");
    }
}
if(m==4){
        int aa,r=-1,qt;
    printf("digite o codigo do produto: ");
    scanf("%d",&aa);
    getchar();
    for(r!=100;r++;){
        if(reg[r].num==aa){
            printf("\ndigite a quantidade de produto solitada: ");
            scanf("%d",&qt);
            getchar();
            if(reg[r].quant>=qt){
                reg[r].quant=reg[r].quant-qt;
                printf("\nTotal: %f",qt*reg[r].valor);
                break;
            }else{printf("Estoque insuficiente\n");break;}
        }
         printf("\nProduto nao cadastrado\n");
        system("pause");system("cls");
    }
}
if(m==5){
    int j;
    if(la==1){
    for(j=0;j!=ou;j++){
        printf("numero do produto: %d\nNome: %s\nData: %d\nPreco Unico: %f\nQuantidade em estoque: %d",reg[j].num,reg[j].nome,reg[j].val,reg[j].valor,reg[j].quant);
        if(reg[j].quant<=10){printf("\nEstoque Baixo\n");}
    }
    system("pause");
    system("cls");
}else{printf("\nnenhum produto foi registrado\n");}
system("pause");system("cls");
}
if(m==6){printf("Programa Encerrado");break;}
}
}}
