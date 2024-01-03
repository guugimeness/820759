#include "Voo.h"
#include <string>

namespace poo {

    Voo::Voo(Companhia& companhia, string origem, string destino, DataHorario& data) :
    companhia(companhia), origem(origem), destino(destino), data(data) {  
        // Inicializando as poltronas vazias
        for (int i = 0; i < 25; ++i) {
            for (int j = 0; j < 6; ++j) {
                    this->poltrona[i][j] = nullptr;
            }
        }
    }
        
    Voo::~Voo() {}
    
    string Voo::proximoLivre() {
        for (int i=0; i<25; i++){
            for (int j=0; j<6; j++){
                if(this->poltrona[i][j]==nullptr)
                    return calcularPoltrona(i, j);
            }
        }
        return "cheio"; 
    }
    
    bool Voo::verifica(string poltrona) {
        int linha = calcularLinha(poltrona);
        int coluna = calcularColuna(poltrona);

        if (linha >= 0 && linha < 25 && coluna >= 0 && coluna < 6) {
            return (this->poltrona[linha][coluna] != nullptr);
        }
    
        return false;
    }
    
    bool Voo::ocupa(string poltrona, Pessoa& passageiro) {
        if (verifica(poltrona)){
            return false;
        }

        int linha = calcularLinha(poltrona);
        int coluna = calcularColuna(poltrona);
        this->poltrona[linha][coluna] = &passageiro;
        return true;
    }
    
    bool Voo::desocupa(string poltrona) {
        int linha = calcularLinha(poltrona);
        int coluna = calcularColuna(poltrona);

        if (this->verifica(poltrona)) {
            this->poltrona[linha][coluna] = nullptr;
            return true;
        }

        return false;
    }
    
    int Voo::vagas() {
        int count = 0;
        for (int i=0; i<25; i++){
            for (int j=0; j<6; j++){
                if (this->poltrona[i][j]==nullptr)
                    count += 1;
            }
        }
        return count;    
    }
    
    void Voo::imprime() {
        cout << "** Informações do voo **" << endl;
        cout << "Companhia Aérea: " << companhia.getNome() << endl;
        cout << "Origem: " << this->origem << endl;
        cout << "Destino: " << this->destino << endl;
        cout << "Data e Hora: "; data.imprime(false); cout << endl;

        cout << "** Lista de Passageiros **" << endl;
        if(vagas()==150)
            cout << "O voo está vazio!" << endl;

        for (int i = 0; i < 25; ++i) {
            for (int j = 0; j < 6; ++j) {
                if (this->poltrona[i][j] != nullptr) {
                    cout << "Poltrona " << calcularPoltrona(i, j) << ": " << this->poltrona[i][j]->getNome() << endl;
                }
            }
        }
    }
    
    // Conversão de string no formato [01-25][A-E] para inteiros (linha e coluna)
    int Voo::calcularLinha(string poltrona) {
        return stoi(poltrona.substr(0, 2)) - 1;
    }
    int Voo::calcularColuna(string poltrona) {
        return poltrona[2] - 'A';
    }
    
    // Conversão de inteiros para string no formato [01-25][A-E] (poltrona)
    string Voo::calcularPoltrona(int linha, int coluna) {
        string poltrona = to_string(linha + 1);
        poltrona.append(1, ((char) ('A' + coluna)));
        poltrona.insert(0, 3 - poltrona.size(), '0');
        return poltrona;
    }
}