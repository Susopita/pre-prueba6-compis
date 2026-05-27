#ifndef TOKEN_H
#define TOKEN_H

#include <string>
#include <ostream>

using namespace std;

class Token {
public:
    // Tipos de token
    enum Type {
        PLUS,    // +
        MINUS,   // -
        MUL,     // *
        DIV,     // /
        POW,     // **
        LPAREN,  // (
        RPAREN,  // )
        GET,     // <=
        GT,      // <
        EQUAL,   // ==
        LBRACKET,// [
        RBRACKET,// ]
        INCREMENT, // ++
        PRINT,
        COMA,    // ,
        FUN,
        ENDFUN,
        RETURN,
        DOSPUNTOS,// :
        TRUE,
        FALSE,
        SEMICOL, // ;
        IF,
        VAR,     // Var
        ELSE,
        AND,
        OR, 
        NOT,
        WHILE,
        DO,
        ENDWHILE,
        FOR,
        TO,
        BREAK,
        ENDFOR,
        THEN,
        ENDIF,
        ASSIGN,  // =
        SQRT,    // sqrt
        NUM,     // Número
        ERR,     // Error
        ID,      // ID
        END      // Fin de entrada
    };

    // Atributos
    Type type;
    string text;

    // Constructores
    Token(Type type);
    Token(Type type, char c);
    Token(Type type, const string& source, int first, int last);

    // Sobrecarga de operadores de salida
    friend ostream& operator<<(ostream& outs, const Token& tok);
    friend ostream& operator<<(ostream& outs, const Token* tok);
};

#endif // TOKEN_H
