#include <bits/stdc++.h>
using namespace std;
#include "Template.cpp"

int main()
{
    int nota1 = Nota<int>::valor(80);
    int nota2 = Nota<int>::valor(85);

    int nota3 = Nota<float>::valor(80.5);
    int nota4 = Nota<float>::valor(90.7);

    float media = CalculaMedia<float>::notas(nota1, nota2, nota3, nota4);

    cout << media << endl;
}