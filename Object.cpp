#include "Object.h"
#include "cstdlib"
#include "iostream"

<<<<<<< HEAD

/*
* Time��20201230
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
*С��:
*Objece����YuanchaoLib�����ݽṹ��Ķ��㸸��
*Object������ͳһ��̬�ڴ�������Ϊ
*�ڶ��д���Object����Ķ���ʧ��ʱ����NULLֵ
*Object��Ϊ���鸸�࣬�������඼�ܽ��ж�̬����ʶ��
*/
=======
Object::~Object()
{

}
}


>>>>>>> cde0afdc9bd2b3d0f2bcb4b012703a53368ab2e8
