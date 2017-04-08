#include "evaluation_service.h"

int main(int argc, char *argv[]) {

    int numberOfOperations= 10000000;
    int numberOfThreads = 8;

    EvaluationService::EvaluateSimplePiPerformance(numberOfOperations);
    EvaluationService::EvaluateParallelPiPerformance(numberOfOperations, numberOfThreads);
}

