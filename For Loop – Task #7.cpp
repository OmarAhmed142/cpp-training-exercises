#include <iostream>
using namespace std ;

int main(){
int start,end ;
cout << "Enter Start Number:"<<endl;
cin >> start ;
cout << "============================"<<endl;
cout << "Enter End Number:"<<endl;
cin >> end ;
int oddsum = 0 ;
int evensum = 0 ;
for (int i=start;i<=end;i++){
if (i % 2 == 0)
    evensum += i;
else
    oddsum += i;
}
    cout << "============================" << endl;
    cout << "Sum of even numbers: " << evensum << endl;
    cout << "Sum of odd numbers: " << oddsum << endl;
    cout << "Difference (even - odd): " << evensum - oddsum << endl;
return 0 ;
}
