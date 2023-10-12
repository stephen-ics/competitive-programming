//
// Created by Stephen Ni on 2023-10-11.
//

// Link to the Problem: https://onlinejudge.org/external/5/514.pdf

// be careful of edgecases!

#include<iostream>

int main() {
    int H;
    float U;
    int D;
    float F;
    std::cin >> H >> U >> D >> F;

    while (H != 0) {
        float day = 0.0;
        float totalDistance = 0.0;
        bool succeeded;

        while(true) {
            float distanceClimbed = U - (U * day * (F/100));

            if (distanceClimbed < 0) {
                distanceClimbed = 0;
            }

            totalDistance += distanceClimbed;

            if (totalDistance > H) {
                succeeded = true;
                break;
            }

            totalDistance -= D;

            if (totalDistance < 0) {
                succeeded = false;
                break;
            }

            day++;
        }

        if (succeeded) {
            std::cout << "success on day " << day + 1 << std::endl;

        } else {
            std::cout << "failure on day " << day + 1 << std::endl;
        }

        std::cin >> H >> U >> D >> F;
    }

    return 0;
}