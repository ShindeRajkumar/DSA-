#include <iostream>
using namespace std;
void dummy(int x){
    x++;
    cout<<"value of x is: "<<x<<endl;
}
int main(){
    int n;
    cout<<"Enter value of n";
    cin>>n;
    dummy(n);
    cout<<"n is equal to: "<<n<<endl;
    return 0;
}
