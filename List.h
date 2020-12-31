#ifndef LIST_H
#define LIST_H

/*
* ���ܣ�����
* Time��20201224
* Aauthor:Yuanchao.Wu
*/

#include <Object.h>
namespace YuanchaoLib
{
    template <typename T>
class List: public Object
{
public:
    virtual bool insert(int i,const T& e)=0;
    virtual bool remove(int i) = 0;
    virtual bool set(int i,const T& e)=0;
    virtual bool get(int i,T& e)=0;
    virtual int lenth() const = 0;
    virtual void clear() =0;
};

}

/*
С�᣺
    ���Ա�������Ԫ�ص����������޵ļ���
    ���Ա��е�����Ԫ�ر�����������ͬ��
    ���Ա�������������й�ϵ������
    ���Ա��ڳ����б���Ϊһ���������������
    ���Ա���C++�б���Ϊһ��������
*/
#endif // LIST_H
