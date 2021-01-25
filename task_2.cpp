
#include<bits/stdc++.h>
using namespace std;
int minimum_number_of_trips(vector< float > &v)
{
    sort(v.begin(),v.end());

    int left = 0, right = v.size()-1;
    int counter = 0;

    while(left<=right)
    {
        if(v[left]+v[right]<=3.0)
        {
            counter++;
            left++;
            if(left<right && v[left-1]+v[left]+v[right]<=3.0)
                left++;
            right--;
        }
        else
        {
            counter++;
            right--;
        }
    }
    return counter;
}
int main()
{

    int n; cin >> n;
    vector< float > v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    cout << minimum_number_of_trips(v) << endl;
    return 0;
}
