#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Pessoa.h"
#include <iostream>
#include <string>
using namespace std;

namespace poo {
    class Professor : public Pessoa {
        public:
            Professor(string, string, string);
            virtual ~Professor();
            string getUniversidade() const;
            virtual void imprime() const;
        private:
            string universidade;
    };
}
#endif /* PROFESSOR_H */