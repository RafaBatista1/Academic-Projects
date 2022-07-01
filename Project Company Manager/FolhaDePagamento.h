#include "GerenciadorFuncionarios.h"

#pragma once

class FolhaDePagamento:public GerenciadorFuncionarios
{
    public:
        FolhaDePagamento();
        virtual ~FolhaDePagamento();

        int geraDias();
        int geraHorasExtras();

        double calculaSalarioBruto(int dias, int horas, int indice, vector<Funcionario*> listaFuncionarios);
        double descontaINSS(double bruto);
        double descontaIR(double bruto, double inss);

        void calculaFolhaMensal(vector<Funcionario*> listaFuncionarios);
        void exibeFolhaSalario(vector<Funcionario*> listaFuncionarios);
        void exibeFolhaMensal();
        void exibeFolhaAnual();
        int menuExibe(vector<Funcionario*> listaFuncionarios);

    private:
        int checaFolha[12];
};
