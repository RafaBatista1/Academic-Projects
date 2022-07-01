#include"Funcionario.h"
#include"Operador.h"
#include"Gerente.h"
#include"Diretor.h"
#include"Presidente.h"
#include"GerenciadorFuncionarios.h"
#include"FolhaDePagamento.h"
#include <Windows.h>

using namespace std;

int main(){

    int menu;
    string confirmacao;
    GerenciadorFuncionarios gerenciador;
    FolhaDePagamento gerenciadorPagamento;

    cout << "\n\n\n_____BEM VINDO AO SISTEMA DE GERENCIADOR DE FUNCIONARIOS E FOLHAS DE PAGAMENTO____";
    Sleep(2000);
    system("cls");

    if (!gerenciador.verificaArquivo()){
        return -1;
    }

    while (1){
        cout << "______MENU PRINCIPAL______" << endl << endl;

        cout << "1 - Cadastrar funcionario." << endl <<
                "2 - Editar funcionario." << endl <<
                "3 - Excluir funcionario." << endl <<
                "4 - Exibir todos os funcionarios." << endl <<
                "5 - Buscar funcionario." << endl <<
                "6 - Conceder aumento." << endl <<
                "7 - Calcular folha salarial" << endl <<
                "8 - Exibir folha salarial" << endl <<
                "0 - Sair do programa" << endl <<
                "__________________________" << endl;

        cout << "-> ";
        cin >> menu;
        cin.ignore();

        switch (menu){
        case 1:
            system("cls");
            gerenciador.cadastrarFuncionario();

            break;
        case 2:
            system("cls");
            gerenciador.editarFuncionario();

            break;
        case 3:
            system("cls");
            gerenciador.excluirFuncionario();

            break;
        case 4:
            system("cls");
            gerenciador.exibirTodosFuncionarios();
            system("pause");
            system("cls");
            break;
        case 5:
            system("cls");
            gerenciador.buscarFuncionario();
            break;
        case 6:
            system("cls");
            gerenciador.concederAumento();

            break;
        case 7:
            system("cls");
            gerenciadorPagamento.calculaFolhaMensal(gerenciador.getListaFuncionarios());

            break;
        case 8:
            system("cls");
            gerenciadorPagamento.menuExibe(gerenciador.getListaFuncionarios());

            break;

        case 0:
            system("cls");
            cout << "____DESEJA SALVAR AS ALTERACOES FEITAS(y/n):____" << endl;

            while (1){
                cout << "-> ";
                getline(cin, confirmacao);

                if(confirmacao == "y"){
                    cout << "SALVANDO AS ALTERACOES REALIZADAS NO ARQUIVO..." << endl;
                    gerenciador.salvarArquivo();
                    Sleep(1000);
                    system("cls");
                    cout << "\n\n\n\nALTERACOES SALVAS COM SUCESSO, ADEUS...";
                    Sleep(1000);
                    return 2;
                }
                else if(confirmacao == "n"){
                    system("cls");
                    cout << "\n\n\n\nAS ALTERACOES NAO FORAM SALVAS, ADEUS...";
                    Sleep(1000);
                    return 1;
                }
                else{
                    cout << "Entrada invalida, insira outra(y/n)\n";
                }
            }

        default:
            cout << "Opção inválida, insira um valor de 1 a 8." << endl;
            break;
        }
    }
    return 0;
}
