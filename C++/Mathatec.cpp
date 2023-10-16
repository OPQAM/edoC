#include"MathAtec.h"



int MathAtec::getX() {
    return x;
}
int MathAtec::getY() {
    return y;
}
int MathAtec::getLinhas() {
    return linhas;
}
int MathAtec::getColunas() {
    return colunas;
}

int MathAtec::getMin() {
    return minimo;
}

int MathAtec::getMax() {
    return maximo;
}


//
void MathAtec::setX(int newX) {
    this->x = newX;
}

void MathAtec::setY(int newY) {
    this->y = newY;
}

void MathAtec::setColunas(int newColunas) {
    this->colunas = newColunas;
}

void MathAtec::setLinhas(int newLinhas) {
    this->linhas = newLinhas;
}

void MathAtec::setMax(int newMax) {
    this->maximo = newMax;
}

void MathAtec::setMin(int newMin) {
    this->minimo = newMin;
}

//
int MathAtec::Soma(int x, int y) {
    return x + y;

}

int MathAtec::Modulo(int x) {
    if (x >= 0) {
        return x;
    }
    else {
        return x * -1;
    }

}

void MathAtec::SomaMatriz(int** MatrizA, int linhas, int colunas) {
    cout << endl << "Introduza os elementos da matriz: \n";

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cin >> MatrizA[i][j];
        }
    }
    contagem = 0;

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            contagem += MatrizA[i][j];
        }
    }
}

void MathAtec::MinMaxChecker(int minimo, int maximo) {
    if (minimo > maximo) {
        tempur = minimo;
        minimo = maximo;
        maximo = tempur;
    }
}

int MathAtec::gerarNumero(int minimo, int maximo) {
    mt19937 rng(std::time(nullptr));
    uniform_int_distribution<int> dist(minimo, maximo);
    return dist(rng);
}