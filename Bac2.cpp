#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float a,b,c,delta,x1,x2;
    cin>>a>>b>>c;
    delta=b*b-4*a*c;
    if(delta > 0) {
            x1 = (-b+sqrt(delta))/(2*a);
            x2 = (-b-sqrt(delta))/(2*a);
            cout << "Nghiem thu nhat x1 = " << x1 << endl;
            cout << "Nghiem thu hai x2 = " << x2 << endl;
        } else if ( delta == 0) {
            cout << "Phuong trinh co nghiem kep: x1 = x2 = " << -b/2*a << endl;
        } else {
            cout << "Phuong trinh vo nghiem" << endl;
        }
    
    return 0;
}