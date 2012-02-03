/******************************************************************
*
* uSQL for C++
*
* Copyright (C) Satoshi Konno 2012
*
* This is licensed under BSD-style license, see file COPYING.
*
******************************************************************/

#ifndef CG_USQL_SQLPARSER_H
#define CG_USQL_SQLPARSER_H

#include <string>
#include <vector>
#include <stack>

#include <cybergarage/sql/SQLError.h>
#include <cybergarage/sql/SQLStatement.h>
#include <cybergarage/sql/SQLNode.h>
#include <cybergarage/sql/SQLNodes.h>

namespace uSQL {

class SQLParser {

private:

    SQLStatementList statements;
    
public:

	SQLParser();
    
    virtual ~SQLParser();

	virtual bool parse(const std::string &queryString);
    
    void setStatementType(int type);
    
    void addStatement(SQLStatement *stmt)
    {
        statements.push_back(stmt);
    }

    SQLStatement *getStatement()
    {
        if (statements.size() == 0)
            return NULL;
        return statements.at(0);
    }

    SQLStatementList *getStatements()
    {
        return &statements;
    }

    
private:

    void clear();

};

}

#endif
