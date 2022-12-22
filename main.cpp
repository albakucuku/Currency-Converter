#include <iostream>
#include <string>

using namespace std;

// Function to convert from one currency to another
double convertCurrency(double amount, string fromCurrency, string toCurrency)
{
    // Define conversion rates
    const double USD_TO_EUR = 0.81;
    const double USD_TO_GBP = 0.76;
    const double USD_TO_CAD = 1.31;

    // Convert input amount to USD
    if (fromCurrency == "EUR")
    {
        amount = amount / USD_TO_EUR;
    }
    else if (fromCurrency == "GBP")
    {
        amount = amount / USD_TO_GBP;
    }
    else if (fromCurrency == "CAD")
    {
        amount = amount / USD_TO_CAD;
    }

    // Convert USD amount to output currency
    if (toCurrency == "EUR")
    {
        amount = amount * USD_TO_EUR;
    }
    else if (toCurrency == "GBP")
    {
        amount = amount * USD_TO_GBP;
    }
    else if (toCurrency == "CAD")
    {
        amount = amount * USD_TO_CAD;
    }

    return amount;
}

int main()
{
    // Prompt user for input amount and currencies
    double amount;
    string fromCurrency;
    string toCurrency;
    cout << "Enter amount: ";
    cin >> amount;
    cout << "Enter from currency (USD, EUR, GBP, CAD): ";
    cin >> fromCurrency;
    cout << "Enter to currency (USD, EUR, GBP, CAD): ";
    cin >> toCurrency;

    // Convert currencies and print result
    double result = convertCurrency(amount, fromCurrency, toCurrency);
    cout << amount << " " << fromCurrency << " = " << result << " " << toCurrency << endl;

    return 0;
}
