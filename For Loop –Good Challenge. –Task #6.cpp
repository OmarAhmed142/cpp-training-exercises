#include <iostream>
using namespace std ;
int main() {
int N ;
cout <<"Enter N "<<endl ;
cin >> N ;
for (int i = 1 ; i <=N ;i++)   { 
    int flag = 0;
    for(int j = 2; j < i; j++)
        if (i % j == 0) {
            flag = 1;
            break;
        }
    if(flag == 0 && i > 1)
        cout << i << endl;
    else if(flag == 1)
        cout << "Not Prime" << endl;
}
    return 0;
}
