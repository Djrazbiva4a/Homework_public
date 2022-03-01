#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

struct Converter {

	string converter;
};

struct Scales {
public:
	double kilograms;
	double size;
	double grams;
	double milligrams;
	double grains;
	string sourceMetricScale;
	string destMetricScale;

	void convertWeight() {
		cout << "Provide the input metric - kg/g/gr/mg" << endl;
		cin >> sourceMetricScale;
		if (sourceMetricScale == "kg") {
			cout << "Provide the amount of kilograms which you want to be converted" << endl;
			cin >> kilograms;
			cout << "Provide the unit that you want the kilograms to be converted in - g/gr/mg : " << endl;
			cin >> destMetricScale;
			if (destMetricScale == "g") {

				cout << "Total amount is: " << kilograms * 1000 << " grams" << endl;
			}
			else if (destMetricScale == "gr") {
				cout << "Total amount is: " << kilograms * 15432 << " gr" << endl;

			}
			else if (destMetricScale == "mg") {
				cout << "Total amount is: " << kilograms * 1000000 << " mg" << endl;
			}


		}
		else if (sourceMetricScale == "g") {
			cout << "Provide the amount of grams which you want to be converted" << endl;
			cin >> grams;
			cout << "Provide the unit that you want the grams to be converted in - kg/gr/mg : " << endl;
			cin >> destMetricScale;
			if (destMetricScale == "kg") {

				cout << "Total amount is: " << grams * 0.001 << " kg" << endl;
			}
			else if (destMetricScale == "mg") {

				cout << "Total amount is: " << grams * 1000 << " mg" << endl;
			}
			else if (destMetricScale == "gr") {

				cout << "Total amount is: " << grams * 15.43235 << " grains" << endl;
			}
		}
		else if (sourceMetricScale == "gr") {
			cout << "Provide the amount of grains which you want to be converted" << endl;
			cin >> grains;
			cout << "Provide the unit that you want the grains to be converted in - kilograms/grams/milligrams : " << endl;
			cin >> destMetricScale;

			if (destMetricScale == "kg") {

				cout << "Total amount: " << grains / 15432 << " kg" << endl;

			}
			else if (destMetricScale == "g") {

				cout << "Total amount is: " << grains / 15.432 << " g" << endl;
			}
			else if (destMetricScale == "mg") {

				cout << "Total amount is: " << grains / 0.015432 << " mg" << endl;
			}


		}
		else if (sourceMetricScale == "mg") {
			cout << "Provide how much miligrams you want to be converted" << endl;
			cin >> milligrams;
			cout << "Provide the unit that you want the milligrams to be converted in - kg/g/gr : " << endl;
			cin >> destMetricScale;

			if (destMetricScale == "kg") {
				cout << "Total amount: " << milligrams / 10000 << " kg" << endl;

			}
			else if (destMetricScale == "g") {
				cout << "Total amount: " << milligrams / 1000 << " g" << endl;

			}
			else if (destMetricScale == "gr") {
				cout << "Total amount: " << milligrams * 0.015432 << " gr" << endl;
			}



		}else if (sourceMetricScale != "kg", "gr", "g", "mg") {
			cout << "Wrong input, insert gr/g/kg/mg" << endl;
		}
		else if (destMetricScale != "kg", "gr", "g", "mg") {
			cout << "Wrong input, insert gr/g/kg/mg" << endl;
		}
	}

};


struct Distance {

public:
	double kilometers;
	double inches;
	double meters;
	double cantimeters;
	double miles;
	double feet;
	string sourceMetricMeasures;
	string destMetricMeasures;

