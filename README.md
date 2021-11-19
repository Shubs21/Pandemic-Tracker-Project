**In the Pandemic Tracker program**, we made two classes-

1. Database – This class stored all the information about the citizens. The information includes – Name, age, gender, country, state, city and the state of the patient(active case, cured or fatality). This class also includes the functions to return this patient info if needed by the user.

2. Table – This class contains all the utility functions for our system. In this we use a **map** in which the key value is the serial number and the mapped value is an object of the class database. The functions include –

* insertData -to insert the data of the citizens into the database
* showWorldSummaryDiseasesBreakupUtil () and showWorldSummaryDiseasesBreakup() – these are used to get the world summary of the disease.
* showCountryBreakup(string disease) and showCountryBreakupUti (searchcountry, searchslNo, disease, 0) – these are used to get the country wise breakup of the cases
* showCompleteData2() – this is used to display the table containing details of all the cases that have been registered.

We have also used file handling in this code. Files are used to store the database, and the number of active, cured, fatal and total cases. In the main function we have made a menu driven program first to register the cases and then to display the contents of the database.