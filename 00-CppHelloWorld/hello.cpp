#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    cout << "Hola Mundo!\n";

    ofstream output;
    output.open("output.txt");

    output<<"\n\tHOLA MUNDO";

    output.close();

    return 0;
}
