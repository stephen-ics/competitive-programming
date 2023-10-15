//
// Created by Stephen Ni on 2023-10-12.
//

// Link to the Problem: https://onlinejudge.org/external/8/837.pdf

// sort the x-axis first

#include<iostream>
#include<string>
#include<vector>
#include<utility>
#include<algorithm>
#include<set>
#include<iomanip>

bool compareFirstElement(const std::vector<float>& a, const std::vector<float>& b) {
    return a[0] < b[0];
}

int main() {
    int n;
    std::cin >> n;

    for(int k = 0; k < n; k++) {
        int np;
        std::cin >> np;

        std::vector<std::vector<float> > lightInfo;
        std::set<float > xValues;

        std::vector<std::vector<float> > output;

        for(int i = 0; i < np; i++) {
            std::vector<float> values;

            float x, y, x2, y2, r;
            std::cin >> x >> y >> x2 >> y2 >> r;

            values.push_back(x);
            values.push_back(x2);

            std::sort(values.begin(), values.end());

            // sort here
            values.push_back(r);

            lightInfo.push_back(values);
            // then sort rest of the vectors by first value of vectors

            xValues.insert(x);
            xValues.insert(x2);
        }

        std::sort(lightInfo.begin(), lightInfo.end(), compareFirstElement);

        // This will neglect -infinity to first value and last value to infinity, do this manually
        for(std::set<float>::iterator it = xValues.begin(); it != (--xValues.end()); ++it) {
            float percentLight = 1;
            float startingPoint = *it;
            float endingPoint = *(++it);
            --it;

            for(std::vector<float> lightVector : lightInfo) {
                float x = lightVector[0];
                float x2 = lightVector[1];
                float r = lightVector[2];

                // has to be above the first x value and below the 2nd x value
                if ((x <= startingPoint) && (x2 >= endingPoint)) {
                    percentLight *= r;
                }

                if ((x >= endingPoint) || (lightVector == lightInfo[lightInfo.size()-1])) {
                    std::vector<float> result;
                    result.push_back(startingPoint);
                    result.push_back(endingPoint);
                    result.push_back(percentLight);

                    output.push_back(result);
                    break;
                }
            }
        }

        std::size_t outputSize = output.size();
        int length = outputSize += 2;

        std::set<float>::reverse_iterator itLargest = xValues.rbegin();
        std::set<float>::iterator itSmallest = xValues.begin();

        std::cout << length << "\n";
        std::cout << "-inf " << std::fixed << std::setprecision(3) << *itSmallest << " " << 1.000 << "\n";
        for(std::vector<float> result : output) {
            std::cout << std::fixed << std::setprecision(3) << result[0] << " " << result[1] << " " << result[2] << "\n";
        }
        std::cout << std::fixed << std::setprecision(3) << *itLargest <<  " " << "+inf " << 1.000 << "\n\n";
    }

    return 0;
}

// do the y-values even matter?

// find endpoints
    // [2, 9], [13.5, 4], [17.0, 7.0]
    // [-infinity, 2, 4, 7, 9, 13.5, 17.0, infinity]
// check if its between each vector range
