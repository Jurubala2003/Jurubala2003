#include <iostream>
#include <vector>

int timemulher (std:: vector <int>& vetor){

    int contadorm = 0;

    for(int i = 0 ; i < (int) vetor.size(); i++ )

        if(vetor [i] < 0 && vetor[i+1] < 0)
        
            contadorm++;


    return contadorm;

}

int timehomem (std:: vector <int>& vetor){

    int contadorh = 0;   

    for(int i = 0 ; i < (int) vetor.size(); i++ ){

        if(vetor [i] > 0 && vetor[i+1] > 0)
            
            if(vetor[i+1] > 0 &&  vetor[i+2] > 0){
                    
                    contadorh = 1;
                    
                    break;
            }
            
        else
            
            contadorh++;
            
    }
            
    return contadorh;
}
int main(){

    std:: vector <int> vetor = {-1, -2, 45, 51, 56, 3, -6, -9};

    int timemasculino = timehomem(vetor);
    int timefeminino = timemulher(vetor);

    if( timemasculino > timefeminino)
        
        std:: cout << "time masculino eh maior " ;

    if( timemasculino < timefeminino)

        std:: cout << "time feminino eh maior " ;  
 

    return 0;
}