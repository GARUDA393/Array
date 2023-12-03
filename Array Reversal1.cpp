#include<iostream>
using namespace std;

int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int b[10];
    int j;
    for(int i=9; i>=0; i--)
    {
        b[j] = a[i];
        j = j+1;
    }
    for(int i=0; i<10; i++)
    {
        cout<<b[i]<<" ";
    }
}
