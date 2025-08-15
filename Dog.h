#include <utility>

class Dog
{
    std::string name_;
public:
    //Dog(std::string&& name): name_(name)
    Dog(std::string&& name): name_(std::move(name))
    {
        std::cout << "rvalue" << '\n';
    }
    //Dog(std::string& name): name_(name)
    Dog(std::string& name): name_(std::move(name))
    {
        std::cout << "lvalue" << '\n';
    }
};

int main()
{
    Dog amy("Amy");

    std::string dogName = "Bob";
    Dog bob(dogName);
}
