#ifndef VOO_H
#define VOO_H

#include "DataHorario.h"
#include "Companhia.h"
#include "Pessoa.h"
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

namespace poo {
    class Voo {
        public:
            Voo(Companhia&, string, string, DataHorario&);
            virtual ~Voo();
            string proximoLivre();
            bool verifica(string);
            bool ocupa(string, Pessoa&);
            bool desocupa(string);
            int vagas();
            virtual void imprime();
        private:
            Companhia& companhia;
            string origem;
            string destino;
            DataHorario& data;
            Pessoa* poltrona[25][6];
            // Métodos auxiliares para calcular linha, coluna e poltrona:
            int calcularLinha(string poltrona);
            int calcularColuna(string poltrona);
            string calcularPoltrona(int linha, int coluna);
    };
}
#endif /* VOO_H */