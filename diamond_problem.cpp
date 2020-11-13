// Diamond / Ambiguity Problem :Occurs in Hybrid Inheritance 
// (solution is virtual keyword)

#include<iostream>
using namespace std;

class A{
    public:
        void display(){
            cout<<"Display fuction";
        }
};
class B: public virtual A{         // virtual added

};
class C: public virtual A{         // virtual added

};
class D: public B, public C{

};
int main()
{
    D obj;
    obj.display();
    return 0;
}