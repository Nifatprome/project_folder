#include<bits/stdc++.h>
using namespace std;
map< int , pair< string , string > > subject;
void init()
{
    subject[0] = make_pair("English Grammar", "John Smith");
    subject[1] = make_pair("Mathematics", "Lara Gilbert");
    subject[2] = make_pair("Physics", "Johanna Kabir");
    subject[3] = make_pair("Chemistry", "Danniel Robertson");
    subject[4] = make_pair("Biology", "Larry Cooper");
    return;
}
class Schedule{
public:
    int a,b,c;
    Schedule()
    {
        cin >> a >> b >> c;
    }

};
class Routine{
public:
    vector< Schedule > schedule;
    Routine()
    {
        init();
        while(true)
        {
            show_menu();
            char choice; cin >> choice;

            switch(choice)
            {
            case 'A':
                {
                    record_schedule();
                    break;
                }
            case 'B':
                {
                    print_schedule();
                    break;
                }
            case 'C':
                {
                    print_details();
                    break;
                }
            default:
                {
                    cout << "Wrong Input!! Try Again\n";
                }
            }

        }
    }
    void show_menu()
    {
        cout << "\nA. Create Routine\nB. Show Routine\nC. List Courses with Teachers Name\n";
        cout << "Enter your choice: ";
        return;
    }

    void print_details()
    {
        for(int i=0;i<5;i++)
            cout << subject[i].first << ", " << subject[i].second << endl;
        return;
    }

    void record_schedule()
    {
        for(int i=0;i<5;i++)
            cout << i+1 << ". " << subject[i].first << endl;
        for(int i=0;i<4;i++)
        {
            Schedule s;
            schedule.push_back(s);
        }
        return;
    }

    void print_schedule()
    {
        for(Schedule s : schedule)
            cout << s.a << " " << s.b << " " << subject[s.c].first << endl;
        return;
    }

};

int main()
{
    Routine r;
    return 0;
}

