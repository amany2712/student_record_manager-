#include <iostream>
#include <string>
#include <vector>

using namespace std;

class student_record_manager
{
private:
    vector<string> roll_no,
                   name,
                   level,
                   course,
                   mobile_no,
                   gpa,
                   birth_of_date;
    int total = 0; //to store all data

public:
    void enter();
    void show();
    void search();
    void update();
    void Delete();
};

void student_record_manager::enter()
{
    int ch = 0;
    cout << "How many students do you want to enter?" << endl;
    cin >> ch;
    cin.ignore(); // Ignore the newline character left by cin

    for (int i = 0; i < ch; i++)
    {
        cout << "\nEnter the Data of student " << i + 1 << endl
             << endl;
        cout << "Enter Roll NO:  ";
        string roll;
        getline(cin, roll);
        roll_no.push_back(roll);

        cout << "Enter Name:  ";
        string studentName;
        getline(cin, studentName);
        name.push_back(studentName);

        cout << "Enter level:  ";
        string studentlevel;
        getline(cin, studentlevel);
        level.push_back(studentlevel);

        cout << "Enter Course:  ";
        string studentCourse;
        getline(cin, studentCourse);
        course.push_back(studentCourse);

        cout << "Enter Mobile NO:  ";
        string mobile;
        getline(cin, mobile);
        mobile_no.push_back(mobile);

        cout<<"Enter Birth of date :" ;
        string birth;
        getline(cin, birth);
        birth_of_date.push_back(birth);

        cout << "Enter GPA :  ";
        string ggpa;
        getline(cin, ggpa);
        gpa.push_back(ggpa);


        cout << "\t---------------------------------------------\n";
    }

    total += ch;
}

void student_record_manager::show()
{
    if (total == 0)
    {
        cout << "No Data is Entered" << endl;
    }
    else
    {
        for (int i = 0; i < total; i++)
        {
            cout << "\nData of Student " << i + 1 << endl
                 << endl;
            cout << "Roll NO:  " << roll_no[i] << endl;
            cout << "Name:  " << name[i] << endl;
            cout << "level:  " << level[i] << endl;
            cout << "Course:  " << course[i] << endl;
            cout << "Mobile NO:  " << mobile_no[i] << endl;
             cout << "Birth of date:  " << birth_of_date[i] << endl;
             cout << "GPA:  " << gpa[i] << "  "<<"this student is failed"<< endl;

        }
    }
}

void student_record_manager::search()
{
    if (total == 0)
    {
        cout << "No data is entered" << endl;
    }
    else
    {
        string rollno;
        cout << "Enter the roll number of student" << endl;
        cin >> rollno;
        bool found = false;

        for (int i = 0; i < total; i++)
        {
            if (rollno == roll_no[i])
            {
                cout << "\nRoll NO:  " << roll_no[i] << endl;
                cout << "Name:  " << name[i] << endl;
                cout << "level:  " << level[i] << endl;
                cout << "Course:  " << course[i] << endl;
                cout << "Mobile NO:  " << mobile_no[i] << endl;
                cout << "Birth of date:  " << birth_of_date[i] << endl;
                cout << "GPA:  " << gpa[i] << endl;

                found = true;
                break;
            }
        }

        if (!found)
        {
            cout << "Student with Roll NO " << rollno << " not found." << endl;
        }
    }
}

void student_record_manager::update()
{
    if (total == 0)
    {
        cout << "No data is entered" << endl;
    }
    else
    {
        string rollno;
        cout << "Enter the roll no of student you want to update" << endl;
        cin >> rollno;
        bool found = false;

        for (int i = 0; i < total; i++)
        {
            if (rollno == roll_no[i])
            {
                cout << "\nPrevious data of Student who has a roll number:" << roll_no[i] << endl
                     << endl;
                cout << "Roll NO: " << roll_no[i] << endl;
                cout << "Name:  " << name[i] << endl;
                cout << "level:  " << level[i] << endl;
                cout << "Course:  " << course[i] << endl;
                cout << "Mobile NO:  " << mobile_no[i] << endl;
                cout << "Birth of date:  " << birth_of_date[i] << endl;
                cout << "GPA:  " << gpa[i] << endl;
                cout << "\nEnter new data" << endl
                     << endl;
                cout << "Enter Roll NO:  ";
                cin >> roll_no[i];
                cout << "Enter Name:  ";
                cin.ignore();
                getline(cin, name[i]);
                cout << "Enter level:  ";
                getline(cin, level[i]);
                cout << "Enter Course:  ";
                getline(cin, course[i]);
                cout << "Enter Mobile NO:  ";
                getline(cin, mobile_no[i]);
                cout << "Enter Birth of date:  ";
                getline(cin, birth_of_date[i]);
                cout << "GPA:  ";
                getline(cin, gpa[i]);
                found = true;
                break;
            }
        }

        if (!found)
        {
            cout << "Student with Roll NO " << rollno << " not found." << endl;
        }

    }
}

