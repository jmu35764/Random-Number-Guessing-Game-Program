// Random Number Guessing Game Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
using namespace std;

int main()
{
    
    // Random number engine
    random_device engine;

    uniform_int_distribution<> dist(1, 1000);

    int rand_num = dist(engine);

    int input; // value that the user puts in
    int count = 0;

    cout<< "A random number has been generated. Can you guess it? \n";
    cin >> input;


    while (input != rand_num)
    {
        count += 1;
        
        if (input > rand_num)
        {
            cout << "Too high, try again. \n";
        }

        if (input < rand_num)
        {
            cout << "Too low, try again. \n";
        }

        cin >> input;

    }

    cout << "Congratulations, you got the number correct! \n";
    cout << "It took " << count << " attempts.";

    
}


