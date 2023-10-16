#include "Chave.h"

int* Chave::gerarChaveAleatoria(int* &ch)
{
    mt19937 rng(std::time(nullptr));
    uniform_int_distribution<int> dist(1, 49);
    

    for (int i = 0; i < 5; i++) {
        ch[i] = dist(rng);

        for (int j = 0; j < i; j++) { // control for repeated numbers (doesn't run until i != 0, ofc)

            while (ch[i] == ch[j]) {
                ch[i] = dist(rng);
                j = 0;
            }
        }
    }
    return ch; // now it returns the vector itself

}

int* Chave::lerChave(int* ch) // user adds his 5+1 numbers
{
    for (int i = 0; i < 5; i++) {
        cout << endl << "Please enter a number between 1 and 49: ";
        cin >> ch[i];

        while (ch[i] > 49 || ch[i] < 1) {
            cout << endl << "Invalid number! Please enter a number between 1 and 49: "; // controlling out of bounds
            cin >> ch[i];
        }
        cout << endl << "DEBUG" << endl;
        cout << endl << "Value of i: " << i << endl;
 
        for (int j = 0; j < i; j++) { // control for repeated numbers (doesn't run until i != 0, ofc)
            
            while (ch[i] == ch[j]) {
                cout << "Please do not repeat numbers! Pick another number: ";
                cin >> ch[i];
                j = 0;
            }
        }
    }
    cout << endl << "Please enter the alternate number (1 to 49): ";
    cin >> ch[5];

    return ch;
}




// NOTES: I've done the 5 number gen and the 5+1 user number. The functions return the correct values.
// There are controls to avoid values outside of the 1 to 49 range, and to avoid repetitions.
// Next: order the numbers
// also? make it so that extraneous input doesn't crash the program, and insteads returns a message error?

//MAIN//

#include "Chave.h"


int main() {


    int* chAle = new int[5];

    Chave::gerarChaveAleatoria(chAle);


    int* chUs = new int[6];

    Chave::lerChave(chUs);
    // ver notas da outra resolução do prof, para ver como ele apresenta aqui as funções





    return 0;
}