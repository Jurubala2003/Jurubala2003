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

    int cont1 = 0;

    int cont2 = 0;

    int media1 = 0;

    int media2 = 0;

    std:: cout << "Pressione enter para prosseguir\n\n\n\n\n"; 

    std:: cin.get();   



    for( int i = 0 ; i < vetor.size(); i++){

        if(vetor[i] < 0){

            muie += vetor[i] ;

            cont1++;
        }

        if(vetor[i] > 0 ){

            home+= vetor[i];

            cont2++;
        }

    }

    media1 = muie/cont1; 

    media2 = home/cont2;

    if( media1 > media2)

        std:: cout<< " A média diz que as mulheres são mais extressadas ";
    
    if(media1 < media2) 

        std:: cout<< "A média diz que os homens são mais extressados";

}
int main(){

    setlocale(LC_ALL,  "portuguese");   

    std:: srand( std:: time(0)) ;    

    std:: vector <int> vetor; 

    std:: cout << espasso;

    std:: cout << "Gerando numeros..." << "\n" << "\n"; 

    gerar (vetor);  

    std:: cout << "Esses são os elementos: " << "\n" << "\n" << "\n";     

    for ( int i = 0 ; i < vetor.size() ; i++ )
        
       std:: cout << vetor[i] << "\n" ;      

    std:: cout << "\n" ; 
    
    verificar(vetor);
     
}
   
