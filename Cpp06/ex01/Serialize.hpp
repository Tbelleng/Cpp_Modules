# ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

#include <stdint.h>
#include <iostream>
#include <cstring>

typedef struct Data
{
    int type;
    char *name;
} Data;

class   Serialize
{
    private :

    public :

    Serialize(void);
    ~Serialize(void);
    Serialize(Serialize const& copy);
    Serialize& operator=(Serialize const& copy);

    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
    

};


#endif