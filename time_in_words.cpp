#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string time_to_word(int m){
    const vector<string> numbers = {"xxxx", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
        "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen",
        "eighteen", "nineteen", "twenty", "twenty one", "twenty two", "twenty three", 
        "twenty four", "twenty five", "twenty six", "twenty seven", "twenty eight", 
        "twenty nine", "thirty"};
    if(m < 1 || m > 29){
        cout << "Bad number: " << m << endl;
        return "error in tome_to_word!";
    }    
    return numbers[m];
}

int main(){
    int h;
    cin >> h;
    if(h < 1 || h > 12){
        cout << "Hour format wrong!";
        return -1;
    }
    int m;
    cin >> m;
    string num;
    string hour = time_to_word(h);

    if(m == 0)
        cout << hour << " o' clock";
    else if(m > 0 && m < 15 || m > 15 && m < 30){
        num = time_to_word(m);
        cout << num << " minutes past " << hour;   
    }else if(m == 15)
        cout << "quarter past " << hour;
    else if(m == 30)
        cout << "half past " << hour;
    else if(m > 30){
        string next_hour = (h < 12 ? time_to_word(h+1) : time_to_word(1));
        int temp = 60 - m;
        if(temp == 15)           
            cout << "quarter to " << next_hour;
        else if(temp == 1)
            cout << "one minute to " << next_hour;
        else { 
            num = time_to_word(temp);
            cout << num << " minutes to " << next_hour;    
        } 
    }
    return 0;
}