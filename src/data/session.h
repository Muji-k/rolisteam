#ifndef SESSION_H
#define SESSION_H


#include <QList>
#include "chapter.h"
#include <QTime>
/**
  * @brief will store any ressources of a compagne
  *
  */
class Session : public QObject
{
    Q_OBJECT

public:
    Session();
    Session(const Session& m);
    ~Session();

    Chapter* addChapter(QString& name);
    CleverURI* addRessource(QString& uri, CleverURI::ContentType& type, Chapter* chapter);

    Chapter* getChapter(int index);

    QList<Chapter*>& chapterList();
    QList<CleverURI*>& getUnclassedList();


private:
    QList<Chapter*> m_chapterList;
    QList<CleverURI*> m_ressoucelist;
    QTime m_time;
    int m_gameCount;

    friend QDataStream& operator<<(QDataStream& os,const Session&);
    friend QDataStream& operator>>(QDataStream& is,Session&);
};
typedef QList<Session> SessionList;
Q_DECLARE_METATYPE(Session)
Q_DECLARE_METATYPE(SessionList)
#endif // SESSION_H
