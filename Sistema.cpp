#include <iostream>
#include <string>
#include <vector>

struct Exercicio {
    std::string nome;
    std::string detalhes;
};

int main() {
    std::vector<Exercicio> exercicios;
    int opcao;

    do {
        std::cout << "Menu:\n";
        std::cout << "1. Cadastrar exercício\n";
        std::cout << "2. Visualizar exercícios cadastrados\n";
        std::cout << "3. Sair\n";
        std::cout << "Escolha uma opção: ";
        std::cin >> opcao;
        std::cin.ignore(); 

        if (opcao == 1) {
            Exercicio novoExercicio;
            std::cout << "Digite o nome do exercício: ";
            std::getline(std::cin, novoExercicio.nome);
            std::cout << "Digite os detalhes da série: ";
            std::getline(std::cin, novoExercicio.detalhes);
            exercicios.push_back(novoExercicio);
            std::cout << "Exercício cadastrado com sucesso!\n";
        } else if (opcao == 2) {
            std::cout << "Exercícios cadastrados:\n";
            for (const auto& ex : exercicios) {
                std::cout << "Nome: " << ex.nome << ", Detalhes: " << ex.detalhes << std::endl;
            }
        }
    } while (opcao != 3);

}
