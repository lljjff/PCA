#ifndef PRINCOMP_H
#define PRINCOMP_H

#include <vector>

using namespace std;

class QPointF;
class QLineF;

// ����� ������� ������ ������� ��������� ��� QPointF
class PrinComp
{
public:
    // ������ ��������
    void computeMeans(vector<QPointF> points,
                      vector<double> & means);

    // ���������� �������������� �������
    void computeCovarianceMatrix(vector<QPointF> points,
                                 vector<double> means,
                                 vector< vector<double> > & covarianceMatrix);

    // ���������� ����������� ��������
    void computeEigenValues(vector<vector<double> > covarianceMatrix,
                            vector<double> & eigenValues);

    // ���������� ����������� ��������
    void computeEigenVectors(vector< vector<double> > covarianceMatrix,
                             vector<double> eigenValues,
                             vector< vector<double> > & eigenVectors);

    // ���������� ������ ������� ���������� (PC1)
    QLineF computePCA1(vector<double> means,
                       vector< vector<double> > covarianceMatrix,
                       vector<double> eigenValues);

    QLineF computePCA1(vector<QPointF> points,
                       vector<double> &means,
                       vector< vector<double> > &covarianceMatrix,
                       vector<double> &eigenValues);

    QLineF computePCA1(vector<QPointF> points);

    static int dimension;
};

#endif // PRINCOMP_H
