#pragma once
#include <QString>
#include <QByteArray>
#include <QDebug>

#include "ccFunction.h"

//A�㷨
LidarPointCLoudA* HistogramExFiltProcess(QString qsPath, int nInterval);

//B�㷨
LidarPointCLoudA* HistogramFiltProcess(QString qsPath, int nValue);

//C�㷨
LidarPointCLoudA* filterprocessing(QString qsPath);

//D�㷨
LidarPointCLoudA* mDBSCAN_filterprocessing(QString qsPath);

