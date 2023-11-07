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


int main()
{
    
}

