#include <iostream>
#include <vector>
#include <time.h>
#include <algorithm>
void gerar (std:: vector <int>& vetor){

    vetor.resize(10);

    for ( int i=0 ; i < 10 ; i++ )           
        
        vetor[i] = (std:: rand() % 199) - 99  ;   

}

void repetissao(std:: vector <int>& vetor){

    for(int i = 0; i < vetor.size() ; i++) 

        for(int j = i + 1; j < vetor.size(); j++)  

            if(vetor[i] == vetor[j])  
               
                std:: cout << vetor[i] << " ";               

}
int main(){

    std:: vector <int> vetor;

    gerar(vetor); 

    repetissao(vetor);   

}