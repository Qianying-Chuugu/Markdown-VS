#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

class person{
    public:
    int age;
    char name[11];
};



int main(){
    // person amen={11,"newajdhw"};
    // ofstream exm;
    // exm.open("text1.txt",ios::binary|ios::out) ;
    // exm.write((char*)&amen,sizeof(amen));
    // exm.close();
    person emen;
    ifstream exm;
    exm.open("text1.txt",ios::binary|ios::in);
    exm.read((char*)&emen,sizeof(emen));
    exm.close();
    cout<<emen.age<<" "<<emen.name<<endl;
    
}