/** \file
 *  This C header file was generated by $ANTLR version 3.4
 *
 *     -  From the grammar source file : SQL.g
 *     -                            On : 2011-12-07 14:45:09
 *     -                 for the lexer : SQLLexerLexer
 *
 * Editing it, at least manually, is not wise.
 *
 * C language generator and runtime by Jim Idle, jimi|hereisanat|idle|dotgoeshere|ws.
 *
 *
 * The lexer 
SQLLexer

has the callable functions (rules) shown below,
 * which will invoke the code for the associated rule in the source grammar
 * assuming that the input stream is pointing to a token/text stream that could begin
 * this rule.
 *
 * For instance if you call the first (topmost) rule in a parser grammar, you will
 * get the results of a full parse, but calling a rule half way through the grammar will
 * allow you to pass part of a full token stream to the parser, such as for syntax checking
 * in editors and so on.
 *
 * The parser entry points are called indirectly (by function pointer to function) via
 * a parser context typedef pSQLLexer, which is returned from a call to SQLLexerNew().
 *
 * As this is a generated lexer, it is unlikely you will call it 'manually'. However
 * the methods are provided anyway.
 *
 * The methods in pSQLLexer are  as follows:
 *
 *  - 
 void
      pSQLLexer->T__92(pSQLLexer)
 *  - 
 void
      pSQLLexer->T__93(pSQLLexer)
 *  - 
 void
      pSQLLexer->T__94(pSQLLexer)
 *  - 
 void
      pSQLLexer->T__95(pSQLLexer)
 *  - 
 void
      pSQLLexer->T__96(pSQLLexer)
 *  - 
 void
      pSQLLexer->T__97(pSQLLexer)
 *  - 
 void
      pSQLLexer->T__98(pSQLLexer)
 *  - 
 void
      pSQLLexer->T__99(pSQLLexer)
 *  - 
 void
      pSQLLexer->ASTERISK(pSQLLexer)
 *  - 
 void
      pSQLLexer->EQ(pSQLLexer)
 *  - 
 void
      pSQLLexer->OP_LT(pSQLLexer)
 *  - 
 void
      pSQLLexer->LE(pSQLLexer)
 *  - 
 void
      pSQLLexer->GT(pSQLLexer)
 *  - 
 void
      pSQLLexer->GE(pSQLLexer)
 *  - 
 void
      pSQLLexer->NOTEQ(pSQLLexer)
 *  - 
 void
      pSQLLexer->AND(pSQLLexer)
 *  - 
 void
      pSQLLexer->OR(pSQLLexer)
 *  - 
 void
      pSQLLexer->COMMA(pSQLLexer)
 *  - 
 void
      pSQLLexer->SEMICOLON(pSQLLexer)
 *  - 
 void
      pSQLLexer->A(pSQLLexer)
 *  - 
 void
      pSQLLexer->B(pSQLLexer)
 *  - 
 void
      pSQLLexer->C(pSQLLexer)
 *  - 
 void
      pSQLLexer->D(pSQLLexer)
 *  - 
 void
      pSQLLexer->E(pSQLLexer)
 *  - 
 void
      pSQLLexer->F(pSQLLexer)
 *  - 
 void
      pSQLLexer->G(pSQLLexer)
 *  - 
 void
      pSQLLexer->H(pSQLLexer)
 *  - 
 void
      pSQLLexer->I(pSQLLexer)
 *  - 
 void
      pSQLLexer->J(pSQLLexer)
 *  - 
 void
      pSQLLexer->K(pSQLLexer)
 *  - 
 void
      pSQLLexer->L(pSQLLexer)
 *  - 
 void
      pSQLLexer->M(pSQLLexer)
 *  - 
 void
      pSQLLexer->N(pSQLLexer)
 *  - 
 void
      pSQLLexer->O(pSQLLexer)
 *  - 
 void
      pSQLLexer->P(pSQLLexer)
 *  - 
 void
      pSQLLexer->Q(pSQLLexer)
 *  - 
 void
      pSQLLexer->R(pSQLLexer)
 *  - 
 void
      pSQLLexer->S(pSQLLexer)
 *  - 
 void
      pSQLLexer->T(pSQLLexer)
 *  - 
 void
      pSQLLexer->U(pSQLLexer)
 *  - 
 void
      pSQLLexer->V(pSQLLexer)
 *  - 
 void
      pSQLLexer->W(pSQLLexer)
 *  - 
 void
      pSQLLexer->X(pSQLLexer)
 *  - 
 void
      pSQLLexer->Y(pSQLLexer)
 *  - 
 void
      pSQLLexer->Z(pSQLLexer)
 *  - 
 void
      pSQLLexer->ALL(pSQLLexer)
 *  - 
 void
      pSQLLexer->ANCESTOR(pSQLLexer)
 *  - 
 void
      pSQLLexer->AS(pSQLLexer)
 *  - 
 void
      pSQLLexer->ASC(pSQLLexer)
 *  - 
 void
      pSQLLexer->ASYNC(pSQLLexer)
 *  - 
 void
      pSQLLexer->BY(pSQLLexer)
 *  - 
 void
      pSQLLexer->CREATE(pSQLLexer)
 *  - 
 void
      pSQLLexer->COLLECTION(pSQLLexer)
 *  - 
 void
      pSQLLexer->CURRENT_DATE(pSQLLexer)
 *  - 
 void
      pSQLLexer->CURRENT_TIME(pSQLLexer)
 *  - 
 void
      pSQLLexer->CURRENT_TIMESTAMP(pSQLLexer)
 *  - 
 void
      pSQLLexer->DESC(pSQLLexer)
 *  - 
 void
      pSQLLexer->DELETE(pSQLLexer)
 *  - 
 void
      pSQLLexer->DISTINCT(pSQLLexer)
 *  - 
 void
      pSQLLexer->DROP(pSQLLexer)
 *  - 
 void
      pSQLLexer->EACH(pSQLLexer)
 *  - 
 void
      pSQLLexer->EXCEPT(pSQLLexer)
 *  - 
 void
      pSQLLexer->FLATTEN(pSQLLexer)
 *  - 
 void
      pSQLLexer->FROM(pSQLLexer)
 *  - 
 void
      pSQLLexer->GROUP(pSQLLexer)
 *  - 
 void
      pSQLLexer->HAVING(pSQLLexer)
 *  - 
 void
      pSQLLexer->IN(pSQLLexer)
 *  - 
 void
      pSQLLexer->COLLECTION_INDEX(pSQLLexer)
 *  - 
 void
      pSQLLexer->INSERT(pSQLLexer)
 *  - 
 void
      pSQLLexer->INTERSECT(pSQLLexer)
 *  - 
 void
      pSQLLexer->INTO(pSQLLexer)
 *  - 
 void
      pSQLLexer->IS(pSQLLexer)
 *  - 
 void
      pSQLLexer->LIMIT(pSQLLexer)
 *  - 
 void
      pSQLLexer->NIL(pSQLLexer)
 *  - 
 void
      pSQLLexer->OFFSET(pSQLLexer)
 *  - 
 void
      pSQLLexer->OPTIONS(pSQLLexer)
 *  - 
 void
      pSQLLexer->ORDER(pSQLLexer)
 *  - 
 void
      pSQLLexer->SELECT(pSQLLexer)
 *  - 
 void
      pSQLLexer->SET(pSQLLexer)
 *  - 
 void
      pSQLLexer->SYNC(pSQLLexer)
 *  - 
 void
      pSQLLexer->UNION(pSQLLexer)
 *  - 
 void
      pSQLLexer->UPDATE(pSQLLexer)
 *  - 
 void
      pSQLLexer->WHERE(pSQLLexer)
 *  - 
 void
      pSQLLexer->VALUE(pSQLLexer)
 *  - 
 void
      pSQLLexer->WS(pSQLLexer)
 *  - 
 void
      pSQLLexer->ID(pSQLLexer)
 *  - 
 void
      pSQLLexer->NUMBER(pSQLLexer)
 *  - 
 void
      pSQLLexer->FLOAT(pSQLLexer)
 *  - 
 void
      pSQLLexer->STRING(pSQLLexer)
 *  - 
 void
      pSQLLexer->EscapeSequence(pSQLLexer)
 *  - 
 void
      pSQLLexer->CHAR(pSQLLexer)
 *  - 
 void
      pSQLLexer->EXPONENT(pSQLLexer)
 *  - 
 void
      pSQLLexer->HEX_DIGIT(pSQLLexer)
 *  - 
 void
      pSQLLexer->ESC_SEQ(pSQLLexer)
 *  - 
 void
      pSQLLexer->OCTAL_ESC(pSQLLexer)
 *  - 
 void
      pSQLLexer->UNICODE_ESC(pSQLLexer)
 *  - 
 void
      pSQLLexer->Tokens(pSQLLexer)
 *
 * The return type for any particular rule is of course determined by the source
 * grammar file.
 */
