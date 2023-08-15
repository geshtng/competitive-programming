#include <bits/stdc++.h>
using namespace std;

vector<string> ones = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
vector<string> teens = {"", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
vector<string> tens = {"", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
vector<string> thousands = {"", "thousand", "million", "billion"};

string convertThreeDigits(int num) {
    string result;
    
    if (num >= 100) {
        result += ones[num / 100] + " hundred";
        num %= 100;
        if (num > 0) {
            result += " and ";
        }
    }
    
    if (num >= 11 && num <= 19) {
        result += teens[num - 10];
    } else {
        result += tens[num / 10];
        if (num / 10 > 0 && num % 10 > 0) {
            result += " ";
        }
        result += ones[num % 10];
    }
    
    return result;
}

string convertToWords(int num) {
    if (num == 0) {
        return "zero";
    }
    
    string result;
    int thousandIndex = 0;
    
    while (num > 0) {
        if (num % 1000 != 0) {
            result = convertThreeDigits(num % 1000) + " " + thousands[thousandIndex] + " " + result;
        }
        num /= 1000;
        thousandIndex++;
    }
    
    return result;
}

int main() {
    int num;
    cin >> num;
    cout << convertToWords(num) << endl;
    
    return 0;
}
