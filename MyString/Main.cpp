#include "MyString.h"

int main() 
{

    MyString str1;
    cout << "Default Constructor: ";
    str1.operator<<(cout);
    cout << endl;

    MyString str2(10);
    cout << "Constructor with size 10: ";
    str2.operator<<(cout);
    cout << endl;

    MyString str3;
    cout << "Enter a string for Constructor with user input: ";
    str3.operator>>(cin);
    cout << "User input: ";
    str3.operator<<(cout);
    cout << endl;

    MyString str4("Hello");
    MyString str5(" World");

    MyString str6;
    str6.MyStrcpy(str4);
    cout << "Copied String: ";
    str6.operator<<(cout);
    cout << endl;

    cout << "Substring 'lo' found in str4: " << boolalpha << str4.MyStrStr("lo") << endl;

    cout << "Index of 'e' in str4: " << str4.MyChr('e') << endl;

    cout << "Length of str4: " << str4.MyStrLen() << endl;

    str4.MyStrCat(str5);
    cout << "Concatenated String: ";
    str4.operator<<(cout);
    cout << endl;

    str4.MyDelChr('o');
    cout << "String after deleting 'o': ";
    str4.operator<<(cout);
    cout << endl;

    MyString str7("Hello");
    MyString str8("World");
    cout << "Comparison Result: " << str7.MyStrCmp(str8) << endl;

    cout << "Number of MyString objects: " << MyString::getObjectCount() << endl;

    MyString str9("Hello");
    MyString str10(" World");

    str9[1] = 'a';
    cout << "After using operator[]: ";
    str9.operator<<(cout);
    cout << endl;

    str9("New String");
    cout << "After using method (): "; 
    str9.operator<<(cout);
    cout << endl;

    MyString result1 = str9 + 'A';
    cout << "Result of obj + 'A': ";
    result1.operator<<(cout);
    cout << endl;

    MyString result2 = 'A' + str9;
    cout << "Result of 'A' + obj: ";
    result2.operator<<(cout);
    cout << endl;

    MyString result3 = 10 + str9;
    cout << "Result of 10 + obj: ";
    result3.operator<<(cout);
    cout << endl;

    MyString result4 = str9 + 10;
    cout << "Result of obj + 10: ";
    result4.operator<<(cout); 
    cout << endl;

    //MyString result5 = ++str9;
    //cout << "Result of obj++: " << result5 << endl;

    //MyString result6 = ++str9;
    //cout << "Result of ++obj: " << result6 << endl;

    MyString str11; 
    str11 = str9; 
    cout << "Copy using operator=: ";
    str10.operator<<(cout);

    return 0;
}
