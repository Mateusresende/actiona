/*
	Actionaz
	Copyright (C) 2008-2010 Jonathan Mercier-Ganady

	Actionaz is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	Actionaz is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program. If not, see <http://www.gnu.org/licenses/>.

	Contact : jmgr@jmgr.info
*/

#ifndef CODECONSOLE_H
#define CODECONSOLE_H

#include "executer_global.h"

#include <QObject>
#include <QScriptValue>

class QScriptContext;
class QScriptEngine;

namespace LibExecuter
{
	class EXECUTERSHARED_EXPORT CodeConsole : public QObject
	{
		Q_OBJECT
		Q_CLASSINFO("type", "CodeClass")

	public:
		static QScriptValue constructor(QScriptContext *context, QScriptEngine *engine);
				
		static QScriptValue print(QScriptContext *context, QScriptEngine *engine);
		static QScriptValue printWarning(QScriptContext *context, QScriptEngine *engine);
		static QScriptValue printError(QScriptContext *context, QScriptEngine *engine);
	};
}

#endif // CODECONSOLE_H