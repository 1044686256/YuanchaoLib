#ifndef SEQLIST_H
#define SEQLIST_H
#include "exception.h"
#include "list.h"
namespace YuanchaoLib
{

template <typename T>
class SeqList : public List<T>
{
protected:
    T* m_array;//˳��洢�ռ�
    int m_lenth;//��ǰ˳�����

public:
    bool insert(int i, const T &e)
    {
        //1.�ж�˳�����
        bool ret = ((0<=i) && (i<=m_lenth));

        ret = ret && (m_lenth < capacity());
        if(ret)
        {
            for(int p = m_lenth-1;p>=i;p--)
            {
                m_array[p+1]=m_array[p];
            }

            m_array[i] = e;
            m_lenth++;
        }
        return ret;
    }
    bool remove(int i)
    {
        bool ret = ((0<=i)&&(i<m_lenth));
        if(ret)
        {
            for(int p = i;p<=m_lenth;p++)
            {
                m_array[p] = m_array[p+1];
            }
            m_lenth --;
        }
        return ret;
    }

    bool set(int i, const T &e)
    {

        bool ret = ((0<=i)&&(i<m_lenth));
        if(ret)
        {
            m_array[i] =e;
        }
        return ret;
    }

    bool get(int i, T &e)
    {
        bool ret = ((0<=i)&&(i<m_lenth));
        if(ret)
        {
            e=m_array[i];
        }
        return ret;
    }

    int lenth()
    {
        return m_lenth;
    }

    void clear()
    {
        m_lenth = 0;
    }

    //˳��洢���Ա��������ʷ�ʽ
    T& operator[](int i)
    {
        if((0<=i)&& (i<=lenth()))
        {
            return m_array[i];
        }
        else
        {
            THROW_EXCEPTION(IndexOutOfBoundsException,"Parameter i is invalid...");
        }
    }

    T operator [](int i) const
    {
        return (const_cast<SeqList(T&)>(*this));
    }

    //˳��洢�ռ������
    virtual int capacity()=0;
};
}
#endif // SEQLIST_H
