#include <iostream>
#include <string.h>
using namespace std;

class tree{
    public:
    int a;
    int b;
    int c;
    static double num;
    public:
    static void test1 (tree &exm){
        num=99;
        exm.a=1;
        cout<<"yes"<<endl;
    }
};

double tree::num = 100;

int main(){
    tree branch;
    tree::test1(branch);
    cout<<branch.a<<" "<<tree::num<<endl;
}