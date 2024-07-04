#include <bits/stdc++.h>
using namespace std;


void largestElement(int arr[], int n) 
{
    // Write your code here.
    int larg= arr[0];
    int i ;
    for(i=0; i<n; i++)
    {
        if(arr[i]> larg)
        {
            larg = arr[i];
        }
    }
    // return larg;
    cout<< larg<< endl;
}

void second_largest(int arr[], int n)
{
    int lrg1 = arr[0];

    for(int i=0; i<n; i++)
    {
        if(arr[i]>lrg1)
        {
            lrg1 = arr[i];
        }
    }
    cout << lrg1<< endl;

    int lrg2 = arr[1];
    for(int i=0; i<n; i++)
    {
        if(arr[i]>lrg2 && arr[i] !=lrg1 )
        {
            lrg2 = arr[i];
        }
    }
    cout << lrg2<< endl;
    
}

void smallest(int arr[], int n)
{
    int smal= arr[0];
    int i ;
    for(i=0; i<n; i++)
    {
        if(arr[i]< smal)
        {
            smal = arr[i];
        }
    }
    
    cout<< smal<< endl;
}
// optimal code 
int secondSmallest(int arr[],int n)
{
    if(n<2)
        return -1;
    int small = INT_MAX;
    int second_small = INT_MAX;
    int i;
    for(i = 0; i < n; i++) 
    {
       if(arr[i] < small)
       {
          second_small = small;
          small = arr[i];
       }
       else if(arr[i] < second_small && arr[i] != small)
       {
          second_small = arr[i];
       }
    }
   return second_small;     
}
int secondLargest(int arr[],int n)
{
	if(n<2)
	return -1;
    int large=INT_MIN,second_large=INT_MIN;
    int i;
    for (i = 0; i < n; i++) 
    {
        if (arr[i] > large) 
        {
            second_large = large;
            large = arr[i];
        }
        else if (arr[i] > second_large && arr[i] != large) 
        {
            second_large = arr[i];
        }
    }
    return second_large;                
}
// remove duplicate from a sorted array and tell its size
void remove_duplicate(int arr[], int n)
{
    int i=0;
    for(int j=1; j<n; j++){
        if(arr[j]!=arr[i]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    cout<< (i+1);
}

// sorted arry te find duplicate
int findDuplicate(int arr[], int n){
	// Write your code here.
	
    for(int i=0; i<n; i++){
        if(arr[i]==arr[1+i]){
            return arr[i];
        }
    }
    return 0;
}

// index 0 er element ke last index e nite hobe
int left_rotateArray(int arr[], int n)
{
    int temp = arr[0];
    for(int i =1; i<n; i++)
    {
        arr[i-1]= arr[i];
    }
    arr[n-1]= temp;
    return 0;
}

// D will be given as a index number , we have to send those elements
// which are before the index, in the right
// brute force 
int rotateArray(int arr[], int n)
{
   int d,i;
   int temp[n];
   cout <<" d: ";
   cin >> d;
   d = d%n;
   for(i=0; i<d; i++ )
   {
        temp[i]= arr[i];
   }
   for(i=d; i<n; i++)
   {
        arr[i-d]= arr[i];
   }
   for(i=n-d; i<n; i++)
   {
        arr[i]= temp[i-(n-d)];
   }
}

// optimal solution
int rotate_array(int arr[], int n)
{
    int d;
    cout <<" d: ";
    cin >> d;
    d = d%n;
    reverse(arr, arr+d);
    reverse(arr+d, arr+n);
    reverse(arr, arr+n);
}





int main()
{
    int arr[]={1,2,3,6,7,9,8,7,5,6};  
    int len = 5;
    rotate_array(arr, len);
    
    
    return 0;
}
