#ifndef OXMLDOCXTEXT_H
#define OXMLDOCXTEXT_H

#include "xmlchemy.h"

namespace Docx {
class CT_P : public OxmlElementBase
{
public:
    CT_P(const QDomDocument &dom);

    virtual ~CT_P();

private:

};


class CT_R : public OxmlElementBase
{
public:
    CT_R(const QDomDocument &dom);

    virtual ~CT_R();

private:
};


class CT_RPr : public OxmlElementBase
{
public:
    CT_RPr(const QDomDocument &dom);
    void setStyle(const QString &style);
    virtual ~CT_RPr();

private:

};

}

#endif // TEXT_H
