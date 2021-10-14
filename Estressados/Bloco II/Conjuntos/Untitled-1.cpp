#include  <iostream>
#include  <vector>
#include <locale.h>
#include <set>
#include <algorithm>

int main(){

    setlocale(LC_ALL,  "portuguese");     

    std:: vector <int> vetor = {1, 1, 2, 2, 1, 3, 3, 4, 1, 4};    
   
    std:: cout << "Esses são os elementos que sobraram: " << "\n\n";     

    auto auxiliar = std::unique(vetor.begin(), vetor.end());

    std::erase(auxiliar , vetor.end());

    for ( int i = 0; i < (int)vetor.size() ; i++ ) 

        std:: cout << vetor[i] << " ";

     
}
   

