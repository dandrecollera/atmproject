#include <iostream>
using namespace std;

namespace values
{
    int actNum = 999999999;
    int cb = 0;
}

void depositState()
{
    int amt;
    cout << "\nDeposit" << endl;
    cout << "Account Number: " << values::actNum << endl;
    cout << "Enter Amount: ";
    cin >> amt;
    values::cb += amt;
    cout << "Account Number: " << values::actNum << endl;
    cout << "Current Balance: " << values::cb << endl;
}

void withdrawState()
{
    int amt;
    cout << "\nWithdrawal" << endl;
    cout << "Account Number: " << values::actNum << endl;
    cout << "Current Balance: " << values::cb << endl;
    cout << "Withdraw Amount: ";
    cin >> amt;
    if (amt > values::cb)
    {
        cout << "Not enough balance." << endl;
    }
    else
    {
        values::cb -= amt;
        cout << "Account Number: " << values::actNum << endl;
        cout << "Current Balance: " << values::cb << endl;
    }
}

void inquiryState()
{
    cout << "\nBalance Inquiry" << endl;
    cout << "Account Number: " << values::actNum << endl;
    cout << "Current Balance: " << values::cb << endl;
}

int main()
{
    char tc;
    while (true)
    {

        cout << "\n[D] Deposit \n[W] Withdrawal \n[I] Balance Inquiry \n[X] Exit \n\n";
        cout << "Account Number: " << values::actNum << endl;
        cout << "Enter Your Decision: ";
        cin >> tc;
        switch (toupper(tc))
        {
        case 'D':
            depositState();
            break;
        case 'W':
            withdrawState();
            break;
        case 'I':
            inquiryState();
            break;
        case 'X':
            return 0;
        default:
            break;
        }
    }
}