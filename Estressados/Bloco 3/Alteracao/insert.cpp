#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std:: vector <int> vetor = {-1, 1, 1, -2, 2, 2, 78, - 78};

    int numero = 0;
    
    int posicao = 0;

    std:: cout << "Esse eh o vetor antes de ter um item adicionado:\n\n ";

    for( int i = 0; i < (int) vetor.size(); i++)

        std:: cout << vetor[i] << "\n";

    std:: cout << "Escolha um numero para adicionar:\n\n ";

    std:: cin >> numero;
    
    std:: cout << "Escolha a posicao :\n\n ";

    std:: cin >> posicao;
    
    vetor.insert(vetor.begin()+ posicao, numero);
    
    std:: cout << "Esse eh o vetor com o numero " << numero << "adicionado: \n\n"; 

    for( int i = 0; i< (int) vetor.size(); i++)
    
        std:: cout << vetor[i] << "\n";


    return 0;
}