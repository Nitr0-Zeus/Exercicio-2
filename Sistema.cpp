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
        std::cout << "1. Cadastrar exerc�cio\n";
        std::cout << "2. Visualizar exerc�cios cadastrados\n";
        std::cout << "3. Sair\n";
        std::cout << "Escolha uma op��o: ";
        std::cin >> opcao;
        std::cin.ignore(); 

        if (opcao == 1) {
            Exercicio novoExercicio;
            std::cout << "Digite o nome do exerc�cio: ";
            std::getline(std::cin, novoExercicio.nome);
            std::cout << "Digite os detalhes da s�rie: ";
            std::getline(std::cin, novoExercicio.detalhes);
            exercicios.push_back(novoExercicio);
            std::cout << "Exerc�cio cadastrado com sucesso!\n";
        } else if (opcao == 2) {
            std::cout << "Exerc�cios cadastrados:\n";
            for (const auto& ex : exercicios) {
                std::cout << "Nome: " << ex.nome << ", Detalhes: " << ex.detalhes << std::endl;
            }
        }
    } while (opcao != 3);

}
