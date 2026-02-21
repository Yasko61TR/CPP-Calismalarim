#include <iostream>

using namespace std;

#include <iostream>
using namespace std;

int main () {
    int start, end;
    
    cout << "Enter the starting number: " << endl;
    cin >> start;

    cout << "Enter the ending number: " << endl;
    cin >> end;

    
    while(start <= end){

        if(start % 7 == 0 && start != 0){ 
            cout << start << " ";
        }
        start++;
    }

    return 0;
}