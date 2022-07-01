#include "Gerente.h"

Gerente::Gerente(){

}
Gerente::Gerente(string codigo, string nome, string CEP, string numeroCasa, string telefone, string dataIni, string designacao, double salario, string areaSup):
Funcionario(2, codigo, nome, CEP, numeroCasa, telefone, dataIni, designacao, salario){
    this->areaSup = areaSup;
    porcentagem = 0.10;
}
Gerente::~Gerente(){

}

/*void Gerente::concederAumento(){
    double salario;

    salario = getSalario()*1.10;

    setSalario(salario);
}*/
float Gerente::getPorcentagem(){
    return 0.10;
}

string Gerente::getAreaSup(){
    return areaSup;
}

void Gerente::setAreaSup(string A){
    areaSup = A;
}
