#include <iostream>
#include <vector>

using namespace std; 

//Function that returns the total number of refills made to reach the destination of N km

int MinRefills( int n, int milesAway, vector<int> Stops, int fulltank) { 
    int numRefills = 0;
    int currentRefill = 0;
    int lastRefill = 0;
    
    if ((Stops[currentRefill] + fulltank) >= milesAway) {
        return numRefills;
    }
   while (currentRefill < n) {
        lastRefill = currentRefill; 
        while ( ( currentRefill < n ) && ( (Stops[currentRefill + 1] - Stops[lastRefill]) <= fulltank ) )
        {
            currentRefill = currentRefill + 1;
        }
        
        if (currentRefill == lastRefill)
        {
            return -1;
        }
        numRefills = numRefills + 1;
        
        if ((Stops[currentRefill] + fulltank) >= milesAway)
        {
            return numRefills;
        }
    }
    return -1; 
}	

int main() {
    int milesAway, fulltank, n, stopValue; 
    vector<int> Stops;
    cin >> milesAway;
    cin >> fulltank; 
    cin >> n; 
    Stops.push_back(0);
    if (n == 4) {
        int stop1, stop2, stop3, stop4;
        cin >> stop1 >> stop2 >> stop3 >> stop4;
        Stops.push_back(stop1);
        Stops.push_back(stop2);
        Stops.push_back(stop3);
        Stops.push_back(stop4); 
    }
    else { 
       for ( int i = 0; i < n; i++) {
         cin >> stopValue; 
         Stops.push_back(stopValue);
         //cout << Stops.size();
       }
    }
    cout << MinRefills(n, milesAway, Stops, fulltank);
    return 0;
}