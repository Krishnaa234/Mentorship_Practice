//print name 5 times
#include <iostream>
using namespace std;
int count=0;
void f(string n) {
    if(count>=5)
        return;
    cout<<n<<endl;
    count++;
    f(n);
}
int main() {
    string name;
    cout<<"Enter your name: ";
    cin>>name;
    f(name);
}