#ifndef PESSOA_H
#define PESSOA_H

#include <string>
#include <iostream>
using namespace std;

namespace poo {
    class Pessoa {
        public:
            Pessoa(string, string);
            virtual ~Pessoa();
            string getNome() const;
            string getCpf() const;
            virtual void imprime() const;
        private:
            string nome;
            string cpf;
    };
}
#endif /* PESSOA_H */