
#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std:: vector <int> vetor = {1, 3, 4, 5, -1, -5, -5};    // 3

    int contador = 0;

     for(int i = 0; i < vetor.size() ; i++) 

        for(int j = i + 1; j < vetor.size(); j++)  

            if(vetor[i] == vetor[j])  
               
                contador++;

    std:: cout << contador;

}