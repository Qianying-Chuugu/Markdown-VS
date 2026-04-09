#include <iostream>
#include <string.h>
using namespace std;

class plant {
    public:
    int num;
    public:
    virtual void putout(){
        cout<<num<<"  plant"<<endl;
    }
};

class tree :virtual public plant{
    public:
    string kind;
    public:
    void putout(){
        cout<<kind<<"  tree"<<endl;
    }
};

void put1(plant &numb1){
    numb1.putout();
}

int main(){
    tree seed;
    seed.num=10;
    seed.kind="你好";
    put1(seed);
}

