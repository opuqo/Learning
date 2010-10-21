#include <iostream>
using namespase std;
class MyClass {
 int val;
public:
 MyClass(int i) {
  val = i;
  cout << "Внутри Конструктора.\n";
  }
 ~MyClass() { cout << "разрушение объекта.\n";}
int getval() {return val;}
void setval(int i) {val = i;}
};

void display(MyClass &ob)
{cout << ob.getval() << '\n';}

void change(MyClass &ob)
{ob.setval(100);}

int main()
{
MyClass a(10);
cout << "До вызова функции дисплей\n";
display(a);
cout << "после вызова функции дисплей\n";
return 0;
}