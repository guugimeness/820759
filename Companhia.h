#ifndef COMPANHIA_H
#define COMPANHIA_H

#include <iostream>
#include <string>
using namespace std;

namespace poo{
    class Companhia {
        public:
            Companhia(string, string);
            virtual ~Companhia();
            string getCNPJ() const;
            string getNome() const;
            virtual void imprime() const;
        private:
            string nome;
            string cnpj;
    };
}
#endif /* COMPANHIA_H */