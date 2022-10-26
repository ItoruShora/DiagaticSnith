#include <iostream>
using namespace std;
int dequy(int n){
    if(n==1) return 1;
    else  return (n*dequy(n-1));
    return 0;
}
int main(){
    int a;
    cin>>a;
    cout<<"Giai thua cua "<<a<<" la "<<dequy(a);

    return 0;
}