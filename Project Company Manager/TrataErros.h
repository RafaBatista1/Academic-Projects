#include "GerenciadorFuncionarios.h"

#pragma once

class TrataErros
{
    public:
        TrataErros();
        bool VerificaSeTemLetras(string str);
        bool VerificaNumero(int tipo, int tam);
        bool VerificaCEP(string CEP);
        bool VerificaSeDataExiste(int dia, int mes, int ano);
        bool AnalisaDataValida(string data);
        bool VerificaFuncionario(int quantidade);
        bool TrataSalario(string salario);
        bool VerificaTamanho(string str); // verifica se o tamanho da string é inválido, por exemplo, um nome não pode possuir 0 caracteres
        bool VerificaTelefone(string telefone);
        ~TrataErros();

    protected:

    private:
};
