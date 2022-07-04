#include <bits/stdc++.h>
using namespace std;

int abs(int a, int b) {
    return a > b ? a - b : b -a;
}

int main()
{
    vector<int> nums;
    int len;
    int sum = 0;

    cin>>len;

    for(int i = 0; i < len; i++) {
        int k;
        cin>>k;
        nums.push_back(k);
    }

    sort(nums.begin(), nums.end());

    int med = nums[len / 2];

    for(int i = 0; i < len; i++) sum += abs(med, nums[i]);

    cout<<sum<<endl;
    return 0;
}
