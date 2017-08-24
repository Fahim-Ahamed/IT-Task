#include<iostream>
using namespace std;
class objects{
private:
    int i;
public:
    void showData();
};
void objects::showData(){
for(i=1;i<=50;i++){
    if(i%2!=0){
        cout << " Odd Number is : " << i << endl;
    }else{
        cout << "Even Number is : " << i << endl;
    }
}
}
int main(){
objects obj;
obj.showData();
return 0;
}
