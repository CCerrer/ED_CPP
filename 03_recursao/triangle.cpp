#include <iostream>
#include <vector>
#include <sstream>


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


void triangleConstruct(std::vector<int> vector, int size){
    if(size == 1)
        return;
    std::vector<int> filho;

    for(int i{1}; i < size; i++)
        filho.push_back(vector[i - 1] + vector[i]);
    triangleConstruct(filho, filho.size());

    printVector(filho);
}

int main(){
    std::vector<int> vector = readVector();

    triangleConstruct(vector, vector.size());

    printVector(vector);
}