#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int s,int e){
    //step 1 : choose pivot
    int pivotIndex = s;
    int pivot = arr[s];
    
    //step 2: find the correct position of pivot element
    int count = 0;
    for(int i=s+1;i<=e;i++){
        if(arr[i] <= pivot){
            count++;
        }
    }
    //jb me loop s bahar aaya ,toh mere paas pivot ka correct posn ka index he

    //place pivot at its correct position

    swap(arr[pivotIndex],arr[s+count]);
    pivotIndex = s + count; // new pivot index i.e correct posn

    //Step 3 :  check kro 
    //kya pivot ke left wale elements chote he , 
    //kya pivot ke right wale elements bade he
    // Left me chote elemnt & right me bade elemnts
   
    int i = s;
    int j = e;

    while(i < pivotIndex && j > pivotIndex ){

        while(arr[i] <= arr[pivotIndex]){
            i++;
        }
        while(arr[j] > arr[pivotIndex]){
            j--;
        }

        // 2 case ho skte he 
        // 1.Hame elements mil gaye swap krne ke liye ,toh swap kr denge
        // 2.Nahi mile to kuch mt kro - no need to swap
        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i],arr[j]);
        } 
    }

    return pivotIndex;



}
void quickSort(int arr[],int s,int e){
    // Base Case
    if(s >= e){
        return;
    }

    //partition logic
     int pivotIndex = partition(arr,s,e);

    //Recursion
    //  1. LEFt half of pivot
    quickSort(arr,s,pivotIndex-1);

    // 2. Right half of pivot
    quickSort(arr,pivotIndex+1,e);

}
int main()
{
    int n; cin >> n;
    int arr[20];
    //int n = 7;
   for(int i=0;i<n;i++){
        cin >> arr[i];
    } 

    
    int s = 0;
    int e = n-1;
    quickSort(arr,s,e);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}