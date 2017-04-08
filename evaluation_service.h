#ifndef MASTER_ANDROID_DESKTOP_EVALUATIONSERVICE_H
#define MASTER_ANDROID_DESKTOP_EVALUATIONSERVICE_H

class EvaluationService{

public:

    static void EvaluateSimplePiPerformance(int numberOfOperations);
    static void EvaluateParallelPiPerformance(int numberOfOperations, int numberOfThreads);
};


#endif //MASTER_ANDROID_DESKTOP_EVALUATIONSERVICE_H
