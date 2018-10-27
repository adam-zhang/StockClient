#ifndef __TUSHARE__H
#define __TUSHARE__H

#include "Singleton.h"
#include <QString>

class Tushare : public Singleton<Tushare>
{
	public:
		//Tushare();
		//~Tushare();
	private:
		const QString token()
		{
			return "4f33338f39b4e983b374ab0266bc1b723faf320c36c658ab6c25543d";
		}	

	public:

	

};
#endif//__TUSHARE__H
