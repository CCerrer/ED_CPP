#include <iostream>
#include <vector>

void deixando(std::vector<int>& fila, std::vector<int> out) {
    for (int i{0}; i < (int)fila.size(); i++) {
        for (int j{0}; j < (int)out.size(); j++) {
            if (fila[i] == out[j]) fila.erase(fila.begin() + i);
        }
    }
}

int main() {
    int nFila{};
    std::cin >> nFila;
    std::vector<int> fila(nFila, 0);
    for (int i{0}; i < (int)fila.size(); i++) std::cin >> fila[i];

    int nOut{};
    std::cin >> nOut;
    std::vector<int> out(nOut, 0);
    for (int i{0}; i < (int)out.size(); i++) std::cin >> out[i];

    deixando(fila, out);
    
    for (auto x:fila) std::cout << x << " ";
}
