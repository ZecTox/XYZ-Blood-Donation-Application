#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

class details
{
public:
    string Name;
    int Age;
    string Gender;
    string Email;
    string City;
    int Pin_Code;
    long long Contact_Number;
    string Blood_Group;
    int WBC_Count;
    string RBC_Count;
    int Plasma_Count;
    void set_details(string name, string gender, int age, string city, int city_code, string email, long long contact_num, string bloodgrp, int wbc_count, string rbc_count, int plasma_count)
    {
        Name = name;
        cin >> name;
        Age = age;
        Gender = gender;
        Email = email;
        City = city;
        Pin_Code = city_code;
        Contact_Number = contact_num;
        Blood_Group = bloodgrp;
        WBC_Count = wbc_count;
        RBC_Count = rbc_count;
        Plasma_Count = plasma_count;
    }

    void input_details()
    {
        cout << "Name = ";
        cin >> Name;
        cout << "\nAge = ";
        cin >> Age;
        cout << "\nGender = ";
        cin >> Gender;
        cout << "\nEmail = ";
        cin >> Email;
        cout << "\nCity = ";
        cin >> City;
        cout << "Enter your Pin code : ";
        cin >> Pin_Code;
        cout << "\nContact Number: ";
        cin >> Contact_Number;
        cout << "\nBlood Group: ";
        cin >> Blood_Group;
        cout << "WBC Count : ";
        cin >> WBC_Count;
        cout << "RBC Cout : ";
        cin >> RBC_Count;
        cout << "Plasma Count : ";
        cin >> Plasma_Count;
    }

    void request_details(string name, string gender, int age, string city, int city_code, string email, long long contact_num, string bloodgrp)
    {
        cout << "Name = ";
        cin >> name;
        cout << "\nAge = ";
        cin >> age;
        cout << "\nGender = ";
        cin >> gender;
        cout << "\nEmail = ";
        cin >> email;
        cout << "\nCity = ";
        cin >> city;
        cout << "\nCity Code: ";
        cin >> city_code;
        cout << "\nContact Number: ";
        cin >> contact_num;
        cout << "\nBlood Group needed: ";
        cin >> bloodgrp;
    }
    void printinfo()
    {
        cout << "Name = " << Name << endl;
        cout << "Age = " << Age << endl;
        cout << "Gender = " << Gender << endl;
        cout << "Email = " << Email << endl;
        cout << "City = " << City << endl;
        cout << "Contact Number: " << Contact_Number << endl;
        cout << "Blood Group: " << Blood_Group << endl;
        cout << "WBC Count : " << WBC_Count << endl;
        cout << "RBC Cout : " << RBC_Count << endl;
        cout << "Plasma Count : " << Plasma_Count << endl;
    }
};

int main()
{
    details p1;
    details p2;
    details p3;
    details p4;
    details p5;
    p1.set_details("Ajay", "Male", 25, "Chennai", 600007, "ajay4774@gmail.com", 8224511079, "A+", 7900, "4.78M", 227000);
    p2.set_details("Ronnie", "Male", 29, "Jabalpur", 482008, "ronnie417@gmail.com", 9210045712, "B+", 9900, "5.1M", 289000);
    p3.set_details("Anamika", "Female", 27, "Kolkata", 700005, "anu4799@gmail.com", 9045712210, "O-", 9400, "4.83M", 319000);
    p4.set_details("Hamid", "Male", 20, "Mumbai", 400007, "hamid1487@gmail.com", 8854712004, "B+", 9800, "4.98M", 379000);
    p5.set_details("Nilima", "Female", 22, "Ranchi", 834006, "Nilima1887@gmail.com", 7847845124, "A-", 10400, "4.75M", 254800);

    string id;
    string aru[5] = {"ARUN", "JOHN", "KING", "MANAN", "RAM"};
    int arp[5] = {123, 456, 789, 321, 786};
    cout << "Select a choice:- \n 1.Admin\n 2.Donar\n";
    int r;
    cin >> r;
    cout << "Enter your user-id in Uppercase : ";
    cin >> id;
    if (r == 1)
    {
        string id;
        cout << "Enter your user-id in Uppercase:";
        cin >> id;

        for (int i = 0; i < 5; i++)
        {
            if (id == aru[i])
            {
                cout << "Enter your password: ";
                int pass;
                cin >> pass;
                if (pass == arp[i])
                {
                    cout << "Login sucessfull";
                    cout << "Select task you want to execute: \n 1. Display details \n2. Request for blood \n3.Available donars \n";
                }
            }
        }
        cout << "You entered wrong details: ";
    }
    else
    {
        cout << " 1. Register \n 2. Request for Blood \n 3. Instruction\n 4.Search According to city\n";
        cout << "Enter your choice: ";
        int a;
        cin >> a;
        if (a == 1)
        {
            details n1;
            n1.input_details();
            cout << "\n Your data was stored you are eligible to donate blood\n";
        }
        else if (a == 2)
        {
            cout << "Enter your details for blood request: \n";
            details r1;
            r1.request_details("Aman", "Male", 21, "Delhi", 110012, "amam427@gmail.com", 9854712664, "A-");
        }
        else if (a == 3)
        {
            cout << "Do's\n>Eat a healthy and low fat meal before you donate blood.\n>Drink plenty of fluids a day before and after you donate blood.\n\nDon't\n>Do not smoke an hour before and after you donate your blood.\n>Do not drink alcohol a day before and after you donate blood\n\nBENIFITS:\n>Helps you stay healthy \n>Reduces risk of cancer \n>Improves cardiovascular health\n>Reduces obesity\n\nBLOOD DONATIONS STEPS:\n>The test\n>The donation\n>The storage\n>The factorisation \n\nAND SAVING LIVES!!\n\nPRECAUTIONS:\n>Drink extra fluids \n>Keep bandage for 5 hrs \n>Avoid heavy physical work\n>Lie down with your feet up\n>Keep yourself hydrated!!\n>No heavy lifting for 5 hrs \n>Apply a cold pack on the spot\n>A pain reliever if prescribed\n\nEVERY DROP COUNTS\n\n#Double Red Cell Donation\n>2 units of rbcs are donated once.\n>Minimum 2 weeks of recovery.\n>Only for O+ blood groups.\n>Done after every 112 days.\n>A single donation helps 2 lives.\n>Requires hardly 25 minutes. \n>To know more please call at :- 8329345701";
        }
        else
        {
        }
    }
}