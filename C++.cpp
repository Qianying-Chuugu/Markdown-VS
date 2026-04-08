#include <iostream>
#include <string.h>
using namespace std;

class plant {
    public:
    int num;
    public:
    void putout(){
        cout<<num<<endl;
    }
};

class tree1 :virtual public plant{};

class tree2 :virtual public plant{
    public:
    string kind;
    public:
    void myput(){
        cout<<kind<<endl;
    }
};

class seed :public tree1,public tree2{};

int main(){
    seed one1;
    one1.num=1;
    one1.putout();
}

