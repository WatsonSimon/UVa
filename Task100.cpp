#include <iostream>

using namespace std;

// Task 100

int main()
{
    int a, b;
    int max = 0;
    int c = 0;

    while(cin>>a>>b)
    {
        cout<<a<<" "<<b<<" ";
        if(a>b)
        {
            int t = a;
            a = b;
            b = t;
        }

        for(int i = a; i <= b; i++)
        {
            int j = i;
            while(j!=1)
            {
                if(j%2==1)
                    j = 3*j+1;
                else
                    j = j/2;
                c++;
            } c++;
            if(max < c)  max = c;
            c = 0;
        }
        cout<<max<<endl;
        max = 0;
    }
    return 0;
}
