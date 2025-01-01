#include <iostream>
#include <vector>

void bubble_sort(std::vector<int>& arr)
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

std::vector<int> a = {99,423,20,-10,35,0,-1,3,-120,55,32};

int main()
{
    bubble_sort(a);
    for(int i = 0; i<a.size(); i++){
        std::cout<<a[i]<<" ";
    }
    return 0;
}