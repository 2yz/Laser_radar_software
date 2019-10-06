#pragma once
#include <QString>
#include <QByteArray>
#include <QDebug>

#include "ccFunction.h"

//K�����㷨
LidarPointCLoudA* KNNProcess(QStringList qsPath, int nInterval, size_t &nVecSize);

//�ƶ�����ͳ��ֱ��ͼ�㷨
LidarPointCLoudA* HistogramFiltProcess(QStringList qsPath, int nVale, size_t &nVecSize);

//�����ܶȾ����㷨
LidarPointCLoudA* mDBSCAN_filterprocessing(QStringList qsPath, int nVale, size_t &nVecSize);

//��ȥ���㷨
LidarPointCLoudA* Unfilterprocessing(QStringList qsPath, size_t &nVecSize);

//д��Ԥ�����ļ�
int WritePreProcessingFile(QString qsOutPath, LidarPointCLoudA* &PtA, size_t nVecSize);
