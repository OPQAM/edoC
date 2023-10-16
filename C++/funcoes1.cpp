// funcoes1.cpp - NOTAS DE AULA (passos)

#include <iostream>
#include <string>
#include <cmath> 
using namespace std;

/*
void print() { // fun��o void n�o exige um return final
    cout << "funcao";
}

int main()
{
    print(); // chama a fun��o que cri�mos
}

////////////////////////////////////////////////////////////////////////////////////////////////////

void print() {
    cout << "funcao";
}

int calculo() {
    int resultado = 10;
    return resultado;
}

int main()
{
    cout << calculo(); // pede um cout do conte�do da fun��o
                       // a fun��o retorna o resultado, por isso,
                       // esse ser� o cout.
    // => 10
}

////////////////////////////////////////////////////////////////////////////////////////////////////

void print() {
    cout << "funcao";
}

int calculo() {
    int resultado = 10;
    return resultado;
}

int main()
{
    print();

    int res = calculo(); // a vari�vel 'res' recebe o return da fun��o 'calculo'
    cout << res; // imprimimos aqui 'res' se quisermos
}
////////////////////////////////////////////////////////////////////////////////////////////////////


void print() {
    cout << "funcao";
}

int calculo() {
    int resultado = 10;
    return resultado;
}

int soma(int num1, int num2) { // foram criados aqui dois parametros vv
    int resultado;
    resultado = num1 + num2; // podia ser 'a' e 'b'

    return resultado;
}


int main()
{
    print();
    int res = calculo();
    cout << res;

    int a = 5, b = 10;
    soma(a, b); // dois parametros a serem enviados ^^
    int resultado = soma(a, b);

    cout << endl << resultado;
}



////////////////////////////////////////////////////////////////////////////////////////////////////

void print() {
    cout << "funcao";
}

int calculo() {
    int resultado = 10;
    return resultado;
}

int soma(int num1, int num2) {
    int resultado;
    resultado = num1 + num2;

    return resultado;
}

void lerVetor(int* vec, int t) { // tem que ser um vetor a ser criado. 't' � referente a 'tam' - o tamanho
    for (int i = 0; i < t; i++)
    {
        cout << endl << ": ";
        cin >> vec[i];
    }
}


int main()
{
    print();
    int res = calculo();
    cout << res;

    int a = 5, b = 10;
    soma(a, b);
    int resultado = soma(a, b);
    cout << endl << resultado;

    int tam = 5;
    int* vec = new int[tam];
    lerVetor(vec, tam);
}

// Ponteiros alteram-se mutuamente (whatever that means).
// Quando a func acaba, esta informa��o � perdida (verificar).
// vetores, matrizes, etc s�o ponteiros.

//Nota: cada fun��o tem 1 fun��o. Se � ler o vetor � para isso, n�o tb para imprimir o vetor.
// O main() ser� um distribuidor de tarefas.

////////////////////////////////////////////////////////////////////////////////////////////////////

void print() {
    cout << "funcao";
}

int calculo() {
    int resultado = 10;
    return resultado;
}

int soma(int num1, int num2) {
    int resultado;
    resultado = num1 + num2;

    return resultado;
}

void lerVetor(int* vec, int t) { // ler vetor (s� faz isto, ergo void)
    for (int i = 0; i < t; i++)
    {
        cout << endl << ": ";
        cin >> vec[i];
    }
}

void printVetor(int* vec, int t) { // imprimir (idem)
    for (int i = 0; i < t; i++)
    {
        cout << vec[i] << " ";
    }
}

int main()
{
    int tam = 5;
    int* vec = new int[tam];
    lerVetor(vec, tam);
    printVetor(vec, tam);
    int* vec1 = new int[tam];
    lerVetor(vec1, tam); // e podemos criar quantos quisermos
    printVetor(vec1, tam);
}

// Nota mental: aproveitar para rever OOP de Python... que � basicamete isto



////////////////////////////////////////////////////////////////////////////////////////////////////

// Aplica��o ao teste (vide fotos...)

// nota: podemos colocar apena a assinatura da fun��o (frase inicial)
// e assim o corpo da fun��o pode ficar abaixo do main.
// Vai dar jeito quando quisermos que uma fun��o chame outra fun��o


////////////////////////////////////////////////////////////////////////////////////////////////////

// ordem de trabalhos, se queremos criar um vetor e ler o vetor.
// Come�ar, por exemplo, pelo main

int main()
{
    int t = 10;
    int* v = new int[t];
    lerVetor(v, t);
    print()
}
*/

