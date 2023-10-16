RANDOM NOTES AND STUFF - não é para correr





for (int i = 0; i < contadorVendas; i++) {

    int existingLineIndex = -1; // To track if the line exists in relatorioP
    for (int j = 0; j < relatorioPCounter + 1; j++) {
        if (venda[i][0] == relatorioP[j][0]) {
            existingLineIndex = j; // Found an existing line in relatorioP
            break;
        }
    }


    if (existingLineIndex != -1) {
        // Update existing line
        
        int auxqtd = stoi(relatorioP[existingLineIndex][2]);
        auxqtd += stoi(venda[i][1]);

        string updatedQtd = to_string(auxqtd);
        relatorioP[existingLineIndex][2] = updatedQtd;
    }
    else {
        // Add new line to relatorioP
        relatorioP[relatorioPCounter][0] = venda[i][0]; // escrever nova linha
        relatorioP[relatorioPCounter][1] = venda[i][5];
        relatorioP[relatorioPCounter][2] = venda[i][1];
        double auxLucro1 = stod(venda[i][3]);
        string auxLucro2 = to_string(auxLucro1 * 0.3);
        relatorioP[relatorioPCounter][3] = auxLucro2; // OK
        relatorioPCounter++; // acrescentar às linhas do relatórioP
    }
}



cout << endl << "[i][j]: [" << i << "][" << existingLineIndex << "]" << endl; // DEBUGGER





cout << "\n\n*************  STOCK  *************\n";
cout << "ID" << "\t" << "Qtd." << "\t" << "Nome" << "\t" << "Preco" << "\t" << "IVA";

// Sorting
for (int i = 0; i < counter - 1; i++) {
    for (int j = i + 1; j < counter; j++) {
        int id1 = stoi(stockMatrix[i][0]);
        int id2 = stoi(stockMatrix[j][0]);

        if (id1 > id2) {

            for (int k = 0; k < 6; k++) {
                string temp = stockMatrix[i][k];
                stockMatrix[i][k] = stockMatrix[j][k];
                stockMatrix[j][k] = temp;
            }
        }
    }

}


for (int i = 0; i < counter; i++) {
    cout << "\n";
    for (int j = 0; j < 6 - 1; j++)
    {
        cout << stockMatrix[i][j] << "\t";
    }
}
cout << endl << "***********************************\n";


















// Matriz Relatório de Cliente
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
    else if (numCliente != "0") {
        relatorioC[relatorioCCounter][0] = numCliente;
        relatorioC[relatorioCCounter][1] = nomeCliente;
        relatorioC[relatorioCCounter][2] = "1";
        relatorioC[relatorioCCounter][3] = to_string(somatorio);
        relatorioCCounter++;

    }
}

//CLIENTE //

// NOTAS: 
// - eliminar colunas extra, caso existam. Passar para relatório
// - a morada em partes? Tipo vetor - pointer que depois passa a texto?
// - mau controlo de nome
// - controlo de telefone

