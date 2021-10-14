#include <iostream>
#include <vector>

int trils (std:: vector <int>& vetor){

    int contador = 0;   
        
    for(int i = 0 ; i < (int) vetor.size(); i++ ){
        
        if(vetor[i] < 0){
            
            vetor[i] = abs(vetor[i]);
            
            if(vetor[i] == vetor[i+1] && vetor[i+1] == vetor[i+2])

                contador++;
        }
        
        else {
            
            if(vetor[i] == vetor[i+1] && vetor[i+1] == vetor[i+2])
        
                contador++;
            
        }
            
    }
    return contador;
}
int main(){

    std:: vector <int> vetor = {-1, 1, 1, -2, 2, 2, 78, - 78};

    int trios = trils(vetor);         
    
    std:: cout << "Esse eh o numero de trios formados: " << trios; 

    return 0;
}