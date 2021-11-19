#include "Table.h"
int main() {
    Table m;
    int reportmenunumber;
    int viewmenunumber;
    int entryreport = 1;
    while(entryreport){
        system("clear");
        cout<<"\n\n-------------------->>>>>P A N D E M I C T R A C K E R <<<<---------------------\n\n"; cout<<"1. to report a ACTIVE CASE"<<endl;
        cout<<"2. to report a CURED CASE"<<endl;
        cout<<"3. to report a FATALITY CASE"<<endl;
        cout<<"4. to exit"<<endl;
        cout<<"Enter your choice : ";
        cin>>reportmenunumber;
        switch(reportmenunumber){
            case 4:{
            // return 0;
            }break;
            case 1:{
                m.insertData("Active");
            }break;
            case 2:{
                m.insertData("Cured");
            }break;
            case 3:{
                m.insertData("Fatality");
            }break;
            default: break;
        }
        cout<<"Do you wish to report more cases? (Type 0 to exit else 1 to continue)"<<endl;
        cin>>entryreport;
        if(entryreport == 0)
            break;
    }
    m.sendDataToFile();
    cout<<"View records database of patients"<<endl;
    int entryview = 1;    
    while(entryview){
        system("clear");
        cout<<"\n\n--------------------->>>>>PANDEMIC TRACKER : DATABASE<<<<---------------------\n\n";
        cout<<"2. State-wise"<<endl;
        cout<<"3. Country-wise"<<endl;
        cout<<"4. Tablular Form"<<endl;
        cout<<"5. World Stats"<<endl;
        cin>>viewmenunumber;
        if( viewmenunumber >= 1 && viewmenunumber <= 4 ){
            m.show_TabularForm(viewmenunumber);
        }else if(viewmenunumber == 5){
            m.show_World_Stats();
        }
        cout<<"Do you wish to continue? Type 0 to exit else 1 to continue"<<endl;
        cin>>entryview;
        if(entryview == 0)
            break;
    } 
    return 0;
}          