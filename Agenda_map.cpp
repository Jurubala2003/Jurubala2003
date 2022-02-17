#include <iostream>
#include <list>
#include <algorithm>
#include <map>
class Fone{
private:
    std::string id;
    std::string number;    
     bool validade(std::string numero){
        if(numero.size() == 11){
            for(size_t it = 0; it < numero.size(); it++){
                if(numero.data()[it]!= '0'&& numero.data()[it]!= '1' \
                && numero.data()[it]!= '2'&& numero.data()[it]!= '3' \
                && numero.data()[it]!= '4'&& numero.data()[it]!= '5' \
                && numero.data()[it]!= '6'&& numero.data()[it]!= '7' \
                && numero.data()[it]!= '8'&& numero.data()[it]!= '9')                 
                    return false;                 
            return isValid();
            }        
        }
        return false;
    }
    bool isValid(){   return true;   };
    void setId(std::string identificador){  this->id = identificador;   }
    void setNumber(std::string numero){  this->number = numero;  }
public:
    Fone(std::string id, std::string number){
        if(validade(number) == false){
            std::cout <<" Numero invalido.Ponha outro.\n";
            exit(-1);
        }
        this->id = id;        
        this->number = number;
    }        
    std::string getId(){   return id;  }
    std::string getNumber(){  return number;  }
    friend std::ostream& operator<<(std::ostream& os, const Fone& fone){
        os << fone.id << " - " << fone.number;
        return os;
    }
};
class Contato{
private:
    std::string nome;
    std::list<Fone> fones;
public:
    Contato(std::string nome, Fone& cobaia){
        this->nome = nome;
        this->fones.push_back(cobaia);  
    }    
    void addFone(Fone& fone){   fones.push_back(fone);   }
    void rmFone(int indice){   
        if((size_t)indice > fones.size()){
            std::cout << "Indice muito grande.\n";
            exit(-1);
        }
        std::list<Fone>::iterator it1 = fones.begin();  
        advance(it1, indice);     
        fones.erase(it1);
    }    
    void getFones(){    
        for(auto it: fones)
            std::cout << it.getNumber() << std::endl;
    }
    std::string getNome(){  return nome;   }
    void setFones(std::list<Fone> telefones){
        fones.clear(); 
        fones = telefones;
    }
    void setNome(std::string nome){  this->nome = nome;  } 
    friend std::ostream& operator<<(std::ostream& os, const Contato& contato){
        os << contato.nome << " : \n";
        for(auto it: contato.fones)
            os << it.getNumber() << "\n";
        return os;
    } 
};
class Agenda{
private:
    std::map<std::string, Contato*> contatos;
public:
    Agenda(){}
    void addContato(std::string nome, Contato* contato){    contatos.emplace(nome, contato);    }
    int buscaPorNome(std::string nome){   
        int cont1 = 0;
        int cont2 = 0;
        for(auto it: contatos){
            if(it.second->getNome() == nome)
                cont1++;                   
        }            
        if(cont1 == 1){
            for(auto it: contatos)
                if(it.second->getNome() != nome)
                    cont2++;
            return cont2;                     
        }
        return  -1;
    }   
    Contato* buscaContato(std::string nome){   
        for(auto& it: contatos)
            if(it.second->getNome() == nome)
                return it.second;
        std::cout << "contato nao encontrado.\n";
        return nullptr;        
    }
    auto rmContato(std::string chave){  
        if(contatos.empty()){
            std::cout << "Sua agenda esta vazia.\n";
            exit(-1);
        }
         return contatos.erase(chave);   
    }    
    void getContatos(){
        if(contatos.empty()){
            std::cout << "Sua agenda esta vazia.\n";
            exit(-1);
        }
        for(auto& it: contatos){
            std::cout << it.first << " - " << *it.second << "\n";
        }
    }
};
int main(){
    Agenda agenda;
    Fone fone("0", "85987213726");
    Fone fone2("1", "11973843265");
    Fone andressa_fone1("0", "85997826554");
    Contato* israel = new Contato("Juraci", fone); 
    Contato* andressa = new Contato("Andressa", andressa_fone1);          
    israel->addFone(fone2);
    agenda.addContato("jacobino", israel);
    agenda.addContato("Seninha", andressa);
    agenda.getContatos();   
    std::cout << agenda.buscaPorNome("Juraci") << "\n";
    andressa->rmFone(90); 
    agenda.getContatos();
}