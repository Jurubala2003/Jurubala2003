#include  <iostream>
#include  <vector>
#include <locale.h>
#include <set>
#include<algorithm>

#define espasso "\n \n \n"

int main(){

    setlocale(LC_ALL,  "portuguese");     

    std:: vector <int> vetor = {1, 2, 3, -1, -2, -3};    
   
    for( int i = 0; i < vetor.size(); i++){

        if(vetor[i] != vetor[i+1])

            std:: cout << vetor[i];

    }

    for ( int i:sete ) 

        std:: cout << sete << " ";

     
}
   