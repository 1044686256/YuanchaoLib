#ifndef LIST_H
#define LIST_H

/*
* 功能：链表
* Time：20201224
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
小结：
    线性表是数据元素的有序并且有限的集合
    线性表中的数据元素必须是类型相同的
    线性表可用于描述队列关系的问题
    线性表在程序中表现为一种特殊的数据类型
    线性表在C++中表现为一个抽象类
*/
#endif // LIST_H
