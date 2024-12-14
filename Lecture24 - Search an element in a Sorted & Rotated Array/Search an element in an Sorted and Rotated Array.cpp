

class Solution{
   public:
   int getPivot(int arr[], int l, int h)
    {
        int s = l;
        int e = h;
        int mid = s + (e - s) / 2;
        while(s < e)
        {
            if(arr[mid] >= arr[0])
                s = mid + 1;
            else
                e = mid;
            mid = s + (e - s) / 2;
        }
        return s;
    }
    int binarySearch(int arr[], int l, int h, int key)
    {
        int start = l;
        int end = h;
        int mid = start + (end - start) / 2;
        while(start <= end)
        {
            if(arr[mid] == key)
                return mid;
            else if(arr[mid] < key)
                start = mid + 1;
            else
                end = mid - 1;
            mid = start + (end - start) / 2;
        }
        return -1;
    }
    int search(int A[], int l, int h, int key){
        // l: The starting index
        // h: The ending index, you have to search the key in this range
        
        //complete the function here
        int pivot = getPivot(A, l, h);
        
        // apply binarySearch Function into the first half of the sorted array 
        if((key >= A[pivot]) && (key <= A[h]))
            return binarySearch(A, pivot, h, key);
        else
        // apply into the second half of the array 
            return binarySearch(A, l, pivot - 1, key);
    }
};