#include<iostream>
using namespace std;
class objects{
private:
    float x;
public:
    void getData();
    void showData();
};
void objects::getData(){
x=5+2*3*(2+5)+7/5*3;
}
void objects::showData(){
cout << "The Result is : " << x << endl;
}
int main(){
    objects obj;
    obj.getData();
    obj.showData();
return 0;
}
