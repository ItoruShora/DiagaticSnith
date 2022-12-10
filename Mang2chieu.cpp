#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <time.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
using pi = pair<int, int>;
#define f first
#define s second
#define mp make_pair
#define size 100
void hoandoi(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}
bool checksnt(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int max(int a, int b)
{
    return a > b ? a : b;
}
void input(int &n, int a[size][size])
{
    cout << "Nhap vao kich thuoc ma tran (nxn): ";
    do
    {
        cin >> n;
        if (n <= 0 or n > size)
            cout << "Vui long nhap lai!!";
    } while (n <= 0 or n > size);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
}
void output(int n, int a[size][size])
{
    system("cls");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void sntcheophu(int n, int a[size][size])
{
    int dem = n - 1;
    cout << "Cac so nguyen to nam tren duong cheo phu la: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == dem and checksnt(a[i][j]))
                cout << a[i][j] << " ";
        }
        dem--;
    }
    cout << endl;
}
void timsolonthu2(int n, int a[size][size])
{
    int max1 = a[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] > max1)
                max1 = a[i][j];
        }
    }
    int max2 = a[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] > max2 and a[i][j] != max1)
                max2 = a[i][j];
        }
    }
    cout << "So lon thu 2 trong ma tran vuong la: " << max2;
    cout << endl;
}
void caud(int n, int a[size][size])
{
    int i = 0;
    int b[size][size];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            b[i][j] = a[i][j];
        }
    }
    cout << "Tong cac chu so cua tung gia tri trong ma tran vuong!" << endl;
    while (i < n)
    {
        int j = 0;
        while (j < n)
        {
            int sum = 0;
            while (b[i][j])
            {
                int temp = a[i][j] % 10;
                sum += temp;
                b[i][j] /= 10;
            }
            cout << sum << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}
void tongbienmatran(int n, int a[size][size])
{
    int dongtren = 0, dongduoi = 0, cottrai = 0, cotphai = 0;
    for (int j = 0; j < n; j++)
    {
        dongtren += a[0][j];
        dongduoi += a[n - 1][j];
    }
    for (int i = 0; i < n; i++)
    {
        cottrai += a[i][0];
        cotphai += a[i][n - 1];
    }
    cout << "Tong phan tu nam tren bien!" << endl;
    cout << "Dong 0: " << dongtren << endl;
    cout << "Dong n-1: " << dongduoi << endl;
    cout << "Cot 0: " << cottrai << endl;
    cout << "Cot n-1: " << cotphai << endl;
}
void sx(int n,int a[]){
    for(int i=0;i<n;i++){
        int max=i;
        for(int j=i+1;j<n;j++){
            if(a[j]>a[max]) max=j;
        }
        int tmp=a[max];
        a[max]=a[i];
        a[i]=tmp;
    }
}
void sapxepgiamdancotchan(int n, int a[size][size])
{
    cout<<"Sap xet cac cot chan giam dan!!"<<endl;
    int b[size][size];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            b[i][j]=a[j][i];
        }
    }
    for(int i=0;i<n;i+=2) sx(n,b[i]);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << b[j][i] << " ";
        }
        cout << endl;
    }
}
int main()
{
    system("cls");
    // srand((unsigned) int(time(NULL)));
    int n, a[size][size];
    input(n, a);
    output(n, a);
    sntcheophu(n, a);
    timsolonthu2(n, a);
    caud(n, a);
    tongbienmatran(n, a);
    sapxepgiamdancotchan(n, a);
    return 0;
}