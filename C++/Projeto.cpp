#include "Projeto.h"


// STOCK //

int Projeto::counter = 3;
int Projeto::clientCounter = 3;
int Projeto::relatorioPCounter = 0;
int Projeto::relatorioCCounter = 0;
int Projeto::numeroFatura = 10001;
mt19937 Projeto::rng(std::time(nullptr));

int Projeto::generateRandomNumber()
{
    // Gerador de número aleatório
    uniform_int_distribution<int> dist(1, 1000);
    return dist(rng);
}

string Projeto::printCurrentDateTime()
{
    // hora atual
    time_t now = std::time(nullptr);

    // Converter para string
    char buffer[26];
    ctime_s(buffer, sizeof(buffer), &now);
    string currentTime(buffer);

    return currentTime;
}

void Projeto::callStock(string** stockMatrix) {

    string opcao;
    string sn;
    string nome_prod;
    int nQuantidade;
    int variavelTemp;
    int varAux = 0;
    string id_artigo = "4";

    while (opcao != "5")
    {
        cout << "\n===== MENU STOCK =====" << endl;
        cout << "1. Criar Artigo" << endl;
        cout << "2. Adicionar Stock" << endl;
        cout << "3. Impressao" << endl;
        cout << "4. Eliminar Produto" << endl;
        cout << "5. Sair" << endl;
        cout << "Digite a opcao desejada: ";
        cin >> opcao;

        if (opcao == "1") {

            // criar novo item
            for (int i = counter; i < counter + 1; i++) {
                for (int j = 0; j < 6; j++)
                {
                    if (j == 0) {
                        // ID introduzido pelo sistema - o mesmo para todos os ID
                        stockMatrix[i][0] = id_artigo;
                        int num = stoi(id_artigo);
                        num++;
                        id_artigo = to_string(num);

                    }
                    else if (j == 1) {

                        bool isDuplicate = false;
                        do {
                            cout << endl << "Insira o nome do artigo: ";
                            cin.ignore(); // ignora inputs anteriores
                            getline(cin, stockMatrix[i][j]); // permite escrever nomes com mais de uma palavra

                            isDuplicate = false;
                            for (int k = 0; k < i; k++) {
                                if (stockMatrix[k][2] == stockMatrix[i][j]) {
                                    isDuplicate = true;
                                    cout << endl << "Artigo ja existente." << endl;
                                    break;
                                }
                            }
                        } while (isDuplicate);
                    }

                    else if (j == 2) {

                        // controlo
                        bool isDuplicate = false;
                        do {
                            cout << endl << "Insira a quantidade do artigo (unidades): ";
                            cin >> stockMatrix[i][j];

                            int id;
                            istringstream iss(stockMatrix[i][j]);
                            if (!(iss >> id) || id < 1 || id > 9999) // limite superior para o número de unidades + texto não numérico
                            {
                                cout << "Quantidade invalida." << endl;
                                isDuplicate = true;
                                continue;
                            }
                            isDuplicate = false;

                        } while (isDuplicate);

                    }
                    else if (j == 3) {
                        bool isDuplicate = false;
                        do {
                            cout << endl << "Insira o preco (valor de custo) do artigo: ";
                            cin >> stockMatrix[i][j];
                            double id;
                            istringstream iss(stockMatrix[i][j]);
                            if (!(iss >> id) || id < 0 || id > 999999)
                            {
                                cout << "Valor invalido." << endl;
                                isDuplicate = true;
                                continue;
                            }
                            isDuplicate = false;

                        } while (isDuplicate);
                    }


                    else if (j == 4) {
                        // controlo
                        bool isDuplicate = false;
                        do {
                            cout << endl << "Insira a percentagem de IVA aplicavel a esse produto: ";
                            cin >> stockMatrix[i][j];

                            int id2;
                            istringstream iss(stockMatrix[i][j]);
                            if (!(iss >> id2) || id2 < 0 || id2 > 100) // não aceita IVA superior a 100. Pode ser alterado
                            {
                                cout << "Valor de IVA invalido. Por favor insira novo valor: " << endl;
                                isDuplicate = true;
                                continue;
                            }
                            isDuplicate = false;

                        } while (isDuplicate);
                    }
                }
                stockMatrix[i][5] = "0";
                counter++;

                cout << endl << "Quer introduzir mais artigos ( s - sim, n - nao)?";
                cin >> sn;
                if (sn == "s" || sn == "sim") {
                    continue;
                }
                else {
                    break;
                }
            }
        }
        // acrescentar ao stock
        else if (opcao == "2") {

            cout << endl << endl << "Acrescentar stock a que produto?\n";
            cin >> nome_prod;
            cout << endl << "Que quantidade quer adicionar/retirar?\n";
            cin >> nQuantidade;

            for (int i = 0; i < counter + 1; i++) {
                for (int j = 0; j < 6; j++)
                {
                    if (stockMatrix[i][1] == nome_prod) {
                        variavelTemp = stoi(stockMatrix[i][2]);
                        varAux = (variavelTemp + nQuantidade);
                        stockMatrix[i][2] = to_string(varAux);
                        break;
                    }
                }
            }
        }
        else if (opcao == "3") {

            cout << "\n\n*************************  STOCK  *************************\n"; // setw usado para alinhar o texto
            cout << left << setw(4) << "ID" << "\t"
                << setw(20) << "Nome" << "\t"
                << setw(10) << "Unidades" << "\t"
                << setw(5) << "Preco" << "\t"
                << setw(9) << "IVA" << endl;

            for (int i = 0; i < counter; i++) {
                cout << endl;
                cout << left << setw(4) << stockMatrix[i][0] << "\t";
                cout << setw(20) << stockMatrix[i][1] << "\t";
                cout << right << setw(4) << stockMatrix[i][2] << "\t";
                cout << setw(10) << stockMatrix[i][3] << "eur\t";
                cout << setw(3) << stockMatrix[i][4] << "%\t";
            }
            cout << endl << "***********************************************************\n";
        }

        else if (opcao == "4") {
            cout << endl << endl << "Que produto pretende eliminar?\n";
            cin.ignore();
            getline(cin, nome_prod);

            int removeIndex = -1;
            for (int i = 0; i < counter + 1; i++) {
                if (stockMatrix[i][1] == nome_prod) {
                    removeIndex = i;
                    break;
                }
            }

            if (removeIndex != -1) {
                for (int i = removeIndex; i < counter; i++) {
                    for (int j = 0; j < 6; j++) {
                        stockMatrix[i][j] = stockMatrix[i + 1][j];
                    }
                }

                counter--;
                cout << "Produto removido com sucesso!" << endl;
            }
            else {
                cout << "Produto nao encontrado!" << endl;
            }
        }
    }


}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 //CLIENTE //

