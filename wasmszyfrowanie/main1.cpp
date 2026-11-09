#include <iostream>
using namespace std;

int main()
{
    string text;
    int p;

    cin>>text;
    cin>>p;

    for(int i = 0; i < text.length(); i++)
    {
        text[i]=(text[i]-'a'+p)%26+'a';
    }
    cout<<text;

    return 0;
}
