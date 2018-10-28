#include "Tushare.h"
#include "JsonParser.h"

using namespace std;



QString paramOfStockBasic()
{
	return "";
}

QString post(const QString& s)
{
	return "";
}

vector<shared_ptr<Stock>> Tushare::stockBasic()
{
	QString s = post(paramOfStockBasic());
	return JsonParser::parseStockBasic(s);
}
