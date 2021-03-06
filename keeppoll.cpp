#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <cstring>

using namespace std;

/**
Find the course code csv file according to current time from the machine
*/
int finden(ifstream &csv)
{
    time_t rawtime;
    struct tm *timeinfo;
    time(&rawtime);
    timeinfo=localtime(&rawtime);
    char ln[256];
    for(int c=0;c<=timeinfo->tm_wday;c++)
    {
        csv.getline(ln,256);
    }
    int ses;
    ses=timeinfo->tm_hour;
    if(timeinfo->tm_min>25)
        ses-=7;
    else
        ses-=8;
    char *tmp;
    tmp=strtok(ln,",;");
    for(int c=1;c<ses;c++)
    {
        tmp=strtok(NULL,",;");
    }
    return atoi(tmp);
}

/**
Get the session number and open the batch for automation.
*/
int main()
{
    ifstream tt;
    tt.open("timetable.csv",fstream::in);
    int course, ses;
    cout << "Enter session:";
    cin >> ses;
    course = finden(tt);
    string cm="keeppoll.cmd "+to_string(course)+" "+to_string(ses);
    system(cm.c_str());
    tt.close();
    return 0;
}