////////////////////////////////////////////////////////////////////////////////////////////////////

// Fun��es

//2. Criar programa que solicite ao user 10 valores inteiros, 
// guardar num vetor e apresentar os seguintes c�lculos:
//a. Contabilizar o numero de negativos
//b. contabilizar m�dia dos positivos
//c. contabilizar m�ltiplos de 3 e de 5

/*

void lerVetor(int * v, int t) {
    for (int i = 0; i < t; i++)
    {
        cout << endl << "Introduza valor: ";
        cin >> v[i];
    }
}

int contaNegs(int* v, int t) { // manda int, tem que ser int e n�o void
    int count = 0;
    for (int i = 0; i < t; i++) {
        if (v[i] < 0) {
            count++;
        }
    }
    return count;
}

double mediaPos(int* v, int t) {
    int count = 0, soma = 0;
    for (int i = 0; i < t; i++) {
        if (v[i] > 0) {
            soma += v[i];
            count++;
        }
    }
    return (double)soma / count;
}

int mult3e5(int* v, int t) {
    int count = 0;
    for (int i = 0; i < t; i++)
    {
        if (v[i] % 5 == 0 && v[i] % 3 == 0) {
            count += 1;
        }
    }

    cout << "\nNumero de multiplos de 3 e de 5: " << count << ".\n\n";

    return count;
}

int main()

{
    int tam = 10;
    int* v = new int[tam];
    lerVetor(v, tam);
    int negativo = contaNegs(v, tam); // vari�vel criada para receber o retorno da func contaNeg - a func tem um 'return count'
    double media = mediaPos(v, tam);
    int resultado = mult3e5(v, tam);

    cout << "negativos: " << negativo;
    cout << endl << "Media dos positivos: " << media;
    cout << endl << "Multiplos de 3 e 5: " << resultado;
}
*/
////////////////////////////////////////////////////////////////////////////////////////////////////
/*
3. Crie um programa em Linguagem C++ que leia duas horas completas, que representam a hora de entrada e a
hora de sa�da de um funcion�rio de uma empresa, e devolva intervalo e tempo em que esse funcion�rio esteve
a trabalhar.
Para isso, deve:
a.Pedir ao utilizador para inserir 3 valores correspondentes � hora, minuto e segundos, para cada hora
completa(entrada e sa�da do funcion�rio na empresa);
b.Criar uma fun��o que receba os 3 valores como par�metro e converter tudo para segundos,
retornando esse valor;
c. Subtraia o total em segundos de ambas as horas inseridas;
d.Criar uma nova fun��o que converta o valor(em segundos) enviado por par�metro e o mostre no ecr�
no formato HH : MM:SS.
*/

/*
int segundosEntrada()
{
    int h, m, s;
    cout << "\nDe-nos a hora a que o funcionario entrou (horas, minutos, segundos): \n";
    cin >> h >> m >> s;

    return h * 3600 + m * 60 + s; // segundos entrada
}

int segundosSaida()
{
    int h, m, s;
    cout << "\nDe-nos a hora a que o funcionario saiu (horas, minutos, segundos): \n";
    cin >> h >> m >> s;

    return h * 3600 + m * 60 + s; // segundos sa�da
}

int segundosTrabalho(int s1, int s2)
{
    if (s2 < s1)
    {
        s2 += 86400; // para compensar horas de trabalho durante o fim da noite e manh�
    }

    return s2 - s1;

}

string convert(int segundosTotal)
{
    int s, m, h;
    int minutosParcial;

    minutosParcial = segundosTotal / 60;
    s = segundosTotal % 60;
    h = minutosParcial / 60;
    m = minutosParcial % 60;


    return to_string(h) + ":" + to_string(m) + ":" + to_string(s);

}



int main()

{

    int soma1 = segundosEntrada(); // Isto chama a fun��o que nos d� a soma dos segundos
    int soma2 = segundosSaida();
    int segundosTotal = segundosTrabalho(soma1, soma2);
    string conversor = convert(segundosTotal);

    cout << "\nTempo de trabalho: " << conversor << endl;

}
*/
// ^^ mine ^^


