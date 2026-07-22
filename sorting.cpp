//These are the few sorting algorithms i have benn working on GIT
//HI this is MOHIT

#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &nums, int n)
{
    for(int j=1; j<n; j++)
    {
        int i = j - 1;
        int key = nums[j];

        while(i>=0 && key<=nums[i])
        {
            nums[i+1] = nums[i];
            i--;
        }
        nums[i+1] = key;
    }

    cout << "The sorted array is: " << endl;    
    for(int i=0; i<n; i++)
    {
        cout << nums[i] << " "; 
    }

    return;
}
// 4 3 6 7 9 
void bubbleSort(vector<int> &nums, int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(nums[j]>nums[j+1])
            {
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }

    cout << "The sorted array is: " << endl;    
    for(int i=0; i<n; i++)
    {
        cout << nums[i] << " "; 
    }

    return;
}

int main()
{
    int n;
    cout << "Enter the number of entries: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Give entries for the array: " << endl;
    for(int i=0; i<n; i++) cin >> nums[i];;
    
    bubbleSort(nums, n);
    return 0;
}