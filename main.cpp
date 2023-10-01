#include<iostream>
using namespace std;
class Date {
    int day,month,year;
    Date(int day,int month,int year){
        this->day= day;
        this->month = month;
        this->year= year;

    }
    int getDay(){
        return this->day;
    }
    int getMonth(){
        return this->month;
    }
    int getYear(){
        return this->year;
    }
}
class transactions {
    int amount;
    string transactions_id;
    
}
int main(){

    cout<<"hello world ";

}
