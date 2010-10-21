#include <iostream>
using namespace std;

class Myclass
{public:
	int x;
 	Myclass(int i);
	~Myclass();
};

Myclass::Myclass(int i) {x=i;}
Myclass::~Myclass() {cout<<"Разрушение объекта....\n";}
int main() {
Myclass o1(217);
Myclass o2(456);
cout<<o1.x<<o2.x<<"\n";
return 0;
}
