#include "ast.h"
#include <iostream>

using namespace std;

// ------------------ Exp ------------------
Exp::~Exp() {}

string Exp::binopToChar(BinaryOp op) {
    switch (op) {
        case PLUS_OP:  return "+";
        case MINUS_OP: return "-";
        case MUL_OP:   return "*";
        case DIV_OP:   return "/";
        case POW_OP:   return "**";
        case AND_OP:   return "and";
        case OR_OP:    return "or";
        default:       return "?";
    }
}

// ------------------ BinaryExp ------------------
BinaryExp::BinaryExp(Exp* l, Exp* r, BinaryOp o)
    : left(l), right(r), op(o) {}

    
BinaryExp::~BinaryExp() {
    delete left;
    delete right;
}



// ------------------ NumberExp ------------------
NumberExp::NumberExp(int v) : value(v) {}

NumberExp::~NumberExp() {}


// ------------------ SqrtExp ------------------
SqrtExp::SqrtExp(Exp* v) : value(v) {}

SqrtExp::~SqrtExp() {}

NotExp::NotExp(Exp* expComp, bool isNot) : expComp(e), isNot(isNot) {}
~NotExp::NotExp() {}

//
Programa::Programa() {}
Programa::~Programa(){}

FcallExp::FcallExp(){}
FcallExp::~FcallExp(){}

Fundec::Fundec(){}
Fundec::~Fundec(){}

ReturnStm::ReturnStm(){}
ReturnStm::~ReturnStm(){}

Body::Body() {}
Body::~Body(){}

Stmt::~Stmt(){}

PrintStmt::PrintStmt(Exp* e) {
    exp=e;
}

PrintStmt::~PrintStmt() {

}

IfStmt::IfStmt(Exp* e){
    condicion = e;
}

IfStmt::~IfStmt(){
}

VarDec::VarDec(){
}

VarDec::~VarDec(){
}


WhileStmt::WhileStmt(Exp* e){
    condicion = e;
}

WhileStmt::~WhileStmt(){
}

ForStmt::ForStmt(string id, Exp* i, Exp* f){
    iterador = id;
    inicio = i;
    fin = f;
}

ForStmt::~ForStmt(){
}


AsignStmt::AsignStmt(string texto, Exp * e) {
    variable=  texto;
    exp = e;
}

AsignStmt::~AsignStmt() {

}

BreakStmt::BreakStmt() {}
BreakStmt::~BreakStmt() {}

IncrementStmt::IncrementStmt(string variable) : variable(variable){}
IncrementStmt::~IncrementStmt() {}

// ------------------ NumberExp ------------------
IdExp::IdExp(string v) : value(v) {}

IdExp::~IdExp() {}

ArrayAccessExp::ArrayAccessExp(string v, Exp* i) : id(v), index(i) {}

ArrayAccessExp::~ArrayAccessExp() { delete index; }

ArrayAssignStmt::ArrayAssignStmt(string v, Exp* idx, Exp* val) : id(v), index(idx), value(val) {}

ArrayAssignStmt::~ArrayAssignStmt() { delete index; delete value; }