// [The "BSD license"]
// Copyright (c) 2005-2009 Jim Idle, Temporal Wave LLC
// http://www.temporal-wave.com
// http://www.linkedin.com/in/jimidle
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
// 3. The name of the author may not be used to endorse or promote products
//    derived from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
// OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
// NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
// THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef	_SQLLexer_H
#define _SQLLexer_H
/* =============================================================================
 * Standard antlr3 C runtime definitions
 */
#include    <antlr3.h>

/* End of standard antlr 3 runtime definitions
 * =============================================================================
 */



#ifdef __cplusplus
extern "C" {
#endif

// Forward declare the context typedef so that we can use it before it is
// properly defined. Delegators and delegates (from import statements) are
// interdependent and their context structures contain pointers to each other
// C only allows such things to be declared if you pre-declare the typedef.
//
typedef struct SQLLexer_Ctx_struct SQLLexer, * pSQLLexer;



#ifdef	ANTLR3_WINDOWS
// Disable: Unreferenced parameter,							- Rules with parameters that are not used
//          constant conditional,							- ANTLR realizes that a prediction is always true (synpred usually)
//          initialized but unused variable					- tree rewrite variables declared but not needed
//          Unreferenced local variable						- lexer rule declares but does not always use _type
//          potentially unitialized variable used			- retval always returned from a rule
//			unreferenced local function has been removed	- susually getTokenNames or freeScope, they can go without warnigns
//
// These are only really displayed at warning level /W4 but that is the code ideal I am aiming at
// and the codegen must generate some of these warnings by necessity, apart from 4100, which is
// usually generated when a parser rule is given a parameter that it does not use. Mostly though
// this is a matter of orthogonality hence I disable that one.
//
#pragma warning( disable : 4100 )
#pragma warning( disable : 4101 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4505 )
#pragma warning( disable : 4701 )
#endif

/** Context tracking structure for 
SQLLexer

 */
struct SQLLexer_Ctx_struct
{
    /** Built in ANTLR3 context tracker contains all the generic elements
     *  required for context tracking.
     */
    pANTLR3_LEXER    pLexer;

     void
     (*mT__92)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mT__93)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mT__94)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mT__95)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mT__96)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mT__97)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mT__98)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mT__99)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mASTERISK)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mEQ)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mOP_LT)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mLE)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mGT)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mGE)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mNOTEQ)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mAND)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mOR)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mCOMMA)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mSEMICOLON)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mA)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mB)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mC)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mD)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mE)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mF)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mG)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mH)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mI)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mJ)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mK)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mL)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mM)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mN)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mO)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mP)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mQ)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mR)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mS)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mT)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mU)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mV)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mW)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mX)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mY)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mZ)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mALL)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mANCESTOR)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mAS)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mASC)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mASYNC)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mBY)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mCREATE)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mCOLLECTION)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mCURRENT_DATE)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mCURRENT_TIME)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mCURRENT_TIMESTAMP)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mDESC)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mDELETE)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mDISTINCT)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mDROP)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mEACH)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mEXCEPT)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mFLATTEN)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mFROM)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mGROUP)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mHAVING)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mIN)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mCOLLECTION_INDEX)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mINSERT)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mINTERSECT)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mINTO)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mIS)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mLIMIT)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mNIL)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mOFFSET)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mOPTIONS)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mORDER)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mSELECT)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mSET)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mSYNC)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mUNION)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mUPDATE)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mWHERE)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mVALUE)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mWS)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mID)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mNUMBER)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mFLOAT)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mSTRING)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mEscapeSequence)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mCHAR)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mEXPONENT)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mHEX_DIGIT)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mESC_SEQ)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mOCTAL_ESC)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mUNICODE_ESC)	(struct SQLLexer_Ctx_struct * ctx);

     void
     (*mTokens)	(struct SQLLexer_Ctx_struct * ctx);
    const char * (*getGrammarFileName)();
    void            (*reset)  (struct SQLLexer_Ctx_struct * ctx);
    void	    (*free)   (struct SQLLexer_Ctx_struct * ctx);
};

