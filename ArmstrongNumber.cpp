#include<iostream>
using namespace std;
int main(){
    int a,copy_a,sum=0,b;
    cin>>a;
    copy_a=a;
    while(a!=0)
    {
        b=a%10;
        sum=sum+(b*b*b);
        a=a/10;
    }
    if(copy_a==sum){
        cout<<copy_a<<" Do la so Armstrong";
    }
    else cout<<copy_a<<" Khong phai la so Armstrong";
    return 0;
}
