#pragma once
#include <QString>
#include <QByteArray>
#include <QDebug>

#include "ccFunction.h"

//K�����㷨
LidarPointCLoudA* KNNProcess(QStringList qsPath, int nInterval);

//�ƶ�����ͳ��ֱ��ͼ�㷨
LidarPointCLoudA* HistogramFiltProcess(QStringList qsPath, int nVale);

//�����ܶȾ����㷨
LidarPointCLoudA* mDBSCAN_filterprocessing(QStringList qsPath, int nVale);

//��ȥ���㷨
LidarPointCLoudA* Unfilterprocessing(QStringList qsPath);


