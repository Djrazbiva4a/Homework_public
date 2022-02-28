#include<iostream>
#include<algorithm>

using namespace std;

struct Scales {
public:
	double kilograms;
	double size;
	double grams;
	double miligrams;
	double grains;
	string sourceMetricScale;
	string destMetricScale;

};


struct Measures {

public:
	double kilometer;
	double meter;
	double cantimeter;
	double milimiter;
	double miles;
	double foots;
	string sourceMetricMeasures;
	string destMetricMeasures;
};

struct Curency {

	double euro;
	double lev;
	double dollar;
	string sourceMetricCurrency;
	string destMetricCurrecny;
};
int main() {
	Scales Sc;

	cout << "Provide the input metric:" << endl;
	cin >> Sc.sourceMetricScale;
	if (Sc.sourceMetricScale == "kilogram") {
		cout << "Provide the amount of kilograms which you want to be converted" << endl;
		cin >> Sc.kilograms;
		cout << "Provide the unit that you want the kilograms to be converted in - grams/grains/miligrams : " << endl; 
		cin >> Sc.destMetricScale;
		if (Sc.destMetricScale == "grams") {

			cout << "Total amount is: " << Sc.kilograms * 1000 << " grams" << endl;
		}


	}
	else if (Sc.sourceMetricScale == "gram") {
		cout << "Provide the amount of grams which you want to be converted" << endl;
		cin >> Sc.grams;
		cout << "Provide the unit that you want the grams to be converted in - kilograms/grains/miligrams : " << endl;
		cin >> Sc.destMetricScale;
		if (Sc.destMetricScale == "kilograms") {

			cout << "Total amount is: " << Sc.grams * 0.001 << " kg" << endl; 
		}
		else if (Sc.destMetricScale == "miligrams") {

			cout << "Total amount is: " << Sc.grams * 1000 << " mg" << endl;
		}
		else if (Sc.destMetricScale == "grains") {

			cout << "Total amount is: " << Sc.grams * 15.43235 << " grains" << endl;
		}
	}
	else if (Sc.sourceMetricScale == "grains") {
		cout << "Provide the amount of grains which you want to be converted" << endl;
		cin >> Sc.grains;
	}
	else if (Sc.sourceMetricScale == "miligrams") {
		cout << "Provide how much miligrams you want to be converted" << endl;

	}



}