// Function protoypes for the constructor functions that external translation units
// such as delegators and delegates may wish to call.
//
ANTLR3_API pSQLLexer SQLLexerNew         (
pANTLR3_INPUT_STREAM
 instream);
ANTLR3_API pSQLLexer SQLLexerNewSSD      (
pANTLR3_INPUT_STREAM
 instream, pANTLR3_RECOGNIZER_SHARED_STATE state);

/** Symbolic definitions of all the tokens that the 
lexer
 will work with.
 * \{
 *
 * Antlr will define EOF, but we can't use that as it it is too common in
 * in C header files and that would be confusing. There is no way to filter this out at the moment
 * so we just undef it here for now. That isn't the value we get back from C recognizers
 * anyway. We are looking for ANTLR3_TOKEN_EOF.
 */
#ifdef	EOF
#undef	EOF
#endif
#ifdef	Tokens
#undef	Tokens
#endif
#define EOF      -1
#define T__92      92
#define T__93      93
#define T__94      94
#define T__95      95
#define T__96      96
#define T__97      97
#define T__98      98
#define T__99      99
#define A      4
#define ALL      5
#define ANCESTOR      6
#define AND      7
#define AS      8
#define ASC      9
#define ASTERISK      10
#define ASYNC      11
#define B      12
#define BY      13
#define C      14
#define CHAR      15
#define COLLECTION      16
#define COLLECTION_INDEX      17
#define COMMA      18
#define CREATE      19
#define CURRENT_DATE      20
#define CURRENT_TIME      21
#define CURRENT_TIMESTAMP      22
#define D      23
#define DELETE      24
#define DESC      25
#define DISTINCT      26
#define DROP      27
#define E      28
#define EACH      29
#define EQ      30
#define ESC_SEQ      31
#define EXCEPT      32
#define EXPONENT      33
#define EscapeSequence      34
#define F      35
#define FLATTEN      36
#define FLOAT      37
#define FROM      38
#define G      39
#define GE      40
#define GROUP      41
#define GT      42
#define H      43
#define HAVING      44
#define HEX_DIGIT      45
#define I      46
#define ID      47
#define IN      48
#define INSERT      49
#define INTERSECT      50
#define INTO      51
#define IS      52
#define J      53
#define K      54
#define L      55
#define LE      56
#define LIMIT      57
#define M      58
#define N      59
#define NIL      60
#define NOTEQ      61
#define NUMBER      62
#define O      63
#define OCTAL_ESC      64
#define OFFSET      65
#define OPTIONS      66
#define OP_LT      67
#define OR      68
#define ORDER      69
#define P      70
#define Q      71
#define R      72
#define S      73
#define SELECT      74
#define SEMICOLON      75
#define SET      76
#define STRING      77
#define SYNC      78
#define T      79
#define U      80
#define UNICODE_ESC      81
#define UNION      82
#define UPDATE      83
#define V      84
#define VALUE      85
#define W      86
#define WHERE      87
#define WS      88
#define X      89
#define Y      90
#define Z      91
#ifdef	EOF
#undef	EOF
#define	EOF	ANTLR3_TOKEN_EOF
#endif

#ifndef TOKENSOURCE
#define TOKENSOURCE(lxr) lxr->pLexer->rec->state->tokSource
#endif

/* End of token definitions for SQLLexer
 * =============================================================================
 */
/** } */

#ifdef __cplusplus
}
#endif

#endif

/* END - Note:Keep extra line feed to satisfy UNIX systems */