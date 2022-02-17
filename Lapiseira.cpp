#include <iostream>
#include <list>
#include <memory>
class Grafite{
private:
    std::string dureza;
    int tamanho;
    float espessura;
    int setSize(int size){
        if((tamanho - size )> 10)
            return tamanho -= size;
        std::cout << "A folha incompleta.\n";
        std::cout << "Acabou o seu grafite.Coloque mais\n";        
        return -1;
    }
public:
    Grafite(std::string d, int t, float e){
        dureza = d;
        tamanho = t;
        espessura = e;
    }
    std::string getDureza(){   return dureza;  }
    int getTamanho(){   return tamanho;  }
    float getEspessura(){   return espessura;  }  
    int usoPorFolha(){
        if(dureza == "HB")
            setSize(1);                
        if(dureza == "2B")
            setSize(2);             
        if(dureza == "4B")
            setSize(4);
        if(dureza == "6B")
            setSize(6);
        return -1; 
    }   
    void operator=(const Grafite& grafite){
        dureza = grafite.dureza;
        tamanho = grafite.tamanho;
        espessura = grafite.espessura;
    }
};
class Lapiseira{  
private:
    std::list<Grafite*> barril;    
    Grafite* bico = nullptr; 
    float espessura;
public:
    Lapiseira(float espessura){   this->espessura = espessura;    }  
    bool inserirGrafite(Grafite* grafite){
        if(grafite->getEspessura() != espessura){ 
            std::cout << "Calibre nao compartivel.\n";
            return false;
        }       
        barril.push_back(grafite);
        return true;
    }      
    Grafite* remover(){     return bico = nullptr;      }
    bool pull(){ 
        if(barril.empty()){
            std::cout << "Nao ha grafites.\n";
            return false;
        }
        if(bico == nullptr){ 
            std::cout <<"Colocando grafite no bico.\n";       
            bico = barril.front();       
            barril.pop_front();
            return true;
        }
        remover();
        pull();
        return true;
    }       
    void escreverFolha(){   bico->usoPorFolha();   }
};
int main(){
    Lapiseira nova(0.5);
    Grafite* grafite2b = new Grafite("2B", 20, 0.5);
    Grafite* grafite4b = new Grafite("4B", 20, 0.5);
    Grafite* grafite6b = new Grafite("6B", 20, 0.5);
    nova.inserirGrafite(grafite2b);
    nova.inserirGrafite(grafite4b);
    nova.inserirGrafite(grafite6b);
    std::cin.get();
    nova.pull();
    nova.escreverFolha();
    nova.escreverFolha();
    nova.escreverFolha();
    nova.escreverFolha();
    std::cin.get();        
    nova.escreverFolha();
    std::cin.get();
    nova.pull();
    nova.escreverFolha();
    nova.escreverFolha();
    std::cin.get();
    nova.escreverFolha(); 
    delete grafite2b;
    delete grafite4b;
    delete grafite6b;       
    return 0;
}
