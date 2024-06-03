#include "matrice.cpp"

using namespace std;

matrice *matrice_unite(int m);
matrice *matrice_invers(matrice M);
matrice *matrice_transpos(matrice M);
matrice *copie(matrice M);
bool compatible(matrice A, matrice B);
matrice *multiplication(matrice A, matrice B);
matrice *minor(matrice M, int a, int b);
float det(matrice M);
