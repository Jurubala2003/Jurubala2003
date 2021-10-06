#include  <iostream>
#include  <vector>
#include  <ctime>
#include <locale.h>
#include <algorithm>
#define espasso "\n \n \n"

void gerar (std:: vector <int>& vetor){    

    vetor.resize(10);

    for ( int i=0 ; i < 10 ; i++ )           
        
        vetor[i] = (std:: rand() % 199) - 99  ;    

} 
void segregassao (std:: vector <int>& jooj){    
    
    int j;

    for( int i = 0 , j = 0 ; i < jooj.size(); i++){

        if( jooj[j] != jooj[i])
           
            std:: cout << jooj[i];  
               
        else     

                j++;            
    }      
     
}

int main(){

    setlocale(LC_ALL,  "portuguese");   

    std:: srand( std:: time(0)) ;    

    std:: vector <int> vetor;     

    std:: cout << espasso;

    std:: cout << "Gerando numeros..." << "\n" << "\n"; 

    gerar (vetor);    

    std:: cout << "Pressione enter para prosseguir\n\n\n"; 

    std:: cin.get();   
   
    std:: cout << "Esses são os elementos originais: " << "\n" << "\n" << "\n";     

    for ( int i = 0 ; i < vetor.size() ; i++)     

        std:: cout << vetor[i] << "\n" ;   

    std:: cout << "Essa é a segregação: " << "\n\n"; 
    
    segregassao(vetor);
     
}
   

