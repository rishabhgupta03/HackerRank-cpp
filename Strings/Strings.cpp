#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;
    cin>>a;
    string b;
    cin>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<a+b<<endl;
    cout<<b[0]+a.substr(1)<<" "<<a[0]+b.substr(1);
  
    return 0;
}
