#ifndef STATS_H_
#define STATS_H_
#include <iostream>
using namespace std;

class Stats{
public:
    string Country;
    int Active, Cured, Fatality, Total;
    Stats();
    Stats(string CountryName);
    Stats operator+(Stats &S2);
};
Stats :: Stats(string CountryName){
    Country = CountryName;
    Active = 0;
    Cured = 0;
    Fatality = 0;
    Total = 0;
}
Stats :: Stats(){
    Country = "";
    Active = 0;
    Cured = 0;
    Fatality = 0;
    Total = 0;
}
Stats Stats :: operator+(Stats &S2){
    Stats TotalStats;
    TotalStats.Active = Active + S2.Active;
    TotalStats.Cured = Cured + S2.Cured;
    TotalStats.Fatality = Fatality + S2.Fatality;
    TotalStats.Total = Total + S2.Total;
    return TotalStats;
}
#endif