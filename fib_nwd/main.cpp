#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

void pause();
int NWD(int a, int b);

void sum() {
    system("cls");

    int l1, m1, l2, m2;

    cout << "Podaj licznik:   ";
    cin >> l1;

    do {
        cout << "Podaj mianownik: ";
        cin >> m1;
    }while(m1 == 0);

    cout << endl;

    cout << "Podaj licznik:   ";
    cin >> l2;

    do {
        cout << "Podaj mianownik: ";
        cin >> m2;
    }while(m2 == 0);

    if(m1 != m2) {
        int nww = m1 * m2 / NWD(m1, m2);

        l1 *= nww / m1;
        l2 *= nww / m2;

        m1 = m1 = nww;
    }

    int sl = l1 + l2;
    double sum = (double)sl / m1;

    cout << endl <<
    l1 << "/" << m1 << " + " <<
    l2 << "/" << m1 << " = " <<
    sl << "/" << m1 << " = " << sum << endl;

    pause();
}

int fib(int n) {
    int a = 0, b = 1, c = 1;

    if(n < 2) {
        return n == 0 ? a : b;
    }else {
        for(int i=2; i<n; i++) {
            a = b;
            b = c;
            c = a + b;
        }

        return c;
    }
}

void fib() {
    system("cls");

    int n;

    cout << "Podaj numer elementu do wyznaczenia: " << endl;

    // n =  0 1 2 3 4 5 6 ...
    // f(n) 0 1 1 2 3 5 8 ...

    do {
        cout << "n: ";
        cin >> n;
    }while(n < 0);

    cout << "f(" << n << ") = " << fib(n);

    pause();
}

///////////////////////////////////////////////////////////////////////

int main() {
    while(true) {
        system("cls");
        cout << "Wybierz:" << endl;
        cout << "1. Dodawanie ulamkow" << endl;
        cout << "2. Fibonacci" << endl;
        cout << endl << "ESC. Opusc program" << endl;

        switch(getch()){
            case '1':
                sum();
                break;
            case '2':
                fib();
                break;

            // 27 - [ESC]
            case 27:
                return 144;
                break;
        }
    }

    return 0;
}

///////////////////////////////////////////////////////////////////////

void pause() {
    cout << endl << "Wcisnij dowolny klawisz";
    getch();
}

int NWD(int a, int b) {
    while(b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }

    return a;
}
