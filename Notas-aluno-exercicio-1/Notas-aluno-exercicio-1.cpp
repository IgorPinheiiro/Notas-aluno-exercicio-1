// Notas-aluno-exercicio-1.cpp : Elabore um programa em C++ que peça os seguintes dados
// Nome
// Nota da P1
// Nota da P2
// A partir dos dados digitados calcule e exiba a média aritmética.
// Caso a  média seja maior ou igual a 6 exiba APROVADO caso contrário exiba REPROVADO.


#include <iostream>
using namespace std;

int main() {

    string nome = nome; // o nome digitado aceita apenas nome simples, para digitar sobrenome sera necessario
    double p1 = 0;                               // utilizar outra variavel (getline)
    double p2 = 0;
    double media = 0;


    cout << "Programa media de nota do aluno(a)!\n";
    cout << "===================================\n";

    cout << "Digite apenas o primeiro nome do aluno: ";
    cin >> nome; 
    cout << "Digite a nota numero 1: ";
    cin >> p1;
    cout << "Digite a nota numero 2: ";
    cin >> p2;

    media = (p1 + p2) / 2;

    cout << "A media do aluno(a) foi de: " << media << endl;

    if (media > 6)
        cout << "Aluno Aprovado!";
    else
        cout << "Aluno reprovado!";



 



    


}

