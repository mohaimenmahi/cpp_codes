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

    if(len % 2) {
        int med = nums[len / 2];

        for(int i = 0; i < len; i++) sum += abs(med, nums[i]);
    } else {
        int med_1 = nums[len / 2];
        int med_2 = nums[(len / 2) + 1];

        int sum_1 = 0;
        int sum_2 = 0;

        for(int i = 0; i < len; i++) sum_1 += abs(med_1, nums[i]);
        for(int i = 0; i < len; i++) sum_2 += abs(med_2, nums[i]);

        sum += sum_1 > sum_2 ? sum_2 : sum_1;
    }

    cout<<sum<<endl;
    return 0;
}
