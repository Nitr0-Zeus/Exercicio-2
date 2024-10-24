#include <iostream>

int main() {
    const int numQuestoes = 80;
    char gabarito[numQuestoes];
    char respostasAluno[numQuestoes];
    int acertos = 0;

    // Gabarito
    std::cout << "Digite o gabarito da prova (80 respostas de A a D): " << std::endl;
    for (int i = 0; i < numQuestoes; i++) {
        std::cin >> gabarito[i];
    }

    // Respostas do aluno
    std::cout << "Digite as respostas do aluno (80 respostas de A a D): " << std::endl;
    for (int i = 0; i < numQuestoes; i++) {
        std::cin >> respostasAluno[i];
    }

    // Comparação das respostas
    for (int i = 0; i < numQuestoes; i++) {
        if (gabarito[i] == respostasAluno[i]) {
            acertos++;
        }
    }

    std::cout << "Número de acertos: " << acertos << std::endl;

}
