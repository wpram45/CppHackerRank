#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector <int> v;
    for (int i=0;i<n;i++)
    {
        int input=0;
        cin >>input;
        v.push_back(input);
        
    }
    sort(v.begin(),v.end());
    
    for(int i=0;i<v.size();i++)
    {
        
        cout << v[i] << " ";
        
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
//
