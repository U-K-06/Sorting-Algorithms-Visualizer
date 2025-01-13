class Algorithms
{	
	void bubble_sort(std::vector<int>& arr);
	void insertion_sort(std::vector<int>& arr);
	void selection_sort(std::vector<int>& arr);
	void merge(std::vector<int>& arr, int left, int mid, int right);
	void merge_sort(std::vector<int>& arr, int left, int right);
	int swap(int& a, int& b);
	int partition(std::vector<int>& arr, int low, int high);
	void quick_sort(std::vector<int>& arr, int low, int high);
};