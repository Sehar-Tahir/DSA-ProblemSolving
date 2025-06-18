// Lec #06 - Pattern Printing

#include <iostream>
using namespace std;
int main(){
	
//1. print * 5 times
for(int i=1; i<=5; i++){
	cout<<"*"<<" ";
}
/* ***** */

cout<<endl;
cout<<endl;

//2. print pattren by nested loops
for(int j=1; j<=5; j++){
	for(int i=1; i<=5; i++){
	cout<<"*"<<" ";
    }
    cout<<endl;
}
/*
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
*/
cout<<endl;
cout<<endl;

//3. print 10 pattern 
for(int j=1; j<=5; j++){
	for(int i=1; i<=5; i++){
	cout<<"10 ";
    }
    cout<<endl;
}
/*
10 10 10 10 10
10 10 10 10 10
10 10 10 10 10
10 10 10 10 10
10 10 10 10 10
*/

cout<<endl;
cout<<endl;

//4. print pattern 1-5 (12345)
for(int j=1; j<=5; j++){
	for(int i=1; i<=5; i++){
	cout<<i<<" ";             //print hoga i kueky ye iterate ho rha hai hr row main
    }
    cout<<endl;
}
/*
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
*/

cout<<endl;
cout<<endl;

//5. print patten 1-5 (11111)
for(int j=1; j<=5; j++){
	for(int i=1; i<=5; i++){
	cout<<j<<" ";              //print hoga j kueky hr row ka num hi 5 times print krna hai
    }
    cout<<endl;
}
/*
1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5
*/

cout<<endl;
cout<<endl;

//6. print patten 5-1 (54321)
for(int j=1; j<=5; j++){
	for(int i=5; i>=1; i--){     //reverse num ky liya --
	cout<<i<<" ";
    }
    cout<<endl;
}
/*
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
*/

cout<<endl;
cout<<endl;

//7. print patten 5-1 (55555)
for(int j=5; j>=1; j--){          // reverse row num ky liya --
	for(int i=1; i<=5; i++){
	cout<<j<<" ";
    }
    cout<<endl;
}
/*
5 5 5 5 5
4 4 4 4 4
3 3 3 3 3
2 2 2 2 2 
1 1 1 1 1
*/

cout<<endl;
cout<<endl;

//9. print pattren square of num (1,4,9,16,25)
int n = 5;
for(int j=1; j<=5; j++){
	for(int i=1; i<=n; i++){  // n means kon sy num tk ka sq nikalna hai
	cout<<i*i<<" ";           // is sy sq aye ga hr num ka
    }
    cout<<endl;
}
/*
1 4 9 16 25
1 4 9 16 25
1 4 9 16 25
1 4 9 16 25
1 4 9 16 25
*/

cout<<endl;
cout<<endl;

//10. print alphabet pattern (aaaaa)
for(char j='a'; j<='e'; j++){             // char datatype taky easily char print hon
//	char name = 'a'+ j-1;                 // variable to create char using int values (ASCII)
	for(int i=1; i<=5; i++){
//	cout<<name<<" ";                      // print variable
	cout<<j<<" ";                         // print row char
    }
    cout<<endl;
}
/*
a a a a a
b b b b b 
c c c c c
d d d d d
e e e e e
*/

cout<<endl;
cout<<endl;

//11. print alphabet pattern (abcde)
for(int j=1; j<=5; j++){
	for(char c='a'; c<='e'; c++){          // char datatype taky easily char print hon
	cout<<c<<" ";                          //  print char
    }
    cout<<endl;
}
/*
a b c d e
a b c d e
a b c d e
a b c d e
a b c d e
*/
cout<<endl;
cout<<endl;

//12. print number box pattern
int count = 1;                     //count variable 1 sy start hoga
for(int j=1; j<=5; j++){
	for(int i=1; i<=5; i++){
	cout<< count <<" ";            //print count
    count++;                      //count increase hota rahy ga 
	}
	cout<<endl;
}
/*
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
*/
}



