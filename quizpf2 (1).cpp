#include<iostream>
using namespace std;

int main(){
    int N;
    cout<<"Enter number of client:";
    cin>>N;
    int days;
    double bill;
    double totalRevenue = 0;
    const int ratePerDay = 800;
    for(int i = 1; i <= N; i++){
        cout<<"\nEnter days used by client"<<i<<":";
        cin>>days;
        bill = days*ratePerDay;
        if(days>10){
            bill = bill - (bill * 0.10);
        }
        cout<<"Bill for client"<< i <<":"<<bill<<endl;
        totalRevenue += bill;
    }
    cout<<"\nTotal revenue from all clients ="<< totalRevenue <<endl;
    return 0;
}