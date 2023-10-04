#include <sstream>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    stringstream ss(s);

    int cnt = 0;
    string w;
    while (ss >> w)
    {
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}

void solve(string s)
{
    map<string, int> mp;
    stringstream ss(s);

    string w;

    while (ss >> w)
    {
        mp[w]++;
    }
    map<string, int>::iterator m;
    for (m = mp.begin(); m != mp.end(); m++)
    {
        cout << m->first << "->" << m->second << endl;
    }
}

int main()
{

    string s;
    getline(cin, s);
    solve(s);
    return 0;
}