// COMO O PROF FEZ: NOTA: estras adicionados com // // -> PAra resolver a quest�o de ter trabalhado de noite
/*
void lerHMS(int* h, int* m, int* s) { // a mesma fun��o que l� as horas de entrada e de sa�da - isto � chamado duas vezes.
    cout << "Inserir hora: ";
    cin >> *h;
    cout << "Inserir minutos: ";
    cin >> *m;
    cout << "Inserir segundos: ";
    cin >> *s;
}

int converteEmSegundos(int* h, int* m, int* s) { // tamb�m usada 2x

    return *h * 3600 + *m * 60 + *s;
}

//Fun��o que subtrai dois inteiros
//Par�metros:                                                      // Acrescento de coment�rios-exemplo para clarifica��o
//duas vari�vel do tipo inteiro
//retorno de inteiro

int subtrair(int se, int ss) {

    return ss - se;
}

//Fun��o que converte segundos em horas, min e secs
//Par�metros:
//vari�vel do tipo inteiro.
void converteEmHMS(int numero) {
    int horas = numero / 3600;
    numero = numero - horas * 3600;
    int minutos = numero / 60;
    numero = numero - minutos * 60;

    cout << endl << "Trabalhou: " << horas << ":" << minutos << ":" << numero;
}

int main()
{
    int* he = new int;
    int* me = new int;
    int* se = new int;
    int* hs = new int;
    int* ms = new int;
    int* ss = new int; //hora,minuto e segundo de entrada ou sa�da
    cout << "hora de entrada" << endl;    
    lerHMS(he, me, se); // 1x
    cout << "hora de saida" << endl;
    lerHMS(hs, ms, ss); // 2x
    int segEntrada = converteEmSegundos(he, me, se); // 1x
    int segSaida = converteEmSegundos(hs, ms, ss);   // 2x tamb�m usado 2 x
    int totalSegundos = subtrair(segEntrada, segSaida);
    converteEmHMS(totalSegundos);

}
*/

// FALTA O EXTRA

////////////////////////////////////////////////////////////////////////////////////////////////////
/*
3. Crie um programa em Linguagem C++ que calcule as duas ra�zes da f�rmula resolvente, pedindo ao utilizador
para digitar o valor de �a�, �b� e �c�.
A fun��o deve receber estes valores e :
a.Verificar se �a� � zero.Nesse caso, deve indicar : raiz 1 = 0; raiz 2 = 0;
b.Verificar se �b2 � 4 x a x c� � negativo.Nesse caso, deve indicar : raiz 1 = 0; raiz 2 = 0;
c.Noutra situa��o, calcula e mostra as duas ra�zes no ecr�.
*/

/*
#include <iostream>
#include <cmath>

using namespace std;


// F�rmula Resolvente

// se a = 0 -> resposta standard == se delta < 0.
// de resto, dar a solu��o ou solu��es


void introduzirValor(int* a, int* b, int* c) {

    cout << endl << "Por favor introduza as tres constantes de um polinomio de segundo grau:\n";
    cin >> *a >> *b >> *c;
}

int findDelta(int* a, int* b, int* c) {
    int dValue = (double)pow(*b, 2) - 4 * *a * *c;
    return dValue;
}

double calcRaiz1(int* a, int* b, int deltaVal) {
    double raiz = (-*b + pow(deltaVal, 0.5)) / (*a * 2);
    if (deltaVal == 0) {
        cout << endl << "Raiz 1: " << raiz << ";";
    }
    return raiz;
}

double calcRaiz2(int* a, int* b, int deltaVal) {
    double raiz = (-*b - pow(deltaVal, 0.5)) / (*a * 2);
    return raiz;
}

void cFinal(double raiz1, double raiz2) {
    cout << endl << "Raiz 1: " << raiz1 << "; Raiz 2: " << raiz2 << ";" << endl;
}

void stopFunct(int* a, int deltaVal) { // A resposta standard.
    cout << endl << "\nraiz 1 = 0; raiz 2 = 0;\n";
}

int main() {

    // nota: podemos trocar tudo para doubles, o que poder� ser boa ideia para aceitar fra��es em 'a', 'b' e 'c'

    // Inicializa��o dos pointers
    int* a = new int;
    int* b = new int;
    int* c = new int;

    // Pedir user para atribuir valores
    introduzirValor(a, b, c);

    // calcular delta
    int deltaVal = findDelta(a, b, c);

    // Calculo das duas raizes
    double raiz1 = calcRaiz1(a, b, deltaVal);
    double raiz2 = calcRaiz2(a, b, deltaVal);


    if (*a == 0) {
        stopFunct(a, deltaVal);
        return 0;
    }
    else if (deltaVal < 0) {
        stopFunct(a, deltaVal);
        return 0;
    }
    else if (deltaVal == 0) {
        return 0;
    }

    cFinal(raiz1, raiz2);

    return 0;

}
*/



