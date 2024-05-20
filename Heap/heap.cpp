#include<iostream>
#include<queue>
using namespace std;

class heap{
    public: 
    int size;
    int arr[100];
    heap()
    {
        arr[0] = -1;
        size = 0;
    }
    
    // Time Complexity - O(log n)
    void insert(int val)
    {
        size++;
        int index = size;
        arr[index] = val;

        while(index > 1)
        {
            int parent = index/2;

            if(arr[parent] < arr[index])
            {
                swap(arr[parent],arr[index]);
                index = parent;
            }
            else return;
        }
    }
    void print()
    {
        for(int i = 1; i <= size ; i++)
        cout<<arr[i]<<" ";
        cout<<endl;
    }

    // TC - O(log n)
    void deleteFromHeap()
    {
        if(size == 0)
        {
            cout<<"Nothing to delete."<<endl;
            return;
        }

        // step 1: Put last element into first index
        arr[1] = arr[size];
        // Step 2: Delete last element.
        size--;
        
        // Step 3: Taking root element to its correct position
        int i = 1;
        while(i<size)
        {
            int leftIndex = 2*i;
            int rightIndex = 2*i + 1;
            if(leftIndex < size && arr[i] < arr[leftIndex])
            {
                swap(arr[i],arr[leftIndex]);
                i = leftIndex;
            }
            else if(rightIndex < size && arr[i] < arr[rightIndex])
            {
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }
            else 
            return;
        }
    }
};

// Time complexity - O(log n)
void heapify(int arr[], int n , int i)
{
    int largest = i;
    int leftChild = i*2;
    int rightChild = i*2 + 1;

    // we are using less than equal to n because we are using 1 based indexing
    if(leftChild <= n && arr[leftChild] > arr[largest])
    {
        largest = leftChild;
    }
    if(rightChild <= n && arr[rightChild] > arr[largest]) largest = rightChild;

    if(largest != i)
    {
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}

void heapSort(int arr[] , int n)
{
    int size = n;
    while(size > 1)
    {
        // Step 1: swap krdo last ke saath and size km krdo
        swap(arr[size], arr[1]);
        size--;

        // Step 2: jis element ko swap kiya usko uske sahi position pr daal do
        heapify(arr,size, 1);
    }

}

int main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    h.deleteFromHeap();
    h.print();

    int arr[6] = {-1,54,53,55,52,50};
    int n = 5;
    for(int i = n/2 ; i > 0 ; i--)
    {
        heapify(arr,n,i);
    }
    cout<<"After heapify: "<<endl;
    for(int i = 1 ; i <= n ; i++)
    cout<<arr[i]<<" ";
    cout<<endl;

    heapSort(arr,n);

    cout<<"After HeapSort: "<<endl;
    for(int i = 1 ; i <= n ; i++)
    cout<<arr[i]<<" ";
    cout<<endl;

    cout<<"Using Priority Queue: "<<endl;
    priority_queue<int> pq;
    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);

    cout<<"Top element is: "<<pq.top()<<endl;
    pq.pop();
    cout<<"Top element is: "<<pq.top()<<endl;
    cout<<"Size is: "<<pq.size()<<endl;
    if(pq.empty()) cout<<"PQ is not empty"<<endl;
    else cout<<"PQ is not empty."<<endl;

    // min heap
    priority_queue<int,vector<int>,greater<int> > minheap;
    minheap.push(4);
    minheap.push(2);
    minheap.push(5);
    minheap.push(3);

    
    cout<<"Top element is: "<<minheap.top()<<endl;
    minheap.pop();
    cout<<"Top element is: "<<minheap.top()<<endl;
    cout<<"Size is: "<<minheap.size()<<endl;
    if(minheap.empty()) cout<<"Minheap is not empty"<<endl;
    else cout<<"Minheap is not empty."<<endl;




    return 0;
}