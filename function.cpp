#include "function.h"
#include <typeinfo>

using namespace std;

matrice *matrice_unite(int m)
{
    cout << "-> MATRICE UNITÉ" << endl;
    matrice *M = new matrice(m);
    for (int i = 0; i < m; i++)
    {
        M->T[i][i] = 1;
    }
    return M;
}

matrice *matrice_copie(matrice M)
{
    cout << "-> MATRICE COPIE" << endl;
    matrice *N = new matrice(M.m, M.n);
    for (int i = 0; i < M.m; i++)
    {
        for (int j = 0; j < M.n; j++)
        {
            N->T[i][j] = M.T[i][j];
        }
    }
    return N;
}

matrice *matrice_invers(matrice M)
{
}

matrice *matrice_transpos(matrice M)
{
    cout << "-> MATRICE TRANSPOSÉE" << endl;
    matrice *N = new matrice(M.n, M.m);
    for (int i = 0; i < M.n; i++)
    {
        for (int j = 0; j < M.m; j++)
        {
            N->T[i][j] = M.T[j][i];
        }
    }
    return N;
}

bool compatible(matrice A, matrice B)
{
    cout << "-> MATRICE COMPATIBLE" << endl;
    if (A.m == B.n)
    {
        return true;
    }
    return false;
}

matrice *multiplication(matrice A, matrice B)
{
    if (!compatible(A, B))
    {
        cout << "pas compatible" << endl;
        return nullptr;
    }
    matrice *C = new matrice(A.m, B.n);
    for (int i = 0; i < C->m; i++)
    {
        for (int j = 0; j < C->n; j++)
        {
            float c = 0;
            for (int k = 0; k < A.n; k++)
            {
                c += A.T[i][k] * B.T[k][j];
            }
            C->T[i][j] = c;
        }
    }
    return C;
}

matrice *minor(matrice M, int a, int b)
{
    cout << "-> MATRICE MINOR" << endl;
    matrice *N = new matrice((M.m) - 1, (M.n) - 1);
    for (int i = 1; i < (M.m); i++)
    {
        for (int j = 0; j < ((M.n)); j++)
        {
            if (j < b)
            {
                N->T[i - 1][j] = M.T[i][j];
            }
            if (j > b)
            {
                N->T[i - 1][j - 1] = M.T[i][j];
            }
        }
    }
    return N;
}

// Très long, ordre factiorielle
// Utiliser le hupper triangle

float det(matrice M)
{
    float r = 0;
    if (M.m != M.n)
    {
        cout << "Matrice non carrée" << endl;
        return -1;
    }
    if (M.m == 2 & M.n == 2)
    {
        cout << "Matrice carrée" << endl;
        float r = ((M.T[0][0]) * (M.T[1][1])) - ((M.T[0][1]) * (M.T[1][0]));
        cout << "(matrice carrée) r vaut : " << r << endl;
        return r;
    }
    else
    {
        for (int i = 0; i < (M.m) - 2; i++)
        {
            cout << "i vaut : " << i << endl;
            for (int j = 0; j < M.n; j++)
            {
                cout << "j vaut : " << j << endl;
                matrice *N = minor(M, i, j);
                N->afficher();
                float a;
                if (j % 2 == 0)
                    a = 1;
                if (j % 2 == 1)
                    a = -1;
                r += a * M.T[i][j] * det(*N);
                cout << "(matrice non carrée) r vaut : " << r << endl;
            }
        }
    }
    cout << "fin de boucle" << endl;
    return r;
}