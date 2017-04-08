#include <iostream>
#include <chrono>

#include "evaluation_service.h"

#include "cpp-shared/simple_pi_calculations.h"
#include "cpp-shared/parallel_pi_calculations.h"


typedef std::chrono::high_resolution_clock Clock;
using namespace std;

void EvaluationService::EvaluateSimplePiPerformance(int numberOfOperations){

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

void EvaluationService::EvaluateParallelPiPerformance(int numberOfOperations, int numberOfThreads){
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