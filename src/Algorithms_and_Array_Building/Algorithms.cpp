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

void insertion_sort(std::vector<int>& arr)
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

void selection_sort(std::vector<int>& arr)
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






