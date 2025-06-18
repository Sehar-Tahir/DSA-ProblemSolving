// Lec #07 - Pattern Printing

#include <iostream>
using namespace std;
int main(){
	
//1.
// * ko outer(row) num tk print krna hai is liya i<=j hoga.
for(int j=1; j<=5; j++){
	for(int i=1; i<=j; i++){
	cout<<"*"<< " ";
	}
	cout<<endl;
}
/*
*
* *
* * *
* * * *
* * * * *
*/
cout<<endl;
cout<<endl;

//2.
// is main hum ny num utna print krna hai jitna outer(row) num hai is liya i<=j hoga. 
//or print i krna kueky wo iterate ho rha pury pattern main
for(int j=1; j<=5; j++){
	for(int i=1; i<=j; i++){
	cout<<i<< " ";
	}
	cout<<endl;
}
/*
1
1 2 
1 2 3
1 2 3 4
1 2 3 4 5
*/

cout<<endl;
cout<<endl;

//3.
// is main hum ny num utna print krna hai jitna outer(row) num hai is liya i<=j hoga. 
//or print j krna kueky jo row num chal rha usi ko utni time print krna hai
for(int j=1; j<=5; j++){
	for(int i=1; i<=j; i++){
	cout<<j<< " ";
	}
	cout<<endl;
}
/*
1
2 2
3 3 3  
4 4 4 4
5 5 5 5 5
*/

cout<<endl;
cout<<endl;

//4. Reverse of 2nd
// is main hum ny num utna print krna hai jitna outer(row) num hai is liya i<=j hoga. 
//or print i krna kueky wo iterate ho rha pury pattern main
//reverse 
for(int j=1; j<=5; j++){
	for(int i=j; i>=1; i--){    //i start hoga us num sy jo row(outer) ka num hai or end hoga 1 py.
	cout<<i<< " ";
	}
	cout<<endl;
}
/*
1
2 1
3 2 1 
4 3 2 1
5 4 3 2 1
*/

cout<<endl;
cout<<endl;

//5.
for(char j='a'; j<='e'; j++){
	for(char i='a'; i<=j; i++){  //char print start a sy hoga or jaye ga wahain tk jitna wahi row (Outer) num hai
	cout<<j <<" ";
	}
	cout<<endl;
}
/*
a
b b 
c c c
d d d d 
e e e e e
*/

cout<<endl;
cout<<endl;

//6.
for(int j=5; j>=1; j--){   //row 5 sy start ho rhi hai or last row num 1 hai
	for(int i=1; i<=j; i++){ // 1 sy start ho kr row num tk print hon gy
	cout<<"*"<< " ";
	}
	cout<<endl;
}
/*
* * * * *
* * * *
* * *
* *
*
*/

cout<<endl;
cout<<endl;

//7.
for(int j=5; j>=1; j--){   //row 5 sy start ho rhi hai or last row num 1 hai
	for(int i=1; i<=j; i++){ // 1 sy start ho kr row num tk print hon gy
	cout<<i<< " ";
	}
	cout<<endl;
}
/*
1 2 3 4 5
1 2 3 4 
1 2 3 
1 2 
1
*/

cout<<endl;
cout<<endl;

//8.
for(int j=1; j<=5; j++){   // row(outer) 1 sy start ho gi 5 tk
	for(int i=5; i>=5-(j-1); i--){ //5 sy hr row start hogi,jitna row num hai utny num tk [i>=5-(j-1)] is sy last num nikly ga jahain tk print krna
	cout<<i<< " ";
	}
	cout<<endl;
}
/*
5
5 4 
5 4 3  
5 4 3 2 
5 4 3 2 1
*/

}



