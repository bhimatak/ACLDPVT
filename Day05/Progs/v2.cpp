#include<iostream>
#include <vector>

using namespace std;

int main()
{

    vector <int>v1={1,2,3,4,5};

    cout<<v1.size()<<endl;
    cout<<v1.capacity()<<endl;

    v1.resize(2);
    cout<<v1.size()<<endl;
    cout<<v1.capacity()<<endl;
    for(int i:v1)
        cout<<i<<endl;

    vector<int>v2(10,0);

    v2.shrink_to_fit();
    cout<<v2.size()<<endl;
    cout<<v2.capacity()<<endl;
    


}