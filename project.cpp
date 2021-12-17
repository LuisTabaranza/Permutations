#include <bits/stdc++.h> //include every standard library
using namespace std;
 
void permute(string str, int l, int r) // funtion containing our string, 0, 2
{
    if(l == r) //when goal is reached it will print the output
    cout << str << endl;
    else
    {
        for ( int i = l; i <= r; i++) //loop function if the condition here is true
        {
            swap(str[l], str[i]);   //codes used to swap index of a string and
            permute(str, l+1, r);   //another permute to do the recursion and pass the value to void permute
            swap(str[l], str[i]);  
        }
    }
}
 
int main()
{
    string str; //a variable to hold the string

    cout << "\nEnter the Word : ";
    cin >> str; //input a chosen word

    int n = str.size(); //hold the size of a given string
    cout << "\nAll possible strings are : \n";
    permute(str, 0, n-1);   //pass the arugments and call the function
	
    return 0;
}
