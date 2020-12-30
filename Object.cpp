#include "Object.h"
#include "cstdlib"
#include "iostream"

<<<<<<< HEAD

/*
* Time：20201230
* Aauthor:Yuanchao.Wu
*/
=======
>>>>>>> cde0afdc9bd2b3d0f2bcb4b012703a53368ab2e8
using namespace std;
namespace YuanchaoLib
{
void* Object :: operator new(unsigned int size)throw()
<<<<<<< HEAD
{
    return malloc(size);
}
void  Object :: operator delete(void* p)
{
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
=======
>>>>>>> cde0afdc9bd2b3d0f2bcb4b012703a53368ab2e8
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
<<<<<<< HEAD


/*
*小结:
*Objece类是YuanchaoLib中数据结构类的顶层父类
*Object类用于统一动态内存申请行为
*在堆中创建Object子类的对象，失败时返回NULL值
*Object类为纯虚父类，所有子类都能进行动态类型识别
*/
=======
Object::~Object()
{

}
}


>>>>>>> cde0afdc9bd2b3d0f2bcb4b012703a53368ab2e8
