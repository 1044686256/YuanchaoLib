#include "Object.h"
#include "cstdlib"
#include "iostream"


/*
* Time��20201230
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
*С��:
*Objece����YuanchaoLib�����ݽṹ��Ķ��㸸��
*Object������ͳһ��̬�ڴ�������Ϊ
*�ڶ��д���Object����Ķ���ʧ��ʱ����NULLֵ
*Object��Ϊ���鸸�࣬�������඼�ܽ��ж�̬����ʶ��
*/
