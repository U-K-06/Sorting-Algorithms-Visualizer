#include <vector>

#include "Algorithms.h"

void Algorithms::bubble_sort(std::vector<int>& arr)
{
    bool swapped = false;
    for(int i = 0; i<arr.size(); i++){
        for(int j = 0; j<arr.size()-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = true;
                
            }
        }
        if(!swapped){
            break;
        }
    }

}

void Algorithms::insertion_sort(std::vector<int>& arr)
{
    for(int i  = 1;i<arr.size();i++)
    {
        int compared = arr[i];
        int j = i-1;

        while (j>=0 && compared < arr[j])
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = compared;
    }
    }

void Algorithms::selection_sort(std::vector<int>& arr)
{
    for(int i = 0;i<arr.size()-1;i++)
    {
        int cur_min = i;
        for(int j = i+1;j<arr.size();j++)
        {
            if (arr[j]<arr[cur_min])
            {
                cur_min = j; 
            }
        }
        std::swap(arr[i],arr[cur_min]);
    }
}

void Algorithms::merge(std::vector<int>& arr, int left, int mid, int right)
{
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::vector<int> leftVec(n1), rightVec(n2);

    for (i = 0; i < n1; i++)
        leftVec[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        rightVec[j] = arr[mid + 1 + j];

    i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (leftVec[i] <= rightVec[j]) {
            arr[k] = leftVec[i];
            i++;
        } else {
            arr[k] = rightVec[j];
            j++;
        }
        k++;
    }
    
    while (i < n1) {
        arr[k] = leftVec[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = rightVec[j];
        j++;
        k++;
    }
}

void Algorithms::merge_sort(std::vector<int>& arr, int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;

        merge_sort(arr, left, mid);
        merge_sort(arr, mid + 1, right);
        
        merge(arr, left, mid, right);
    }
}

int Algorithms::swap(int& a, int& b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

int Algorithms::partition(std::vector<int>& arr, int low, int high)
{
    int pivot = arr[high];
    int i = (low -1);

    for (int j = low; j <= high; j++)
    {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);

    return i + 1;
}

void Algorithms::quick_sort(std::vector<int>& arr, int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);

        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}