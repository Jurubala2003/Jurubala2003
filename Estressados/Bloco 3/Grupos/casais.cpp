#include <iostream>
#include <vector>

int casais (std:: vector <int>& vetor){

    int contador = 0;   
    
    for(int i = 0 ; i < (int) vetor.size(); i++ )
    
        abs(vetor[i]);
        
    for(int i = 0 ; i < (int) vetor.size(); i++ ){
        
        if(vetor[i] < 0){
            
            vetor[i] = abs(vetor[i]);
            
            if(vetor[i] == vetor[i+1])

                contador++;
            
            if(vetor[i] == vetor[i-1])
        
                contador++;
            
        }
        
        else if(vetor[i] > 0){
        
             if(vetor[i] == vetor[i+1])

                contador++;
            
            if(vetor[i] == vetor[i-1])
        
                contador++;
        }
            
    
       
            
    }
    return contador;
}
int main(){

    std:: vector <int> vetor = {-1, 1, 2, -2, 54, 3, 78, - 78};

    int numerodecasais = casais(vetor);  
        
    std:: cout << "Esse eh o numero de casais formados: " << numerodecasais; 

    return 0;
}