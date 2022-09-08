//Rich Davis
//Sep 7, 2022
//Project 4

#include <iostream>
float usdtoyen(float usd) {
	return usd * 98.93;
}
float usdtoeuro(float usd) {
	return usd * 0.74;
}
float yentousd(float yen) {
	return yen / 98.93;
}
float yentoeuro(float yen) {
	return yen / 133.689189;
}
float eurotousd(float euro) {
	return euro * 1.351351;
}
float eurotoyen(float euro) {
	return euro * 133.689189;
}
int main() {
	
	std::string answer = "yes";
	std::string currencyFrom = "USD";
	std::string currencyTo = "JPY";
	float amountToConvert = 0;
	while (answer == "yes" or answer == "Yes" or answer == "YES") {
		std::cout << "What currency would you like to convert FROM? USD, JPY, and EUR are supported." << std::endl;
		std::cin >> currencyFrom;
		std::cout << std::endl << "What currency would you like to convert TO? USD, JPY, and EUR are supported." << std::endl;
		std::cin >> currencyTo;
		std::cout << "Enter how many " << currencyFrom << " you would like to convert." << std::endl;
		std::cin >> amountToConvert;
		if (currencyFrom == "USD") {
			if (currencyTo == "JPY") {
				std::cout << amountToConvert << " USD equals " << usdtoyen(amountToConvert) << " JPY." << std::endl;
			}
			if (currencyTo == "EUR") {
				std::cout << amountToConvert << " USD equals " << usdtoeuro(amountToConvert) << " EUR." << std::endl;
			}
		}
		if (currencyFrom == "JPY") {
			if (currencyTo == "USD") {
				std::cout << amountToConvert << " JPY equals " << yentousd(amountToConvert) << " USD." << std::endl;
			}
			if (currencyTo == "EUR") {
				std::cout << amountToConvert << " JPY equals " << yentoeuro(amountToConvert) << " EUR." << std::endl;
			}
		}
		if (currencyFrom == "EUR") {
			if (currencyTo == "JPY") {
				std::cout << amountToConvert << " EUR equals " << eurotoyen(amountToConvert) << " JPY." << std::endl;
			}
			if (currencyTo == "EUR") {
				std::cout << amountToConvert << " EUR equals " << eurotousd(amountToConvert) << " USD." << std::endl;
			}
		}
		std::cout << "Would you like to perform another conversion?" << std::endl;
		std::cin >> answer;


	}
	

	return 0;
}