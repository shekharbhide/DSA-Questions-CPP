#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int s,int e){
    int mid = (s+e)/2;
    int len1 = mid - s+1;
    int len2 = e - mid;
    
    //array creation
    int* left = new int[len1];
    int* right = new int[len2];

    //copyt the values in aray
    //in left array
    int k = s;
    for(int i=0;i<len1;i++){
        left[i] = arr[k];
        k++;
    }
    
    //in right arraay
    k = mid + 1;
    for(int i=0;i<len2;i++){
        right[i] = arr[k];
        k++;
    }

    // MERGE LOGIC
    //now we've three arrays 1.left ,2.right & 3.main wala array
    int leftKaIndex = 0;
    int rightKaIndex = 0;
    int mainArrayKaIndex = s;

    while(leftKaIndex < len1 &&  rightKaIndex < len2){
        if(left[leftKaIndex] < right[rightKaIndex]){
            arr[mainArrayKaIndex++] = left[leftKaIndex++];
        }
        else{
            arr[mainArrayKaIndex++] = right[rightKaIndex++];
        }
    }

    //copy the remaining elemnts into the main array
    while(leftKaIndex < len1){
        arr[mainArrayKaIndex++] = left[leftKaIndex++];
    }

    while(rightKaIndex < len2){
        arr[mainArrayKaIndex++] = right[rightKaIndex++];
    }

}
void mergeSort(int arr[],int s,int e)
{
    // Base case 
    // 1.When only one elment remain in array s==e
    // 2.When array is invalid i.e s > e
    if(s >= e){
        return;
    }

    // divide the array i.e break
    int mid = (s+e)/2;

    // sort the left part of array
    mergeSort(arr,s,mid);

    //sort the right part of array
    mergeSort(arr,mid+1,e);

    //merge the two arrays
    merge(arr,s,e);
}

git init
git add -A
git commit -m "first commit"
git branch -M main
git remote add origin https://github.com/shekharbhide/DSA-Questions-C-.git
git push -u origin main

int main()
{
    int n; cin >> n;
    int arr[20];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }


    int s = 0;
    int e = n-1;

    mergeSort(arr,s,e);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}