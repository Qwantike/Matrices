#include <iostream>
#include <math.h>
#include <cstdlib>
#include <ctime>

using namespace std;

class matrice
{
public:
    float **T;
    int m;
    int n;

public:
    // constructeur
    matrice();
    matrice(int m, int n);
    matrice(int m);
    // destructeur
    //~matrice();
    // Remplissage aléatoire
    void random();
    // Matrice inverse
    void *invers();
    // Matrice transposé
    void *transpos();
    // Affichage
    void afficher();
    // Saisir
    void saisir();
    // Test Inversible
    bool inversible();
    // Déterminant
    // float det();
};