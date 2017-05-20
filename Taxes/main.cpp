//
//  main.cpp
//  Taxes
//
//  Created by Carlos Hurtado on 5/19/17.
//  Copyright © 2017 Carlos Hurtado. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std; //Declare all constant variables
int main()
{ //Declare variables your coding
    // Calculate gross amount, federate tax, sale tax, social security, medicare/medicaid tax, pension plan, health insurance and net pay
   // your coding
    //Display output
    double grossAmount = 0.0;
    double toFederal = 0.0;
    double toState = 0.0;
    double toSocial = 0.0;
    double toMedicare = 0.0;
    double toPension = 0.0;
    double net = 0;
    
    cout<<"Please enter gross amount: $";
    cin>>setprecision(2)>>grossAmount;
    toFederal = grossAmount * 0.2;
    toState = grossAmount*0.04;
    toSocial = grossAmount*0.035;
    toMedicare = grossAmount*0.0275;
    toPension = grossAmount * 0.06;
    net  = grossAmount - toFederal - toState - toSocial - toMedicare - toPension;
    if((net-80)>0)
    {
        net-=80;
    }
    else
    {
        net = 0;
    }
    cout<< left << setw(26) << "Gross Amount: " << right << " $"<< setw(7) <<setiosflags(ios::fixed)<<setprecision(2)<<grossAmount << endl; //Your coding
    cout<< left << setw(26) << "Federal Income Tax: " << right << " $"<< setw(7)<<setiosflags(ios::fixed)<<setprecision(2)<<toFederal << endl;
    cout<< left << setw(26) << "State Tax: " << right << " $"<< setw(7)<<setiosflags(ios::fixed)<<setprecision(2)<<toState << endl;
    cout<< left << setw(26) << "Social Securtiy Tax: " << right << " $"<< setw(7)<<setiosflags(ios::fixed)<<setprecision(2)<<toSocial << endl;
    cout<< left << setw(26) << "Medicare Tax: " << right << " $"<< setw(7)<<setiosflags(ios::fixed)<<setprecision(2)<<toMedicare << endl;
    cout<< left << setw(26) << "Pension Plan: " << right << " $"<< setw(7)<<setiosflags(ios::fixed)<<setprecision(2)<<toPension << endl;
    if(net > 80)
    {
        cout<< left << setw(26) << "Health Insurance: " << right << " $"<< setw(7)<<80.00 << endl;
        cout<< left << setw(26) << "Net Pay: " << right << " $"<< setw(7)<<setiosflags(ios::fixed)<<setprecision(2)<<net << endl;
    }
    else
    {
        cout<< left << setw(26) << "Health Insurance: " << right << " $"<< setw(7)<<setiosflags(ios::fixed)<<setprecision(2)<<net << endl;
        cout<< left << setw(26) << "Net Pay: " << right << " $"<< setw(7)<<0.00 << endl;
    }
    return 0;
}
