#include <iostream>
#include <vector>
using namespace std;

int main()
{
    list <int> v;
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.pop_back();
    vector<int> :: iterator i;
    for(i=v.begin();i!=v.end();i++)
        cout<<*i<<endl;
}
