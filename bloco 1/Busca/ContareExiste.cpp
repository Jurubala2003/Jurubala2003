

#include  <iostream>
#include  <vector>
#include  <ctime>
#include <locale.h>
#define espasso "\n \n \n"

auto existe( std:: vector < int > vetor , int*  numeros  ){   


    bool verificar;    

    std:: cout << "seu número está na lista?" ;

    std:: cout<< "\n" ;

    std:: cout <<"Verdadeiro ou Falso?" << "\n" << "\n" ;

    for( int i =0 , j = 0 ;  i < 10 , j < 2 ; i++ , j++){
      
               
        if ( vetor[i] == numeros[j] ){

            verificar = true ;
            break;        
        }

    }
    if(verificar== true)

       std:: cout <<"----> Verdadeiro " << espasso ;        

    else

      std::  cout <<"----> Falso " << espasso ;

    exit(0);
  
}

std:: vector <int> gerar (std:: vector <int> vetor){

    vetor.resize(10);

    for ( int i=0 ; i < 10 ; i++ )           
        
        vetor[i] = (std:: rand() % 199) - 99  ;    

    return vetor;

} 

void contar( std:: vector < int > vetor, int* numeros){

    int contador = 0 ; 

    for( int i =0 , j = 0 ;  i < 10 , j < 2 ; i++ , j++){

        if( vetor[i]== numeros[j] ){

            contador++; 
        
        }
        
        else

            continue;
        

    } 
    std:: cout << "Quantas vezes seu número apareceu?" << "\n" ;

    std:: cout << contador <<" vezes" << "\n " ; 

    std:: cout<< espasso ;    
  
}

int main(){

    setlocale(LC_ALL,  "portuguese");   

    std:: srand( std:: time(0)) ;    

    int numeros[1];    

    std:: vector <int> vetor; 

    std:: cout << "Escolha dois números inteiros quaisquer: " << "\n";

    for( int i = 0 ; i < 2 ; i++ )

         std:: cin >> numeros[i]  ;


    std:: cout << espasso;

    std:: cout << "Gerando numeros..." << "\n" << "\n"; 

    vetor = gerar (vetor);  

    std:: cout << "Esses são os elementos: " << "\n" << "\n" << "\n";     

    for ( int i = 0 ; i < vetor.size() ; i++ )
        
       std:: cout << vetor[i] << "\n" ;      

    std:: cout << "\n" ; 
            

    contar ( vetor , numeros ) ;       

    existe ( vetor , numeros) ;
     
}
   
