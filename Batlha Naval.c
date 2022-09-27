#include <stdio.h>
#include <stdlib.h>
//tirar dois iguais '==' nos set de vetor
char v1[10][10],v2[10][10],v3[10][10],v4[10][10];
void jogada1(){
    int a,b;
    for(;;){
        system("cls");
            lcd1();
printf("\n~ - agua  X-Destruido  e- sua embarcacao\n");
printf("jogador 1 digite sua linha e coluna:\n");
scanf("%d %d",&a,&b);
if(v3[a][b]==' '){printf("\nvoce ja jogou nessa posicao");}else{
if(v2[a][b]=='e'){v3[a][b]=='X';v2[a][b]=='X';}
if(v2[a][b]==' '){v3[a][b]=='~';v2[a][b]=='~';}
break;
}}
}
void jogada2(){
    int a,b;
    for(;;){
            system("cls");
            lcd2();
printf("\n~ - agua  X-Destruido  e- sua embarcacao\n");
printf("jogador 2 digite sua linha e coluna:\n");
scanf("%d %d",&a,&b);
if(v4[a][b]==' '){printf("\nvoce ja jogou nessa posicao");}else{
if(v1[a][b]=='e'){v4[a][b]=='X';v2[a][b]=='X';}
if(v1[a][b]==' '){v4[a][b]=='~';v1[a][b]=='~';}
break;
}}
}
void setboat1(){
    system("cls");
printf("jogador 1 declare a posicao de suas embarcacoes\n voce tem: 2 destroyer, 1 Submarinos e 1 porta avioes\n");
system("pause");
destroyer1();
destroyer1();
submarino1();
porta1();
}
void setboat2(){
    system("cls");
printf("jogador 2 declare a posicao de suas embarcacoes\nvoce tem: 2 destroyer, 1 Submarinos e 1 porta avioes\n");
system("pause");
destroyer2();
destroyer2();
submarino2();
porta2();
}
void lcd1(){
system("cls");
printf("\n  0 1 2 3 4 5 6 7 8 9\n");
printf("0 %c %c %c %c %c %c %c %c %c %c\n",v1[0][0],v1[0][1],v1[0][2],v1[0][3],v1[0][4],v1[0][5],v1[0][6],v1[0][7],v1[0][8],v1[0][9]);
printf("1 %c %c %c %c %c %c %c %c %c %c\n",v1[1][0],v1[1][1],v1[1][2],v1[1][3],v1[1][4],v1[1][5],v1[1][6],v1[1][7],v1[1][8],v1[1][9]);
printf("2 %c %c %c %c %c %c %c %c %c %c\n",v1[2][0],v1[2][1],v1[2][2],v1[2][3],v1[2][4],v1[2][5],v1[2][6],v1[2][7],v1[2][8],v1[2][9]);
printf("3 %c %c %c %c %c %c %c %c %c %c\n",v1[3][0],v1[3][1],v1[3][2],v1[3][3],v1[3][4],v1[3][5],v1[3][6],v1[3][7],v1[3][8],v1[3][9]);
printf("4 %c %c %c %c %c %c %c %c %c %c\n",v1[4][0],v1[4][1],v1[4][2],v1[4][3],v1[4][4],v1[4][5],v1[4][6],v1[4][7],v1[4][8],v1[4][9]);
printf("5 %c %c %c %c %c %c %c %c %c %c\n",v1[5][0],v1[5][1],v1[5][2],v1[5][3],v1[5][4],v1[5][5],v1[5][6],v1[5][7],v1[5][8],v1[5][9]);
printf("6 %c %c %c %c %c %c %c %c %c %c\n",v1[6][0],v1[6][1],v1[6][2],v1[6][3],v1[6][4],v1[6][5],v1[6][6],v1[6][7],v1[6][8],v1[6][9]);
printf("7 %c %c %c %c %c %c %c %c %c %c\n",v1[7][0],v1[7][1],v1[7][2],v1[7][3],v1[7][4],v1[7][5],v1[7][6],v1[7][7],v1[7][8],v1[7][9]);
printf("8 %c %c %c %c %c %c %c %c %c %c\n",v1[8][0],v1[8][1],v1[8][2],v1[8][3],v1[8][4],v1[8][5],v1[8][6],v1[8][7],v1[8][8],v1[8][9]);
printf("9 %c %c %c %c %c %c %c %c %c %c\n",v1[9][0],v1[9][1],v1[9][2],v1[9][3],v1[9][4],v1[9][5],v1[9][6],v1[9][7],v1[9][8],v1[9][9]);
printf("\n  0 1 2 3 4 5 6 7 8 9\n");
printf("0 %c %c %c %c %c %c %c %c %c %c\n",v3[0][0],v3[0][1],v3[0][2],v3[0][3],v3[0][4],v3[0][5],v3[0][6],v3[0][7],v3[0][8],v3[0][9]);
printf("1 %c %c %c %c %c %c %c %c %c %c\n",v3[1][0],v3[1][1],v3[1][2],v3[1][3],v3[1][4],v3[1][5],v3[1][6],v3[1][7],v3[1][8],v3[1][9]);
printf("2 %c %c %c %c %c %c %c %c %c %c\n",v3[2][0],v3[2][1],v3[2][2],v3[2][3],v3[2][4],v3[2][5],v3[2][6],v3[2][7],v3[2][8],v3[2][9]);
printf("3 %c %c %c %c %c %c %c %c %c %c\n",v3[3][0],v3[3][1],v3[3][2],v3[3][3],v3[3][4],v3[3][5],v3[3][6],v3[3][7],v3[3][8],v3[3][9]);
printf("4 %c %c %c %c %c %c %c %c %c %c\n",v3[4][0],v3[4][1],v3[4][2],v3[4][3],v3[4][4],v3[4][5],v3[4][6],v3[4][7],v3[4][8],v3[4][9]);
printf("5 %c %c %c %c %c %c %c %c %c %c\n",v3[5][0],v3[5][1],v3[5][2],v3[5][3],v3[5][4],v3[5][5],v3[5][6],v3[5][7],v3[5][8],v3[5][9]);
printf("6 %c %c %c %c %c %c %c %c %c %c\n",v3[6][0],v3[6][1],v3[6][2],v3[6][3],v3[6][4],v3[6][5],v3[6][6],v3[6][7],v3[6][8],v3[6][9]);
printf("7 %c %c %c %c %c %c %c %c %c %c\n",v3[7][0],v3[7][1],v3[7][2],v3[7][3],v3[7][4],v3[7][5],v3[7][6],v3[7][7],v3[7][8],v3[7][9]);
printf("8 %c %c %c %c %c %c %c %c %c %c\n",v3[8][0],v3[8][1],v3[8][2],v3[8][3],v3[8][4],v3[8][5],v3[8][6],v3[8][7],v3[8][8],v3[8][9]);
printf("9 %c %c %c %c %c %c %c %c %c %c\n",v3[9][0],v3[9][1],v3[9][2],v3[9][3],v3[9][4],v3[9][5],v3[9][6],v3[9][7],v3[9][8],v3[9][9]);
}
void lcd2(){
    system("cls");
printf("\n  0 1 2 3 4 5 6 7 8 9\n");
printf("0 %c %c %c %c %c %c %c %c %c %c\n",v2[0][0],v2[0][1],v2[0][2],v2[0][3],v2[0][4],v2[0][5],v2[0][6],v2[0][7],v2[0][8],v2[0][9]);
printf("1 %c %c %c %c %c %c %c %c %c %c\n",v2[1][0],v2[1][1],v2[1][2],v2[1][3],v2[1][4],v2[1][5],v2[1][6],v2[1][7],v2[1][8],v2[1][9]);
printf("2 %c %c %c %c %c %c %c %c %c %c\n",v2[2][0],v2[2][1],v2[2][2],v2[2][3],v2[2][4],v2[2][5],v2[2][6],v2[2][7],v2[2][8],v2[2][9]);
printf("3 %c %c %c %c %c %c %c %c %c %c\n",v2[3][0],v2[3][1],v2[3][2],v2[3][3],v2[3][4],v2[3][5],v2[3][6],v2[3][7],v2[3][8],v2[3][9]);
printf("4 %c %c %c %c %c %c %c %c %c %c\n",v2[4][0],v2[4][1],v2[4][2],v2[4][3],v2[4][4],v2[4][5],v2[4][6],v2[4][7],v2[4][8],v2[4][9]);
printf("5 %c %c %c %c %c %c %c %c %c %c\n",v2[5][0],v2[5][1],v2[5][2],v2[5][3],v2[5][4],v2[5][5],v2[5][6],v2[5][7],v2[5][8],v2[5][9]);
printf("6 %c %c %c %c %c %c %c %c %c %c\n",v2[6][0],v2[6][1],v2[6][2],v2[6][3],v2[6][4],v2[6][5],v2[6][6],v2[6][7],v2[6][8],v2[6][9]);
printf("7 %c %c %c %c %c %c %c %c %c %c\n",v2[7][0],v2[7][1],v2[7][2],v2[7][3],v2[7][4],v2[7][5],v2[7][6],v2[7][7],v2[7][8],v2[7][9]);
printf("8 %c %c %c %c %c %c %c %c %c %c\n",v2[8][0],v2[8][1],v2[8][2],v2[8][3],v2[8][4],v2[8][5],v2[8][6],v2[8][7],v2[8][8],v2[8][9]);
printf("9 %c %c %c %c %c %c %c %c %c %c\n",v2[9][0],v2[9][1],v2[9][2],v2[9][3],v2[9][4],v2[9][5],v2[9][6],v2[9][7],v2[9][8],v2[9][9]);
printf("\n  0 1 2 3 4 5 6 7 8 9\n");
printf("0 %c %c %c %c %c %c %c %c %c %c\n",v4[0][0],v4[0][1],v4[0][2],v4[0][3],v4[0][4],v4[0][5],v4[0][6],v4[0][7],v4[0][8],v4[0][9]);
printf("1 %c %c %c %c %c %c %c %c %c %c\n",v4[1][0],v4[1][1],v4[1][2],v4[1][3],v4[1][4],v4[1][5],v4[1][6],v4[1][7],v4[1][8],v4[1][9]);
printf("2 %c %c %c %c %c %c %c %c %c %c\n",v4[2][0],v4[2][1],v4[2][2],v4[2][3],v4[2][4],v4[2][5],v4[2][6],v4[2][7],v4[2][8],v4[2][9]);
printf("3 %c %c %c %c %c %c %c %c %c %c\n",v4[3][0],v4[3][1],v4[3][2],v4[3][3],v4[3][4],v4[3][5],v4[3][6],v4[3][7],v4[3][8],v4[3][9]);
printf("4 %c %c %c %c %c %c %c %c %c %c\n",v4[4][0],v4[4][1],v4[4][2],v4[4][3],v4[4][4],v4[4][5],v4[4][6],v4[4][7],v4[4][8],v4[4][9]);
printf("5 %c %c %c %c %c %c %c %c %c %c\n",v4[5][0],v4[5][1],v4[5][2],v4[5][3],v4[5][4],v4[5][5],v4[5][6],v4[5][7],v4[5][8],v4[5][9]);
printf("6 %c %c %c %c %c %c %c %c %c %c\n",v4[6][0],v4[6][1],v4[6][2],v4[6][3],v4[6][4],v4[6][5],v4[6][6],v4[6][7],v4[6][8],v4[6][9]);
printf("7 %c %c %c %c %c %c %c %c %c %c\n",v4[7][0],v4[7][1],v4[7][2],v4[7][3],v4[7][4],v4[7][5],v4[7][6],v4[7][7],v4[7][8],v4[7][9]);
printf("8 %c %c %c %c %c %c %c %c %c %c\n",v4[8][0],v4[8][1],v4[8][2],v4[8][3],v4[8][4],v4[8][5],v4[8][6],v4[8][7],v4[8][8],v4[8][9]);
printf("9 %c %c %c %c %c %c %c %c %c %c\n",v4[9][0],v4[9][1],v4[9][2],v4[9][3],v4[9][4],v4[9][5],v4[9][6],v4[9][7],v4[9][8],v4[9][9]);
}
void destroyer1(){
    int a,b;
    char c;
for(;;){
        system("cls");
        lcd1();
printf("Destroyer:\ndigite sua linha e coluna do meio da embarcacao:\n");
scanf("%d %d",&a,&b);
if((a<0)||(a>=10)||(b<0)||(b>=10)){printf("\nposicao invalida\n");system("pause");}else{
        if(v2[a][b]!=' '){printf("\nposica ja ocupada\n");system("pause");}else{
printf("\ndigite se o navio ficara na vertical(v) ou horizontal(h): ");
scanf(" %c",&c);
getchar();
printf("variavel c: %c",c);
if(c=='V'){c=='v';}
if(c=='H'){c=='h';}
printf("variavel c: %c",c);
if((c!='v')&&(c!='h')){printf("\nposicao invalida\n");system("pause");}else{
    if((c=='v')&&(a==0)){printf("\nposicao invalida\n");system("pause");}else{
    if((c=='v')&&(a==9)){printf("\nposicao invalida\n");system("pause");}else{
    if((c=='h')&&(b==0)){printf("\nposicao invalida\n");system("pause");}else{
    if((c=='h')&&(b==9)){printf("\nposicao invalida\n");system("pause");}else{
    if((c=='h')&&(v1[a][b-1]!=' ')){printf("\nposicao invalida\n");system("pause");}else{
    if((c=='h')&&(v1[a][b+1]!=' ')){printf("\nposicao invalida\n");system("pause");}else{
    if((c=='v')&&(v1[a-1][b]!=' ')){printf("\nposicao invalida\n");system("pause");}else{
    if((c=='v')&&(v1[a+1][b]!=' ')){printf("\nposicao invalida\n");system("pause");}else{
    if(c=='v'){v1[a-1][b]='e';v1[a+1][b]='e';v1[a][b]='e';}
    if(c=='h'){v1[a][b-1]='e';v1[a][b+1]='e';v1[a][b]='e';}
    break;
}}}}}}}}}}}}}
void destroyer2(){
    int a,b;
    char c;
for(;;){
        system("cls");
        lcd2();
printf("Destroyer:\ndigite sua linha e coluna do meio da embarcacao:\n");
scanf("%d %d",&a,&b);
if((a<0)||(a>=10)||(b<0)||(b>=10)){printf("\nposicao invalida\n");system("pause");}else{
        if(v2[a][b]!=' '){printf("\nposicao invalida\n");system("pause");}else{
printf("\ndigite se o navio ficara na vertical(v) ou horizontal(h): ");
scanf(" %c",&c);
getchar();
if(c=='V'){c=='v';}
if(c=='H'){c=='h';}
if((c!='v')&&(c!='h')){printf("\nPosição invalida\n");system("pause");}else{
    if((c=='v')&&(a==0)){printf("\nposicao invalida\n");system("pause");}else{
    if((c=='v')&&(a==9)){printf("\nposicao invalida\n");system("pause");}else{
    if((c=='h')&&(b==0)){printf("\nposicao invalida\n");system("pause");}else{
    if((c=='h')&&(b==9)){printf("\nposicao invalida\n");system("pause");}else{
    if((c=='h')&&(v1[a][b-1]!=' ')){printf("\nposicao invalida\n");system("pause");}else{
    if((c=='h')&&(v1[a][b+1]!=' ')){printf("\nposicao invalida\n");system("pause");}else{
    if((c=='v')&&(v1[a-1][b]!=' ')){printf("\nposicao invalida\n");system("pause");}else{
    if((c=='v')&&(v1[a+1][b]!=' ')){printf("\nposicao invalida\n");system("pause");}else{
    if(c=='h'){v2[a][b-1]='e';v2[a][b+1]='e';v2[a][b]='e';}
    if(c=='v'){v2[a-1][b]='e';v2[a+1][b]='e';v2[a][b]='e';}
    break;
}}}}}}}}}}}}}
void submarino1(){
int a,b;
char c;
for(;;){
        system("cls");
        lcd1();
printf("submarino:\n digite sua linha e coluna do meio da embarcacao:\n");
scanf("%d %d",&a,&b);
if((a<0)||(a>=10)||(b<0)||(b>=10)){printf("\nposicao invalida\n");system("pause");}else{
        if(v2[a][b]!=' '){printf("\nposicao invalida\n");system("pause");}else{
    v1[a][b]='e';
    break;
}}}}
void submarino2(){
int a,b;
char c;
for(;;){
        system("cls");
        lcd2();
printf("submarino:\n digite sua linha e coluna do meio da embarcacao:\n");
scanf("%d %d",&a,&b);
if((a<0)||(a>=10)||(b<0)||(b>=10)){printf("\nposicao invalida\n");system("pause");}else{
        if(v2[a][b]!=' '){printf("\nposicao invalida\n");system("pause");}else{
    v2[a][b]='e';
    break;
}}}}
void porta1(){
int a,b;
char c;
for(;;){
        system("cls");
        lcd1();
printf("Porta aviao:\ndigite sua linha e coluna do meio da embarcacao:\n");
scanf("%d %d",&a,&b);
if((a<0)||(a>=10)||(b<0)||(b>=10)){printf("\nposicao invalida\n");system("pause");}else{
        if(v2[a][b]!=' '){printf("\nposicao invalida\n");system("pause");}else{
printf("\ndigite se o navio ficara na vertical(v) ou horizontal(h): ");
scanf(" %c",&c);
getchar();
if(c=='V'){c=='v';}
if(c=='H'){c=='h';}
if((c!='v')&&(c!='h')){printf("\nPosição invalida\n");system("pause");}else{
    if((c=='v')&&(a==1)){printf("\nposicao invalida\n");system("pause");}else{
    if((c=='v')&&(a==8)){printf("\nposicao invalida\n");system("pause");}else{
    if((c=='h')&&(b==1)){printf("\nposicao invalida\n");system("pause");}else{
    if((c=='h')&&(b==8)){printf("\nposicao invalida\n");system("pause");}else{
    if(v1[a][b]!=' '){printf("\nposicao invalida\n");system("pause");}else{
    if((c=='h')&&(v1[a][b-1]!=' ')){printf("\nposicao invalida\n");system("pause");}else{
    if((c=='h')&&(v1[a][b-2]!=' ')){printf("\nposicao invalida\n");system("pause");}else{
    if((c=='h')&&(v1[a][b+1]!=' ')){printf("\nposicao invalida\n");system("pause");}else{
    if((c=='h')&&(v1[a][b+2]!=' ')){printf("\nposicao invalida\n");system("pause");}else{
    if((c=='v')&&(v1[a-1][b]!=' ')){printf("\nposicao invalida\n");system("pause");}else{
    if((c=='v')&&(v1[a-2][b]!=' ')){printf("\nposicao invalida\n");system("pause");}else{
    if((c=='v')&&(v1[a+1][b]!=' ')){printf("\nposicao invalida\n");system("pause");}else{
    if((c=='v')&&(v1[a+2][b]!=' ')){printf("\nposicao invalida\n");system("pause");}else{
    v1[a][b]='e';
    if(c=='h'){v1[a][b-1]='e';v1[a][b+1]='e';}
    if(c=='v'){v1[a-1][b]='e';v1[a+1][b]='e';}
    if(c=='h'){v1[a][b-2]='e';v1[a][b+2]='e';}
    if(c=='v'){v1[a-2][b]='e';v1[a+2][b]='e';}
    break;
}}}}}}}}}}}}}}}}}}
void porta2(){
int a,b;
char c;
for(;;){
        system("cls");
        lcd2();
printf("Porta aviao:\ndigite sua linha e coluna do meio da embarcacao:\n");
scanf("%d %d",&a,&b);
if((a<0)||(a>=10)||(b<0)||(b>=10)){printf("\nposicao invalida\n");system("pause");}else{
        if(v2[a][b]!=' '){printf("\nposicao invalida\n");system("pause");}else{
printf("\ndigite se o navio ficara na vertical(v) ou horizontal(h): ");
scanf(" %c",&c);
getchar();
if(c=='V'){c=='v';}
if(c=='H'){c=='h';}
if((c!='v')&&(c!='h')){printf("\nPosição invalida\n");system("pause");}else{
    if((c=='v')&&(a==1)){printf("\nposicao invalida\n");system("pause");}else{
    if((c=='v')&&(a==8)){printf("\nposicao invalida\n");system("pause");}else{
    if((c=='h')&&(b==1)){printf("\nposicao invalida\n");system("pause");}else{
    if((c=='h')&&(b==8)){printf("\nposicao invalida\n");system("pause");}else{
    if(v1[a][b]!=' '){printf("\nposicao invalida\n");system("pause");}else{
    if((c=='h')&&(v1[a][b-1]!=' ')){printf("\nposicao invalida\n");system("pause");}else{
    if((c=='h')&&(v1[a][b-2]!=' ')){printf("\nposicao invalida\n");system("pause");}else{
    if((c=='h')&&(v1[a][b+1]!=' ')){printf("\nposicao invalida\n");system("pause");}else{
    if((c=='h')&&(v1[a][b+2]!=' ')){printf("\nposicao invalida\n");system("pause");}else{
    if((c=='v')&&(v1[a-1][b]!=' ')){printf("\nposicao invalida\n");system("pause");}else{
    if((c=='v')&&(v1[a-2][b]!=' ')){printf("\nposicao invalida\n");system("pause");}else{
    if((c=='v')&&(v1[a+1][b]!=' ')){printf("\nposicao invalida\n");system("pause");}else{
    if((c=='v')&&(v1[a+2][b]!=' ')){printf("\nposicao invalida\n");system("pause");}else{
    v2[a][b]='e';
    if(c=='h'){v2[a][b-1]='e';v2[a][b+1]='e';}
    if(c=='v'){v2[a-1][b]='e';v2[a+1][b]='e';}
    if(c=='h'){v2[a][b-2]='e';v2[a][b+2]='e';}
    if(c=='v'){v2[a-2][b]='e';v2[a+2][b]='e';}
    break;
}}}}}}}}}}}}}}}}}}
int main(){
    int z,d,c,l=0,p=0;
   for(z=0;z<10;z++){
for(c=0;c<10;c++){
v1[z][c]=' ';
v2[z][c]=' ';
   }
}
setboat1();
system("cls");
setboat2();
for(;;){
        printf("\nVez do jogador 1\n");
        system("pause");
    jogada1();
    printf("\nVez do jogador 2\n");
    system("pause");
    jogada2();
    for(z=0;z<10;z++){
for(c=0;c<10;c++){
if (v1[z][c]='e'){p=p+1;}
if (v2[z][c]='e'){l=l+1;}
   }
}
if(p==0){printf("Jogador 2 ganhou");exit(0);}
if(l==0){printf("Jogador 1 ganhou");exit(0);}
}
}
