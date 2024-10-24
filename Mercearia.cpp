#include <iostream>

int main() {
    const int numProdutos = 10;
    double precos[numProdutos] = {10.99, 5.49, 7.99, 3.99, 2.99, 1.99, 8.99, 6.99, 4.99, 9.99};
    int quantidades[numProdutos] = {2, 0, 3, 1, 4, 0, 2, 1, 3, 2};
    double faturamento = 0.0;

    for (int i = 0; i < numProdutos; i++) {
        faturamento += precos[i] * quantidades[i];
    }

    std::cout << "Faturamento diário: R$ " << faturamento << std::endl;

    return 0;
}
