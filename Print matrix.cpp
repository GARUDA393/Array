#include<iostream>
using namespace std;
int main()
{
    int a[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    // using nested loop 
    // outer loop for traversing each row
    for(int i = 0; i<3; i++)
    {
        // inner loop for traversing element in each column
        for(int j=0; j<3; j++)
        {
            cout<<a[i][j];
        }
        // to print new row on new line
        cout<<endl;
    }
}
