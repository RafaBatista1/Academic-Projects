#include "Diretor.h"

Diretor::Diretor(){

}
Diretor::Diretor(string codigo, string nome, string CEP, string numeroCasa, string telefone, string dataIni, string designacao, double salario, string areaSup, string areaForm):
Funcionario(3, codigo, nome, CEP, numeroCasa, telefone, dataIni, designacao, salario){
    this->areaSup = areaSup;
    this->areaForm = areaForm;
    porcentagem = 0.20;
}
Diretor::~Diretor(){

}

/*void Diretor::concederAumento(){
    double salario;

    salario = getSalario()*1.20;

    setSalario(salario);
}*/
float Diretor::getPorcentagem(){
    return 0.20;
}

string Diretor::getAreaSup(){
    return areaSup;
}
string Diretor::getAreaForm(){
    return areaForm;
}
void Diretor::setAreaSup(string A){
    areaSup = A;
}
void Diretor::setAreaForm(string A){
    areaForm = A;
}