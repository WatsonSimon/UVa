// Task 102
#include <iostream>

using namespace std;

int minp(int*);
int main()
{
    int b1, g1, c1, b2, g2, c2, b3, g3, c3;
    while(cin>>b1>>g1>>c1>>b2>>g2>>c2>>b3>>g3>>c3)
    {
        int m[6];
        m[0] = b2 + b3 + c1 + c3 + g1 + g2; //BCG
        m[1] = b2 + b3 + g1 + g3 + c1 + c2; //BGC
        m[2] = c2 + c3 + b1 + b3 + g1 + g2; //CBG
        m[3] = c2 + c3 + g1 + g3 + b1 + b2; //CGB
        m[4] = g2 + g3 + b1 + b3 + c1 + c2; //GBC
        m[5] = g2 + g3 + c1 + c3 + b1 + b2; //GCB
        if(minp(m) == 1)
            cout<<"BCG "<<m[0]<<endl;
        else if (minp(m) == 2)
            cout<<"BGC "<<m[1]<<endl;
        else if (minp(m) == 3)
            cout<<"CBG "<<m[2]<<endl;
        else if (minp(m) == 4)
            cout<<"CGB "<<m[3]<<endl;
        else if (minp(m) == 5)
            cout<<"GBC "<<m[4]<<endl;
        else if (minp(m) == 6)
            cout<<"GCB "<<m[5]<<endl;
    }
    return 0;
}
int minp(int *a)
{
    int max = a[0];
    int k = 1;
    for(int i = 0; i<6; i++)
    {
        if(a[i] < max)
        {
            max = a[i];
            k = i + 1;
        }
    }
    return k;
}
