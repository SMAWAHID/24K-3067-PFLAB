#include <iostream>
using namespace std;

class employee {
protected:
    int id;
    string name;
    string dep;
    float salary;
    
public:
    employee(int pid, string pname, string pdep, float psalary) {
        id = pid;
        name = pname;
        dep = pdep;
        salary = psalary;
    }
    virtual float calsalary() = 0;  // Virtual function to make it a pure virtual function
    void displayinfo() {
        cout << "Name: " << name << ", Department: " << dep << endl;
        cout << "ID: " << id << endl;
    }
};

class ftemployee : public employee {
private:
    float bonus;

public:
    ftemployee(int pid, string pname, string pdep, float psalary, float pbonus) 
        : employee(pid, pname, pdep, psalary), bonus(pbonus) {}

    float calsalary() override {
        return salary + bonus;  // Calculate salary including bonus
    }

    void displayinfo() {
        employee::displayinfo();
        cout << "Salary with bonus: " << calsalary() << endl;
    }
};

class ptemployee : public employee {
private:
    float hourlyRate;
    int hoursWorked;

public:
    ptemployee(int pid, string pname, string pdep, float psalary, float phourlyRate, int phoursWorked)
        : employee(pid, pname, pdep, psalary), hourlyRate(phourlyRate), hoursWorked(phoursWorked) {}

    float calsalary() override {
        return hourlyRate * hoursWorked;  // Calculate salary for part-time employee
    }

    void displayinfo() {
        employee::displayinfo();
        cout << "Salary for " << hoursWorked << " hours: " << calsalary() << endl;
    }
};

int main() {
    ftemployee ft(101, "John Doe", "HR", 5000, 1000);
    ptemployee pt(102, "Jane Smith", "Tech", 0, 20, 160);  // Part-time employee, salary will be calculated by hourly rate

    ft.displayinfo();
    pt.displayinfo();

    return 0;
}
