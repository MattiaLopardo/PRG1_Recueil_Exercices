#include <iostream>
#include <cstdlib>

using namespace std;

double addi(double a, double b, char op);
double sous(double a, double b, char op);
double mult(double a, double b, char op);
double divi(double a, double b, char op);
double resultat(double a, double b, char op);

int main() {
    double a = 0.;
    double b = 0.;
    char op = '+';

    cout << "entrer le premier nombre : " << endl;
    cin >> a;

    cout << "entrer le deuxieme nombre : " << endl;
    cin >> b;

    do {
        cout << "entrer l'operation a faire : [+,-,*,/]" << endl;
        cin >> op;
    }while (op != '+' and op != '-' and op != '*' and op != '/' );

    cout << resultat(a,b,op) << endl;

    //consigne 2
    cout << resultat(a,b,'+') << endl;
    cout << resultat(a,b,'-') << endl;
    cout << resultat(a,b,'*') << endl;
    cout << resultat(a,b,'/') << endl;


}

double resultat(double a, double b, char op) {
    switch (op) {
        case '+': return addi(a, b, '+'); break;
        case '-': return sous(a, b, '+'); break;
        case '*': return mult(a, b, '*'); break;
        case '/': return divi(a, b, '/'); break;
    }
}

double addi(double a, double b, char op) {
    double c = 0.;
    c = a + b;
    //cout << a << " + " << b << " = " << c << endl;
    return c;
}

double sous(double a, double b, char op) {
    double c = 0.;
    c = a - b;
    //cout << a << " - " << b << " = " << c << endl;
    return c;
}

double mult(double a, double b, char op) {
    double c = 0.;
    c = a * b;
    //cout << a << " * " << b << " = " << c << endl;
    return c;
}

double divi(double a, double b, char op) {
    double c = 0.;
    c = a / b;
    //cout << a << " / " << b << " = " << c << endl;
    return c;
}