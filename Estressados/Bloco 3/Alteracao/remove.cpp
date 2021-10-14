#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std:: vector <int> vetor = {-1, 1, 1, -2, 2, 2, 78, - 78};

    int numero = 0;

    std:: cout << "Esse eh o vetor antes de ter um item removido:\n\n ";

    for( int i = 0; i < (int) vetor.size(); i++)

        std:: cout << vetor[i] << "\n";

    std:: cout << "Escolha um numero para retirar:\n\n ";

    std:: cin >> numero;
    
    vetor.erase(std::remove(vetor.begin(), vetor.end(), numero), vetor.end());
    
    std:: cout << "Esse eh o vetor com o numero " << numero << "removido: \n\n"; 

    for( int i = 0; i< (int) vetor.size(); i++)
    
        std:: cout << vetor[i] << "\n";


    return 0;
}