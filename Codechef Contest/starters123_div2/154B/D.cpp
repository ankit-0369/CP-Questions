#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void readInputVector(vector<long long>& inputVector, long long numberOfElements) {
    for (long long index = 0; index < numberOfElements; ++index) {
        cin >> inputVector[index];
    }
}

vector<pair<long long, long long>> generateEventPoints(const vector<long long>& sortedVector, long long numberOfElements) {
    vector<pair<long long, long long>> eventPoints;

    for (long long index = 0; index < numberOfElements - 1; index++) {
        long long difference = sortedVector[index + 1] - sortedVector[index];
        long long startPoint = sortedVector[index + 1] - sortedVector[index] + 1;
        long long endPoint = sortedVector[index + 1] + sortedVector[index] - 1;

        eventPoints.push_back({startPoint, 1});   // Adding a start event
        eventPoints.push_back({endPoint + 1, -1}); // Adding an end event
    }
    return eventPoints;
}

long long countDistinctNumbers(vector<pair<long long, long long>>& eventPoints) {
    sort(eventPoints.begin(), eventPoints.end());
    long long activeIntervals = 0;
    long long previousEventPosition = -1;
    long long totalDistinctCount = 0;

    for (const auto& event : eventPoints) {
        long long currentEventPosition = event.first;
        long long eventType = event.second;

        if (previousEventPosition != -1 && activeIntervals > 0) {
            totalDistinctCount += (currentEventPosition - previousEventPosition);
        }

        if (eventType == 1) {
            activeIntervals++; // Start of an interval
        }
        if (eventType == -1) {
            activeIntervals--; // End of an interval
        }

        previousEventPosition = currentEventPosition;
    }
    return totalDistinctCount;
}

void solveSingleTestCase() {
    long long numberOfElements;
    cin >> numberOfElements;

    vector<long long> inputVector(numberOfElements);
    readInputVector(inputVector, numberOfElements);
    sort(inputVector.begin(), inputVector.end());

    vector<pair<long long, long long>> eventPoints = generateEventPoints(inputVector, numberOfElements);
    long long totalDistinctCount = countDistinctNumbers(eventPoints);
    cout << totalDistinctCount << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long numberOfTestCases;
    cin >> numberOfTestCases;

    for (long long testCaseIndex = 0; testCaseIndex < numberOfTestCases; ++testCaseIndex) {
        solveSingleTestCase();
    }
    return 0;
}
