#include<bits/stdc++.h>
using namespace std;

int firstUniqueEven(vector<int>& nums) {
    unordered_map<int, int> freq;

    for(int num : nums) freq[num]++;

    for(int num : nums) if(num % 2 == 0 && freq[num] == 1) return num;
    return -1;
}

int main(){
    cout << "Enter the number of elements in arr: ";
    int n;
    cin >> n;
    cout << "Enter the elements one by one with a space: ";

    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> n;

    cout << "\n" << firstUniqueEven(nums);
    return 0;
}