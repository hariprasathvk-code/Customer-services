#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Function declarations
void Initialization();
void Process();
void Termination();
void SimulateIssue();
void ErrorAnalysis();
void ResolveIssue();
void Survey();

int main() {
    cout << "Customer Service Flow " << endl;
    Initialization();  
    Process();         
    Termination();     
    return 0;
}


void Initialization() {
    cout << "\n Customer found an issue." << endl;
    cout << "Customer contacts customer service." << endl;
}


void Process() {
    char choice;
    cout << "\nHandling customer request" << endl;

    cout << "Is this an enquiry? (y/n): ";
    cin >> choice;
    if (choice == 'y' || choice == 'Y') {
        cout << "Answering customer's question." << endl;
        return; // Goes to Termination
    }

    cout << "Is this a sales issue? (y/n): ";
    cin >> choice;
    if (choice == 'y' || choice == 'Y') {
        cout << "Redirecting to Sales Support." << endl;
        cout << "Sales Support fixed the issue." << endl;
    } 
    else {
        cout << "Is this a technical issue? (y/n): ";
        cin >> choice;
        if (choice == 'y' || choice == 'Y') {
            cout << "Contacting Technical Team." << endl;
        }

        cout << "Is this a new issue? (y/n): ";
        cin >> choice;
        if (choice == 'y' || choice == 'Y') {
            cout << "Testing new issue." << endl;
            SimulateIssue();   // For new issue
        } 
        else {
            // FIXED: Follow full flow for known issue
            ResolveIssue();
            SimulateIssue();
            ErrorAnalysis();

            cout << "\nSolving the issue based on analysis." << endl;
            cout << "Issue solved." << endl;
        }
    }

    // Confirmation step
    cout << "\nConfirm with customer: Is the issue fixed? (y/n): ";
    cin >> choice;
    if (choice == 'y' || choice == 'Y') {
        cout << "Issue confirmed as fixed." << endl;
    } 
    else {
        ErrorAnalysis();  // Retry analysis if still not fixed
    }
}


