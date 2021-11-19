#ifndef PATIENT_H_
#define PATIENT_H_
#include "Stats.h"
class Patient{
    private:
        // string Disease;
        string ID;
        string Name;
        string Country;
        string State;
        string City;
        char Gender;
        int Age;
        string Patient_State;
    public:
        // Created a Database constructor to initialize the database and enter the records to the database.
        Patient(){}
        Patient( string patient_state );
        Patient(
            string patient_id, string patient_name ,
            string country_name , string state_name,
            string city_name, char patient_gender ,
            int patient_age , string patient_state
        );
        void InputData( string patient_state );
        void DisplayData();
        void DisplayRow();
        // // Function to return the Disease.
        // string getDisease();
        // Function to return the Patient_ID.
        string get_ID();
        // Function to return the Disease.
        string get_Name();
        // Function to return the Country_Name.
        string get_Country();
        // Function to return the State_Name.
        string get_State();
        // Function to return City_Name.
        string get_City();
        string get_PatientState();
        // Function to return the Country_Name.
        char get_Gender();
        int get_Age();
};
Patient :: Patient(
    string patient_id, string patient_name ,
    string country_name , string state_name,
    string city_name, char patient_gender ,
    int patient_age , string patient_state
){
    // Disease = disease;
    ID = patient_id;
    Name = patient_name;
    Country = country_name;
    State = state_name;
    City = city_name;
    Gender = patient_gender;
    Age = patient_age;
    Patient_State = patient_state;
}
Patient :: Patient( string patient_state ){ 
    InputData( patient_state );
}
void Patient :: InputData( string patient_state ){
    cout<<"\nEnter details of the patient";
    cout<<"\nID : ";
    cin>>ID;
    fflush(stdin);
    cout<<"Name : ";
    getline(cin,Name);
    fflush(stdin);
    cout<<"Gender :";
    cin>>Gender;
    fflush(stdin);
    cout<<"Age : ";
    cin>>Age;
    fflush(stdin);
    cout<<"Country : ";
    getline(cin, Country);
    fflush(stdin);
    cout<<"State : ";
    getline(cin, State);
    fflush(stdin);
    cout<<"City : ";
    getline(cin, City);
    fflush(stdin);
    Patient_State = patient_state; 
}
void Patient :: DisplayData(){
    cout<<"\nID : "<<ID;
    cout<<"\nName :"<<Name;
    cout<<"\nGender :"<<Gender;
    cout<<"\nAge :"<<Age;
    cout<<"\nCountry : "<<Country;
    cout<<"\nState : "<<State;
    cout<<"\nCity : "<<City;
    cout<<"\nCondition: "<<Patient_State;
}
void Patient :: DisplayRow(){
    cout<<"\n"<<ID<<"\t\t"<<Name<<"\t\t"<<Gender<<"\t\t"<<Age<<"\t\t"<<Country<<"\t\t"<<State<<"\t\t"<<City<<"\t\t"<<Patient_State;
}
string Patient ::get_ID(){
    return ID;
}
// Function to return the Disease.
string Patient ::get_Name(){
    return Name;
}
// Function to return the country name
string Patient ::get_Country(){
    return Country;
}
// Function to return the state name
string Patient ::get_State(){
    return State;
}
// Function to return the city name
string Patient ::get_City(){
    return City;
}
string Patient ::get_PatientState(){
    return Patient_State;
}
char Patient ::get_Gender(){
    return Gender;
}
int Patient ::get_Age() {
    return Age;
}
#endif