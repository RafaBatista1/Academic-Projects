#include"Funcionario.h"
#include"Operador.h"
#include"Gerente.h"
#include"Diretor.h"
#include"Presidente.h"

#pragma once

class GerenciadorFuncionarios{

public:
    GerenciadorFuncionarios();
    virtual ~GerenciadorFuncionarios();

    vector<Funcionario*> getListaFuncionarios();

    int cadastrarFuncionario(); //função que cadastrara um novo funcionario adicionando no vetor listaFuncionarios
    int editarFuncionario(); //função que editara um funcionario ja cadastrado no vetor listaFuncionarios
    int excluirFuncionario(); //função que excluira um funcionario do vetor listaFuncionarios

    void exibirFuncionario(int indice); //função que exibe um funcionario e recebe como parametro o indice desse funcionario no vetor listaFuncionarios
    void exibirTodosFuncionarios(); //função que exibe todos os funcionarios cadastrados na empresa
    void buscarFuncionario(); //função que busca funcionarios com um dos 3 métodos, nome, data de inicialização ou endereço

    void concederAumento(); // função que concede um aumento a todos os funcionarios baseados na sua designação

    int lerArquivo(); //conjunto de funções que leem o arquivo listadefuncionarios e escrevem nele
    void salvarArquivo();
    int verificaArquivo();

protected:

private:
    vector<Funcionario*> listaFuncionarios;
    
    string gerarEndereco(string cep, string numeroCasa); //gera um arquivo com as informações de endereço de um funcionario baseado no cep
    string enderecoToString(string numeroCasa); //recebe o numero da casa do funcionario e retorna uma string com o endereço completo, deleta o arquivo gerado por gerar endereço, essas duas funções PRECISAM SER USADAS JUNTAS
};