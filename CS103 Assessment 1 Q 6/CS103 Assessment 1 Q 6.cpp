// CS103 Assessment 1 Q 6.
// Student Name: Matt Taylor
// This program allows users to track their finances daily and weekly expenses as per the brief

#include <iostream>
#include <iomanip>

using namespace std;

// Structure to store daily expenses
struct dailyExpenses {
    string date;
    double transportCost;
    double mealCost;
    double entertainmentCost;
    double otherCost;
};

// Function to claculate daily expenses
double calaulateDailyExpenses(const dailyExpenses& expenses) {
    return expenses.transportCost + expenses.mealCost + expenses.entertainmentCost + expenses.otherCost;
}


// Function to input daily expenses
void inputDailyExpenses(dailyExpenses& expenses) {
    cout << "Enter the date: ";
    cin >> expenses.date;
    cout << "Enter transport cost: $";
    cin >> expenses.transportCost;
    cout << "Enter meal cost: $";
    cin >> expenses.mealCost;
    cout << "Enter Entertainment cost: $";
    cin >> expenses.entertainmentCost;
    cout << "Enter other expenses cost: $";
    cin >> expenses.otherCost;
}

// Function to calculate and display the daily expenses
void viewDailyExpenses(const dailyExpenses& expenses) {
    double totalDailyExpenses = calaulateDailyExpenses(expenses);
    cout << "Date: " << expenses.date << endl;
    cout << "Transport Cost: $" << expenses.transportCost << endl;
    cout << "Meal Cost: $" << expenses.mealCost << endl;
    cout << "Entertainment Cost: $" << expenses.entertainmentCost << endl;
    cout << "Other Expenses: $" << expenses.otherCost << endl;
    cout << "Total Daily Expenses: $" << totalDailyExpenses << endl;
}

int main()
{
    const int maxDays = 7;
    dailyExpenses dailyExpenses[maxDays];
    double weeklyExpenses = 0;

    for (int i = 0; i < maxDays; i++) {
        cout << "Enter expenses for the day " << (i + 1) << endl;
        inputDailyExpenses(dailyExpenses[i]);
        weeklyExpenses += calaulateDailyExpenses(dailyExpenses[i]);
    }


}

