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

int main(){

    setlocale(LC_ALL,  "portuguese");   

    std:: srand( std:: time(0)) ;    

    std:: vector <int> vetor;     

    std:: vector <int> auxiliar;

    std:: cout << espasso;

    std:: cout << "Gerando numeros..." << "\n" << "\n"; 

    gerar (vetor);    

    auxiliar = vetor;   

    std:: cout << "Pressione enter para prosseguir\n\n\n"; 

    std:: cin.get();   
   
    std:: cout << "Esses são os elementos originais: " << "\n" << "\n" << "\n";     

    for ( int i = 0 ; i < vetor.size() ; i++)     

        std:: cout << vetor[i] << "\n" ;

    std:: cout << "Esse é o vetor original embaralhado : " << "\n" << "\n" << "\n";     

    for ( int i = 0 ; i < vetor.size() ; i++){

        if (i != vetor.size()){

        int sorteio = rand() % vetor.size();

		int auxiliar = vetor[i] ;		

		vetor[i] = vetor[sorteio];

        vetor[sorteio] = auxiliar ;

        }       

    }
   

    for ( int i = 0 ; i < vetor.size() ; i++)

        std:: cout << vetor[i] << "\n" ;        

    std:: cout << "Pressione a tecla enter para continuar" << "\n\n"; 

    std:: cin.get();

    std:: cout << "Agora este é o vetor embaralhado recuperado às posições originais: " << "\n\n"; 

    vetor = auxiliar;

    for ( int i = 0 ; i < vetor.size() ; i++)

        std:: cout << vetor[i] << "\n" ;     
             
     
}
   

