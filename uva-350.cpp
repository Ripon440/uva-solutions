#include<iostream>
using namespace std;

int main()
{
    int Z, I, M, L;
    int caseNumber = 0;
    //insert input
    while(cin >> Z >> I >> M >> L)
    {
        caseNumber++;//increment case number
        if( Z == 0 && I == 0 && M == 0 && L == 0)
            break;

        int maps[M] = {0};//assign all element of the array is 0
        int cycleLength = 0;//assign cycle length 0
        int seed = L;// assign first one is seed

        while(1)
        {
            L = (Z * L + I) % M;//determine new seed by equation
            if(seed == L)// if seed == L , the cycle is found
            {
                break;
            }
            else if(maps[L]) // if maps[L] ==  1, then the cycle already began
            {
                break;
            }
            maps[L] = 1;// mark the maps[L] to true, that means the seed already determined
            seed = L;//assign new L to seed
            cycleLength++;//increment cycle length
        }
        cout << "Case "<< caseNumber << ": " << cycleLength << endl;
    }
    return 0;
}
