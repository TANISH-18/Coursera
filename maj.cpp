#include <bits/stdc++.h> 
using namespace std; 
  
void findMajority(long long arr[], long long size) 
{ 
    unordered_map<long long, long long> m; 
    for(int i = 0; i < size; i++) 
        m[arr[i]]++; 
    int count = 0; 
    for(auto i : m) 
    { 
        if(i.second > size / 2) 
        { 
            count =1; 
            cout<<1<<endl;
            break; 
        } 
    } 
    if(count == 0) 
        cout <<0<< endl; 
} 
  
// Driver code  
int main()  
{  
     long long n;
	 cin>>n;
     long long arr[n];
	 for(int i=0;i<n;i++)
	 {
		 cin>>arr[i];
	 }	 
    // Function calling  
    findMajority(arr, n);  
  
    return 0;  
}  