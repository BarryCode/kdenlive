/*
Copyright (C) 2012  Till Theato <root@ttill.de>
This file is part of kdenlive. See www.kdenlive.org.

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.
*/

#ifndef ABSTRACTPARAMETERDESCRIPTION_H
#define ABSTRACTPARAMETERDESCRIPTION_H

#include <QString>

class QDomElement;
class QLocale;

namespace Mlt
{
    class Properties;
}


// make template to be able to store default?
class AbstractParameterDescription
{
public:
    AbstractParameterDescription(QDomElement parameter, QLocale locale);
    AbstractParameterDescription(Mlt::Properties &properties, QLocale locale);
    virtual ~AbstractParameterDescription();

    QString getName() const;
    QString getDisplayName() const;
    QString getComment() const;
    bool isValid() const;

protected:
    bool m_valid;

private:
    QString m_name;
    QString m_displayName;
    QString m_displayNameOrig;
    QString m_comment;
    QString m_commentOrig;
};

#endif
