//Checking whether the string is palindrome or not,The given string is palindrome if the string remains same after the riversing it


#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter a string to check whether it is palindrome or not :"<<endl;
    cin>>str;
    string str1;
    str1 =str;
    cout<<"the original string is "<<str<<endl;
    int i=0;
    int j= str1.length()-1;
    while(i<j)//Reversing the string 
    {
        swap(str1[i],str1[j]);
        i++;
        j--;
    }

    if (str1==str)//we are checking the string if it is equal or not after reversings
    cout<<"The string is palindrome"<<endl;
    else
    cout<<"Not palindrome";


    return 0;
}
