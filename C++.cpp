#include <iostream>
#include <string.h>
using namespace std;

class tree{
    public:
    // tree(const tree &branch){
    //     a=branch.a;
    //     b=branch.b;
    //     cout<<a<<' '<<b<<endl;
    // }
    tree(){

    }
    public:
    int a;
    int b;
};

int main(){
    tree branch1;
    branch1.a=3;
    branch1.b=7;
    tree branch2(branch1);
    cout<< branch2.a<<' '<<branch2.b<<endl;
}