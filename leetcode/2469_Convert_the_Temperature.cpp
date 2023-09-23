#include <iostream>
#include <vector>

using namespace std;

vector<double> celsiusConvertors(double celsius) {

    double f = celsius + 273.15;
    double k = (celsius * 1.80) + 32;

    vector<double> result_of_celsius;
    result_of_celsius.push_back(f);
    result_of_celsius.push_back(k);
    return result_of_celsius;
}

int main(){
    double celsius;
    cin >> celsius;

    vector<double> result = celsiusConvertors(celsius);

    // Print the elements of the result vector

    cout << result[0] << " " << result[1] << " " << endl;
    return 0;
}