#include <iostream>
using namespace std;
int partition(int arr[], int s, int e)
{
    int pivotele=arr[s];
    int pivot=s;
    int count=0;
    int i;
    for(i=s+1;i<=e;i++)
    {
        if(arr[i]<pivotele)
        {
            count++;
        }
    }
    int rindex=s+count;
    swap(arr[pivot],arr[rindex]);
    pivot=rindex;
    //check if all elements to rthe right are greater than pivot
    // and the elements to the left are smaller than pivot, if opp
    // then swap the elements on these postions with oneself
    i=s;
    int j=e;
    while(i<pivot && j>pivot)
    {
        while(arr[i]<=pivotele)
            i++;
        while(arr[j]>pivotele)
            j--;
        //ab 2 cases ho sakte phela ki 
        //swapping elements present hai and unko swap kardigiye
        //koi swapping elements present ni unko aese hye chodd digiye
        if(i<pivot && j>pivot)
        {
            swap(arr[i],arr[j]);
        }
    }
    return pivot;
}
void quicksort(int arr[], int s, int e)
{
    if(s>e)
    {
        return;
    }
    int pivot=partition(arr,s,e);
    quicksort(arr,s,pivot-1);
    quicksort(arr,pivot+1,e);
}
int main()
{
    // int arr[]={8,1,3,4,30,50,20};
    // int arr[]={5,1,5};
    int arr[]={6,40,3,2,2};
    int n=5;
    int s=0;
    int e=n-1;
    quicksort(arr,s,e);
    while(s<=e)
    {
        cout<<arr[s]<<endl;
        s++;
    }
}