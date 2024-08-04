#include <iostream>
using namespace std;
template <class X>
class Demo
{
    private:
    X num1, num2;
    public:

    Demo (x n1, x n2)
    {
        num1 = n1;
        num2 = n2;
    }
    void check()
    {
        if (num1>num2)
        {
           cout << num1 << "is the largest number  " <<endl;
        }
        else
        {
            cout << num2 << "is the gratest number"<<endl;
        }
    }
};
int main()
{   
    Demo obj(5.1,2.3);
    obj.check();
    return 0;
}