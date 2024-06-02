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