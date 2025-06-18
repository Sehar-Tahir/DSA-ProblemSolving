#include <bits/stdc++.h>
using namespace std;

void print1(int n){
        for(int i=1; i<=n; i++){
            for (int j=1; j<=n; j++){
                cout <<"* ";
            }
            cout<<endl;
        }
    cout<<"-----"<<endl;
    }
void print2(int n){
        for(int i=1; i<=n; i++){
            for (int j=1; j<=i; j++){   //(j<=i) hr bar * row times tk print hoga
                cout << "* ";
            }
            cout<<endl;
        }
    cout<<"-----"<<endl;
    }
void print3(int n){
        for(int i=1; i<=n; i++){
            for (int j=1; j<=i; j++){   //(j<=i) hr bar * row times tk print hoga
                cout << j <<" ";              // j print hoga no of row tk 
            }
            cout<<endl;
        }
        cout<<"-----"<<endl;
       }
void print4(int n){
        for(int i=1; i<=n; i++){
            for (int j=1; j<=i; j++){   //(j<=i) hr bar * row times tk print hoga
                cout << i <<" ";              // row num print ho ga current row no tk 
            }
            cout<<endl;
        }
        cout<<"-----"<<endl;
        }
void print5(int n){
        for(int i=1; i<=n; i++){
            for (int j=1; j<=n-i+1; j++){   // (j<n-i+1)[j 0 sy start hoga or jaye ga total-row+1 tk] hr bar * row times tk print hoga
                cout << "* ";        // * print hoga no of row tk [decreasing order]
            }
            cout<<endl;
        }
        cout<<"-----"<<endl;
        }
void print6(int n){
        for(int i=1; i<=n; i++){
            for (int j=1; j<=n-i+1; j++){   // (j<n-i+1)[j 0 sy start hoga or jaye ga total-row+1 tk] hr bar * row times tk print hoga
                cout << j;        // j print hoga no of row tk [decreasing order]
            }
            cout<<endl;
        }
        cout<<"-----"<<endl;
        }
void print7(int n){
        for(int i=1; i<=n; i++){
            for (int j=1; j<=n-i+1; j++){   // (j<n-i+1)[j 0 sy start hoga or jaye ga total-row+1 tk] hr bar * row times tk print hoga
                cout << j;        // j print hoga no of row tk [decreasing order]
            }
            cout<<endl;
        }
        cout<<"-----"<<endl;
        }




int main (){
// ........................ size 
    // int n;
    // cin >> n;
    // printPattren1(n);
// ......................... how many usecases (t) / no of times pattren will print
    int t;
    cin >> t;
    cout<<"times pattren will print" <<endl;
    cout<<"-----"<<endl;
    for(int i=1; i<=t; i++){
    int n;
    cin >> n;
    print1(n);
    // print2(n);
    // print3(n);
    // print4(n);
    // print5(n);
    // print6(n);
    // print7(n);
    }
}