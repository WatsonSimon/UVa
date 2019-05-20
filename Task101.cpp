// Task 101

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
