
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

void procurar_valor_pos_apartir( std:: vector < int > vetor, int inicio){


    int menor = vetor[0];

    int contador = 0;


    for (int i = inicio; i < 10 ; i++ ){

        if( menor > vetor[i])

            menor = vetor[i];

        else

            continue;       

    }
    

    std:: cout << "Qual a posição do seu número?" << "\n" ;

    for( int i= inicio ; i <  10 ; i++){

        if( vetor[i] == menor ){
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

    exit(0);

}    

int main(){


    setlocale(LC_ALL,  "portuguese");   

    std:: srand( std:: time(0)) ;    

    int inicio = 0;

    std:: cout << "Digite um valor de 0 a 9 para o inicio da busca" << "\n";

    std:: cin >> inicio  ;    

    std:: vector <int> vetor; 

    std:: cout << espasso;

    std:: cout << "Gerando numeros..." << "\n" << "\n"; 

    vetor = gerar (vetor);  

    std:: cout << "Esses são os elementos: " << "\n" << "\n" << "\n";     

    for ( int i = 0 ; i < vetor.size() ; i++ )
        
       std:: cout << vetor[i] << "\n" ;      

    std:: cout << "\n" ;              

    procurar_valor_pos_apartir( vetor , inicio ) ;     

}