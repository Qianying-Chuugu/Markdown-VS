#include <iostream>
#include <string.h>
using namespace std;

class tree;

class grass{
    
    public:
    int a;
    public:
    void grassmade();
};

class tree{

    friend void grass::grassmade();
    private:
    int m;
    int n;
    private:
    void treemade(){
        cout<<"hello,tree"<<endl;
    }
    tree():m(10),n(20){}

};

void grass::grassmade(){
    tree A;
    cout<<A.m<<" "<<A.n<<endl;
    A.treemade();

}


int main(){
   grass B;
   B.grassmade();
}