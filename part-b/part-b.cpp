#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

/*******************************************************************************
 * Function prototype
*******************************************************************************/

void towerHanoi(int, string, string, string, int&);

/*******************************************************************************
 * Description:
 * Starting point of the program. Calls a function to recursively determine
 * solutions for the first 5 instances of the Tower of Hanoi problem.
 * 
 * Input:
 * N/A
 *
 * Output:
 * An integer to signal to the OS the exit code.
*******************************************************************************/

int main() {
    // solve the first 5 cases of the Tower of Hanoi problem
    for (int i = 1, numMoves = 0; i <= 5; i++, numMoves = 0) {
        cout << setfill('-') << setw(40) << "" << endl;
        cout << "Trying n = " << i << endl << endl;
        towerHanoi(i, "Rod #1", "Rod #2", "Rod #3", numMoves);
        cout << endl << "Number of Moves = " << numMoves << endl;
    }

    // terminate
    return 0;
}

void towerHanoi(int numDisks, std::string a, std::string b, std::string c, int &numMoves) {
  if (numDisks == 1) {
    std::cout << "Moving disk " << numDisks << " from " << a << " to " << c << '\n';
    ++numMoves;
    return;
  }

  towerHanoi(numDisks - 1, a, c, b, numMoves);

  std::cout << "Moving disk " << numDisks << " from " << a << " to " << c << '\n';
  ++numMoves;

  towerHanoi(numDisks - 1, b, a, c, numMoves);

}
