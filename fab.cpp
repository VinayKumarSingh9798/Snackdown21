/*  C++ Program to Generate Fibonacci Series for N numbers  */

#include<iostream>
using namespace std;

int main()
{
    int i,no, first=0, second=1, next;

    first=0;
    second=1;

    cout<<"How many terms u want to Display :: ";
    cin>>no;

    cout<<"\nThe Fibonacci series for [ "<<no<<" ] terms are :: \n\n";
    for(i=0; i<no; i++)
    {
        cout<<" "<<first<<" ";
        next = first + second;
        first = second;
        second = next;
    }

    cout<<"\n";

    return 0;
}
Output : :
/*  C++ Program to Generate Fibonacci Series for N numbers  */

How many terms u want to Display :: 8

The Fibonacci series for [ 8 ] terms are ::

 0  1  1  2  3  5  8  13

Process returned 0
Above is the source code for C++ Program to Generate FibonacciSeries for N numbers which is successfully compiled and run on Windows System.The Output of the program is shown above .

If you found any error or any queries related to the above program or any questions or reviews , you wanna to ask from us ,you may Contact Us through our contact Page or you can also comment below in the comment section.We will try our best to reach up to you in short interval.


Thanks for reading the post….

4.8
Article Rating
Related posts:
Write a C++ program to find Square Root of a Number
C++ program to Check whether a number is palindrome or not
C++ program to Find Largest of three numbers using nested if


Category: Basic Programs C++ Programming Number Programs Tags: c++ number
Post navigation← C++ Program to Find the Number of Digits in a numberC++ Program to Check whether a Number is Armstrong or not →
 Subscribe 
guest


{}[+]
0 COMMENTS

Search for:
 

Recent Posts

Learn Java: An Easy And In-Demand Programming Language
Is hotspot free with unlimited data?
What is USB tethering?
Which is better USB tethering or Mobile hotspot?
How to share internet from mobile to PC without hotspot?
Recent Comments

// Hunter on Write a C++ Program to Display Number (Entered by the User)
// dev on C Program to convert decimal number to Binary, Octal or Hexadecimal
// sujan subedi on Write a C Program to find out the sum of first n numbers
// PRINCESS BULAWAN on Write a C++ Program to Convert Days Into Years Weeks and Days
// WAHID ALI on C++ program to Find Sum of n Natural Numbers using Recursion

// Copyright © 2016-2020 CodezClub.com All Rights Reserved.About Contact SiteMapPrivacy Policy Terms&Conditions
// Iconic One Theme | Powered by Wordpress
