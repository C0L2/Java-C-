#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    //create file and equals it to variable: "myfile"
        ifstream myfile;
            myfile.open("Radiatii.in.txt");

            //check if file is opened and read it
            if ( myfile.is_open())
                 {
                    int n,m;
                        myfile >> n; //read from the file
                        myfile >> m; //also read from file
                        cout<<n<<m;
                        myfile.close(); //close the file

                 }
            else {
                cout<<"ERROR! FILE NOT FOUND!"<<endl;
                 }
cin.get();
return 0;
}
