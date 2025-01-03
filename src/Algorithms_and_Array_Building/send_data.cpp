#include <vector>
#include <iostream>
#include <fstream>

void send_data(std::fstream& file , std::vector<int>& arr)
{
    for(int i = 0;i<arr.size();i++)
    {
        file << arr[i] <<",";
    }
    file.close();
}


int main()
{
    std::fstream file("./Graph_Generation/data.csv",std::ios::out);
    std::vector<int> arr = {1, 5, 3, 2, 4};
    send_data(file,arr);
}


