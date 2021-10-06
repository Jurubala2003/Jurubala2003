#include  <iostream>
#include  <vector>
#include  <ctime>
#include <locale.h>
#define espasso "\n \n \n"

void gerar (std:: vector <int>& vetor){    

    vetor.resize(10);

    for ( int i = 0 ; i < 10 ; i++ )           
         
        vetor[i] = (std:: rand() % 199) - 99  ;    

} 
void verificarmetade(std:: vector <int> & vetor){

    int metade1 = 0;

    int metade2 = 0;

    int modulo1 = 0;

    int modulo2 = 0;

    for( int i = 0; i< (vetor.size()) / 2; i++ )

        metade1+= vetor[i];

    for( int i = 0; i< ((vetor.size())- (vetor.size()/2)) / 2; i++ )

        metade2 += vetor[i];  

    modulo1 = metade1;

    modulo2 = metade2;

    if ( modulo1 > modulo2)

        std:: cout<< "O nível de estresse da primeira metade é maior" ;
    
    else if( modulo1 < modulo2)

        std:: cout<< "O nível de estresse da segunda metade é maior" ;     

    else if (modulo1 == modulo2)

         std:: cout<< "EMPATOOOOOOOOU" ; 


}
int main(){

    setlocale(LC_ALL,  "portuguese");   

    std:: srand( std:: time(0)) ;    

    std:: vector <int> vetor; 

    std:: cout << espasso;

    std:: cout << "Gerando numeros..." << "\n" << "\n"; 

    gerar (vetor);  

    std:: cout << "Pressione enter para prosseguir";

    std:: cin.get();

    std:: cout << "Esses são os elementos: " << "\n" << "\n" << "\n";     

    for ( int i = 0 ; i < vetor.size() ; i++ )
        
       std:: cout << vetor[i] << "\n" ;      

    std:: cout << "\n" ; 

    std:: cout << "\n" ;

    std:: cout << "Qual metade é mais estressada?" << "\n" << "\n" ;

    verificarmetade(vetor);
     
}
   
