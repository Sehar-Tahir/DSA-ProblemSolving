// Lec #05- Advanced Loop

#include <iostream>
using namespace std;
int main(){
	
//! Loops:-
////1! - print 1 to 10
//for(int i=1; i<=10; i++){
//	cout <<i<<" ";
//}
////2! - Print characters from a to z
//for(char n='a'; n<='z'; n++){
//		cout <<n<<" ";
//}
////3! - print 10 to 1 (Reverse order)
//for(int i=10; i>=1; i--){
//	cout <<i<<" ";
//}
////4! - print 1-100 with jump of 3 num
//for(int i=1; i<=100; i=i+3){
//	cout <<i<<" ";
//}
////5! - Table of any num
//int n,i;
//cout<<"Enter a num: ";
//cin>>n;
//for(i=1; i<=10; i++){
//	cout<<n<<" * "<<i<<" = "<<n*i<<endl;
//}
////6! - Power of a number
//int n,p,num;
//cout<<"Enter a n: ";
//cin>>n;
//cout<<"Enter a p: ";
//cin>>p;
//num = n;
//for(int i=1; i<p; i++){
//	num = num * n;
//}
//	cout<< n << " to the power "<< p << " = "<<num<<endl;
////7 - Sum of n natural numbers
//int n,sum;
//cout<<"Enter a number:";
//cin>> n;
//sum=0;
//for(int i=1; i<=n; i++) {
//	sum = sum + i;
//}
//cout<<sum;
////!8 - Sum of square n natural numbers
//int n,sum, sq;
//cout<<"Enter a number:";
//cin>> n;
//sum=0;
//for(int i=1; i<=n; i++) {
//	sq =  i*i;
//	sum = sum + sq;
//}
//cout<<sum;
////!9 - Factorial of n
//int n,fac;
//cout<<"Enter a number:";
//cin>> n;
//fac=1;
//for(int i=1; i<=n; i++) {
//	fac = fac * i;
//}
//cout<<fac;
//!10 - Prime number or not
//int n;
//cout<<"Enter a number:";
//cin>> n;
//if(n<2){
//	cout<<n <<" is NOT Prime!";
//	return 0;
//}else{
//	for(int i=2; i<n; i++){
//		if(n%i == 0){
//		cout<<n <<" is NOT Prime Number!";
//	    return 0;
//		}
//	}
//	cout<<n <<" is Prime Number!";
//}
//!11 - Fabonacci num
int last, prev, curr, n;
cout<<"Enter a number:";
cin >> n;
last = 0;
prev = 1;

for(int i=1; i<=n; i++){
	curr = last + prev;
	cout<<curr <<"  ";
	last = prev;
	prev = curr;
}





































}