void Projeto::callCliente(string * *clientes) {

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
        cin.ignore(); // Ignorar inputs anteriores, para não os escrever

        if (opcao == "1") {

            for (int i = clientCounter; i < clientCounter + 1; i++) {
                for (int j = 0; j < 4; j++)
                {
                    if (j == 0) {

                        clientes[i][0] = id_cliente;
                        int num = stoi(id_cliente);
                        num++;
                        id_cliente = to_string(num);

                    }

                    else if (j == 1) {

                        bool isDuplicate = false;
                        do {
                            cout << endl << "Insira o nome do cliente: ";
                            getline(cin, clientes[i][j]);

                            isDuplicate = false;
                            for (int k = 0; k < i; k++) {
                                if (clientes[k][1] == clientes[i][j]) {
                                    isDuplicate = true;
                                    cout << endl << "Nome ja existente." << endl; // este poderá nao ser um bom controlo (nome e apelido? Controlar pelo id? Aceitar, desde que morada+telele diferente?)
                                    break;
                                }
                            }
                        } while (isDuplicate);
                    }
                    else if (j == 2) {

                        bool isDuplicate = false;
                        do {
                            cout << endl << "Insira o numero de telefone do cliente: ";
                            cin >> clientes[i][j];

                            int id;
                            istringstream iss(clientes[i][j]);
                            if (!(iss >> id) || id < 0) // Falta controlar +
                            {
                                cout << "Numero de telefone invalido." << endl;
                                isDuplicate = true;
                                continue;
                            }
                            isDuplicate = false;
                            for (int k = 0; k < i; k++) {
                                if (clientes[k][2] == clientes[i][j]) {
                                    isDuplicate = true;
                                    cout << endl << "Numero de telefone ja existente." << endl;
                                    break;
                                }
                            }
                        } while (isDuplicate);
                    }
                    else if (j == 3) {
                        cout << endl << "Insira a morada do cliente: ";
                        cin.ignore(); // Ignore any remaining newline character from previous input
                        getline(cin, clientes[i][j]); // Read the entire line as the address (instead of just one word!)
                    }
                }
                clientCounter++;


                cout << endl << "Quer introduzir mais clientes (s - sim, n - nao)?";
                cin >> sn;
                if (sn == "s" || sn == "sim") {
                    continue;
                }
                else {
                    break;
                }
            }
        }
        else if (opcao == "2") {
            cout << endl << endl << "Qual o ID cliente que quer eliminar?\n"; // melhor usar ID. Há nomes duplicados
            cin >> id_cliente;

            int removeIndex = -1;
            for (int i = 0; i < clientCounter + 1; i++) {
                if (clientes[i][0] == id_cliente) {
                    removeIndex = i;
                    break;
                }
            }

            if (removeIndex != -1) {
                for (int i = removeIndex; i < clientCounter; i++) {
                    for (int j = 0; j < 4; j++) {
                        clientes[i][j] = clientes[i + 1][j];
                    }
                }

                clientCounter++;

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
            cin >> nomeTemp;

            int removeIndex = -1;
            for (int i = 0; i < clientCounter; i++) {
                if (clientes[i][0] == id_cliente) {
                    removeIndex = i;
                    break;
                }
            }

            if (removeIndex != -1) {
                for (int i = removeIndex; i < clientCounter; i++) {
                    for (int j = 0; j < 4; j++) {
                        if (clientes[i][0] == id_cliente) {
                            clientes[i][1] = nomeTemp;

                        }
                    }


                }
                cout << endl << "Nome alterado com sucesso!\n";
            }
            else {
                cout << endl << "Cliente nao encontrado.";
            }

        }
        else if (opcao == "4") {


            cout << "\n\n*************************  CLIENTES  *************************\n";
            cout << setw(4) << "ID" << "\t";
            cout << setw(2) << "Nome" << "\t";
            cout << setw(20) << "Tel." << "\t";
            cout << setw(14) << "Morada" << endl;

            for (int i = 0; i < clientCounter + 1; i++) {
                cout << "\n";
                cout << left << setw(4) << clientes[i][0] << "\t";
                cout << setw(20) << clientes[i][1] << "\t";
                cout << setw(15) << clientes[i][2] << "\t";
                cout << setw(15) << clientes[i][3] << endl;
            }

            cout << "**************************************************************\n";
        }
        else if (opcao == "5") {

        }
        else {
            cout << endl << "Opcao invalida. Escolha novamente." << endl;
        }
    }

}





else if (opcao == "2") {

    cout << endl << "Qual o produto que deseja consultar? ";
    cin >> nomeProd;

    int stockIndex = -1;
    // controlo
    for (int i = 0; i < 100; i++) {
        if (stockMatrix[i][1] == nomeProd) {
            stockIndex = i;
            break;
        }
    }

    if (stockIndex == -1) {
        cout << endl << "Produto nao encontrado em stock!" << endl;
    }
    else {
        produto[0] = stockMatrix[stockIndex][0];
        produto[1] = stockMatrix[stockIndex][1];
        produto[2] = stockMatrix[stockIndex][5];

        cout << endl << "ID\tNome\tVendas\n\n";
        for (int i = 0; i < 3; i++) {
            cout << produto[i] << "\t";  // ADICIONAR PRODUTOS QUE JA NAO ESTAO EM STOCK
        }

    }

        }





















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

            cout << "\n\n*************  STOCK  *************\n";
            cout << "ID" << "\t" << "Nome" << "\t" << "Qtd" << "\t" << "Preco" << "\t" << "IVA";

            // Sorting
            for (int i = 0; i < counter - 1; i++) {
                for (int j = i + 1; j < counter; j++) {
                    int id1 = stoi(stockMatrix[i][0]);
                    int id2 = stoi(stockMatrix[j][0]);

                    if (id1 > id2) {

                        for (int k = 0; k < 6; k++) {
                            string temp = stockMatrix[i][k];
                            stockMatrix[i][k] = stockMatrix[j][k];
                            stockMatrix[j][k] = temp;
                        }
                    }
                }
            }


            for (int i = 0; i < counter + 1; i++) {
                cout << "\n";
                for (int j = 0; j < 6; j++)
                {
                    cout << stockMatrix[i][j] << "\t";
                }
            }
            cout << endl << "***********************************\n";
        }

        else if (opcao == "4") {
            cout << endl << endl << "Que produto pretende eliminar?\n";
            cin >> nome_prod;


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

        else if (opcao == "5") {
            for (int i = 0; i < counter; i++) {
                for (int j = 0; j < counter - 1; j++) {
                    int id1 = stoi(stockMatrix[i][0]);
                    int id2 = stoi(stockMatrix[j][0]);

                    if (id1 < id2) {

                        for (int k = 0; k < 6; k++) {
                            string temp = stockMatrix[i][k];
                            stockMatrix[i][k] = stockMatrix[j][k];
                            stockMatrix[j][k] = temp;
                        }
                    }
                }
            }
            break;
        }
        else {
            cout << endl << "Opcao invalida. Escolha novamente." << endl;
        }
    }


}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 //CLIENTE //

