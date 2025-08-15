#include <utility>

void TestValue(int& value)
{
    std::cout << "lvalue: " << value << '\n';
}

void TestValue(int&& value)
{
    std::cout << "rvalue: " << value << '\n';
}

template<typename T>
void Print(T&& t)
{
    // TestValue(t);
    TestValue(std::forward<T>(t));
}

int main()
{
    Print(123);
    int num = 456;
    Print(num);
}
