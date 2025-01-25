#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Dichiarazione delle variabili per i coefficienti
    float a, b, c;

    // Chiedi all'utente di inserire i coefficienti
    cout << "Programma per risolvere equazioni di secondo grado (ax^2 + bx + c = 0)" << endl;
    cout << "Inserisci il coefficiente a: ";
    cin >> a;

    // Verifica se 'a' è uguale a 0
    if (a == 0)
    {
        cout << "Il coefficiente 'a' non può essere zero per un'equazione di secondo grado." << endl;
        return 1; // Esci dal programma con un codice di errore
    }

    cout << "Inserisci il coefficiente b: ";
    cin >> b;

    cout << "Inserisci il coefficiente c: ";
    cin >> c;

    // Calcola il discriminante (delta)
    float delta = (b * b) - (4 * a * c);
    cout << "Discriminante (delta) = " << delta << endl;

    // Calcola le radici in base al discriminante
    float x1, x2;

    if (delta < 0)
    {
        cout << "Nessuna radice reale (Impossibile)." << endl;
    }
    else if (delta == 0)
    {
        x1 = -b / (2 * a);
        cout << "Una radice reale (x1) = " << x1 << endl;
    }
    else
    {
        x1 = (-b - sqrt(delta)) / (2 * a);
        x2 = (-b + sqrt(delta)) / (2 * a);
        cout << "Due radici reali:" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }

    return 0; // Esci dal programma
}
