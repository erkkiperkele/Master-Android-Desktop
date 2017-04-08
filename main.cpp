#include <iostream>
#include <chrono>

#include "cpp-shared/simple_pi_calculations.h"
#include "cpp-shared/parallel_pi_calculations.h"

typedef std::chrono::high_resolution_clock Clock;
using namespace std;

void EvaluateSimplePiPerformance(int numberOfOperations);
void EvaluateParallelPiPerformance(int numberOfOperations, int numberOfThreads);

int main(int argc, char *argv[]) {

    int numberOfOperations= 50000000;
    int numberOfThreads = 8;

    EvaluateSimplePiPerformance(numberOfOperations);
    EvaluateParallelPiPerformance(numberOfOperations, numberOfThreads);
}

void EvaluateSimplePiPerformance(int numberOfOperations){

    auto t2 = Clock::now();

    float PISingle = SimplePiCalculations::CalculateSimplePi(numberOfOperations);

    auto t3 = Clock::now();

    cout << endl;

    cout << "1 Thread pi: " << PISingle << endl;
    cout << "1 thread took: "
         << chrono::duration_cast<chrono::milliseconds>(t3 - t2).count()
         << " milliseconds" << endl;

    cout << endl;
}

void EvaluateParallelPiPerformance(int numberOfOperations, int numberOfThreads){
    auto t1 = Clock::now();
    float PIMulti = ParallelPiCalculations::CalculateParallelPi(numberOfOperations, numberOfThreads);

    auto t2 = Clock::now();

    cout << endl;

    cout << numberOfThreads << " Threads pi: " << PIMulti << endl;
    cout << numberOfThreads << " threads took: "
         << chrono::duration_cast<chrono::milliseconds>(t2 - t1).count()
         << " milliseconds" << endl;

    cout << endl;
}