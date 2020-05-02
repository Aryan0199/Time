#include <iostream>
using namespace std;
class time{
public:
    int hr;
    int min;
    int sec;
    int timeconvert(){
        int t=(this->hr*3600)+(this->min*60)+(this->sec);
        return t;
    }
};
int main(){
    time t1;
    cout<<"Enter time:\n";
    cout<<"Hours?  ";
    cin>>t1.hr;
    cout<<"\n";
    cout<<"Minutes? ";
    cin>>t1.min;
    cout<<"\n";
    cout<<"Seconds? ";
    cin>>t1.sec;
    cout<<"\nThe time is = ";
    if(t1.hr<10){
        cout<<"0"<<t1.hr;
    } else{
        cout<<t1.hr;
    }
    cout<<":";
    if(t1.min<10){
        cout<<"0"<<t1.min;
    } else{
        cout<<t1.min;
    }
    cout<<":";
    if(t1.sec<10){
        cout<<"0"<<t1.sec;
    } else{
        cout<<t1.sec;
    }
    cout<<endl;
    cout<<"Time in total seconds: "<<t1.timeconvert();
    return 0;
}
