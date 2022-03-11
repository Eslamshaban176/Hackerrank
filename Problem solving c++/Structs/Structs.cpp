#include <iostream>
#include <sstream>
using namespace std;
struct student {
    int age,standard;
    string first_name, last_name;
};

void set_firstname(student s, string firstname)
{
    s.first_name = firstname;
}

void set_lastname(student s, string lastname)
{
    s.last_name = lastname;
}

void set_age(student s, int ag)
{
    s.age = ag;
}
void set_standard(student s, int st)
{
    s.standard = st;
}
void tostring(student s)
{
    cout << s.age << " " << s.first_name << " " << s.last_name << " " << s.standard << endl;
}



int main() {
    student stud;
    cin >> stud.age >> stud.first_name >> stud.last_name >> stud.standard;
    set_age(stud, stud.age);
    set_firstname(stud, stud.first_name);
    set_lastname(stud, stud.last_name);
    set_standard(stud, stud.standard);
    tostring(stud);
    
    return 0;
}



