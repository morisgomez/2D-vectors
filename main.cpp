#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    vector<vector<int>> outerVec;
    vector<int> nestVec1 (10, 25); //10 elements with value of 25.
    vector<int> nestVec2 (5, 2); //5 elements with value of 2.
    outerVec.push_back(nestVec1); //adds the first nested vec to the outer vec.
    outerVec.push_back(nestVec2); //adds the second nested vec to the outer vec.
    //outerVec has 2 vectors as elements: nestVec1 and nestVec2.
    cout << outerVec[0][0] << endl;//first digit gives access to nestVec1 element within outer vector. the second digit targets the element inside nestVec1 with index zero.
    //the first digit can only go from 0 to 1 in this case bc only two elements - depends on size of the outer vec.
    //the second digit however can go from 0 to up to whatever size of selected nestedVec.
    for (int i = 0; i < outerVec.size(); i++) //this for loop will give us access to the inner vectors. outerVec[i][j]; stops once i hits 2 bc we only need 0,1.
    {
        for(int j = 0; j < outerVec[i].size(); j++) //this for loop will give us access to all the values within each nestedVector.
            //the values of j have to be less than the size of nested vec we are accessing, which will be dependent on i value.
        {
            cout << outerVec[i][j] << " ";
        } //closes inner loop for values j.
        cout << endl; //once the first nested element ends, we start a new line and start the next one.
        //the i can be used as the amount of rows wanted and the j can be the amount of columns wanted.
        //in other words, the # of nested elements determines rows and the # of corresponding values determines the columns for each row.
        //this program should print out 2 rows: the first one with 10 columns of 25 and the second with 5 values of 2.
    } //closes outer loop for selecting inner vector.
    return 0;
}
