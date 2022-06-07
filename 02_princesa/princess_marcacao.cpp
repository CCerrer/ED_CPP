#include <iostream>
#include <vector>

void showVet(std::vector<int> &vet, int sword)
{
    for(int i{0}; i < (int)vet.size(); i++)
    {
        if (vet[i]) std::cout << i + 1 << (i == sword? "> " : " ");
    }
    std::cout << std::endl;
}

int findTrue(std::vector<int> &vet, int sword)
{
    do
    {
        sword = (sword + 1) % vet.size();
    } while (!vet[sword]);
    return sword;
}

int main()
{
    int size{}, sword{};
    std::cin >> size >> sword;
    sword--;
    std::vector<int> vet(size, true);
    int count = vet.size() - 1;
    while(count--)
    {
        showVet(vet, sword);
        sword = findTrue(vet, sword);
        vet[sword] = false;
        sword = findTrue(vet, sword);
    }
    showVet(vet, sword);
}