#include "MyString.h"

int main() 
{

    MyString str1;
    cout << "Default Constructor: " << str1 << endl;

    MyString str2(10);
    cout << "Constructor with size 10: " << str2 << endl;

    MyString str3;
    cout << "Enter a string for Constructor with user input: ";
    cin >> str3;
    cout << "User input: " << str3 << endl;

    MyString str4("Hello");
    MyString str5(" World");

    MyString str6;
    str6.MyStrcpy(str4);
    cout << "Copied String: " << str6 << endl;

    cout << "Substring 'lo' found in str4: " << boolalpha << str4.MyStrStr("lo") << endl;

    cout << "Index of 'e' in str4: " << str4.MyChr('e') << endl;

    cout << "Length of str4: " << str4.MyStrLen() << endl;

    str4.MyStrCat(str5);
    cout << "Concatenated String: " << str4 << endl;

    str4.MyDelChr('o');
    cout << "String after deleting 'o': " << str4 << endl;

    MyString str7("Hello");
    MyString str8("World");
    cout << "Comparison Result: " << str7.MyStrCmp(str8) << endl;

    cout << "Number of MyString objects: " << MyString::getObjectCount() << endl;

    MyString str9("Hello");
    MyString str10(" World");

    str9[1] = 'a';
    cout << "After using operator[]: " << str9 << endl;

    str9("New String");
    cout << "After using method (): " << str9 << endl;

    MyString result1 = str9 + 'A';
    cout << "Result of obj + 'A': " << result1 << endl;

    MyString result2 = 'A' + str9;
    cout << "Result of 'A' + obj: " << result2 << endl;

    MyString result3 = 10 + str9;
    cout << "Result of 10 + obj: " << result3 << endl;

    MyString result4 = str9 + 10;
    cout << "Result of obj + 10: " << result4 << endl;

    //MyString result5 = ++str9;
    //cout << "Result of obj++: " << result5 << endl;

    //MyString result6 = ++str9;
    //cout << "Result of ++obj: " << result6 << endl;

    return 0;
}
