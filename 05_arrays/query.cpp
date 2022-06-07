#include <iostream>
#include <vector>


void search (std::vector<std::string> consultas, std::string buscando, int& quant) {
    for (int i{0}; i < (int)consultas.size(); i++) {
        if (consultas[i] == buscando) quant++;
    }
}

int main() {
    int nConsultas{};
    std::cin >> nConsultas;
    std::vector<std::string> consultas(nConsultas, "");

    for(int a{0}; a < (int)consultas.size(); a++) {
        std::cin >> consultas[a];
    }

    int nBuscas{};
    std::cin >> nBuscas;
    std::vector<std::string> buscas(nBuscas, "");

    for(int a{0}; a < (int)buscas.size(); a++) {
        std::cin >> buscas[a];
    }

    std::vector<int> solve(nBuscas, 0);

    for (int i{0}; i < (int)buscas.size(); i++) {
        search(consultas, buscas[i], solve[i]);
    }


    for (auto x:solve) {
        std::cout << x << " ";
    }

    return 0;
}