	void convertDistance() {
		cout << "Provide the input metric - km/m/cm/mi/ft/in" << endl;
		cin >> sourceMetricMeasures;
		if (sourceMetricMeasures == "km") {
			cout << "Provide kilometers to convert" << endl;
			cin >> kilometers;
			cout << "Convert kilometers in - m/cm/mi/ft/in" << endl;
			cin >> destMetricMeasures;
			if (destMetricMeasures == "m") {
				cout << "Total amount is: " << kilometers * 1000 << " m" << endl;
			}
			else if (destMetricMeasures == "cm") {
				cout << "Total amount is: " << kilometers * 100000 << " cm" << endl;

			}
			else if (destMetricMeasures == "mi") {
				cout << "Total amount is: " << kilometers * 0.62137 << " mi" << endl;
			}
			else if (destMetricMeasures == "ft") {
				cout << "Total amount is: " << kilometers * 3280.8 << " ft" << endl;
			}
			else if (destMetricMeasures == "in") {
				cout << "Total amount is: " << kilometers * 39370 << " in" << endl;
			}



		}
		else if (sourceMetricMeasures == "m") {
			cout << "Provide meters to convert" << endl;
			cin >> meters;
			cout << "Convert meters in - km/cm/mi/ft/in" << endl;
			cin >> destMetricMeasures;
			if (destMetricMeasures == "km") {
				cout << "Total amount is: " << meters * 0.001 << " km" << endl;
			}
			else if (destMetricMeasures == "mi") {

				cout << "Total amount is: " << meters * 0.00062137 << " mi" << endl;
			}
			else if (destMetricMeasures == "ft") {

				cout << "Total amount is: " << meters * 3.2808 << " ft" << endl;
			}
			else if (destMetricMeasures == "cm") {
				cout << "Total amount is: " << meters * 0.01 << " cm" << endl;
			}
			else if (destMetricMeasures == "in") {
				cout << "Total amount is: " << meters * 39.370 << " in" << endl;
			}

		}
		else if (sourceMetricMeasures == "mi") {
			cout << "Provide miles to convert" << endl;
			cin >> miles;
			cout << "Convert miles in - km/m/cm/ft/in" << endl;
			cin >> destMetricMeasures;

			if (destMetricMeasures == "ft") {

				cout << "Total amount: " << miles * 5280 << " ft" << endl;

			}
			else if (destMetricMeasures == "m") {

				cout << "Total amount is: " << miles / 0.00062137 << " m" << endl;
			}
			else if (destMetricMeasures == "cm") {

				cout << "Total amount is: " << miles / 0.0000062137 << " cm" << endl;
			}
			else if (destMetricMeasures == "km") {

				cout << "Total amount is: " << miles / 0.62137 << " km" << endl;
			}
			else if (destMetricMeasures == "in") {

				cout << "Total amount is: " << miles / 63360 << " km" << endl;
			}


		}
		else if (sourceMetricMeasures == "in") {
			cout << "Provide inches to convert" << endl;
			cin >> inches;
			cout << "Convert inches in - km/m/cm/mi" << endl;
			cin >> destMetricMeasures;

			if (destMetricMeasures == "m") {
				cout << "Total amount: " << inches / 39.370 << " m" << endl;

			}
			else if (destMetricMeasures == "km") {
				cout << "Total amount: " << inches / 39370 << " km" << endl;

			}
			else if (destMetricMeasures == "cm") {
				cout << "Total amount: " << inches / 0.39370 << " cm" << endl;
			}
			else if (destMetricMeasures == "mi") {
				cout << "Total amount: " << inches * 0.000015783 << " mi" << endl;
			}
		}

			else if (sourceMetricMeasures == "cm") {
				cout << "Provide cantimeters to convert" << endl;
				cin >> cantimeters;
				cout << "Convert cantimeters in - km/m/ft/mi" << endl;
				cin >> destMetricMeasures;

				if (destMetricMeasures == "m") {
					cout << "Total amount: " << cantimeters / 100 << " m" << endl;

				}
				else if (destMetricMeasures == "km") {
					cout << "Total amount: " << cantimeters / 100000 << " km" << endl;

				}
				else if (destMetricMeasures == "ft") {
					cout << "Total amount: " << cantimeters * 0.032808 << " feet" << endl;
				}
				else if (destMetricMeasures == "mi") {
					cout << "Total amount: " << cantimeters * 0.0000062137 << " mi" << endl;
				}
			}
			else if (sourceMetricMeasures == "ft") {
			cout << "Provide feet to convert" << endl; 
			cin >> feet; 
			cout << "Convert feet in - km/m/mi/cm" << endl;
			cin >> destMetricMeasures;

			if (destMetricMeasures == "m") {
				cout << "Total amount: " << feet * 3.2808 << " m" << endl;
			}
			else if (destMetricMeasures == "cm") {
				cout << "Total amaount: " << feet / 0.032808 << " cm" << endl;
				}
			else if (destMetricMeasures == "mi") {
				cout << "Total amount: " << feet * 0.00018939 << " mi" << endl;
			}
			else if (destMetricMeasures == "km") {

				cout << "Total amount is: " << feet / 3280.8 << " km" << endl;
			}

			}



			else if (sourceMetricMeasures != "km", "m", "in", "ft", "cm") {
				cout << "Wrong input" << endl;
			}
			else if (destMetricMeasures != "km", "m", "in", "ft", "cm") {
				cout << "Wrong input" << endl;
			}
		}

	
};

	struct Degrees {

		double celsius;
		double fahren;
		double kelvin;
		string sourceDegree;;
		string destDegree;

		void convertDegrees() {

			cout << "What are we converting, celsius, fahrenheit or kelvin?" << endl; 
			cin >> sourceDegree;
			if (sourceDegree == "celsius") {
				cout << "Celsius=";
				cin >> celsius; 
				cout << "What are we converting celsius to fahrenheit or kelvin?" << endl; 
				cin >> destDegree; 
				if (destDegree == "fahrenheit") {
					cout << celsius << "C=" << celsius * 1.8 + 32 << "F" << endl; 
				}
				else if (destDegree == "kelvin") {
					cout << celsius << "C=" << celsius + 273.15 << "K" << endl; 
				}

			}
			else if (sourceDegree == "fahrenheit") {
				cout << "Fahrenheit=";
				cin >> fahren; 
				cout << "What are we converting fahrenheit to celsius or kelvin?" << endl;
				cin >> destDegree;
				if (destDegree == "celsius") {
					cout << fahren << "F=" << (fahren - 32) * 0.555 << "C" << endl; 
				}
				else if (destDegree == "kelvin") {
					cout << fahren << "F=" << 0.555 * (fahren + 459.67) << "K" << endl; 
				}
			}
			else if (sourceDegree == "kelvin") {
				cout << "Kelvin=";
				cin >> kelvin; 
				cout << "What are we converting Kelvin to celsius or fahreheit?" << endl; 
					cin >> destDegree;
				if (destDegree == "celsius") {
					cout << kelvin << "K=" << kelvin - 273.15 << "C" << endl; 
				}
				else if (destDegree == "fahrenheit") { 
					cout << kelvin << "K=" << 1.8*(kelvin - 273.15) + 32 << "F" << endl;
				}
				
				
			}
			else if (sourceDegree != "celsius", "fahrenheit", "kelvin") {
				cout << "Wrong input" << endl;
			}
			else if (destDegree != "celsius", "fahrenheit", "kelvin") {
				cout << "Wrong input" << endl;
			}
			 
		}
	};
	int main() {
		Scales Mass;
		Converter Con;
		Distance Dist;
		Degrees Deg;

		cout << "What are we converting - degrees, weight or distance? " << endl;
		cin >> Con.converter;

		if (Con.converter == "weight") {
			Mass.convertWeight();
		}
		else if (Con.converter == "distance") {
			Dist.convertDistance();
		}
		else if (Con.converter == "degrees") {
			Deg.convertDegrees();
		}
		else if (Con.converter != "degrees", "weight", "distance") {
			cout << "Wrong input, please insert currency/wight/distance" << endl;
		}






		return 0;

	};


