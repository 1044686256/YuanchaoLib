#include "List.h"
#include "Object.h"

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
