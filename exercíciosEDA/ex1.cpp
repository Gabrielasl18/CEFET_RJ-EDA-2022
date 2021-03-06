#include <iostream>

using namespace std;

void BubbleSort(int numInt[]){
    int aux;
    cout << "Ordem Crescente por Bubble Sort: ";
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(numInt[i] > numInt[j]){
                aux = numInt[j];
                numInt[j] = numInt[i];
                numInt[i] = aux;
            }
        }
    }
   for(int i=0;i<10;i++){
    cout << numInt[i] << "\t";
   }
}
void SelectionSort(int numInt[]){
    cout << "Ordem Crescente por Selection Sort: ";
    for(int i=0;i<10;i++){
    int aux = i;
        for(int j=i+1;j<10;j++){
            if(numInt[j] < numInt[aux]){
                aux=j;
            }
        }
    int menor_index = numInt[aux];
    numInt[aux] = numInt[i];
    numInt[i] = menor_index;    
    }
    for(int i=0;i<10;i++){
    cout << numInt[i] << "\t";
    }
    // cout << "\n";
}
void InsertionSort(int numInt[]){
    int aux=0;
    cout << "Ordem Crescente por Insertion Sort: ";
    for(int i=0;i<10;i++){
        aux = i;
        int j = i - 1;
        if(j>=0 && aux < numInt[j]){
            numInt[j+1] = numInt[j];
            j = j-1;
        }
        numInt[j+1] = aux;
    }
    for(int i=0;i<10;i++){
    cout << numInt[i] << "\t";
    }
    cout << "\n";
}
int main(){
    int numInt[10];
    for(int i=0;i<10;i++){
        cin >> numInt[i];
    }
    BubbleSort(numInt);
    cout << "\n";
    SelectionSort(numInt);
    cout << "\n";    
    InsertionSort(numInt);

return 0;
}