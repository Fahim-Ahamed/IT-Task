#include<iostream>
using namespace std;
class objects{
private:
    int i;
    int sum;
public:
    void getData();
    void showData();
};
void objects::getData(){
sum=0;
}
void objects::showData(){
for(i=1;i<=50;i++){
    if(i%2!=0){
        cout << "All Odd Number is : " << i << endl;
        sum=sum+i;
    }
}
        cout << "Sum of all Odd Number's from 1-50 : " << sum << endl;
}
int main(){
objects obj;
obj.getData();
obj.showData();
return 0;
}
