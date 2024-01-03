#include "Companhia.h"

namespace poo {

    Companhia::Companhia(string nome, string cnpj) : 
    nome(nome), cnpj(cnpj) {}
    
    Companhia::~Companhia() {}
    
    string Companhia::getCNPJ() const {
        return this->cnpj;    
    }
    
    string Companhia::getNome() const {
        return this->nome;
    }
    
    void Companhia::imprime() const {
        cout << "Nome da companhia: " << this->nome << endl;
        cout << "CNPJ: " << this->cnpj << endl; 
    }
}