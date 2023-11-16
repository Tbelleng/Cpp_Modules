#include "Serialize.hpp"

int main()
{
    Data *ptr = new Data;
    ptr->type = 42;
    ptr->name = strdup("Its a Serialize test");

    std::cout << "Initiale type value = : " << ptr->type << std::endl;
    std::cout << "Initiale name value = : " << ptr->name << std::endl;

    uintptr_t bytes = Serialize::serialize(ptr);
    
    std::cout << "Bytes value = : " << bytes << std::endl;

    Data *ptr2 = Serialize::deserialize(bytes);

    std::cout << "Deserialized type value = : " << ptr2->type << std::endl;
    std::cout << "Deserialized name value = : " << ptr2->name << std::endl;

    return (0);
    
}