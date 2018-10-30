#include <iostream>
using namespace std;

void binaryCalc(unsigned int, unsigned int []);

const int SIZE = 32;
unsigned int binary [SIZE];
unsigned int MINIMUM = 0;
unsigned int MAXIMUM = 0xFFFFFFFF;

int main()
{
    //if declared as unsigned int, can not provide input validation for
    //numbers above or below restrictions.
    long long int num;

    //user input
    cout << "Enter a positive integer: ";
    cin >> num;

    if (num > MAXIMUM){
            cout << "Integer exceeds maximum value of 0xFFFFFFFF.";
        }
            else if (num < 0){
                cout << "Integer must be a minimum value of 0.";
            }
                else if (num >= MINIMUM && num <= MAXIMUM){
                    unsigned int dec;
                    //converted num (long long int) to dec (unsigned int)
                    dec = num;
                    binaryCalc(dec, binary);
                }

}



void binaryCalc(unsigned int dec, unsigned int *binary)
{
     int count = 0;

        if (dec == 0){
        cout << "Binary Value: " << dec;
        }

        //calculate and store in array
        if (dec > 0 && dec <= 0xFFFFFFFF){

        while (dec > 0){
        binary[count] = dec % 2;
        dec = dec / 2;
        count++;
        }

        //display in reverse order
        cout << "Binary Value: ";
        for (int j = count - 1; j >= 0; j--){
            cout << binary[j];
            }
        }
}
