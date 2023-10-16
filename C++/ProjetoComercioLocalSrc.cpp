// Elaborar programa em C++ com o intuito de gestão de um pequeno comercio local, //

#include "Projeto.h"

int main()
{

    // Matriz-Stock;


    string** stockMatrix = new string * [100];

    for (int i = 0; i < 100; i++)
    {
        stockMatrix[i] = new string[6];
    }

    //Matriz Clientes


    string** clientes = new string * [100];

    for (int i = 0; i < 100; i++)
    {
        clientes[i] = new string[4];
    }

    //Matriz Relatório-Produtos

    string** relatorioP = new string * [100];
    for (int i = 0; i < 100; i++)
    {
        relatorioP[i] = new string[4];

    }

    //Matriz Relatório-Clientes
    string** relatorioC = new string * [100];
    for (int i = 0; i < 100; i++)
    {
        relatorioC[i] = new string[4];
    }

    //Vendas

    string** venda = new string * [100];
    for (int i = 0; i < 100; i++)
    {
        venda[i] = new string[6];
    }

    // valores padrão

    stockMatrix[0][0] = "1";
    stockMatrix[0][1] = "Sapatos de Couro";
    stockMatrix[0][2] = "25";
    stockMatrix[0][3] = "30";
    stockMatrix[0][4] = "19";
    stockMatrix[1][0] = "2";
    stockMatrix[1][1] = "Camisa Classica";
    stockMatrix[1][2] = "50";
    stockMatrix[1][3] = "55";
    stockMatrix[1][4] = "23";
    stockMatrix[2][0] = "3";
    stockMatrix[2][1] = "Casaco";
    stockMatrix[2][2] = "54";
    stockMatrix[2][3] = "40";
    stockMatrix[2][4] = "5";


    clientes[0][0] = "1";
    clientes[0][1] = "Armando Sales";
    clientes[0][2] = "969234450";
    clientes[0][3] = "Rua da Vila Nova, n.33, 5543-234, Coimbra";
    clientes[1][0] = "2";
    clientes[1][1] = "Paula Vilar";
    clientes[1][2] = "919902370";
    clientes[1][3] = "Av. dos Combatentes, n.40B, 4432-100, Porto";
    clientes[2][0] = "3";
    clientes[2][1] = "Simon Frankel";
    clientes[2][2] = "969992230";
    clientes[2][3] = "Rua de Sta.Catarina, n.23, 1. Andar-dto, 2550-112, Porto";

    string opcao;

    while (true) {
        cout << endl << "===== MENU PRINCIPAL =====" << endl;
        cout << "1. Efetuar venda" << endl;
        cout << "2. Stock" << endl;
        cout << "3. Clientes" << endl;
        cout << "4. Relatorio" << endl;
        cout << "5. Sair" << endl;
        cout << "\nDigite a opcao desejada: ";
        cin >> opcao;

        if (opcao == "1") {
            Projeto::callVenda(venda, stockMatrix, clientes, relatorioP, relatorioC);
        }
        else if (opcao == "2") {
            Projeto::callStock(stockMatrix);
        }
        else if (opcao == "3") {
            Projeto::callCliente(clientes);
        }
        else if (opcao == "4") {
            Projeto::callRelatorio(relatorioP, relatorioC, stockMatrix, clientes, venda);
        }
        else if (opcao == "5") {
            cout << endl << "Obrigado.";
            break;
        }
        else {
            cout << endl << "Opcao invalida. Escolha novamente." << endl;
        }
    } cout << endl;
}


