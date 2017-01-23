#ifndef ROLISTEAMDAEMON_H
#define ROLISTEAMDAEMON_H

#include <QObject>

class RolisteamDaemon : public QObject
{
    Q_OBJECT
public:
    explicit RolisteamDaemon(QObject *parent = 0);


signals:

public slots:
    void readConfigFile(QString);
    void createEmptyConfigFile(QString);

private:
    int m_port;

};

#endif // ROLISTEAMDAEMON_H