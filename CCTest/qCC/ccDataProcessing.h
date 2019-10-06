#pragma once
#include <QString>
#include <QByteArray>
#include <QDebug>

#include "ccFunction.h"

//�㷨
LidarPointCLoudA* HistogramExFiltProcess(QStringList qsPath, int nInterval);

//B�㷨
LidarPointCLoudA* HistogramFiltProcess(QStringList qsPath, int nVale);

//C�㷨
LidarPointCLoudA* filterprocessing(QStringList qsPath);

//D�㷨
LidarPointCLoudA* mDBSCAN_filterprocessing(QStringList qsPath, int nVale);

