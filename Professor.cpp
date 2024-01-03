#include "Professor.h"

namespace poo {

    Professor::Professor(string nome, string cpf, string universidade) :
    Pessoa(nome, cpf), universidade(universidade) {}
    
    Professor::~Professor() {}
    
    string Professor::getUniversidade() const {
        return this->universidade;
    }
    
    void Professor::imprime() const {
        Pessoa::imprime();
        cout << "Universidade: " << this->universidade << endl;    
    }
}