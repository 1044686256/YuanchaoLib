#include <iostream>
#include <debug/debug.h>.h>
#include <smartpointer.h>
#include "exception.h"

using namespace std;
using namespace YuanchaoLib;



int main()
{
    cout << "This is C++ 98 Bulder"<<endl;
    return 0;
}
/*class 1:智能指针测试
class Test
{
public:
    Test()
    {
        cout << "Test()" <<endl;
    }
    ~Test()
    {
        cout << "~Test()" << endl;
    }
};

SmartPointer<Test> sp = new Test();
SmartPointer<Test> nsp ;
nsp = sp;
cout << sp.isNull()<<endl;
cout << nsp.isNull()<<endl;
*/
/*
* class 2:异常类测试
*    try
    {
        THROW_EXCEPTION(NullPointerException,"test");
        //throw Exception( "test",__FILE__,__LINE__);

    }
    catch (const Exception& e)
    {
        cout << "catch(const Exception& e)"<<endl;
        cout << e.message()<<endl;
        cout << e.location()<<endl;
    }
*/
