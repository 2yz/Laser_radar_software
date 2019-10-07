#pragma once
#include <QString>
#include <QByteArray>
#include <QDebug>

#include "ccFunction.h"

//K�����㷨
LidarPointCLoudA* KNNProcess(QStringList qsPath, int nInterval, size_t &nVecSize, int nChannelNum);

//�ƶ�����ͳ��ֱ��ͼ�㷨
LidarPointCLoudA* HistogramFiltProcess(QStringList qsPath, int nVale, size_t &nVecSize, int nChannelNum);

//�����ܶȾ����㷨
LidarPointCLoudA* mDBSCAN_filterprocessing(QStringList qsPath, int nVale, size_t &nVecSize, int nChannelNum);

//��ȥ���㷨
LidarPointCLoudA* Unfilterprocessing(QStringList qsPath, size_t &nVecSize, int nChannelNum);

//д��Ԥ�����ļ�
int WritePreProcessingFile(QString qsOutPath, LidarPointCLoudA* PtA, size_t nVecSize);

//������ʱ��ŵĶ������ļ�
LidarPointCLoudA* ReadPreProcessingFile(QString qaInPath, int &nFileLoop);

LidarPointCLoudA* CalBtXYZprocess(LidarPointCLoudA* &PtA, int nFileLoop);