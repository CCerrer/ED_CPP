#include <iostream>
#include <vector>

void showVet(std::vector<int> &vet, int sword)
{
    for (int i = 0; i < (int)vet.size(); i++)
    {
        std::cout << vet[i];
        if (i == sword)
            std::cout << "> ";
        else
            std::cout << " ";
    }
    std::cout << std::endl;
}

int main()
{
    int size{}, sword{};
    std::cin >> size >> sword;
    sword--;
    std::vector<int> vet{};
    for (int i = 0; i < size; i++)
        vet.push_back(i+1);

    int count = vet.size();
    while(count > 1)
    {
        showVet(vet, sword);
        sword = (sword + 1) % count;
        vet.erase(vet.begin() + sword);
        sword = sword % vet.size();
        count--;
    }
    showVet(vet, sword);
}