#include <iostream>
#include <clocale> 
class lapiseira {     

    public:

        const float calibre = 0.7;   
  
        int tamanho;

        std:: string dureza;

        int carbono = 50;

        int grafites = 5;

        lapiseira(std:: string dureza = "3B", int tamanho = 4){
            
            this-> dureza = dureza;

            this-> tamanho = tamanho;

        }  

        void escrever();       

        void maisgrafite();

        int menosgrafite(){

           return grafites--;

        }

};

void lapiseira:: escrever(){

        carbono -= 10;            

}

void lapiseira:: maisgrafite(){

    carbono += 10;

    lapiseira:: menosgrafite();

}


void procedimento(lapiseira& nova, char& escolha){

    if(nova.grafites > 0){

            if(escolha == 'S' || escolha == 's'){

                nova.maisgrafite();                       

            }

            else if(escolha == 'N' || escolha == 'n'){

                std:: cout << "Foda demais";

                exit(0);

            }
    }
    else {

        std:: cout << "Não há mais grafites!";

        exit(0);

    }
}
void loop(lapiseira& nova, char& escolha){   
   

    while(nova.carbono != 0 ){

        if(nova.carbono > 0){

            nova.escrever();

            std:: cout << "\n\nAinda tem grafite!\n\n";

            std:: cout << "Essa é a quantidade que sobrou: " << nova.carbono;           

        }

        if(nova.carbono == 0 ) { 

            std:: cout << "\n\nAcabou o grafite!\n\n";

            std:: cout << "Deseja colocar mais grafite?\n\n";

            std:: cout << "digite S / N\n\n";

            std:: cin >> escolha;

            procedimento(nova,escolha);           

        } 
    }
}

int main(){

    setlocale(LC_ALL, "portuguese");

    lapiseira nova;    

    int tamanho = 0;

    char escolha;

    loop(nova,escolha);   

    return 0;

}