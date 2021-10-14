#include <iostream>
#include <vector>
int verificar (std:: vector <int>& vetor){

    int contador = 0;

    for(int i = 0 ; i< vetor.size() ; i++){

        if(vetor [i] > 80 )

            if(vetor[i-1] < 10  || vetor[i+1] < 10 )
                
                contador = i;
            
        else
        
            continue;

    }
    return contador;
}
int main(){

    std:: vector <int> vetor = {1,2,9,8,81,5,3};

    int resultado = verificar(vetor);

    std:: cout << resultado ;

    return 0;
}