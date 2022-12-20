#include <iostream>
#include <vector>

using namespace std;

void showList(vector<int> arr);
void quickSort(vector<int>& arr, int arrSize);

int main()
{
    vector<int> arr = {1,4,2,34,42563,3,2,42,42421,414,25,43636,3};
    int arrSize = arr.size();
    showList(arr);
    quickSort(arr, arrSize);
    showList(arr);
    return 0;
}

void showList(vector<int> arr){
    for(int i:arr){
        cout << i << " ";
    }
    cout << endl;
}
void quickSort(vector<int>& arr, int arrSize){
    int j, temp;
    for(int i=1;i<arrSize;i++){
        j = i-1;
        temp = arr[i];
        while(j>=0 && arr[j]>arr[j+1]){
            arr[j+1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}
