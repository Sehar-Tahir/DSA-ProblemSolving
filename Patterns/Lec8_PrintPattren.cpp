// Lec #08 - Pattern Printing

#include <iostream>
using namespace std;
int main(){
	
//1.
/*
        *
      * *
    * * *
  * * * *
* * * * *
*/
cout<<"Input number for * pattren: ";
int n;
cin>>n;
for(int j=1; j<=n; j++){                     // for num of rows(outer)/(rounds)
//	print space
	for(int i=1; i<=n-j; i++){               // for row1 = space 4; row2 = space 3;...  total(5)/(n) - no of rows ----- print space (n-j)times
	cout<<"  ";    //2 space
	}
// print star 
	for(int z=1;z<=j; z++){                  // for row1 = strar 1; row2 = star 2;...   row = star ------- "print * row times"
	cout<<"* ";    //star + space
	}
	cout<<endl;
}

cout<<endl;
cout<<endl;

//2.
/*
        1
      2 2
    3 3 3
  4 4 4 4
5 5 5 5 5
*/
cout<<"Input number for num pattren: ";
int m;
cin>>m;
for(int j=1; j<=m; j++){                          // for num of rows(outer)/(rounds)
//	print space
	for(int i=1; i<=m-j; i++){                   // for row1 = space 4; row2 = space 3;...  total(5)/(m) - no of rows ----- print space (m-j)times
	cout<<"  ";    //2 space
	}
// print no 
	for(int z=1;z<=j; z++){                      // for row1 = no 1; row2 = no 2;...   row = no ------- "print row no row times"
	cout<< j <<" ";    //j(outer/row) + space
	}
	cout<<endl;
}

cout<<endl;
cout<<endl;

//3.
/*
        1
      1 2
    1 3 3
  1 2 3 4
1 2 3 4 5
*/
cout<<"Input number for num pattren: ";
int s;
cin>>s;
for(int j=1; j<=s; j++){                          // for num of rows(outer)/(rounds)
//	print space
	for(int i=1; i<=s-j; i++){                   // for row1 = space 4; row2 = space 3;...  total(5)/(s) - no of rows ----- print space (s-j)times
	cout<<"  ";    //2 space
	}
// print no 
	for(int z=1;z<=j; z++){                      // for row1 = no 1; row2 = no 2;...   row = no ------- "print no row times"
	cout<< z <<" ";    //j(outer/row) + space
	}
	cout<<endl;
}

cout<<endl;
cout<<endl;

//4.
/*
        a
      a b
    a b c
  a b c d
a b c d e
*/	
cout<<"Input num for char pattren: ";
int p;
cin>>p;
for(int j=1; j<=p; j++){
	// for space
	for(int i=1; i<=p-j; i++){
	cout<<"  ";
    }
	// for char
	for(char c='A'; c<='A'+j-1; c++){
	cout<<c<<" ";
	}
	cout<<endl;
	}

cout<<endl;
cout<<endl;

//5........................................................................
/* 
        1
      2 1
    3 2 1
  4 3 2 1
5 4 3 2 1
*/
cout<<"Input number for num pattren: ";
int s1;
cin>>s1;
for(int j=1; j<=s1; j++){                          
//	print space
	for(int i=1; i<=s1-j; i++){                   
	cout<<"  ";    //2 space
	}
// print no 
	for(int z=1; z<=j; z++){                      
	cout<< z <<" ";    //z + space
	}
	cout<<endl;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
