#include <iostream>

using namespace std;

struct StudentMark
{
    string moduleName;
    int Semtests;

};


    int main()
{
        StudentMark student[10];
        int k = 1;
        float weight = 0.00;
        string Answer;


        while (k<=10)
        {
           
            cout << "Please enter your module name" << endl;
            cin >> student[k].moduleName;
            cout << "Enter the amount of Semester tests : ";
            cin >> student[k].Semtests;
            cout << "Enter weight of one semester test : ";
            cin >> weight;

            cout << "Would you like to check another module? (yes/no): ";
            cin >> Answer;
            if (Answer == "yes") {

                k++;
            }
            else {
                break;
            }








        }

};