void Projeto::callCliente(string** clientes) {

    string opcao;
    string  sn;
    string id_cliente = "4";
    string nomeTemp;


    while (opcao != "5") {

        cout << endl << "\n===== MENU CLIENTE =====" << endl;
        cout << "1. Criar Cliente" << endl;
        cout << "2. Eliminar Cliente" << endl;
        cout << "3. Alterar o Nome do Cliente" << endl;
        cout << "4. Lista de Clientes" << endl;
        cout << "5. Sair" << endl;

        cout << "Digite a opcao desejada: ";
        cin >> opcao;
        cin.ignore();

        if (opcao == "1") {
            for (int i = clientCounter; i < clientCounter + 1; i++) {
                for (int j = 0; j < 4; j++) {
                    if (j == 0) {
                        clientes[i][0] = to_string(i + 1);
                    }
                    else if (j == 1) {
                        bool isDuplicate = false;
                        bool hasNumericChars = false;
                        do {
                            cout << endl << "Insira o nome do cliente: ";
                            getline(cin, clientes[i][j]);
                        

                            // controlo
                            hasNumericChars = false;
                            for (char c : clientes[i][j]) {
                                if (isdigit(c)) {
                                    hasNumericChars = true;
                                    cout << endl << "Nome nao pode conter caracteres numericos." << endl;
                                    break;
                                }
                            }

                            isDuplicate = false;
                            for (int k = 0; k < i; k++) {
                                if (clientes[k][1] == clientes[i][j]) {
                                    isDuplicate = true;
                                    cout << endl << "Nome ja existente." << endl;
                                    break;
                                }
                            }
                        } while (isDuplicate || hasNumericChars);
                    }
                    else if (j == 2) {
                        bool isDuplicate = false;
                        bool isValidLength = true;
                        do {
                            cout << endl << "Insira o numero de telefone do cliente: ";
                            getline(cin, clientes[i][j]);

                            // controlo
                            bool isValid = true;
                            for (char c : clientes[i][j]) {
                                if (!isdigit(c)) {
                                    isValid = false;
                                    break;
                                }
                            }


                            if (clientes[i][j].empty() || !isValid) { // verificar se string não tem caracteres
                                cout << "Numero de telefone invalido." << endl;
                                isDuplicate = true;
                                continue;
                            }

                            // controlo numeros duplicados
                            isDuplicate = false;
                            for (int k = 0; k < i; k++) {
                                if (clientes[k][2] == clientes[i][j]) {
                                    isDuplicate = true;
                                    cout << endl << "Numero de telefone ja existente." << endl;
                                    break;
                                }
                            }

                            // 9 dígitos - controlo
                            isValidLength = (clientes[i][j].length() == 9);
                            if (!isValidLength) {
                                cout << "O numero de telefone deve ter exatamente 9 digitos." << endl;
                                isDuplicate = true;
                            }
                        } while (isDuplicate);
                    }
                    else if (j == 3) {
                        cout << endl << "Insira a morada do cliente: ";
                        getline(cin, clientes[i][j]);
                    }
                }
                clientCounter++;

                cout << endl << "Quer introduzir mais clientes (s - sim, n - nao)?";

                cin >> sn;
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Remover restantes caracteres (ajuda para re-inserções após 's')
                if (sn == "s" || sn == "sim") {
                    continue;
                }
                else {
                    break;
                }
            }
        }
        else if (opcao == "2") {
            cout << endl << endl << "Qual o ID cliente que quer eliminar?\n";
            cin >> id_cliente;

            int removeIndex = -1;
            for (int i = 0; i < clientCounter; i++) {
                if (clientes[i][0] == id_cliente) {
                    removeIndex = i;
                    break;
                }
            }

            if (removeIndex != -1) {
                for (int i = removeIndex; i < clientCounter - 1; i++) {
                    for (int j = 0; j < 4; j++) {
                        clientes[i][j] = clientes[i + 1][j];
                    }
                }
                clientCounter--;

                cout << "Cliente removido com sucesso!" << endl;
            }
            else {
                cout << "Cliente nao encontrado!" << endl;
            }
        }
        else if (opcao == "3") {
            cout << endl << endl << "Qual o ID do cliente que quer alterar?\n";
            cin >> id_cliente;
            cout << endl << "Que nome pretende inserir?\n";
            cin.ignore(); // ignora inputs anteriores
            getline(cin, nomeTemp);

            int updateIndex = -1;
            for (int i = 0; i < clientCounter; i++) {
                if (clientes[i][0] == id_cliente) {
                    updateIndex = i;
                    break;
                }
            }

            if (updateIndex != -1) {
                clientes[updateIndex][1] = nomeTemp;
                cout << endl << "Nome alterado com sucesso!\n";
            }
            else {
                cout << endl << "Cliente nao encontrado.";
            }
        }
        else if (opcao == "4") {
            cout << "\n\n*************************  CLIENTES  *******************************************************************\n\n";
            cout << setw(4) << "ID" << "\t";
            cout << setw(2) << "Nome" << "\t";
            cout << setw(20) << "Tel." << "\t";
            cout << setw(14) << "Morada" << endl;

            for (int i = 0; i < clientCounter; i++) {
                cout << left << setw(4) << clientes[i][0] << "\t";
                cout << setw(20) << clientes[i][1] << "\t";
                cout << setw(15) << clientes[i][2] << "\t";
                cout << setw(15) << clientes[i][3] << endl;
            }

            cout << "********************************************************************************************************\n";
        }
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// VENDA //

void Projeto::callVenda(string** venda, string** stockMatrix, string** clientes, string** relatorioP, string** relatorioC) {


    int contadorVendas = 0;
    string opcao;
    string id_prod;
    int itemsSold;
    string numCliente;
    int quantProd;
    string sn;
    double somatorio = 0;
    double pago = 0;
    string nomeCliente; // para usar no relatório
    double somatorioTemp = 0;
    int contagem = 0;


    // Matriz-Stock Temporário 
    string** stockTemp = new string * [100];

    for (int i = 0; i < 100; i++)
    {
        stockTemp[i] = new string[6];
    }


    for (int i = 0; i < counter; i++) {
        for (int j = 0; j < 6; j++) {
            stockTemp[i][j] = stockMatrix[i][j];
        }
    }

    // Matriz-Talão

    string** talaoMatrix = new string * [100];

    for (int i = 0; i < 100; i++)
    {
        talaoMatrix[i] = new string[6];
    }

    while (opcao != "4") {

        cout << endl << "\n===== MENU VENDA =====" << endl;
        cout << "1. Selecionar produto" << endl;
        cout << "2. Checkout" << endl;
        cout << "3. Imprimir talao" << endl;
        cout << "4. Sair" << endl;
        cout << "Digite a opcao desejada: ";
        cin >> opcao;

        if (opcao == "1") {
            cout << endl << "Qual o ID do produto que deseja? ";
            cin >> id_prod;

            int stockIndex = -1;
            // controlo para produtos já em stock
            for (int i = 0; i < counter; i++) {
                if (stockTemp[i][0] == id_prod) {
                    stockIndex = i;
                    break;
                }
            }

            if (stockIndex == -1) {
                cout << endl << "Produto nao encontrado em stock!" << endl;
            }
            else {
                cout << endl << "Quantidade do produto que deseja? ";
                cin >> quantProd;

                // controlo input inválido
                bool isInvalidInput = false;
                for (char c : quantProd) {
                    if (!isdigit(c)) {
                        isInvalidInput = true;
                        break;
                    }
                }
                if (isInvalidInput) {
                    cout << "Quantidade invalida. Por favor, insira um numero.\n";

                }
                else {
                    itemsSold = stoi(quantProd);

                    int availableQuantity = stoi(stockTemp[stockIndex][2]);

                    if (itemsSold > availableQuantity) {
                        cout << endl << "Quantidade insuficiente de produto em stock!\n";

                    }
                    else {
                        double originalPrice = stod(stockTemp[stockIndex][3]);

                        double alteredPrice = originalPrice * 1.3;

                        double taxaIVA = stoi(stockTemp[stockIndex][4]) / 100.0;
                        double ValorIVA = alteredPrice * taxaIVA;
                        double IVAPrice = alteredPrice + ValorIVA;
                        venda[contadorVendas][0] = id_prod;
                        venda[contadorVendas][1] = to_string(itemsSold);
                        venda[contadorVendas][2] = to_string(originalPrice);
                        venda[contadorVendas][3] = to_string(alteredPrice);
                        venda[contadorVendas][4] = to_string(IVAPrice);
                        venda[contadorVendas][5] = stockTemp[stockIndex][1]; // Acrescento com nomes - para ajudar na lógica da relatorioC

                        contadorVendas++;

                        cout << endl << "Produto adicionado ao carrinho de compras!" << endl;

                        // Remover items ao stock temporário
                        int leftInStock = stoi(stockTemp[stockIndex][2]);
                        leftInStock -= itemsSold;
                        stockTemp[stockIndex][2] = to_string(leftInStock);
                        stockTemp[stockIndex][5] = to_string(itemsSold);
                    }
                }
            }
        }

        // Checkout
        else if (opcao == "2") {
            for (int i = 0; i < contadorVendas; i++) {
                somatorioTemp += (stod(venda[i][4]) * stod(venda[i][1]));
            }

            cout << endl << "Total a pagar: " << somatorioTemp << "eur." << endl;

            if (somatorioTemp != 0) {
                double valorIntroduzido;

                while (true) {
                    cout << endl << "Valor introduzido pelo cliente: ";
                    cin >> valorIntroduzido;

                    if (cin.fail() || valorIntroduzido < 0 || valorIntroduzido < somatorioTemp) {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "\nValor invalido. Insira um novo valor (valor a pagar: " << somatorioTemp << "eur)." << endl;
                    }
                    else {
                        break;
                    }
                }

                pago = valorIntroduzido;

                bool validCliente = false;
                while (!validCliente) {
                    cout << "Qual o numero de cliente ('0' se nao for cliente): ";
                    cin >> numCliente;

                    if (numCliente != "0") {
                        // Verificar se existe na matrix cliente
                        for (int i = 0; i < clientCounter; i++) {
                            if (clientes[i][0] == numCliente) {
                                validCliente = true;
                                break;
                            }
                        }
                        cout << endl << "";
                        if (!validCliente) {
                            cout << "\nNumero de cliente nao encontrado. Por favor, insira um numero valido." << endl;
                        }
                    }
                    else {
                        validCliente = true;
                    }
                }
            }
            else {
                callVenda(venda, stockMatrix, clientes, relatorioP, relatorioC);
            }
        }

        else if (opcao == "3") {

            cout << endl << "Finalizar a transacao (s - sim, n - nao)?";
            cin >> sn;

            if (sn == "s" || sn == "sim") {
                somatorio = somatorioTemp;
                somatorioTemp = 0;

                if (numCliente != "0") {
                    for (int i = 0; i < clientCounter; i++) {
                        if (numCliente == clientes[i][0]) {
                            nomeCliente = clientes[i][1];
                            break;
                        }
                    }
                }

                // atualizar stock
                for (int i = 0; i < counter; i++) {
                    for (int j = 0; j < 6; j++) {

                        stockMatrix[i][j] = stockTemp[i][j];
                    }
                }
                //Criação da TalaoMatrix
                for (int i = 0; i < contadorVendas; i++) {
                    contagem++;
                    talaoMatrix[i][0] = to_string(contagem);
                    for (int j = 0; j < 6; j++) {
                        if (stockMatrix[j][0] == venda[i][0]) {
                            talaoMatrix[i][1] = stockMatrix[j][1];
                        }
                    }

                    talaoMatrix[i][2] = venda[i][1];
                    talaoMatrix[i][3] = venda[i][3];

                    for (int j = 0; j < counter; j++) {
                        if (venda[i][0] == stockMatrix[j][0]) {
                            talaoMatrix[i][4] = stockMatrix[j][4];
                        }
                    }

                    talaoMatrix[i][5] = venda[i][4];
                }
                contagem = 0;

                // Matriz Relatório de Produto
                for (int i = 0; i < contadorVendas; i++) {

                    // verificar se existe em relatorioP
                    int existingLineIndex = -1;
                    for (int j = 0; j < relatorioPCounter + 1; j++) {
                        if (venda[i][0] == relatorioP[j][0]) {
                            existingLineIndex = j;
                            break;
                        }
                    }

                    if (existingLineIndex != -1) {

                        // Update à linha

                        int auxqtd = stoi(relatorioP[existingLineIndex][2]);
                        auxqtd += stoi(venda[i][1]);

                        string updatedQtd = to_string(auxqtd);
                        relatorioP[existingLineIndex][2] = updatedQtd;
                    }
                    else {
                        // Adicionar a relatorioP
                        relatorioP[relatorioPCounter][0] = venda[i][0];
                        relatorioP[relatorioPCounter][1] = venda[i][5];
                        relatorioP[relatorioPCounter][2] = venda[i][1];
                        double auxLucro1 = stod(venda[i][3]);
                        string auxLucro2 = to_string(auxLucro1 * 0.3);
                        relatorioP[relatorioPCounter][3] = auxLucro2;
                        relatorioPCounter++;
                    }
                }

                // Matriz RelatórioC
                if (numCliente != "0") {
                    for (int i = 0; i < contadorVendas; i++) {
                        int existingLineIndex = -1;
                        for (int j = 0; j < relatorioCCounter + 1; j++) {
                            if (numCliente == relatorioC[j][0]) {
                                existingLineIndex = j;
                                break;
                            }
                        }

                        if (existingLineIndex != -1) {
                            int varAux1 = stoi(relatorioC[existingLineIndex][2]);
                            varAux1++;
                            relatorioC[existingLineIndex][2] = to_string(varAux1);

                            double varAux2 = stod(relatorioC[existingLineIndex][3]);
                            string varAux3 = to_string(varAux2 + somatorio);
                            relatorioC[existingLineIndex][3] = varAux3;
                        }
                        else {
                            relatorioC[relatorioCCounter][0] = numCliente;
                            relatorioC[relatorioCCounter][1] = nomeCliente;
                            relatorioC[relatorioCCounter][2] = "1";
                            relatorioC[relatorioCCounter][3] = to_string(somatorio);
                            relatorioCCounter++;
                        }
                    }
                }

                cout << "\n\n*************************  TALAO  *************************\n";


                string currentDateTime = printCurrentDateTime();
                cout << endl << "Data: " << currentDateTime;
                printCurrentDateTime();
                cout << endl << "Numero de Fatura: " << numeroFatura;
                numeroFatura++;

                if (numCliente != "0") {
                    cout << endl << "Numero de Cliente: " << numCliente;
                }

                cout << "\n\n " << "\t" << "Artigo" << "\t" << "Qtd." << "\t" << "Valor Base" << "\t" << "IVA" << "\t" << "Valor c/IVA" << endl;

                for (int i = 0; i < contadorVendas; i++) {
                    cout << "\n";
                    cout << fixed << setprecision(2);

                    for (int j = 0; j < 6; j++) {
                        cout << talaoMatrix[i][j] << "\t";
                    }

                }
                if (generateRandomNumber() != 1) { // se valor != 1 -> compra normal
                    cout << endl << "\nValor total a pagar: " << somatorio;
                    cout << endl << "Valor pago: " << pago;
                    cout << endl << "Troco: " << pago - somatorio;
                }
                else { // se valor random = 1 -> prémio!!! 1 em 1000
                    cout << endl << "\nVenda Sorteada! Parabens!!!";
                    cout << endl << "\nValor total a pagar: " << 0;
                    cout << endl << "Valor pago: " << 0;
                    cout << endl << "Troco: " << 0;
                }

                for (int i = 0; i < counter; i++) {
                    for (int j = 0; j < 6; j++) {
                        stockTemp[i][j] = stockMatrix[i][j];
                    }
                }

                cout << endl << "***********************************************************\n";

                // esvaziar carrinho de compras
                for (int i = 0; i < contadorVendas; i++) {
                    for (int j = 0; j < 5; j++) {
                        venda[i][j] = "";
                    }
                }
                // controlos
                contadorVendas = 0;
                pago = 0;
                somatorio = 0;
                numCliente = "0";
            }
        }

    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// RELATÓRIO

void Projeto::callRelatorio(string** relatorioP, string** relatorioC, string** stockMatrix, string** clientes, string** venda) {

    string opcao;
    string nomeProd;

    // Vetor de vendas de produto


    while (opcao != "4") {

        cout << endl << "\n===== MENU RELATORIO =====" << endl;
        cout << "1. Relatorio de Stock (Stock total)" << endl;
        cout << "2. Relatorio de vendas de um produto" << endl;
        cout << "3. Relatorio total de vendas" << endl;
        cout << "4. Sair" << endl;
        cout << "Digite a opcao desejada: ";
        cin >> opcao;

        if (opcao == "1") {

            cout << "\n\n*************************  STOCK  *************************\n";
            cout << left << setw(4) << "ID" << "\t"
                << setw(20) << "Nome" << "\t"
                << setw(10) << "Unidades" << "\t"
                << setw(5) << "Preco" << "\t"
                << setw(9) << "IVA" << endl;

            for (int i = 0; i < counter; i++) {
                cout << endl;
                cout << left << setw(4) << stockMatrix[i][0] << "\t";
                cout << setw(20) << stockMatrix[i][1] << "\t";
                cout << right << setw(4) << stockMatrix[i][2] << "\t";
                cout << setw(10) << stockMatrix[i][3] << " eur\t";
                cout << setw(3) << stockMatrix[i][4] << "%\t";
            }
            cout << endl << "***********************************************************\n";

        }
        else if (opcao == "2") {

            cout << endl << "Qual o produto que deseja consultar? ";
            cin.ignore();
            getline(cin, nomeProd);
            cout << endl << "TESTE. Tamanho relatorioPCoutnre: " << relatorioPCounter << endl;
            bool found = false;
            for (int i = 0; i < relatorioPCounter; i++) {
                if (relatorioP[i][1] == nomeProd) {
                    found = true;
                    cout << "\n\n************ RELATORIO DE VENDAS DO PRODUTO ************\n";
                    cout << "ID" << "\t" << "Nome" << "\t" << "Vendas" << "\t" << "Lucro";

                    cout << "\n" << relatorioP[i][0] << "\t" << relatorioP[i][1] << "\t" << relatorioP[i][2] << "\t" << relatorioP[i][3] << "\n";

                    cout << "*******************************************************\n";
                    break;
                }
            }

            if (!found) {
                cout << "\nProduto nao encontrado ou sem vendas realizadas." << endl;
            }
        }
        else if (opcao == "3") {
            cout << "\n\n*********** RELATORIO TOTAL DE VENDAS ***********\n";
            cout << left << setw(4) << "ID" << "\t"
                << setw(20) << "Nome" << "\t"
                << setw(10) << "Vendas" << "\t"
                << setw(6) << "Lucro" << "\t"
                << setw(6) << "Status" << endl;

            int maxIDWidth = 4;
            int maxNomeWidth = 20;


            for (int i = 0; i < relatorioPCounter; i++) {
                int idWidth = relatorioP[i][0].length();
                int nomeWidth = relatorioP[i][1].length();
                if (idWidth > maxIDWidth) {
                    maxIDWidth = idWidth;
                }
                if (nomeWidth > maxNomeWidth) {
                    maxNomeWidth = nomeWidth;
                }
            }
            if (relatorioPCounter == 0) {
                cout << "\nNao foram efetuadas vendas." << endl;
            }
            else {
                for (int i = 0; i < relatorioPCounter; i++) {
                    bool isInStock = false;

                    // verificação se está em stock
                    for (int j = 0; j < counter; j++) {
                        if (stockMatrix[j][1] == relatorioP[i][1]) {
                            isInStock = true;
                            break;
                        }
                    }

                    // Print the report with aligned columns
                    cout << left << setw(maxIDWidth) << relatorioP[i][0] << "\t"
                        << setw(maxNomeWidth) << relatorioP[i][1] << "\t"
                        << setw(10) << relatorioP[i][2] << "\t"
                        << setw(6) << relatorioP[i][3];

                    if (isInStock) {
                        cout << "\tCom Stock";
                    }
                    else {
                        cout << "\tSem Stock";
                    }
                    cout << endl;
                }

                cout << "*************************************************\n";

                // Most sold products
                int maxSoldQty = stoi(relatorioP[0][2]);
                string mostSoldProduct = relatorioP[0][1];

                for (int i = 1; i < relatorioPCounter; i++) {
                    int soldQty = stoi(relatorioP[i][2]);
                    if (soldQty > maxSoldQty) {
                        maxSoldQty = soldQty;
                        mostSoldProduct = relatorioP[i][1];
                    }
                    else if (soldQty == maxSoldQty) {
                        mostSoldProduct += ", " + relatorioP[i][1];
                    }
                }

                cout << "Produto mais vendido: " << mostSoldProduct << " (" << maxSoldQty << " unidades)" << endl;

                // Menos vendidos
                int minSoldQty = stoi(relatorioP[0][2]);
                string leastSoldProduct = relatorioP[0][1];
                bool foundDifferentProduct = false;

                for (int i = 1; i < relatorioPCounter; i++) {
                    int soldQty = stoi(relatorioP[i][2]);
                    if (soldQty < minSoldQty) {
                        minSoldQty = soldQty;
                        leastSoldProduct = relatorioP[i][1];
                        foundDifferentProduct = true;
                    }
                    else if (soldQty == minSoldQty) {
                        leastSoldProduct += ", " + relatorioP[i][1];
                    }
                }

                if (foundDifferentProduct) {
                    cout << "Produto menos vendido: " << leastSoldProduct << " (" << minSoldQty << " unidades)" << endl;
                }

                // Maior lucro (bruto)
                double maxProfit = stod(relatorioP[0][2]) * stod(relatorioP[0][3]);
                string productWithMaxProfit = relatorioP[0][1];

                for (int i = 1; i < relatorioPCounter; i++) {
                    double profit = stod(relatorioP[i][2]) * stod(relatorioP[i][3]);
                    if (profit > maxProfit) {
                        maxProfit = profit;
                        productWithMaxProfit = relatorioP[i][1];
                    }
                    else if (profit == maxProfit) {
                        productWithMaxProfit += ", " + relatorioP[i][1];
                    }
                }

                cout << "Produto com maior lucro: " << productWithMaxProfit << " (Lucro: " << maxProfit << "eur)" << endl;

                // Mais compras por cliente
                int maxPurchases = stoi(relatorioC[0][2]);
                string clientWithMaxPurchases = relatorioC[0][1];

                for (int i = 1; i < relatorioCCounter; i++) {
                    int purchases = stoi(relatorioC[i][2]);
                    if (purchases > maxPurchases) {
                        maxPurchases = purchases;
                        clientWithMaxPurchases = relatorioC[i][1];
                    }
                    else if (purchases == maxPurchases) {
                        clientWithMaxPurchases += ", " + relatorioC[i][1];
                    }
                }

                cout << "Cliente com mais compras: " << clientWithMaxPurchases << " (Compras: " << maxPurchases << ")" << endl;

                // Cliente com a maior quantia em compras
                int maxQuantity = stoi(relatorioC[0][3]);
                string clientWithMaxQuantity = relatorioC[0][1];

                for (int i = 1; i < relatorioCCounter; i++) {
                    int quantity = stoi(relatorioC[i][3]);
                    if (quantity > maxQuantity) {
                        maxQuantity = quantity;
                        clientWithMaxQuantity = relatorioC[i][1];
                    }
                    else if (quantity == maxQuantity) {
                        clientWithMaxQuantity += ", " + relatorioC[i][1];
                    }
                }

                cout << "Cliente com maior quantidade comprada: " << clientWithMaxQuantity << " (Total gasto: " << maxQuantity << "eur)" << endl;
            }
        }
     }
}