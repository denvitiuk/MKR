#include <iostream>

int main() {

    int sum = 0;

    int input, min = INT_MAX, min1 = INT_MAX, i = 0;

    std::cout << " enter your numbers\n";
    while(sum <= 100) {

        std::cin>>input;
        sum += input;

        if(input < min || i == 0){

            min1 = min;
            min = input;

        } else if(input < min || i == 1){

            min = 1;

        }

        i++;

    }

    if(i > 1){

        std::cout << "Sum is bigger than 100, two min numbers: " << min << "\t" << min1 << "\n";

    } else{

        std::cout << "Sum is bigger than 100, min number: " << min << "\n";

    }

    return 0;
}
