#include <iostream>
#include <string>
using namespace std;
string version1(const string & s1, const string & s2);
const string & version2(string & s1, const string & s2);
string & version3(string & s1, const string & s2);
int main() {
    string input;
    string copy;
    string result;

    cout << "Enter a string:";
    getline(cin, input);
    copy = input;
    cout << "your string as entered:" << input << endl;
    result = version1(input, "***");
    cout << "your string enhanced:" << result << endl;
    cout << "your original string:" << input << endl;

    //reset input
    input = copy;
    result = version2(input, "###");
    cout << "your string enhanced: " << result << endl;
    cout << "your original string :" << input << endl;

    //reset input
    input = copy;
    result = version3(input, "@@@");
    cout << "your string enhanced: " << result << endl;
    cout << "your original string :" << input << endl;

    return 0;
}
// 临时值返回
string version1(const string & s1, const string & s2){
    string temp;
    temp = s2 + s1 + s2;
    return temp;
}
// 引用返回
const string & version2(string & s1, const string & s2){
    s1 = s2 + s1 +s2;
    return s1;
}

// 不推荐的临时变量返回给const引用
string & version3(string & s1, const string & s2){
    string temp;
    temp = s2 + s1 + s2;
    return temp;
}