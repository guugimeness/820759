#include "Aluno.h"

namespace poo{

    Aluno::Aluno(string nome, string cpf, int ra, double p1, double p2, double t1, double t2, double t3) :
    Pessoa(nome, cpf), ra(ra), p1(p1), p2(p2), t1(t1), t2(t2), t3(t3) {}
    
    Aluno::~Aluno() {}
    
    int Aluno::getRA() const {
        return this->ra;
    }
    
    void Aluno::imprime() const {
        Pessoa::imprime();
        cout << "RA: " << this->ra << endl;
        cout << "Média final: " << media() << endl;
    }
    
    double Aluno::media() const {
        double mediaT;   // Média dos trabalhos
        double mediaP;   // Média das provas
        double mediaF;   // Média final

        mediaT = (t1 + 2*t2 + 3*t3)/6;
        mediaP = (p1 + p2)/2;
        mediaF = (mediaP*8 + mediaT*2)/10;

        return mediaF;
    }
    
    bool Aluno::aprovado() const {
        return media() >= 6;
    }
    
    bool Aluno::pac() const{
        return media()<6 && media()>=5;
    }
    
    double Aluno::notaPAC() const {
        if (pac()) {
            double PAC = 12 - media();     // Nota no Processo de Avaliação Complementar para ser aprovado
            return PAC;     
        }
        else
            return 0;
    }
}