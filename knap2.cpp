#include <bits/stdc++.h> 
  
using namespace std; 
 
struct Item 
{ 
    int value, weight; 
   
}; 
  
 
bool cmp(struct Item a, struct Item b) 
{ 
    double r1 = (double)a.value / a.weight; 
    double r2 = (double)b.value / b.weight; 
    return r1 > r2; 
} 
  
double fractionalKnapsack(int W, struct Item arr[], int n) 
{ 
   
    sort(arr, arr + n, cmp); 
  
  
    int curWeight = 0;   
    double finalvalue = 0.0;  
  
   
    for (int i = 0; i < n; i++) 
    { 
      
        if (curWeight + arr[i].weight <= W) 
        { 
            curWeight += arr[i].weight; 
            finalvalue += arr[i].value; 
        } 
  
        
        else
        { 
            int remain = W - curWeight; 
            finalvalue += arr[i].value * ((double) remain / arr[i].weight); 
            break; 
        } 
    } 
  
    return finalvalue; 
} 
  

int main() 
{ 
   
    int W,m;
	cin>>m>>W; 
	
    struct Item arr[m];
	for(int i=0;i<m;i++)
	{
	   cin>>arr[i].value;
	   cin>>arr[i].weight;
	}  
  
    int n = sizeof(arr) / sizeof(arr[0]); 
	std::cout.precision(10);  
    cout << fractionalKnapsack(W, arr, m); 
    return 0; 
} 