#include <iostream>
using namespace std;

class Solution{
    public:

    int Linear_Search(int nums[], int n, int target){
     for (int i = 0; i < n; i++)
    {
        if (nums[i] == target)
        {
            return i;
        }
    }
    return -1; // Element not found
}
};



int main() //Driver code
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    Solution s1;
    int ans = s1.Linear_Search(arr, size, 3);
    cout << "Element found at index: " << ans << endl;

    return 0;
}