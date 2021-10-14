#include  <iostream>
#include  <vector>
#include <locale.h>

#define espasso "\n \n \n"

int main(){

    setlocale(LC_ALL,  "portuguese");     

    std:: vector <int> vetor = {1,1,2,2,3,3,4,4};    

   
    std:: cout << "Esses são os elementos que sobraram: " << "\n\n";     

    for ( int i = 0 ; i < vetor.size() ; i++) {    

        if (i == vetor.size()){

            break;
        }

        if( vetor[i] == vetor[i+1])

            vetor[i+1].erase(vetor[i+1]);

        std:: cout << vetor[i] << "\n" ;   
    
    }

    std:: cout << "Essa é a segregação: " << "\n\n"; 

    for ( int i = 0 ; i < vetor.size() ; i++) 

        std:: cout << vetor[i] << " ";


     
}
   

