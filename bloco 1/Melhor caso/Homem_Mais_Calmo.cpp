

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

void homemcalmo( std:: vector < int >& vetor ){

    unsigned int menorhomem = vetor[0];
    
    int contador = 0;

    for ( int i = 0; i < 10; i++){

        if( menorhomem > vetor[i] ){


                menorhomem = vetor[i];  
        }    
        
        else

            continue;        

    } 
    

    std:: cout <<"O homem mais calmo é o " << menorhomem << "\n" ;

    std:: cout << espasso ;    
    
    for ( int i = 0 ; i < vetor.size() ; i++){

        if( vetor[i] < = menorhomem )         

            contador = i ;  
       

     }
    
    std:: cout <<"A posição dele é: " << contador << "\n" ;
  
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

    homemcalmo ( vetor ) ;       

   
     
}
   
