#include<bits/stdc++.h>
using namespace std;

class Contact {
private:
    string Name;
    string Number;

public:
    void input() {
        cout << "Enter Name: ";
        cin >> Name;
        cout << "Enter Mobile Number: ";
        cin >> Number;
    }
    void output() {
        cout << "Name: " << Name << " \t| Mobile: " << Number << endl;
    }
};
int main() {
    Contact directory[100]; 
    int count = 0;
    int choice;
    do {
        cout<<endl;
        cout << "--- TELEPHONE DIRECTORY ---" << endl;
        cout << "1 Add New Contact" << endl;
        cout << "2 Show All Contacts" << endl;
        cout << "3 Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (count < 100) {
                    directory[count].input(); 
                    count++;
                    cout << "Contact saved successfully!" << endl;
                } else {
                    cout << "Directory is full!" << endl;
                }
                break;

            case 2:
                cout << "\n--- List of Contacts ---" << endl;
                if (count == 0) {
                    cout << "Directory is empty." << endl;
                } else {
                    for (int i = 0; i < count; i++) {
                        cout << (i + 1) << ". ";
                        directory[i].output();
                    }
                }
                break;

            case 3:
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid choice, Please try again <-_->" << endl;
        }
    } while (choice != 3);
    return 0;
}