#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {

    vector<string> tasks;
    int choice;
    string task;
    int taskNumber;

    cout << "===== TO-DO LIST MANAGER =====\n";

    do {

        cout << "\n1. Add Task";
        cout << "\n2. View Tasks";
        cout << "\n3. Delete Task";
        cout << "\n4. Exit";

        cout << "\n\nEnter your choice: ";
        cin >> choice;

        cin.ignore();

        switch(choice) {

            case 1:

                cout << "\nEnter task: ";
                getline(cin, task);

                tasks.push_back(task);

                cout << "Task added successfully!\n";

                break;

            case 2:

                if(tasks.empty()) {

                    cout << "\nNo tasks available.\n";
                }
                else {

                    cout << "\nYour Tasks:\n";

                    for(int i = 0; i < tasks.size(); i++) {

                        cout << i + 1
                             << ". "
                             << tasks[i]
                             << endl;
                    }
                }

                break;

            case 3:

                if(tasks.empty()) {

                    cout << "\nNo tasks to delete.\n";
                }
                else {

                    cout << "\nEnter task number to delete: ";
                    cin >> taskNumber;

                    if(taskNumber > 0 &&
                       taskNumber <= tasks.size()) {

                        tasks.erase(tasks.begin()
                                    + taskNumber - 1);

                        cout << "Task deleted successfully!\n";
                    }
                    else {

                        cout << "Invalid task number!\n";
                    }
                }

                break;

            case 4:

                cout << "\nExiting program...\n";

                break;

            default:

                cout << "\nInvalid choice! Try again.\n";
        }

    } while(choice != 4);

    return 0;
}