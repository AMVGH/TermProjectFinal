#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <vector>


using namespace std;


int main() {
    /*TODO: At current state timing for each sorting method must be done
     * independent of one another. If they are run together the second sorting method
     * will be passed a sorted array and the time complexity will not reflect appropriately.
     * -
     * Update code to pass by value and not reference
     *
    int arraySizes[] = {500, 2500, 5000, 15000, 30000, 60000};

    for(int arraySize:arraySizes){
        srand(time(NULL));
        char sortType = 'B';

        vector<int> numbers;

        //Fills out number vector with PRG numbers
        for (int i = 0; i < arraySize; i++){
            numbers.push_back((rand() % arraySize + 1));
        }

        //Displays current number array (unsorted)
        /*
         * for (int i =0; i < numbers.size(); i++){
            cout << i << "\t" << numbers[i] << endl;
        }
        */

        //Start the timer and sort
        if (sortType == 'B'  || sortType == 'A'){
            cout << "Bubble Sort - Array Size: " << arraySize << endl;
            clock_t bclock1 = clock();
            for (int i = 0; i < numbers.size() - 1; i++){
                for (int j = 0; j < numbers.size() - i - 1; j++){
                    if (numbers[j] > numbers[j+1]){
                        int temp = numbers[j];
                        numbers[j] = numbers[j+1];
                        numbers[j+1] = temp;
                    }
                }
            }
            clock_t bclock2 = clock();
            cout<< "Bubble Sorting Time: "<< (float)(bclock2 - bclock1)/ CLOCKS_PER_SEC << " "<<endl;
        } if (sortType == 'S' || sortType == 'A'){
            cout << "Selection Sort - Array Size: " << arraySize << endl;
            clock_t sclock1 = clock();
            for (int i = 0; i < numbers.size(); i++){
                int min = i;
                for (int j = i + 1; j < numbers.size(); j++){
                    if (numbers[j] < numbers[min]){
                        min = j;
                    }
                }
                int temp = numbers[min];
                numbers[min] = numbers[i];
                numbers[i] = temp;
            }
            clock_t sclock2 = clock();
            cout<< "Selection Sorting Time: "<< (float)(sclock2 - sclock1)/ CLOCKS_PER_SEC << " "<<endl;

        } if (sortType != 'A' && sortType != 'B' && sortType != 'S'){
            cout << "Invalid Sort Type Selected..." << endl;
        }

        cout << endl;


        //Prints sorted number vector
        /*for (int i = 0; i < numbers.size(); i++){
            cout << i << "\t" << numbers[i] << endl;
        }*/
    }


    return 0;
}