// Resolu��o do prof:

/*
* 
/ NOTA: Resolu��o - ideias do prof //


#include <iostream>
#include <cmath>

using namespace std;

bool verificaSeAZero(int a) {
    if (a == 0) {
        return true;
    }
    return false;
}

bool verifica2(int a, int b, int c) {
    if (b * b - 4 * a * c < 0) {
        return true;
    }
    return false;
}

double* resolveEquacao(double a, double b, double c) {
    double* v = new double[2];
    v[0] = (-b + sqrt((b * b - 4 * a * c))) / 2 * a;
    v[1] = (-b - sqrt((b * b - 4 * a * c))) / 2 * a;

    return v;

}

int main()
{
    int a, b, c;
    cout << "inserir os 3 valores da eq ";
    cin >> a >> b >> c;
    if (verificaSeAZero(a) || verifica2(a, b, c)) {
        cout << "raiz 1 = 0 e raiz 2 = 0";
    }
    else {
        double* v = resolveEquacao(a, b, c);
        cout << "raiz 1 = " << v[0] << " e raiz 2 = " << v[1];
    }

}

*/

////////////////////////////////////////////////////////////////////////////////////////////////////
/*
//4. Crie um programa em Linguagem C++ que calcule o produto fatorial de um n�mero positivo solicitado ao
utilizador.
*/



#include <iostream>
#include <cmath>

using namespace std;


void inputNbr(int* n) {

    cout << endl << "Please enter a positive integer: \n";
    cin >> *n;
}

int findFactorial(int* n) {
    int counter = *n;

    for (int k = counter - 1; k > 0; k--) {
        counter *= (k);
    }
    return counter;
}

void presentResult(int* n, int factorialCalc)
{
    cout << endl << "Consider that n! = n*(n-1)*(n-2)*...*1, and that 1! = 0! = 1.\n";
    cout << endl << "The factorial of " << *n << " is " << factorialCalc << ".\n";
}



int main() {
    int* n = new int;

    inputNbr(n);

    int factorialCalc = findFactorial(n);

    presentResult(n, factorialCalc);
}


// DO prof:

/*

int fatorial(int num) {
    int fat = 1;
    for (int i = num; i > 1; i--)
    {
        fat *= i;
    }
    return fat;
}



int main()
{

    int a;
    cout << "inserir numero: ";
    cin >> a;

}
//




*/
////////////////////////////////////////////////////////////////////////////////////////////////////
/*
5. Elabore um programa em linguagem C++ que l� um conjunto de idades de uma turma de N alunos para um
vector e chama uma fun��o que verifica qual o aluno mais velho.
A fun��o recebe como par�metro o vector e devolve a idade do aluno mais velho.
*/





#include <iostream>
#include <cmath>

using namespace std;


void criarTurma(int* turma, int alunos) {

    for (int i = 0; i < alunos; i++) {
        cout << endl << "Idade: ";
        cin >> turma[i];
    }
}


int maisVelho(int* turma, int alunos) {
    int maisVelho = 0;
    for (int i = 0; i < alunos; i++)
    {
        if (turma[i] > maisVelho) {
            maisVelho = turma[i];
        }
    }
    return maisVelho;

}


