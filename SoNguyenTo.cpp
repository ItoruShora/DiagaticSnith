#include<iostream>
#include<math.h>
using namespace std;
#define INF 9999999999
int main(){
    int n;
    cin>>n;
    if(n<2) {
        cout<<n<<" khong phai la so nguyen to";
        return 0;
    }
    int sum=0;
    for(int i=2;i<=sqrt(n);i++){

        if(n%i==0) 
            sum++;
    }
   if(sum==0) cout<<n<<" la so nguyen to";
    else cout<<n<<" khong phai la so nguyen to";
    return 0;
}