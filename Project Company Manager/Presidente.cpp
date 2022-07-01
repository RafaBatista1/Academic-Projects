#include "Presidente.h"

Presidente::Presidente(){

}
Presidente::Presidente(string codigo, string nome, string CEP, string numeroCasa, string telefone, string dataIni, string designacao, double salario, string areaForm, string nivelFormacao):
Funcionario(4, codigo, nome, CEP, numeroCasa, telefone, dataIni, designacao, salario){
    this->areaForm = areaForm;
    this->nivelFormacao = nivelFormacao;
    porcentagem = 0.30;
}
Presidente::~Presidente(){

}

/*void Presidente::concederAumento(){
    double salario;

    salario = getSalario()*1.30;

    setSalario(salario);
}*/
float Presidente::getPorcentagem(){
    return 0.30;
}

string Presidente::getNivelFormacao(){
    return nivelFormacao;
}
string Presidente::getAreaForm(){
    return areaForm;
}
void Presidente::setAreaForm(string A){
    areaForm = A;
}
void Presidente::setNivelFormacao(string N){
    nivelFormacao = N;
}