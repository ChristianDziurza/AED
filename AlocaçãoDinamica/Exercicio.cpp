#include <iostream>
using namespace std;

void adicionarNoVetor(int *v);
void Imprimir(int *v);

int main(){
    int *x;
    if(!(x = new(nothrow) int[10])){
        cout << "Alocao falhou" << endl;
        return -1;
    }
    adicionarNoVetor(x);
    Imprimir(x);

    delete[] x;
    return 0;
}

void adicionarNoVetor(int *v){
    for(int i=0, j=2;i<10;i++, j+=3){
        v[i] = j;
    }
}
void Imprimir(int *v){
    for(int i=0;i<10;i++){
        cout << "Valor do vetor: " << *(v+i) << endl;
    }
}