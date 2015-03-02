/*
This program illustrates how to read strings and numeric data
Source: C++ Programming - From problem design to problem Analysis 5th Edition
*/

#include <iostream>
using namespace std;

class UserProfile{
    private:
        string firstName;
        string lastName;
        int age;
        double weight;

    public:
        void intro(){
            cout << "Enter first name, last name, age, "
            << "and weight, separated by spaces."
            << endl;

        }
        void getInfo(){
            cin >> firstName >> lastName;
            cin >> age >> weight;

        }
        void printInfo(){
            cout << "Name: " << firstName << " " 
            << lastName << endl;
            cout << "Age: " << age << endl;
            cout << "Weight: " << weight << endl;
        }

};

int main(){

    UserProfile A;
    A.intro();
    A.getInfo();
    A.printInfo();

    return(0);
}

/* Sample output 

$./a.out
Enter first name, last name, age, and weight, separated by spaces.
Josue Mora 33 167
Name: Josue Mora
Age: 33
Weight: 167

*/