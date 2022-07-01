#include"Funcionario.h"

#pragma once

class Diretor:public Funcionario{

public:
    Diretor();
    Diretor(string codigo, string nome, string CEP, string numeroCasa, string telefone, string dataIni, string designacao, double salario, string areaSup, string areaForm); //construtor para iniciar um diretor, com as informações adicionais area de supervisao e area de formação
    ~Diretor();

   //void concederAumento();
   float getPorcentagem();

    string getAreaSup();
    string getAreaForm();
    void setAreaSup(string A);
    void setAreaForm(string A);

private:
    string areaSup, areaForm; // areaSup = area de supervisao, areaForm = area de formação
};