void student_record_manager::Delete()
{
    if (total == 0)
    {
        cout << "No data is entered yet" << endl;
    }
    else
    {
        int choice;
        cout << "Are you Sure to Delete Data?" << endl;
        cout << "\nPress 1 to delete all record" << endl;
        cout << "Press 2 to choose which student you want to delete" << endl;
        cin >> choice;

        if (choice == 1)
        {
            roll_no.clear();
            name.clear();
            level.clear();
            course.clear();
            mobile_no.clear();
             birth_of_date.clear();
              gpa.clear();
            total = 0;
            cout << "All records are deleted..!!" << endl;
        }
        else if (choice == 2)
        {
            string rollno;
            cout << "Enter the roll no of student you want to delete" << endl;
            cin >> rollno;
            bool found = false;

            for (int i = 0; i < total; i++)
           {
                if (rollno == roll_no[i])
                {
                    cout << "\nPrevious data" << endl
                         << endl;
                    cout << "Data of Student " << i + 1 << endl;
                    cout << "Roll NO: " << roll_no[i] << endl;
                    cout << "Name:  " << name[i] << endl;
                    cout << "level:  " << level[i] << endl;
                    cout << "Course:  " << course[i] << endl;
                    cout << "Mobile NO:  " << mobile_no[i] << endl;
                    cout << "Birth of date:  " << birth_of_date[i] << endl;
                    cout << "GPA:  " << gpa[i] << endl;
                    roll_no.erase(roll_no.begin() + i);
                    name.erase(name.begin() + i);
                    level.erase(level.begin() + i);
                    course.erase(course.begin() + i);
                    mobile_no.erase(mobile_no.begin() + i);
                    birth_of_date.erase(birth_of_date.begin() + i);
                    gpa.erase(gpa.begin() + i);
                    total--;
                    found = true;
                    cout << "\n\n\t The data of student's roll no " << rollno << " is deleted successfully!!\n"
                         << endl;
                    break; // Exit the loop after deleting the student
                }
            }

            if (!found)
            {
                cout << "Student with Roll NO " << rollno << " not found." << endl;
            }
        }
        else
        {
            cout << "Invalid choice! Please enter 1 or 2." << endl;
        }
    }
}

int main()
{
    student_record_manager student;
    int choice;

    cout << "\n";
    cout << "\t\t\t\t\t----------------------------------------\n";
    cout << "\t\t\t\t\t|    STUDENT RECORD MANAGEMENT SYSTEM  |\n";
    cout << "\t\t\t\t\t----------------------------------------\n";
    cout << "\n\n\n";


    do
    {
        cout << "\t\t\tPress Enter to continue......"<<endl;
         getchar();
         if(getchar()){
        cout << "\n\n\t\t\t ** Main Menu **\n "
             << endl;

        cout << "\n\t\t\tPress 1 to Enter data" << endl
             << endl;
        cout << "\t\t\tPress 2 to Show data" << endl
             << endl;
        cout << "\t\t\tPress 3 to Search data" << endl
             << endl;
        cout << "\t\t\tPress 4 to Update data" << endl
             << endl;
        cout << "\t\t\tPress 5 to Delete data" << endl
             << endl;
        cout << "\t\t\tPress 6 to Quit" << endl
             << endl;
        cin >> choice;
         }

        switch (choice)
        {

        case 1:
            student.enter();
            break;
        case 2:
            student.show();
            break;
        case 3:
            student.search();
            break;
        case 4:
            student.update();
            break;
        case 5:
            student.Delete();
            break;
        case 6:
            cout << "\n Thanks for using this program and GOODBYE! \n ";
            exit(0);
            break;
        default:
            cout << "Invalid input! Please Enter a valid one \n"
                 << endl;
        }
    } while (choice != 6);

    return 0;
}


