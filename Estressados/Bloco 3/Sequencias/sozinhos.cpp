#include <iostream>
#include <vector>

int sozinhos (std:: vector <int>& vetor){

    int contador = 0;   

    for(int i = 0 ; i < (int) vetor.size(); i++ ){

        if(vetor [i] > 0 && vetor[i-1] < 0)
        
            if(vetor [i] > 0 && vetor[i+1] < 0 )

                contador++;

       if(vetor [i] < 0 && vetor[i-1] > 0)
        
            if(vetor [i] < 0 && vetor[i+1] > 0 )
            
                 contador++;
            
    }
            
    return contador;
}
int main(){

    std:: vector <int> vetor = {-1, -2, 45, 51, 56, 3, -6, 8, 8};

    int alone = sozinhos(vetor);  
        
    std:: cout << "Esse eh o numero de pessoas sem time: " << alone; 

    return 0;
}