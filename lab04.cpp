#include <iostream>
using namespace std;

class employee{
    private:
        string name;
        float salary;
    public:
        static int count;
        int num = 0;
        employee(string Name, float s) : name(Name), salary(s){
            count++;
            num = 1000 + count;
            cout << "Object Successfully Created!" << endl;
        }

        static void displaytotal(){
            cout << "The total Number of Employees: " << count << endl;
        }
        
        void display(){
            cout << "Employee ID: " << num << endl;
            cout << "Employee Name: " << name << endl;
            cout << "Employee Salary: " << salary << endl;
        }
};

int employee :: count = 0;

int main(){
    employee e1("Ali", 200.10);
    employee e2("Moazam", 150.20);
    employee e3("Ahmed", 300.90);
    employee e4("Saad", 700.80);
    
    e1.display();
    cout << "==================" << endl;

    e2.display();
    cout << "==================" << endl;

    e3.display();
    cout << "==================" << endl;

    e4.display();
    cout << "==================" << endl;

    e1.displaytotal();

    employee e5("Fahad", 350.50);
    e1.displaytotal();
}