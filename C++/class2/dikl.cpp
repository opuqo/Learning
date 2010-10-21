#include <iostream>
using namespace std;

class Myclass {
int val;
public:
 MyClass(int i)
{ val=i;
   cout<<"Внутри уонструктора.\n";  }

~MyClass() {
    cout<< "Разрушение объекта.\n"
}

