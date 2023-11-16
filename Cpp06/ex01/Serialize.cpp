# include "Serialize.hpp"

Serialize::Serialize(void)
{
    return ;
}

Serialize::~Serialize(void)
{
    return ;
}

Serialize::Serialize(Serialize const& copy)
{
    *this = copy;
}

Serialize& Serialize::operator=(Serialize const& copy)
{
    if (this != &copy)
    {
        *this = copy;
    }
    return (*this);
}

uintptr_t Serialize::serialize(Data* ptr)
{
    uintptr_t bit_value = reinterpret_cast<uintptr_t>(ptr);
    return (bit_value);
}
Data* Serialize::deserialize(uintptr_t raw)
{
    Data *ptr = reinterpret_cast<Data*>(raw);
    return (ptr);
}
