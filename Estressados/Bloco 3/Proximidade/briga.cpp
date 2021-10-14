#include <iostream>
#include <vector>
int verificar (std:: vector <int>& vetor){

    int contador = 0;

    for(auto i : vetor){

        if(vetor [i] > 50 )

            if(vetor[i-1] > 30 && vetor[i+1] > 30 )
               contador++;
    }
    return contador;
}
int main(){

    std:: vector <int> vetor = {1,2,45,51,34,56,3};

    int resultado = verificar(vetor);

    std:: cout << resultado ;

    return 0;



}