// NOTAS: 
// - eliminar colunas extra, caso existam. Passar para relatório
// - a morada em partes? Tipo vetor - pointer que depois passa a texto?
// - mau controlo de nome
// - controlo de telefone

void Projeto::callCliente(string** clientes, int linhas) {

    string opcao;
    string  sn;
    string id_cliente = "1004";
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

        if (opcao == "1") {

            for (int i = clientCounter; i < clientCounter + 1; i++) {
                for (int j = 0; j < 4; j++)
                {
                    if (j == 0) {

                        clientes[i][0] = id_cliente;
                        int num = stoi(id_cliente);
                        num++;
                        id_cliente = to_string(num);

                    }

                    else if (j == 1) {

                        bool isDuplicate = false;
                        do {
                            cout << endl << "Insira o nome do cliente: ";
                            cin >> clientes[i][j];

                            isDuplicate = false;
                            for (int k = 0; k < i; k++) {
                                if (clientes[k][1] == clientes[i][j]) {
                                    isDuplicate = true;
                                    cout << endl << "Nome ja existente." << endl; // este poderá nao ser um bom controlo (nome e apelido? Controlar pelo id? Aceitar, desde que morada+telele diferente?)
                                    break;
                                }
                            }
                        } while (isDuplicate);
                    }
                    else if (j == 2) {

                        bool isDuplicate = false;
                        do {
                            cout << endl << "Insira o numero de telefone do cliente: ";
                            cin >> clientes[i][j];

                            int id;
                            istringstream iss(clientes[i][j]);
                            if (!(iss >> id) || id < 0) // Falta controlar +
                            {
                                cout << "Numero de telefone invalido." << endl;
                                isDuplicate = true;
                                continue;
                            }
                            isDuplicate = false;
                            for (int k = 0; k < i; k++) {
                                if (clientes[k][2] == clientes[i][j]) {
                                    isDuplicate = true;
                                    cout << endl << "Numero de telefone ja existente." << endl;
                                    break;
                                }
                            }
                        } while (isDuplicate);
                    }
                    else if (j == 3) {
                        cout << endl << "Insira a morada do cliente: ";
                        cin.ignore(); // Ignore any remaining newline character from previous input
                        getline(cin, clientes[i][j]); // Read the entire line as the address (instead of just one word!)
                    }
                }
                clientCounter++;


                cout << endl << "Quer introduzir mais clientes (s - sim, n - nao)?";
                cin >> sn;
                if (sn == "s" || sn == "sim") {
                    continue;
                }
                else {
                    break;
                }
            }
        }
        else if (opcao == "2") {
            cout << endl << endl << "Qual o ID cliente que quer eliminar?\n"; // melhor usar ID. Há nomes duplicados
            cin >> id_cliente;

            int removeIndex = -1;
            for (int i = 0; i < clientCounter + 1; i++) {
                if (clientes[i][0] == id_cliente) {
                    removeIndex = i;
                    break;
                }
            }

            if (removeIndex != -1) {
                for (int i = removeIndex; i < clientCounter; i++) {
                    for (int j = 0; j < 4; j++) {
                        clientes[i][j] = clientes[i + 1][j];
                    }
                }

                clientCounter++;

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
            cin >> nomeTemp;

            int removeIndex = -1;
            for (int i = 0; i < clientCounter; i++) {
                if (clientes[i][0] == id_cliente) {
                    removeIndex = i;
                    break;
                }
            }

            if (removeIndex != -1) {
                for (int i = removeIndex; i < clientCounter; i++) {
                    for (int j = 0; j < 4; j++) {
                        if (clientes[i][0] == id_cliente) {
                            clientes[i][1] = nomeTemp;

                        }
                    }


                }
                cout << endl << "Nome alterado com sucesso!\n";
            }
            else {
                cout << endl << "Cliente nao encontrado.";
            }

        }
        else if (opcao == "4") {

            cout << "\n\n*************************  CLIENTES  *************************\n";
            cout << "ID" << "\t" << "Nome." << "\t" << "Tel." << "\t\t" << "Morada\n";

            for (int i = 0; i < clientCounter + 1; i++) {
                cout << "\n";
                for (int j = 0; j < 4; j++)
                {
                    cout << clientes[i][j] << "\t";
                }
            }
            cout << endl << "**************************************************************\n";
        }
        else if (opcao == "5") {

        }
        else {
            cout << endl << "Opcao invalida. Escolha novamente." << endl;
        }
    }

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// VENDA //

void Projeto::callVenda(string** venda, int linhas, string** stockMatrix, string** clientes, string** relatorio) {

    int contadorVendas = 0;
    string opcao;
    string id_prod;
    int itemsSold;
    string numCliente;
    string sn;
    double somatorio = 0;
    double pago = 0;
    int numeroFatura = rand() % 99999 + 1;
    int contadorTalao = 2;
    int counterTalao = 1;
    int contagem = 0;


    // Matriz-Stock Temporário 
    string** stockTemp = new string * [linhas];

    for (int i = 0; i < linhas; i++)
    {
        stockTemp[i] = new string[6];
    }


    for (int i = 0; i < counter; i++) {
        for (int j = 0; j < 6; j++) {
            stockTemp[i][j] = stockMatrix[i][j];
        }
    }


    // Matriz-Talão -> (linha, nome do prod, quantidade, valor orig., IVA aplicável, preço final do produto)


    string** talaoMatrix = new string * [linhas];

    for (int i = 0; i < linhas; i++)
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
            // controlo
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
                cin >> itemsSold;
                int availableQuantity = stoi(stockTemp[stockIndex][1]);



                if (itemsSold >= availableQuantity) {
                    cout << endl << "Quantidade insuficiente de produto em stock!\n";
                    break;
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

                    contadorVendas++;

                    cout << endl << "Produto adicionado ao carrinho de compras!" << endl;


                    // Remover items ao stock temporário
                    int leftInStock = stoi(stockTemp[stockIndex][1]);
                    leftInStock -= itemsSold;
                    stockTemp[stockIndex][1] = to_string(leftInStock);
                    stockTemp[stockIndex][5] = to_string(itemsSold);
                }
            }

        }
        // Checkout
        else if (opcao == "2") {



            for (int i = 0; i < contadorVendas; i++) {
                somatorio += (stod(venda[i][4]) * stod(venda[i][1]));
            }

            cout << endl << "Total a pagar: " << somatorio << endl;
            cout << endl << "Valor introduzido pelo cliente: ";
            cin >> pago;

            cout << "Qual o numero de cliente ('0' se nao for cliente): "; // controlo de nonsense
            cin >> numCliente;
            if (numCliente != "0") {
                // clientes[4] = "numCliente";
                // clientes[5] = "0";


            }

        }


        else if (opcao == "3") {

            cout << endl << "Finalizar a transacao ( s - sim, n - nao)?";
            cin >> sn;
            if (sn == "s" || sn == "sim") {
                for (int i = 0; i < counter; i++) {
                    for (int j = 0; j < 6; j++) {

                        stockMatrix[i][j] = stockTemp[i][j];
                    }
                }

                //Criação da TalaoMatrix
                for (int i = 0; i < contadorVendas; i++) { // alterado de contador - contadorVendas dá número de linhas de talão e vendas, certo?      !!!!!!!!!!!!
                    contagem++;
                    talaoMatrix[i][0] = to_string(contagem);
                    for (int j = 0; j < 6; j++) {
                        if (stockMatrix[j][0] == venda[i][0]) {
                            talaoMatrix[i][1] = stockMatrix[j][2];
                        }
                    }

                    talaoMatrix[i][2] = venda[i][1];
                    talaoMatrix[i][3] = venda[i][3];

                    for (int j = 0; j < counter + 1; j++) {
                        if (venda[i][0] == stockMatrix[j][0]) {
                            talaoMatrix[i][4] = stockMatrix[j][4];
                        }
                    }

                    talaoMatrix[i][5] = venda[i][4];
                }
                contagem = 0;




                cout << "\n\n*************  TALAO  *************\n";

                // A FALTAR AQUI DATA E HORA!!!!!!!

                cout << "Numero de Fatura: " << numeroFatura;
                if (numCliente != "0") {
                    cout << endl << "Numero de Cliente: " << numCliente;
                }
                cout << "\n\n " << "\t" << "Artigo" << "\t" << "Qtd." << "\t" << "Valor Base" << "\t" << "IVA" << "\t" << "Valor c/IVA" << endl;
                for (int i = 0; i < contadorVendas; i++) {
                    cout << "\n";

                    for (int j = 0; j < 6; j++) {
                        cout << talaoMatrix[i][j] << "\t";
                    }

                }

                cout << endl << "\nValor total a pagar: " << somatorio;
                cout << endl << "Valor pago: " << pago;
                cout << endl << "Troco: " << pago - somatorio;

                for (int i = 0; i < counter; i++) {
                    for (int j = 0; j < 6; j++) {
                        stockTemp[i][j] = stockMatrix[i][j];
                    }
                }

                // esvaziar carrinho de compras - para poder comprar mais
                for (int i = 0; i < contadorVendas; i++) {
                    for (int j = 0; j < 5; j++) {
                        venda[i][j] = "";
                    }
                }
                contadorVendas = 0;
            }


        }
        else if (opcao == "4") {


        }
        else {
            cout << endl << "Opcao invalida. Escolha novamente." << endl;
        }
    }

}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// RELATÓRIO //  - NÃO É NECESSÁRIA UMA MATRIZ, BASTA A FUNÇÃO - basta uma função normal com void

