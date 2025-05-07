#include <bits/stdc++.h>
using namespace std;
class Time {
    
    public:
    int Hour,minute,second;
    Time(int H,int m,int s) {
        Hour = H;
        minute = m;
        second = s;
    }
    Time() {} 
}; 
    Time diff(Time Time1,Time Time2) {
        Time Time3;
        Time3.Hour = abs(Time1.Hour - Time2.Hour);
        Time3.minute = abs(Time1.minute - Time2.minute);
        Time3.second = abs(Time1.second - Time2.second);
        return Time3;
    }

int main() {
    Time time1(23,30,55);
    Time time2(5,20,35);
    Time time3 = diff(time2,time1);
    cout << time3.Hour << endl;
    cout << time3.minute << endl;
    cout << time3.second << endl;
    return 0;
}