#include <iostream>
using namespace std;
class nationalflag
{
private:
    int i,j,k;
public:
    void flag()
    {
        for(i=0;i<2;i++)
        {
            for(j=0;j<9;j++)
            {
                for(k=0;k<=j;k++)
                {
                    cout<<"*"<<k;
                }
                cout<<"\n";
            }
        }
    }
};

int main()
{

     nationalflag nf;
     nf.flag();
     cout<<"\n";
     return 0;
}