void Projeto::callRelatorio(string** relatorio, int linhas, string** stockMatrix, string** clientes, string** venda) {

    string opcao;
    string id_prod;
    string nomeProd;
    string maisVendido = "0";
    string menosVendido = "0";
    int numTempHigh = 0;
    int numTempLow = 0;
    int value = 0;
    double lucro = 0;
    double maxLucro = 0;
    int index = 0;

    // Vetor de vendas de produto

    string* produto = new string[3];


    while (opcao != "4") {

        cout << endl << "\n===== MENU RELATORIO =====" << endl;
        cout << "1. Relatorio de Stock (Stock total)" << endl;
        cout << "2. Relatorio de vendas de um produto" << endl;
        cout << "3. Relatorio total de vendas" << endl;
        cout << "4. Sair" << endl;
        cout << "Digite a opcao desejada: ";
        cin >> opcao;

        if (opcao == "1") {

            cout << "\n\n*************  STOCK  *************\n";
            cout << "ID" << "\t" << "Qtd." << "\t" << "Nome" << "\t" << "Preco" << "\t" << "IVA";

            // Sorting
            for (int i = 0; i < counter - 1; i++) {
                for (int j = i + 1; j < counter; j++) {
                    int id1 = stoi(stockMatrix[i][0]);
                    int id2 = stoi(stockMatrix[j][0]);

                    if (id1 > id2) {

                        for (int k = 0; k < 6; k++) {
                            string temp = stockMatrix[i][k];
                            stockMatrix[i][k] = stockMatrix[j][k];
                            stockMatrix[j][k] = temp;
                        }
                    }
                }

            }


            for (int i = 0; i < counter; i++) {
                cout << "\n";
                for (int j = 0; j < 6 - 1; j++)
                {
                    cout << stockMatrix[i][j] << "\t";
                }
            }
            cout << endl << "***********************************\n";

        }
        else if (opcao == "2") {

            cout << endl << "Qual o produto que deseja consultar? ";
            cin >> nomeProd;

            int stockIndex = -1;
            // controlo
            for (int i = 0; i < linhas; i++) {
                if (stockMatrix[i][2] == nomeProd) {
                    stockIndex = i;
                    break;
                }
            }

            if (stockIndex == -1) {
                cout << endl << "Produto nao encontrado em stock!" << endl;
            }
            else {
                produto[0] = stockMatrix[stockIndex][0];
                produto[1] = stockMatrix[stockIndex][2];
                produto[2] = stockMatrix[stockIndex][5];

                cout << endl << "ID\tNome\tVendas\n\n";
                for (int i = 0; i < 3; i++) {
                    cout << produto[i] << "\t";  // ADICIONAR PRODUTOS QUE JA NAO ESTAO EM STOCK
                }

            }

        }
        else if (opcao == "3") {
            // total de vendas:

            for (int i = 0; i < counter; i++) {
                value = stoi(stockMatrix[i][5]);
                if (value > numTempHigh) {
                    numTempHigh = value;
                    maisVendido = stockMatrix[i][5];
                }
                if (value < numTempLow) {
                    numTempLow = value;
                    menosVendido = stockMatrix[i][5];
                }

            }

            if (numTempHigh == 0) {
                cout << endl << "Nao foram ainda realizadas quaisquer vendas.\n";
            }
            else {
                cout << endl << "Total de Vendas\n";
                cout << endl << "Nome\tUnidades\n";
                for (int i = 0; i < counter; i++) {
                    cout << "\n";
                    cout << stockMatrix[i][2] << "\t";
                    cout << stockMatrix[i][5] << "\t";
                }

                cout << endl << "\nProduto(s) mais vendido(s): \n";
                for (int i = 0; i < counter; i++) {
                    if (stoi(stockMatrix[i][5]) == numTempHigh) {
                        cout << stockMatrix[i][2] << " com um total de ";
                        if (stockMatrix[i][5] == "1") {
                            cout << endl << stockMatrix[i][5] << " unidade vendida.\n";
                        }
                        else {
                            cout << endl << stockMatrix[i][5] << " unidades vendidas.\n";
                        }
                        cout << "\n";

                        // Nota - matrix Stock - não conta com artigos já não existentes
                        // AQUI - usar matriz relatorio

                        cout << endl << "Produto com maior lucro:\n";
                        for (int i = 0; i < counter; i++) {
                            lucro = (stod(stockMatrix[i][5]) * stod(stockMatrix[i][3]) * 0.3);
                            if (lucro > maxLucro) {
                                maxLucro = lucro;
                                index = i;
                            }
                        }
                        cout << stockMatrix[index][2] << " num total de " << maxLucro << "euros.\n";

                        string* clienteTemp = new string[2];

                    }
                }
            }




        }
        else if (opcao == "4") {

        }
        else {
            cout << endl << "Opcao invalida. Escolha novamente." << endl;
        }
    }

}





