#include "Object.h"
#include "cstdlib"
#include "iostream"

using namespace std;
namespace YuanchaoLib
{
void* Object :: operator new(unsigned int size)throw()
{
    cout << "This is my father class Object malloc"  <<endl;
    return malloc(size);
}
void  Object :: operator delete(void* p)
{
     cout << "This is my father class Object free"  <<endl;
    free(p);
}

void* Object::operator new[](unsigned int size) throw ()
{
    return malloc(size);
}
void Object::operator delete[](void* p)
{
    free(p);
}
Object::~Object()
{

}
}


