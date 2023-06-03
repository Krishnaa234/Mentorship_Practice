//print N to 1 using recursion
#include <iostream>
using namespace std;
void fun(int x) {
    if(x<=0)
        return;
    cout<<x<<endl;
    x--;
    fun(x);
}
int main() {
    int n;
    cout<<"The ending number is: 1"<<endl;
    cout<<"Enter starting number: ";
    cin>>n;
    fun(n);
}