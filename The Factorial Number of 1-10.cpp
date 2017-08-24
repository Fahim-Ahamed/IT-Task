#include<iostream>
using namespace std;
class objects{
private:
    int n=10;
    int i=1;
    int result=1;
public:
    void showData();
};
void objects::showData(){
for(i=1;i<=n;i++){
    result=result*i;
    cout << "The Factorial Number is : " << result << endl;
}
}
int main(){
objects obj;
obj.showData();
return 0;
}
