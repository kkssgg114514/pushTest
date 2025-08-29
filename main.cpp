#include <iostream>
#include <vector>

int add(int a, int b) 
{
    return a + b;
}

template<typename T>
void inverse(std::vector<T>& v)
{
    for (int i = 0; i < v.size(); i++) {
        v[i] = -v[i];
    }
}

int main() 
{
    std::cout << "Hello, world!" << std::endl;
    return 0;
}