#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

/* 
Entrada
    um vetor de inteiros. O vetor tem no mínimo 1 elemento. 
Saída
    vet: o vetor
    rvet: o vetor impresso ao contrário
    sum: a soma dos elementos
    mult: a multiplicação dos elementos
    min: o menor elemento
    inv: inverte o vetor, depois imprime ele invertido
*/

std::vector<int> readVector(){
    std::string line;
    std::getline(std::cin, line);
    std::stringstream ss(line);
    std::vector<int> vet;
    int value;
    while(ss >> value)
        vet.push_back(value);
    return vet;
}

void printVector(std::vector<int> vet){
    std::cout << "[ ";
    for(auto x:vet)
        std::cout << x << " ";
    std::cout << "]\n";
}

int main(){
    std::vector<int> vet = readVector();
    // vet
    std::cout << "vet : ";
    printVector(vet);

    // rvet
    std::cout << "rvet : [ ";
    for (int i = vet.size() - 1; i >= 0; i--)
        std::cout << vet[i] << " ";
    std::cout << "]\n";

    // sum
    int sum = 0;
    for(auto x:vet)
        sum += x;
    std::cout << "sum : " << sum << "\n";

    // mult
    int mult = 1;
    for(auto x:vet)
        mult *= x;
    std::cout << "mult : " << mult << "\n";

    // min
    int min = *std::min_element(vet.begin(), vet.end());
    std::cout << "min : " << min << "\n";

    // inv
    std::vector<int> rvet(vet.rbegin(), vet.rend());
    std::cout << "inv : ";
    printVector(rvet);

    return 0;
}