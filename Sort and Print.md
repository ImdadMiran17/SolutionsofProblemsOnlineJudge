#include<bits/stdc++.h>
using namespace std;

struct Student
{
    int Roll;
    string name;
    int marks;
};
bool compareTwoStudents(Student a, Student b)
{

    if (a.marks != b.marks )
        return a.marks > b.marks;


    if (a.marks == b.marks)
            return a.Roll > b.Roll;

}
void computeRanks(Student a[],int n)
{
    sort(a,a+n, compareTwoStudents);
}

int main(void)
{
     int n,i;
     cin >> n;
     Student a[n];
     for(i=0;i<n;i++)
     {
         cin >> a[i].Roll;
         cin >> a[i].name;
         cin >> a[i].marks;
     }
     computeRanks(a,n);
     cout<< "Roll | Name"<< "\t|" << " Marks " << endl;
     for(i=1;i<30;i++)
        cout<< "-" ;
        cout << endl;
     for(i=0;i<n;i++)
     {
         cout<< " " << a[i].Roll << "|" << " " << a[i].name << "\t | " << a[i].marks << endl;
     }
    return 0;
}
