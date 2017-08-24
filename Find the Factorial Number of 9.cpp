#include<iostream>
using namespace std;
class objects{
private:
    int n;
    int fact;
    int result;
    int i;
public:
    void getData();
    void showData();
};
void objects::getData(){
n=10;
fact=9;
result=1;
i=1;
}
void objects::showData(){
cout << "### Factorial Number ###" << endl;
for(i=1;i<=n;i++){
    result=result*i;
    if(i==fact){
        cout << "The factorial number of 9 is : " << result << endl;
        break;
    }
}
}
int main(){
objects obj;
obj.getData();
obj.showData();
return 0;
}
