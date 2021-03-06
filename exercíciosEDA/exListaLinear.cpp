#include <iostream>
#define tamanho 10
#define tamanho2 10
#define tamanho3 20
using namespace std;

void intercalarElementos(int A[],int B[],int C[]){
    int j=0;
    for(int i=0;i<tamanho3 && j<tamanho2 && j<tamanho3;i+=2){
        C[i] = A[j];
        C[i+1] = B[j];
        j++;
    }
}
void buscar(int C[]){
    int buscado,i=0;
    bool achei = false;
    cout << "qual número deseja buscar? ";
    cin >> buscado;
    while(i<tamanho3 && achei == false){
        if(C[i] == buscado)
            achei=true;
        else
            i++;
    }
    if(achei == true){
        cout << "elemento encontrado na posição: " << i << "\n";
    }else
        cout << "elemento não encontrado no vetor.\n";
}
void remover(int A[]){
    for(int i=0;i<tamanho;i++){
        if(i == 0){
          A[i] = 0;
        }
        if(i == 1){
          A[i] = 0;
        }
    }
}
void mostrar(int A[],int B[],int C[]){
    cout << "vetor C: ";
    for(int i=0;i<tamanho3;i++){
        cout << C[i] << "\t";
    }
    cout << "\n";
    cout << "vetor A: ";
     for(int i=0;i<tamanho;i++){
        cout << A[i] << "\t";
    }
    cout << "\n";
    cout << "vetor B: ";
     for(int i=0;i<tamanho;i++){
        cout << B[i] << "\t";
    }
    cout << "\n";
}
int main(){
int A[tamanho] = {10,4,3,0,7,1,11,32,17,6},B[tamanho2] = {99,45,32,21,11,8,3,0,1,18},C[tamanho3]={0};
int R;
    do{
    cout << "qual opcao deseja usar? \n0 - sair \n1 - intercalar os vetores A e B \n2 - mostrar elementos do vetor C \n3 - buscar elementos no vetor C \n4 - remover os 2 primeiros elementos do vetor A\n";
    cin >> R; 
        switch(R){
        case 1: intercalarElementos(A,B,C);
        break;
        case 2: mostrar(A,B,C);
        break;
        case 3: buscar(C);
        break;
        case 4: remover(A);
        break;
    }
    }while(R!=0);

return 0;
}
