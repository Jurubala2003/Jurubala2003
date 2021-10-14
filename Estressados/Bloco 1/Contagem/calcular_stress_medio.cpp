

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

void media( std:: vector < int >& vetor ){

    int auxiliar = 0;

    for ( int i=0; i<10; i++){

        auxiliar += vetor[i];                     

    } 


    std:: cout <<"A média de estresse é: " << auxiliar/10 << "\n" ;

    std:: cout << espasso ;    

}

int main(){


    setlocale(LC_ALL,  "portuguese");   

    std:: srand( std:: time(0)) ;        

    std:: vector <int> vetor;

    std:: cout << espasso;

    std:: cout << "Gerando numeros..." << "\n" << "\n"; 

    gerar (vetor);  

    std:: cout << "Esses são os elementos: " << "\n" << "\n" << "\n";     

    for ( int i = 0 ; i < (int) vetor.size() ; i++ )
        
       std:: cout << vetor[i] << "\n" ;      

    std:: cout << "\n" ;          

    std:: cout << "Pressione enter para continuar"<< "\n" ;     

    std:: cin.get();

    media ( vetor ) ;       

   
     
}
   
