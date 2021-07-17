/* Author : Chaitaly Kundu
   Date : 17-07-2021*/

/* Question Title : Print squares of first n natural numbers without using *, / and –
    1, 1+3, 1+3+5,..........
 */


#include<iostream>

using namespace std;

int main(){

    int n;
    cout << "Enter the number of terms : ";
    cin >> n;

    int sum =0, previous_number=0;
    for(int i=1;i<=n;i++)
    {
        sum = sum + i + previous_number;
        cout << "Sum of 1st " << i << " number is " << sum << endl;
        previous_number = i;
    }

    return 0;
}