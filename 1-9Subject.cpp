#include<iostream>
#include<cmath>
#include<stdlib.h>
#include<windows.h>
using namespace std;
int p;
double tam;
string o;
void hoandoi(double&a, double&b)
{
    tam=a;
    a=b;
    b=tam;
}
int main()
{
    o="khong";
    while(o=="khong")
    {
    system("cls");
    o="co";
    cout<<"Chon bai tap:\n";
    cout<<"1.Giai phuong trinh bac 2";
    cout<<"\n2.Giai phuong trinh bac nhat hai an";
    cout<<"\n3.Sap xep 3 so theo thu tu tang dan";
    cout<<"\n4.Tim gia tri lon nhat trong day n so nguyen";
    cout<<"\n5.Kiem tra n co phai la so chinh phuong hay khong";
    cout<<"\n6.Kiem tra n co phai la so nguyen to hay khong";
    cout<<"\n7.Kiem tra n co phai la so hoan chinh hay khong";
    cout<<"\n8.Kiem tra n co phai la so armstrong hay khong";
    cout<<"\n9.Dem trong day gom n so nguyen co bao nhieu gia tri bang n";
    cout<<"\n10.Ket thuc chuong trinh";
    cout<<"\nLua chon bai tap (1->9):";cin>>p;
    switch (p)
    {
    case 1:
        {
            while (o=="co"){
            system("cls");
            double a,b,c,delta,x1,x2;
            cout<<"GIAI PHUONG TRINH BAC HAI";
            cout<<"\nNhap a:";cin>>a;
            cout<<"Nhap b:";cin>>b;
            cout<<"Nhap c:";cin>>c;
            delta=b*b-4*a*c;
            if (delta>=0)
            {
                x1=(-b-sqrt(delta))/(2*a);
                x2=(-b+sqrt(delta))/(2*a);
                cout<<"x1="<<x1;
                cout<<"\nx2="<<x2;
            }
            else cout<<"phuong trinh vo nghiem";
            cout<<"\nBAN CO MUON THUC HIEN TIEP BAI TAP NAY KHONG?(co/khong):";cin>>o;
            while (o!="co" && o!="khong")
            {
                cout<<"Moi ban nhap lai";
                cout<<"\nBAN CO MUON THUC HIEN TIEP BAI TAP NAY KHONG?(co/khong)";cin>>o;
            }
            }
            break;
        }
    case 2:
        {
            while (o=="co"){
            system("cls");
            double a,b,c,d,e,f,D,Dx,Dy,x,y;
            cout<<"GIAI PHUONG TRINH BAC NHAT HAI AN";
            cout<<"\nNhap a:";cin>>a;
            cout<<"Nhap b:";cin>>b;
            cout<<"Nhap c:";cin>>c;
            cout<<"Nhap d:";cin>>d;
            cout<<"Nhap e:";cin>>e;
            cout<<"Nhap f:";cin>>f;
            D=a*e-b*d;
            Dx=c*e-f*b;
            Dy=a*f-c*d;
            if (D!=0)
            {
                x=Dx/D;
                y=Dy/D;
                cout<<"x="<<x;
                cout<<"\ny="<<y;
            }
            else
            {
                if (Dx==0 && Dy==0)
                {
                    cout<<"He co vo so nghiem";
                }
                else cout<<"He vo nghiem";
            }
            cout<<"\nBAN CO MUON THUC HIEN TIEP BAI TAP NAY KHONG?(co/khong):";cin>>o;
            while (o!="co" && o!="khong")
            {
                cout<<"Moi ban nhap lai";
                cout<<"\nBAN CO MUON THUC HIEN TIEP BAI TAP NAY KHONG?(co/khong)";cin>>o;
            }
            }
            break;
        }
    case 3:
        {
            while (o=="co"){
            system("cls");
            double a,b,c;
            cout<<"SAP XEP 3 SO THEO THU TU TANG DAN";
            cout<<"\nNhap so thu 1:";cin>>a;
            cout<<"Nhap so thu 2:";cin>>b;
            cout<<"Nhap so thu 3:";cin>>c;
            if (a>b) hoandoi(a,b);
            if (b>c) hoandoi(b,c);
            if (a>b) hoandoi(a,b);
            cout<<"Day 3 so sau khi sap xep theo thu tu tang dan la:"<<a<<" "<<b<<" "<<c;
            cout<<"\nBAN CO MUON THUC HIEN TIEP BAI TAP NAY KHONG?(co/khong):";cin>>o;
            while (o!="co" && o!="khong")
            {
                cout<<"Moi ban nhap lai";
                cout<<"\nBAN CO MUON THUC HIEN TIEP BAI TAP NAY KHONG?(co/khong)";cin>>o;
            }
            }
            break;
        }
    case 4:
        {
            while (o=="co"){
            system("cls");
            int i,a[100],n,m;
            cout<<"TIM GIA TRI LON NHAT TRONG DAY N SO NGUYEN";
            cout<<"\nNhap n:";cin>>n;
            for(i=1;i<=n;i++)
            {
                cout<<"Nhap a"<<i<<":";cin>>a[i];
                if (i==1) m=a[i];
                else
                {
                    if (i>1)
                    {
                    if (a[i]>a[i-1]) m=a[i];
                    }
                }
            }
            cout<<"Gia tri lon nhat trong day so la:"<<m;
            cout<<"\nBAN CO MUON THUC HIEN TIEP BAI TAP NAY KHONG?(co/khong):";cin>>o;
            while (o!="co" && o!="khong")
            {
                cout<<"Moi ban nhap lai";
                cout<<"\nBAN CO MUON THUC HIEN TIEP BAI TAP NAY KHONG?(co/khong)";cin>>o;
            }
            }
        break;
        }
    case 5:
        {
            while (o=="co"){
            int n,a;
            double b;
            system("cls");
            cout<<"KIEM TRA N CO PHAI LA SO CHINH PHUONG HAY KHONG";
            cout<<"\nNhap n:";cin>>n;
            b=sqrt(n)*10;
            a=b;
            if (a%10!=0) cout<<n<<" khong phai la so chinh phuong";
            else cout<<n<<" la so chinh phuong";
            cout<<"\nBAN CO MUON THUC HIEN TIEP BAI TAP NAY KHONG?(co/khong):";cin>>o;
            while (o!="co" && o!="khong")
            {
                cout<<"Moi ban nhap lai";
                cout<<"\nBAN CO MUON THUC HIEN TIEP BAI TAP NAY KHONG?(co/khong)";cin>>o;
            }
            }
            break;
        }
    case 6:
        {
            while (o=="co"){
            int n,i,m,b;
            system("cls");
            m=0;
            cout<<"KIEM TRA N CO PHAI LA SO NGUYEN TO HAY KHONG";
            cout<<"\nNhap n:";cin>>n;
            if (n<=1) cout<<n<<" khong phai la so nguyen to";
            if (n==2) cout<<n<<" la so nguyen to";
            if (n>2)
            {
            b=sqrt(n);
            for (i=2;i<=b;i++)
            {
                if (n%i==0)
                {
                    m=1;
                    break;
                }
            }
            if (m==1) cout<<n<<" khong phai la so nguyen to";
            if (m==0) cout<<n<<" la so nguyen to";
            }
            cout<<"\nBAN CO MUON THUC HIEN TIEP BAI TAP NAY KHONG?(co/khong):";cin>>o;
            while (o!="co" && o!="khong")
            {
                cout<<"Moi ban nhap lai";
                cout<<"\nBAN CO MUON THUC HIEN TIEP BAI TAP NAY KHONG?(co/khong)";cin>>o;
            }
            }
            break;
        }
    case 7:
        {
            while (o=="co"){
            int n,m,i;
            system("cls");
            cout<<"KIEM TRA N CO PHAI LA SO HOAN CHINH HAY KHONG";
            cout<<"\nNhap n:";cin>>n;
            m=0;
            if (n<0) cout<<n<<" khong phai la so hoan chinh";
            else
            {
                for(i=1;i<=n/2;i++)
            {
                if (n%i==0) m+=i;
            }
            if (m==n) cout<<n<<" la so hoan chinh";
            else cout<<n<<"khong phai la so hoan chinh";
            }
            cout<<"\nBAN CO MUON THUC HIEN TIEP BAI TAP NAY KHONG?(co/khong):";cin>>o;
            while (o!="co" && o!="khong")
            {
                cout<<"Moi ban nhap lai";
                cout<<"\nBAN CO MUON THUC HIEN TIEP BAI TAP NAY KHONG?(co/khong)";cin>>o;
            }
            }
            break;
        }
    case 8:
        {
            while (o=="co"){
            system("cls");
            int n,a,sum,b;
            cout<<"KIEM TRA N CO PHAI LA SO ARMSTRONG HAY KHONG";
            cout<<"\nNhap n:";cin>>n;
            b=n;
            sum=0;
            while (b>0)
            {
                a=b%10;
                sum=sum+a*a*a;
                b=(b-a)/10;
            }
            if (sum==n) cout<<n<<" la so Armstrong";
            else cout<<n<<" khong la so Armstrong";
            cout<<"\nBAN CO MUON THUC HIEN TIEP BAI TAP NAY KHONG?(co/khong):";cin>>o;
            while (o!="co" && o!="khong")
            {
                cout<<"Moi ban nhap lai";
                cout<<"\nBAN CO MUON THUC HIEN TIEP BAI TAP NAY KHONG?(co/khong)";cin>>o;
            }
            }
            break;
        }
    case 9:
        {
            while (o=="co"){
            system("cls");
            int i,n,a[100],k,sum;
            sum=0;
            cout<<"DEM TRONG DAY GOM N SO NGUYEN CO BAO NHIEU SO BANG N";
            cout<<"\nNhap n:";cin>>n;
            cout<<"Nhap k:";cin>>k;
            for(i=1;i<=n;i++)
            {
                cout<<"a"<<i<<"=";cin>>a[i];
                if (a[i]==k) sum+=1;
            }
            cout<<"So so nguyen bang k la:"<<sum;
            cout<<"\nBAN CO MUON THUC HIEN TIEP BAI TAP NAY KHONG?(co/khong):";cin>>o;
            while (o!="co" && o!="khong")
            {
                cout<<"Moi ban nhap lai";
                cout<<"\nBAN CO MUON THUC HIEN TIEP BAI TAP NAY KHONG?(co/khong)";cin>>o;
            }
            }
            break;
        }
    case 10:
        {
            system("cls");
            cout<<"XIN CHAO BAN VA HEN GAP LAI";
            cout<<"\n\n//Chuong trinh da ket thuc";
            system("color 0");
            break;
        }
    }
    }
    return 0;
}