// Sorting - NECESSARY?!?!?!?!
for (int i = 0; i < counter - 1; i++) {
    for (int j = i + 1; j < counter; j++) {
        int id1 = stoi(stockMatrix[i][0]);
        int id2 = stoi(stockMatrix[j][0]);

        if (id1 > id2) {

            for (int k = 0; k < 6; k++) {
                string temp = stockMatrix[i][k];
                stockMatrix[i][k] = stockMatrix[j][k];
                stockMatrix[j][k] = temp;
            }
        }
    }
}


else if (j == 2) {
    bool isDuplicate = false;
    do {
        cout << endl << "Insira o numero de telefone do cliente: ";
        getline(cin, clientes[i][j]);

        int id;
        istringstream iss(clientes[i][j]);
        if (!(iss >> id) || id < 0) {
            cout << "Numero de telefone invalido." << endl;
            isDuplicate = true;
            continue;
        }
        isDuplicate = false;
        for (int k = 0; k < i; k++) {
            if (clientes[k][2] == clientes[i][j]) {
                isDuplicate = true;
                cout << endl << "Numero de telefone ja existente." << endl;
                break;
            }
        }
    } while (isDuplicate);
                    }


                    // Checkout
else if (opcao == "2") {


    for (int i = 0; i < contadorVendas; i++) {
        somatorioTemp += (stod(venda[i][4]) * stod(venda[i][1]));
    }

    cout << endl << "Total a pagar: " << somatorioTemp << endl;

    if (somatorioTemp != 0) {
        cout << endl << "Valor introduzido pelo cliente: ";
        cin >> pago;

        cout << "Qual o numero de cliente ('0' se nao for cliente): "; // controlo de nonsense
        cin >> numCliente;
    }
    else {
        callVenda(venda, stockMatrix, clientes, relatorioP, relatorioC); // ver se isto não gera conflito com compras efetuadas et al.
    }
        }
