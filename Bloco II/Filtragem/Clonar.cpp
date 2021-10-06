#include  <iostream>
#include  <vector>
#include  <ctime>
#include <locale.h>
#define espasso "\n \n \n"

void gerar (std:: vector <int>& vetor){    

    vetor.resize(10);

    for ( int i=0 ; i < 10 ; i++ )           
        
        vetor[i] = (std:: rand() % 199) - 99  ;    

} 

int main(){

    setlocale(LC_ALL,  "portuguese");   

    std:: srand( std:: time(0)) ;    

    std:: vector <int> vetor;

    std:: vector <int> copia;    

    std:: cout << espasso;

    std:: cout << "Gerando numeros..." << "\n" << "\n"; 

    gerar (vetor);        

    copia = vetor ;

    std:: cout << "Pressione enter para prosseguir\n\n\n\n\n"; 

    std:: cin.get();   
   
    std:: cout << "Esses são os elementos da copia: " << "\n" << "\n" << "\n";     

    for ( int i = 0 ;i < copia.size() ;i++ )
        
       std:: cout << copia[i] << "\n" ;      

    std:: cout << "\n" ; 
     
}
   

