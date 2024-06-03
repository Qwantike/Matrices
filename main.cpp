#include "function.cpp"
#include <iostream>

using namespace std;

int main()
{
    /* cout << "MATRICE ALÉATOIRE : " << endl;
    matrice *M = new matrice();
    M->random();
    M->afficher();
    delete M;
    cout << "MATRICE CARRÉE : " << endl;
    matrice *C = new matrice(5);
    C->random();
    C->afficher();
    delete C;
    cout << "MATRICE UNITÉ : " << endl;
    matrice *N = matrice_unite(10);
    N->afficher();
    delete N;
    cout << "SAISIR MATRICE : " << endl;
    matrice *P = new matrice(2, 2);
    P->saisir();
    P->afficher();
    cout << "MATRICE CARRÉE TRANSPOSÉE : " << endl;
    matrice *Q = matrice_transpos(*P);
    Q->afficher();
    delete P;
    delete Q;
    cout << "MATRICE NON CARRÉE TRANSPOSÉE : " << endl;
    matrice *X = new matrice(2, 5);
    X->random();
    X->afficher();
    X = matrice_transpos(*X);
    X->afficher();
    delete X;
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
    delete K;
    delete A;
    delete B;
    cout << "MATRICE MINEURE : " << endl;
    matrice *G = new matrice(3, 3);
    G->saisir();
    G->afficher();
    matrice *H = minor(*G, 1, 1);
    H->afficher(); */
    cout << "DÉTERMINANT : " << endl;
    matrice *G = new matrice(10, 10);
    G->saisir();
    G->afficher();
    float r = 0;
    r = det(*G);
    cout << "Déterminant de G = : " << r << endl;
}