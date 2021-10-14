
#include  <iostream>
#include  <vector>
#include  <ctime>
#include <locale.h>
#define espasso "\n \n \n"

std:: vector <int> gerar (std:: vector <int> vetor){

    vetor.resize(10);

    for ( int i=0 ; i < 10 ; i++ )           
        
        vetor[i] = (std:: rand() % 199) - 99  ;    

    return vetor;

} 

void procurar_valor( std:: vector < int > vetor, int numero ){

    int contador=0;

    std:: cout << "Qual a posição do seu número?" << "\n" ;

    for( int i=0 ; i <  10 ; i++){

        if( vetor[i] == numero ){
            contador=i;
            break;
        }
        else

            continue;       

    }
    if(contador==0){

        std:: cout << "\n" <<  "não tem posições porque ele não está na fila! "<< "\n" ; 

        std:: cout << espasso ;

    }
    else 

        std:: cout << "Ele está na posição : " << contador << "\n" ;

    std:: cout << espasso ;

}    

int main(){

    setlocale(LC_ALL,  "portuguese");   

    std:: srand( std:: time(0)) ;    

    int numero;    

    std:: vector <int> vetor; 

    std:: cout << "Escolha um número: " << "\n";
  
         std:: cin >> numero ;


    std:: cout << espasso;

    std:: cout << "Gerando numeros..." << "\n" << "\n"; 

    vetor = gerar (vetor);  

    std:: cout << "Esses são os elementos: " << "\n" << "\n" << "\n";     

    for ( int i = 0 ; i < vetor.size() ; i++ )
        
       std:: cout << vetor[i] << "\n" ;      

    std:: cout << "\n" ;              

    procurar_valor ( vetor , numero) ;     

}