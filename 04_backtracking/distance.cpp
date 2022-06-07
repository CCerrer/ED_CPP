#include <iostream>
#include <vector>


bool solveAux(std::string& sequencia, int valorLimite, int i, int temp) {
    for(int j{i - valorLimite}; j < i + valorLimite + 1; j++ )
        if(sequencia[j] == temp) return false;
    return true;
}


bool solve(std::string& sequencia, int valorLimite, int i=0) {
    if ((int)sequencia.size() == i) return true;

    if (sequencia[i] != '.') return solve(sequencia, valorLimite, i + 1);

    for (char temp{'0'}; temp <= valorLimite + '0' /* converte automaticamente em string */; temp++) {
        if (solveAux(sequencia, valorLimite, i, temp)) {
            sequencia[i] = temp;
            std::cout << sequencia << "\n";
            if (solve(sequencia, valorLimite, i + 1)) return true;
        }
    }

    sequencia[i] = '.';

    std::cout << sequencia <<"\n";

    return false;
}


int main() {
    std::string sequencia{};
    int valorLimite{};

    std::cin >> sequencia >> valorLimite;

    solve(sequencia, valorLimite);
    

    return 0;
}