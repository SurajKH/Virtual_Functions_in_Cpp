#include <bits/stdc++.h>
using namespace std;

//virtual Functions in C++

/*
Rules for Virtual Functions in C++

Virtual function cannot be static.
Virtual function can be a friend of another class.
The prototype of virtual functions should be the same in the base as well as derived class.

*/
class Virtual_Class
{
 //by default the scope is private over here.
 public:
 
 virtual void info()
 {
     cout<<"Virtual function in base class"<<endl;
 }
 
 void non_virtual()
 {
   cout<<"Non Virtual function in base class"<<endl;

 }
};
//derived class
class derived_class : public Virtual_Class
{
    public:
     
    void info()
 {
     cout<<"Virtual function in derived class"<<endl;
 }
     void non_virtual()
     {
            cout<<"Non Virtual function in derived class"<<endl;

     }
};
int main()
{
    Virtual_Class vobj,*pvobj;
    derived_class derv;
    pvobj=&derv;
    pvobj->info();
    pvobj->non_virtual();
    return 0;
}
