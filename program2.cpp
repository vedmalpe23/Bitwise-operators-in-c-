#include <iostream>
using namespace std;
int main() {
int num=64;
int bit=3;
int setbit=num|(1<<bit);
int resetbit=num & ~(1<<bit);
cout << "original number:" << num <<endl;
cout<<"after setting bit:"<<setbit<<endl;
cout<<"after resetting bit:"<<resetbit<<endl;
return 0;
}


