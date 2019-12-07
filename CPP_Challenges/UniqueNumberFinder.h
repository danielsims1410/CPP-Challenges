#pragma once
#include"Header.h"

class UniqueNumberFinder {
private:
	float prevnumber = 0;
	float currentnumber = -1;
	float uniquenumber = -1;
	bool unique;
	vector<float> numbers = { 8,0,0,0,0,0,0,0 };
	vector<float> checkednumbers;
public:
	float FindUniqueNumber();
};

float UniqueNumberFinder::FindUniqueNumber() {

	for (float i = 0; i < numbers.size() - 1; i++) {
		currentnumber = numbers[i];
		if (checkednumbers.size() == 0) {
			checkednumbers.push_back(currentnumber);
			uniquenumber = currentnumber;
		}

		else {
			for (float j = 0; j < checkednumbers.size() - 1; j++) {
				if (currentnumber == checkednumbers[j] || ((checkednumbers.size() == 1) || checkednumbers.size() == 2)) {
					break;
				}
			}

			checkednumbers.push_back(currentnumber);
		}
	}
	return uniquenumber;
}
