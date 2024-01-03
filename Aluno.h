#ifndef ALUNO_H
#define ALUNO_H

#include "Pessoa.h"
#include <string>
#include <iostream>
using namespace std;

namespace poo{
    class Aluno: public Pessoa {
        public:
            Aluno(string, string, int, double, double, double, double, double);
            virtual ~Aluno();
            int getRA() const;
            virtual void imprime() const;
            double media() const;    // Média final
            bool aprovado() const;
            bool pac() const;      // Processo de Avaliação Complementar
            double notaPAC() const;       // Nota no Processo de Avaliação Complementar para ser aprovado
        private:
            int ra;
            double p1;  // Nota na Prova 1
            double p2;  // Nota na Prova 2
            double t1;  // Nota no Trabalho 1
            double t2;  // Nota no Trabalho 2
            double t3;  // Nota no Trabalho 3
    };
}
#endif /* ALUNO_H */