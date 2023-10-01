/*
Given two sorted arrays, the task is to merge them in a sorted manner.
Input: arr1[] = { 1, 3, 4, 5}, arr2[] = {2, 4, 6, 8}
Output: arr3[] = {1, 2, 3, 4, 4, 5, 6, 8}

Input: arr1[] = { 5, 8, 9}, arr2[] = {4, 7, 8}
Output: arr3[] = {4, 5, 7, 8, 8, 9}
*/

#include <iostream>
#include <vector>

int main()
{
    int arr1[] = {1, 3, 4, 5};
    int arr2[] = {2, 4, 6, 8};

    // int arr1[] = {5,8,9};
    // int arr2[] = {2, 4, 6, 8};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    std ::vector<int> arr3;

// Time Complexity: O(n)    ,   Space Complexity: O(arr3.size() )
    int i = 0, j = 0;

    while (i < size1 && j < size2)
    {
        if (arr1[i] <= arr2[j])
        {

            arr3.push_back(arr1[i]);
            i++;
        }
        else
        {
            arr3.push_back(arr2[j]);
            j++;
        }
    }
    if (i == size1)
    {
        while (j < size2)
        {
            arr3.push_back(arr2[j++]);
        }
    }
    if (j == size2)
    {
        while (i < size1)
        {
            arr3.push_back(arr1[i++]);
        }
    }

    arr3.shrink_to_fit();
    std ::cout << "Merged Array is:\n ";
    for (int i = 0; i < arr3.size(); i++)
    {
        std ::cout << arr3[i] << " ";
    }
}
