#include <iostream>
#include<cmath>
using namespace std;

class Time {
    int hours, minutes, seconds;

public:
    // Function to initialize time
    void setTime(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
    }

    // Function to display time in HH:MM:SS
    void display() {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }

    // Function to add two time objects
    void addTime(Time t1, Time t2) {
        seconds = t1.seconds + t2.seconds;
        minutes = t1.minutes + t2.minutes;
        hours = t1.hours + t2.hours;

        if (seconds >= 60) {
            seconds -= 60;
            minutes++;
        }

        if (minutes >= 60) {
            minutes -= 60;
            hours++;
        }
    }

    // Function to subtract two time objects
    void subtractTime(Time t1, Time t2) {
        int total1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
        int total2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
        int diff = abs(total1 - total2);

        hours = diff / 3600;
        diff %= 3600;
        minutes = diff / 60;
        seconds = diff % 60;
    }
};

// Main function
int main() {
    Time t1, t2, sum, diff;

    t1.setTime(2, 45, 50);
    t2.setTime(1, 30, 20);

    cout << "Time 1: ";
    t1.display();

    cout << "Time 2: ";
    t2.display();

    sum.addTime(t1, t2);
    cout << "Sum of Time: ";
    sum.display();

    diff.subtractTime(t1, t2);
    cout << "Difference of Time: ";
    diff.display();

    return 0;
}

