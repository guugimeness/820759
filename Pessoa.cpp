#include "Pessoa.h"

namespace poo{

    Pessoa::Pessoa(string cpf, string nome) :
    nome(nome), cpf(cpf) {}
    
    Pessoa::~Pessoa() {}
    
    string Pessoa::getNome() const {
        return this->nome;
    }
    
    string Pessoa::getCpf() const {
        return this->cpf;
    }
    
    void Pessoa::imprime() const {
        cout << "Nome: " << this->nome << endl;
        cout << "CPF: " << this->cpf << endl;
    }
}