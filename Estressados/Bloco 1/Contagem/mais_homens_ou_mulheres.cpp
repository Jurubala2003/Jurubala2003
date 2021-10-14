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

void verificar(std:: vector <int>& vetor){

    int muie = 0;

    int home = 0;

    for( int i = 0 ; i < vetor.size(); i++){

    if (vetor[i] < 0)

        muie++;

    else 

        home++;

    }

    if ( home> muie)

        std:: cout<< "existem mais homens";
    
    else 

        std:: cout<< "existem mais mulheres";

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
    
    verificar(vetor);
     
}
   
