#include "function.cpp"
#include <iostream>

using namespace std;

int main()
{
    cout << "MATRICE ALÉATOIRE : " << endl;
    matrice *M = new matrice();
    M->random();
    M->afficher();
    cout << "MATRICE CARRÉE : " << endl;
    matrice *C = new matrice(5);
    C->random();
    C->afficher();
    cout << "MATRICE UNITÉ : " << endl;
    matrice *N = matrice_unite(10);
    N->afficher();
    cout << "SAISIR MATRICE : " << endl;
    matrice *P = new matrice(2, 2);
    P->saisir();
    P->afficher();
    cout << "MATRICE CARRÉE TRANSPOSÉE : " << endl;
    matrice *Q = matrice_transpos(*P);
    Q->afficher();
    cout << "MATRICE NON CARRÉE TRANSPOSÉE : " << endl;
    matrice *X = new matrice(2, 5);
    X->random();
    X->afficher();
    X = matrice_transpos(*X);
    X->afficher();
    cout << "SAISIR MATRICE : " << endl;
    matrice *A = new matrice(2, 3);
    A->saisir();
    A->afficher();
    cout << "SAISIR MATRICE : " << endl;
    matrice *B = new matrice(3, 2);
    B->saisir();
    B->afficher();
    cout << "MULTIPLICATION MATRICE : " << endl;
    matrice *K = multiplication(*A, *B);
    K->afficher();
}