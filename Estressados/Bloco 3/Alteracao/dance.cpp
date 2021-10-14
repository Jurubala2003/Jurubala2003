#include <iostream>
#include <vector>

std:: vector <int> sozinhos (std:: vector <int>& vetor){

    std:: vector <int> jooj;

    for(int i = 0 ; i < (int) vetor.size(); i++ ){

        if(vetor [i] > 0 && vetor[i-1] < 0)
        
            if(vetor [i] > 0 && vetor[i+1] < 0 )

                jooj.push_back(vetor[i]);

       if(vetor [i] < 0 && vetor[i-1] > 0)
        
            if(vetor [i] < 0 && vetor[i+1] > 0 )
            
                jooj.push_back(vetor[i]);
            
    }

    vetor.clear();
            
    return jooj;
}
int main(){

    std:: vector <int> vetor = {-1, -2, 45, 51, 56, 3, -6, 8, 8};

    std:: vector <int> bagulho;

    bagulho = sozinhos(vetor);  
        
    std:: cout << "Esses sao os que sobraram:\n\n "; 
    
    for(int i = 0 ; i < (int) bagulho.size(); i++ )

        std:: cout <<  bagulho[i] << "\n";     

    return 0;
}