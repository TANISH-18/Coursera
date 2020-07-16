#include <iostream>

int get_change(int m) {
  //write your code here
   int coins[3]={1,3,4};
   if(m==0)
    return 0;
   int mincoin=999999;
   int numcoin;
   for(int i=0;i<3;i++)
   {
	   if(m>=coins[i])
	   {
		    numcoin=get_change(m-coins[i]);
	   }
       if(numcoin+1<mincoin)
       {
         mincoin=numcoin+1;
       }
   }
  return mincoin;   
   
  
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
