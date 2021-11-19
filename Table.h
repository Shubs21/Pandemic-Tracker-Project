#ifndef TABLE_H_
#define TABLE_H_
#include "Patient.h"
#include <fstream>
#include <map>
class Table{
    private:
        map<int, Patient> db;
        int SNo;
        string donecountry;
        string donestate;
        Stats Statistics;
    public:
        Table() : SNo(1), donecountry("default"), donestate("default"), Statistics("World"){}
        void insertData(string);
        void show_World_Stats();
        void sendDataToFile();
        void show_TabularForm(int Choice);
};
void Table :: insertData(string WhichPatientCase){
    Statistics.Total++;
    db.insert( pair<int, Patient> ( SNo++, Patient( WhichPatientCase ) ) );
    if(WhichPatientCase=="Active") {
        Statistics.Active++;
    }else if(WhichPatientCase == "Cured"){
        Statistics.Cured++;
    }else if(WhichPatientCase == "Fatality"){
        Statistics.Fatality++;
    }
}
void Table :: show_World_Stats(){
    cout<<"Active : "<<Statistics.Active<<endl;
    cout<<"Cure : "<<Statistics.Cured<<endl;
    cout<<"Fatality : "<<Statistics.Fatality<<endl;
    cout<<"Total : "<<Statistics.Total<<endl;
}
void Table :: sendDataToFile(){
    ofstream FILE("Database", ios::app);
    for(auto P = db.begin(); P != db.end(); P++){
        FILE.write((char*)& (P->second) , sizeof( (P->second) ));
    }
    FILE.close();
    ifstream FILE2("Stats", ios::in);
    Stats S2;
    FILE2.read((char*)& (S2) , sizeof( S2 )); FILE2.close();
    Statistics = Statistics + S2;
    ofstream FILE3("Stats", ios::out);
    FILE3.write((char*)& (Statistics) , sizeof( Statistics ));
    FILE3.close();
}
void Table :: show_TabularForm(int Choice){
    string Something;
    switch(Choice){
        case 4: break;
        case 1:{
        cout<<"\nCity = ";
        cin>>Something;
        }break;
        case 2:{
            cout<<"\nState = ";
            cin>>Something;
        }break;
        case 3:{
            cout<<"\nCountry = ";
            cin>>Something;
        }break;
    }
    cout<<"\n\n\n\n";
    cout<<"---------------------------------------------------------------------------------------------------------------------------------------------\n";
    cout<<"ID\t\tNAME\t\t\tGENDER\t\tAGE\t\tCOUNTRY\t\tSTATE\t\tCITY\t\tCONDITION\n";
    cout<<"---------------------------------------------------------------------------------------------------------------------------------------------\n\n";
    ifstream FILE("Database", ios::in);
    while( !FILE.eof() ){
        Patient P;
        FILE.read((char*)&P, sizeof(P));
        switch(Choice){
            case 4:{
                P.DisplayRow();
            }break;
            case 1:{
                if(P.get_City() == Something)
                    P.DisplayRow();
            }break;
            case 2:{
                if(P.get_State() == Something)
                    P.DisplayRow();
            }break;
            case 3:{
                if(P.get_Country() == Something)
                    P.DisplayRow();
            }break;
        }
    }
    cout<<"\n---------------------------------------------------------------------------------------------------------------------------------------------\n\n";
    FILE.close();
    cout<<"\n\n\n\n";
}
#endif   