int main() {

    int alunos;
    cout << "Numero de alunos: ";
    cin >> alunos;

    int* turma = new int[alunos];

    criarTurma(turma, alunos);

    cout << "\nO aluno mais velho tem " << maisVelho(turma, alunos) << " anos.\n"; // ver porque � que esta merda n�o funciona - comparar com o que fiz na ATEC
}

/*
// Do prof:

void lerVetor(int* v, int t) {
    for (int i = 0; i < t; i++) {
        cout << "Inserir idade: ";
        cin >> v[i];
    }
}

int maiorIdade(int* v, int t) {
    int mIdade = 0;
    for (int i = 0; i < t; i++)
    {
        if (v[i] > mIdade) {
            mIdade = v[i];
        }

    }
    return mIdade;
}

int main()
{
    int tam;
    cout << "Numero de alunos: ";
    cin >> tam;
    int* a = new int[tam];
    lerVetor(a, tam);
    cout << "A idade do aluno mais velho e: " << maiorIdade(a, tam);

}

*/




////////////////////////////////////////////////////////////////////////////////////////////////////
/*
6. Elabore um programa em linguagem C++ que l� um conjunto de alturas de um grupo de N pessoas para um
vector e chama uma fun��o que verifica quantas pessoas t�m altura compreendida entre 1.50m e 1.75m.
A fun��o recebe como par�metro o vector e devolve o n�mero de pessoas com altura dentro do �mbito
definido.
*/

#include <iostream>
#include <cmath>

using namespace std;


void lerVetor(double* v, int t) {
    for (int i = 0; i < t; i++) {
        cout << "Inserir altura: ";
        cin >> v[i];
    }
}

double numeroPessoas(double* v, int t) {
    int counter = 0;
    for (int i = 0; i < t; i++)
    {
        if (v[i] >= 1.50 && v[i] <= 1.75)
        {
            counter++;
        }
    }
    return counter;

}

int main()
{

    int tam;
    cout << "Numero o numero de pessoas: ";
    cin >> tam;
    double* a = new double[tam];
    lerVetor(a, tam);
    cout << "Ha " << numeroPessoas(a, tam) << " pessoas com alturas entre os 1.50m e os 1.75m.";


}


////////////////////////////////////////////////////////////////////////////////////////////////////
/*
7. Elabore um programa em linguagem C++ que l� um conjunto de NIFs de um grupo de N pessoas para um vector
e chama uma fun��o que verifica a posi��o do vector em que se encontra um determinado NIF.
A fun��o recebe como par�metro o vector e o NIF a pesquisar.
A fun��o devolve a posi��o ou - 1 caso n�o exista.
*/

#include <iostream>
#include <cmath>

using namespace std;


void introNumeros(int* v, int p) {

    cout << endl << "Introduza os numeros dos respetivos cartoes (9 digitos).\n";

    for (int i = 0; i < p; i++) {
        cout << endl << "Cartao " << i + 1 << ": ";
        cin >> v[i];
    }
}

int findNumero(int* v, int p, int valor) {

    int contagem = 0;

    for (int i = 0; i < p; i++)
    {
        if (v[i] == valor)
        {
            contagem = i + 1;
        }
    }
    if (contagem == 0) {
        return -1;
    }
    else {
        return contagem;
    }

}


int main() {

    int pessoas;

    cout << "Introduza o numero de pessoas: ";
    cin >> pessoas;

    int* vec = new int[pessoas];

    introNumeros(vec, pessoas);

    int valor;
    cout << "\nQue numero pretende pesquisar? \n";
    cin >> valor;

    cout << "O cartao com o numero " << valor << " encontra-se na posicao " << findNumero(vec, pessoas, valor) << " do cartao."; // Em alternativa, 
    // por esta resposta dentro da fun��o int l� mais acima.

}



////////////////////////////////////////////////////////////////////////////////////////////////////
/*
8. Crie um programa que simule N lan�amentos de 2 dados, guarde os resultados numa estrutura de dados
adequada e produza uma estat�stica que mostre qual o valor mais comum.
*/


