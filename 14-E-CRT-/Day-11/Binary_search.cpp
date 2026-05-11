#include <iostream>
using namespace std;

int Binary_Search(int nums[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int ans = Binary_Search(arr, size, 4);
    cout << "Element found at index: " << ans << endl;

    return 0;
}