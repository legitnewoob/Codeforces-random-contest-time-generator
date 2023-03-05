#include <bits/stdc++.h>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{ 
    srand(time(0));
    int hour = rand()%24;
    string p , k;
    if(hour < 10) p = "0" + to_string(hour);
    else p = to_string(hour);
    int minute = rand()%60;
    if(minute < 10) k = "0" + to_string(minute);
    else k = to_string(minute);
    cout << "CONTEST TIME - " << p << ":" << k << " ";
    cout << (hour >= 12 ? "PM" : "AM");

}