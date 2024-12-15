#include <bits/stdc++.h>
using namespace std;

// slow code
// Helps 
// understand everythings - how things is happening
// less time to debug the code
// clean code
// clean variable name,function name
// how to improve the codebase!


class Solution 
{
    private:
    bool isPossibleToAllocate(int arr[], int numberOfStudent, int capacityToRead,int N){
        int student = 1;
        int sum = 0;
        
        for(int i = 0; i<N; i++){
            // capacity se zada ho jayega 
            // then create secondSTudent, allocating start with student-2
              if(sum + arr[i] > capacityToRead){
                student = student + 1;
                sum = arr[i];
            }else{
                // allocate the books to student if capacity se zada nahi gaya hai toh
                sum = sum + arr[i];
            }
        }
        
        // if you are able to allocate all pages to given student
        // it is possible to allocate all pages with student 
        if(student <= numberOfStudent ) return true;
        
        // otherwise not possible to allocate the books
        return false;
    }
    public:
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        
        // EDGE CASE - number of student greater than to array elements
        if(M > N){
            return -1;
        }
        
        //code here
        int maxiElement = INT_MIN;
        int TotalSum = 0;
        
        for(int i = 0; i<N; i++){
            maxiElement = max(maxiElement,A[i]);
            TotalSum += A[i];
        }
        
        //code here
        int start = maxiElement;
        int end = TotalSum;
        
        
        int result = -1;
        int mid = start + (end - start)/2;
        while(start <= end){
            if(isPossibleToAllocate(A,M,mid,N) == true){
                result = mid;
                end = mid - 1;
            }else{
                start = mid + 1;
            }
            mid = start + (end - start)/2;
        }
        return result;
    }
};