////////////////////////////////////////////////////////////////////////////////////////////////////
/*
/*
8. Crie um programa que simule N lan�amentos de 2 dados, guarde os resultados numa estrutura de dados
adequada e produza uma estat�stica que mostre qual o valor mais comum.
*/


#include <iostream>
#include <cstdlib>

using namespace std;


void listaLancamentos(int* v, int l) {
    int l1 = 0;
    int l2 = 0;

    for (int i = 0; i < l; i++) {
        l1 = rand() % 6 + 1;
        l2 = rand() % 6 + 1;
        cout << "\nDado1 = " << l1 << endl << "Dado2 = " << l2 << endl;
        v[i] = l1 + l2;
    }
}


int estatistica(int* v, int l) {

    int frequency = 0;
    int valor1 = 0;
    int valor2 = 0;

    for (int i = 0; i < l; i++) {

        for (int j = 0; j < l; j++) {
            if (v[j] == v[i]) {
                valor1++;
            }
        }
        if (valor1 > valor2) {
            frequency = v[i];
            valor2 = valor1;
            valor1 = 0;
        }
        else {
            valor1 = 0;
        }
    }

    cout << "O valor mais frequente foi " << frequency << ".";
    return valor2;
}

int main() {
    int lancamentos;

    cout << "Introduza o numero de vezes que serao lancados dois dados: ";
    cin >> lancamentos;

    int* vec = new int[lancamentos];

    listaLancamentos(vec, lancamentos);

    int contagem = estatistica(vec, lancamentos);

    cout << endl << "Este valor teve " << contagem << " entradas de um total de " << lancamentos << ". Ou seja, " << (contagem / (double)lancamentos) * 100 << "% do total.";
}

////////////////////////////////////////////////////////////////////////////////////////////////////
/*
9. Crie um programa que permita ler um vector de N inteiros e converter todos os valores negativos do vector
para 0. No fim, deve imprimir o vetor resultante e indicar quantos valores foram alterados.
*/
#include <iostream>
#include <cmath>

using namespace std;


void introValores(int* vec, int tam) {

    for (int i = 0; i < tam; i++) {
        cout << endl << "valor: ";
        cin >> vec[i];
    }
}

int convertVetor(int* vec, int tam) {
    int contagem = 0;

    for (int i = 0; i < tam; i++) {
        if (vec[i] < 0) {
            contagem++;
            vec[i] = 0;
            cout << " " << vec[i];
        }
        else {
            cout << " " << vec[i];
        }
    }
    return contagem;
}

int main() {


    int tam;

    cout << "Diga o numero de entradas do vetor: ";
    cin >> tam;

    int* vec = new int[tam];

    introValores(vec, tam);

    int conversor = convertVetor(vec, tam);

    cout << endl << "Numero de valores convertidos para zero: " << conversor << ".\n";
}


////////////////////////////////////////////////////////////////////////////////////////////////////
/*
10. Crie um programa que permita ler um vetor de N valores inteiros, n�o permitindo a introdu��o de valores
repetidos.
*/



#include <iostream>
#include <cstdlib>

using namespace std;


void introElementos(int* v, int e) {

    cout << endl << "Introduza valor: ";
    cin >> v[0];

    for (int i = 1; i < e; i++) {
        bool coin = false;
        while (coin == false) {
            cout << endl << "Introduza valor: ";
            cin >> v[i];
            for (int j = 0; j < i; j++) {
                if (v[i] == v[j]) {
                    cout << endl << "Valor repetido. Introduza outro valor: ";
                    cin >> v[i];
                }
                else {
                    coin = true;
                }


            }
        }
    }
}

void imprimirVetor(int* v, int e) {

    for (int i = 0; i < e; i++) {
        cout << " " << v[i];
    }
}



int main() {
    int elementos;

    cout << "Introduza o numero de elementos do vetor: ";
    cin >> elementos;

    int* vec = new int[elementos];

    introElementos(vec, elementos);

    imprimirVetor(vec, elementos);

}



////////////////////////////////////////////////////////////////////////////////////////////////////
/*
11. Crie um programa que permita determinar o 2� maior valor de um vetor.
*/


////////////////////////////////////////////////////////////////////////////////////////////////////