#include "matrice.h"

matrice::matrice()
{
    cout << "-> CONSTRUCTEUR VIDE" << endl;
    T = new float *[10];
    for (int i = 0; i < 10; i++)
    {
        T[i] = new float[10];
        for (int j = 0; j < 10; j++)
        {
            *T[i] = T[i][j];
            this->T[i][j] = i;
        }
    }
    this->m = 10;
    this->n = 10;
}

matrice::matrice(int k, int l)
{
    cout << "-> CONSTRUCTEUR LIGNE-COLONNE" << endl;
    this->T = new float *[k];
    for (int i = 0; i < k; i++)
    {
        this->T[i] = new float[l];
        for (int j = 0; j < l; j++)
        {
            this->T[i][j] = 0;
        }
    }
    this->m = k;
    this->n = l;
}

matrice::matrice(int k)
{
    cout << "-> CONSTRUCTEUR CARRÉ" << endl;
    this->T = new float *[k];
    for (int i = 0; i < k; i++)
    {
        this->T[i] = new float[k];
        for (int j = 0; j < k; j++)
        {
            this->T[i][j] = 0;
        }
    }
    this->m = k;
    this->n = k;
}

/* matrice::~matrice()
{
    cout << "-> DESTRUCTEUR" << endl;
    for (int i = 0; i < m; i++)
    {
        delete this->T[i];
    }
    delete this->T;
} */

void matrice::random()
{
    cout << "-> RANDOM 0-1" << endl;
    srand(time(NULL));
    for (int i = 0; i < this->m; i++)
    {
        this->T[i] = new float[10];
        for (int j = 0; j < this->n; j++)
        {
            float a = rand() % 10000;
            float b = 0.0;
            b = a / 10000;
            this->T[i][j] = b;
        }
    }
}

void *matrice::invers()
{
}
void *matrice::transpos()
{
}

void matrice::afficher()
{
    cout << "-> AFFICHER" << endl;
    for (int i = 0; i < this->m; i++)
    {
        cout << "[";
        for (int j = 0; j < this->n; j++)
        {
            cout << "(";
            cout << this->T[i][j];
            cout << ")";
        }
        cout << "]";
        cout << endl;
    }
}

void matrice::saisir()
{
    cout << "-> SAISIR" << endl;
    for (int i = 0; i < this->m; i++)
    {
        for (int j = 0; j < this->n; j++)
        {
            cout << "(" << i << ";" << j << ") ?" << endl;
            cin >> this->T[i][j];
        }
    }
}

bool matrice::inversible()
{
}