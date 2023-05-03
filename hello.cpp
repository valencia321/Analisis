#include <bits/stdc++.h>
using namespace std;
 
void bitonicGenerator(int arr[], int n)
{
   
    vector<int> evenArr;
    vector<int> oddArr;
 
    for (int i = 0; i < n; i++) {
        if (!(i % 2))
            evenArr.push_back(arr[i]);
        else
            oddArr.push_back(arr[i]);
    }

    sort(evenArr.begin(), evenArr.end());
    sort(oddArr.begin(), oddArr.end(), greater<int>());
 
    int i = 0;
    for (int j = 0; j < evenArr.size(); j++)
        arr[i++] = evenArr[j];
    for (int j = 0; j < oddArr.size(); j++)
        arr[i++] = oddArr[j];
}

int main()
{
    int arr[] = { 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    bitonicGenerator(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}