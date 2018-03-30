#include <iostream>

using namespace std;

// Task 100
/*
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
*/

// Task 101
/*
#include <string>
#include <vector>

int main()
{
    string comd1, comd2;
    int a, b;

    int n, pax, pay, pbx, pby;
    cin>>n;
    vector<int> *v;
    v = new vector<int>[n];
    for (int i = 0; i < n; i++)
    {
        v[i].push_back(i);
    }

    while(cin>>comd1)
    {
        if(comd1 == "quit") break;
        else
        {
            cin>>a>>comd2>>b;

            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < v[i].size(); j++)
                {
                    if(v[i][j] == a)
                    {
                        pax = i;
                        pay = j;
                    }
                    else if(v[i][j] == b)
                    {
                        pbx = i;
                        pby = j;
                    }
                }
            }
            if(comd1 == "move" && comd2 == "onto")
            {
                if(pax == pbx){}
                else
                {
                    if(pay != v[pax].size())
                    {
                        for(int i = pay+1; i < v[pax].size(); i++)
                        {
                            v[v[pax][i]].push_back(v[pax][i]);
                            v[pax].pop_back();
                        }
                    }
                    if(pby != v[pbx].size())
                    {
                        for(int i = pby+1; i < v[pbx].size(); i++)
                        {
                            v[v[pbx][i]].push_back(v[pbx][i]);
                            v[pbx].pop_back();
                        }
                    }
                    v[pbx].push_back(a);
                    v[pax].pop_back();
                }
            }
            else if(comd1 == "move" && comd2 == "over")
            {
                if(pax == pbx){}
                else
                {
                    if(pay != v[pax].size())
                    {
                        for(int i = pay+1; i < v[pax].size(); i++)
                        {
                            v[v[pax][i]].push_back(v[pax][i]);
                            v[pax].pop_back();
                        }
                    }

                    v[pbx].push_back(a);
                    v[pax].pop_back();
                }
            }
            else if (comd1 == "pile" && comd2 == "onto")
            {
                if(pax == pbx){}
                else
                {
                    if(pby != v[pbx].size())
                    {
                        for(int i = pby+1; i < v[pbx].size(); i++)
                        {
                            v[v[pbx][i]].push_back(v[pbx][i]);
                            v[pbx].pop_back();
                        }
                    }
                    int noA = v[pax].size();
                    for(int i = pay; i < noA; i++)
                    {
                        v[pbx].push_back(v[pax][pay]);
                        v[pax].erase(v[pax].begin() + pay);
                    }
                }
            }
            else if (comd1 == "pile" && comd2 == "over")
            {
                if(pax == pbx){}
                else
                {
                    int noA = v[pax].size();
                    for(int i = pay; i < noA; i++)
                    {
                        v[pbx].push_back(v[pax][pay]);
                        v[pax].erase(v[pax].begin() + pay);
                    }
                }
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout<<to_string(i)<<": ";
        for(int j = 0; j < v[i].size(); j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
*/


// Task 102
/*
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
*/

//Task 103
