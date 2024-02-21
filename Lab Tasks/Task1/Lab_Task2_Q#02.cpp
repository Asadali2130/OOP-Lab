#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Welcome to the game of adventures!" << endl;
    cout << "Enter which planet you want to explore:" << endl;
    cout << "1. Mars" << endl;
    cout << "2. Jupiter" << endl;
    cout << "3. Venus" << endl;
    cin >> choice;

    if (choice == 1) {
        int a;
        cout << "You are on planet Mars!" << endl;
        cout << "What will you find?" << endl;
        cout << "1. Water 2. Aliens" << endl;
        cin >> a;

        if (a == 1) {
            cout << "Water is 2 movements to your right." << endl;
            cout << "For right, enter 1: ";
            int b;
            cin >> b;

            if (b != 1) {
                cout << "You have encountered Aliens and they killed you." << endl;
                cout << "Game over!" << endl;
            } else {
                cout << "Congratulations! You have found water. You won the game!" << endl;
            }

        } else if (a == 2) {
            cout << "You have encountered Aliens, and they are your enemies." << endl;
            cout << "You lost the game!" << endl;
        } else {
            cout << "Invalid choice. Enter 1 or 2." << endl;
        }

    } else if (choice == 2) {
        int c;
        cout << "You are on planet Jupiter!" << endl;
        cout << "What will you find?" << endl;
        cout << "1. Water 2. Aliens" << endl;
        cin >> c;

        if (c == 1) {
            cout << "Water is 3 steps to your left." << endl;
            cout << "For left, enter 1: ";
            int best;
            cin >> best;

            if (best != 1) {
                cout << "You have encountered a Giant storm, and it killed you." << endl;
                cout << "Game over!" << endl;
            } else {
                cout << "Congratulations! You have found water. You won the game!" << endl;
            }

        } else if (c == 2) {
            cout << "You have encountered Aliens, and they are your enemies." << endl;
            cout << "You lost the game!" << endl;
        } else {
            cout << "Invalid choice. Enter 1 or 2." << endl;
        }

    } else if (choice == 3) {
        int d;
        cout << "You are on planet Venus!" << endl;
        cout << "What will you find?" << endl;
        cout << "1. Water 2. Aliens" << endl;
        cin >> d;

        if (d == 1) {
            cout << "Water is 1 step forward." << endl;
            cout << "For forward, enter 1: ";
            int bestof;
            cin >> bestof;

            if (bestof != 1) {
                cout << "You have encountered a Giant storm, and it killed you." << endl;
                cout << "Game over!" << endl;
            } else {
                cout << "Congratulations! You have found water. You won the game!" << endl;
            }

        } else {
            cout << "Invalid choice. Enter 1 or 2." << endl;
        }
    } else {
        cout << "Invalid planet choice. Enter 1, 2, or 3." << endl;
    }

    return 0;
}
