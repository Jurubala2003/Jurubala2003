

#include  <iostream>
#include  <vector>
#include  <ctime>
#include <locale.h>
#define espasso "\n \n \n"

void procurar_valor_apartir( std:: vector < int > vetor, int numero, int inicio ){

    int contador = inicio ;

    for ( int i = inicio ; i < 10 ; i++ ) {

        if(vetor[i] != numero)

          contador++;

        else {
            
            std:: cout << "Essa é a posição: " << contador ;

            exit(0);
        }
    }

}

std:: vector <int> gerar (std:: vector <int> vetor){

    vetor.resize(10);

    for ( int i=0 ; i < 10 ; i++ )           
        
        vetor[i] = (std:: rand() % 199) - 99  ;    

    return vetor;

} 

int main(){

    setlocale(LC_ALL,  "portuguese");   

    std:: srand( std:: time(0)) ;    

    int numero;  

    int inicio;

    std:: vector <int> vetor; 

    std:: cout << "Escolha um número inteiro: " << "\n";

    std:: cin >> numero ;

    std:: cout << "Escolha um número natural para o início da busca : " << "\n";

    std:: cin >> inicio ;

    std:: cout << espasso;

    std:: cout << "Gerando numeros..." << "\n" << "\n"; 

    vetor = gerar (vetor);  

    std:: cout << "Esses são os elementos do vetor: " << "\n" << "\n" << "\n";     

    for ( int i = 0 ; i < vetor.size() ; i++ )
        
       std:: cout << vetor[i] << "\n" ;      

    std:: cout << espasso ;                  

    procurar_valor_apartir(vetor,numero,inicio);


     
}
   
