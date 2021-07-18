/* Author : Chaitaly Kundu
   Date : 17-07-2021*/

/* Question Title : Check if the number is divisible by 3 or not without directly dividing by 3 */


#include<iostream>

using namespace std;

int main(){

    int n;
    cout << "Enter the number : ";
    cin >> n;

    if( n%3 == 0)
        cout << "Divisible by 3" << endl;
    else
        cout << "Not Divisible by 3" << endl;
    return 0;
}