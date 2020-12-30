#include "Object.h"
#include "cstdlib"
#include "iostream"


/*
* Time：20201230
* Aauthor:Yuanchao.Wu
*/
using namespace std;
namespace YuanchaoLib
{
void* Object :: operator new(unsigned int size)throw()
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
{

}
}


/*
*小结:
*Objece类是YuanchaoLib中数据结构类的顶层父类
*Object类用于统一动态内存申请行为
*在堆中创建Object子类的对象，失败时返回NULL值
*Object类为纯虚父类，所有子类都能进行动态类型识别
*/
