#ifndef DEFINE_H
#define DEFINE_H

#define _DEBUG_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <math.h>
#include <errno.h>
#include <fcntl.h>
#include <assert.h>
#include <time.h>
#if defined(Q_OS_LINUX)
#include <unistd.h>
#endif

#ifdef __cplusplus
}
#endif

#include <QCoreApplication>
#include <QDebug>
#include <QFile>
#include <QDomDocument>
#include <QTextStream>
#include <QTextCodec>
#include <QFileInfo>
#include <QUrl>
#include <QString>
#include <QTime>

#define D_CMDSUBSPLIT  QString("#")

#if WINDOWS
#define D_QMLRESSHCEL      QString("file:///")
#elif LINUX
#define D_QMLRESSHCEL      QString("file://")
#else
#define D_QMLRESSHCEL      QString("")
#endif

#define D_BEEPFILE         QString("beep.wav")

#define D_MDPFILENAME      QString("device.xml")
#define D_THEMEFILENAME    QString("theme.xml")

#define D_LOGOFILE         QString("logo.png")
#define D_BOOTBGFILE       QString("bootbg.png")
#define D_USBLOGO         QString("usb.png")
#define D_WIFILOGO        QString("wifi.png")

#define D_THEMEDIR         QString("theme")
#define D_BUNDLEDIR        QString("bundle")

#define D_BOOTFILE          D_MDPNAME
#define D_BKBOOTFILE        QString("boot.default")
#define D_SCHEDULEMAP       D_MAPNAME
#define D_TIPSXML           QString("TIPS.xml")
#define D_LOGCONF           QString("LOG.conf")
#define D_LOGBKCONF         QString("LOG.default")
#define D_LOGFILE           QString("BST_%1.log")

#define D_SLOWTEXT           QString("slow")
#define D_FASTTEXT           QString("fast")
#define D_HIGHTEXT           QString("high")

#define        D_FILE_10M    10485760  //10Mb
#define        D_FILE_50M    52428800  //50Mb
#define        D_FILE_512M   536870912 //512GMb
#define        D_FILE_PER_BUFFER   10240 //10Kb

#define VAR_CAST   static_cast
#define DYNAMIC_CAST   static_cast
//输入输出函数定义
#define MAX_SCANF_COUNT 10
typedef char			( *pInputCharFun )  ( void );
typedef unsigned char	( *pInputByteFun )  ( void );
typedef size_t			( *pInputStrFun )   (  char *, size_t  );
typedef size_t			( *pInputMbyteFun )	(  unsigned char *, size_t  );
typedef bool			( *pOutputCharFun ) ( char );
typedef bool			( *pOutputByteFun ) ( unsigned char );
typedef size_t			( *pOutputStrFun )  ( char *, size_t );
typedef size_t			( *pOutputMbyteFun )( unsigned char *, size_t );


inline bool WriteLog(QString pLog)
{
    if(pLog.isEmpty())
        return false;
    QString tmpLogFile =  QString("history.log");
    QFile tmpFile(tmpLogFile);
    tmpFile.setPermissions(QFile::WriteOther);
    QIODevice::OpenMode tmpMode;
    //判断是否超出最大大小(10MByte)
    if(tmpFile.size() > 10000000)
        tmpMode = QIODevice::WriteOnly;
    else
        tmpMode = QIODevice::Append;
    if(!tmpFile.open(tmpMode))
    {
        qDebug() << "open log error!";
        return false;
    }
    if(!pLog.endsWith("\n"))
        pLog.append("\n");
    tmpFile.write(pLog.toLatin1());
    tmpFile.close();
#ifdef LINUX
    system("sync");
#endif
    return true;
}

//__PRETTY_FUNCTION__ 用于打印函数名
#ifdef _DEBUG_

#define IDE_DEBUG(x)         qDebug() << (QString("[%1,%2(),Line %3]-%4").arg(__FILE__).arg(__func__).arg(__LINE__).arg(QString(x)).toStdString().c_str())
#define IDE_TRACE()			 qDebug() << (QString("[%1,%2(),Line %3]-Trace").arg(__FILE__).arg(__func__).arg(__LINE__).toStdString().c_str())
#define IDE_TRACE_INT(x)	 qDebug() << (QString("[%1,%2(),Line %3]-%4=%5").arg(__FILE__).arg(__func__).arg(__LINE__).arg(#x).arg((int)x).toStdString().c_str())
#define IDE_TRACE_FLOAT(x)	 qDebug() << (QString("[%1,%2(),Line %3]-%4=%5").arg(__FILE__).arg(__func__).arg(__LINE__).arg(#x).arg((float)x).toStdString().c_str())
#define IDE_TRACE_STR(x)	 qDebug() << (QString("[%1,%2(),Line %3]-%4=%5").arg(__FILE__).arg(__func__).arg(__LINE__).arg(#x).arg(x).toStdString().c_str())
#define IDE_PRINTF(fmt, ...) qDebug() << ("[%s,%s(),Line %s]-"#fmt, __FILE__, __FUNCTION__, __LINE__, ##__VA_ARGS__)

#else

#define IDE_DEBUG(x)
#define IDE_TRACE()
#define IDE_TRACE_INT(x)
#define IDE_TRACE_FLOAT(x)
#define IDE_TRACE_STR(x)
#define IDE_PRINTF(fmt, ...)
#endif

#define GBKToUnicode(x)    QTextCodec::codecForName("GBK")->toUnicode(x)
#define GBKToUTF8(x)       QTextCodec::codecForName("UTF-8")->fromUnicode(GBKToUnicode(x)).data()

#include "QEventLoop"
#include <QTimer>

inline void QtSleep(unsigned int msec)
{
    QTime dieTime = QTime::currentTime().addMSecs(msec);
    while( QTime::currentTime() < dieTime )
    {
        QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
#if defined(Q_OS_WIN)
        QEventLoop eventloop;
        QTimer::singleShot(msec, &eventloop, SLOT(quit()));
        eventloop.exec();
#else
        usleep(1000);//sleep和usleep都已经obsolete，建议使用nanosleep代替
#endif
    }
}

#define IDE_LOGGER(x)        IDE_DEBUG(x);WriteLog(QString("[%1,%2,%3(),Line %4]-%5").arg(qApp->applicationName()).arg(__FILE__).arg(__func__).arg(__LINE__).arg(QString(x)))

#endif // DEFINE_H


