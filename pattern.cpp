#include<iostream>
using namespace std;

int main(){
    int n; 
    cin>> n;

    int i = 1;
    while(i<=n){
        int j = 1;
        //pehle space create karenge
        while (j<=i)
        {
            cout<<" ";
            j = j + 1;

        }
        int star = j - 1;
        while(star){
            cout<<"*";
            star = star - 1;

        }
        cout<<endl;
        i = i + 1;
        
    }
}
