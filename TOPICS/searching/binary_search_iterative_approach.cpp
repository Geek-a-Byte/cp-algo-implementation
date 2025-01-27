#include <bits/stdc++.h>
using namespace std;

//index return
int binary_search(int arr[], int s, int l, int r)
{
    //s->what I want to search
    int mid;
    static int step = 0;
    while (l <= r)
    {
        mid = (l + r) / 2;
        step++;
        //base case
        if (arr[mid] == s)
        {
            cout << "steps: " << step << endl;
            return mid;
        }
        else if (s < arr[mid])
        {
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    return -1;
}

int main()
{
    int arr[] = {10, 20, 20, 40, 50, 60};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "enter the element you want to search:\n";
    int s;
    cin >> s;
    int result = binary_search(arr, s, 0, size - 1);
    (result == -1) ? cout << "not found\n" : cout << "found at " << result << "\n";
}
/*
Time Complexity : O(log n) 
Auxiliary Space : O(1) 
*/