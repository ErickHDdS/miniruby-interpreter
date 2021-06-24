#ifndef FOR_COMMAND_H
#define FOR_COMMAND_H

#include "Command.h"
#include "../expr/Expr.h"
#include "../value/IntegerValue.h"
#include "../expr/Variable.h"

class ForCommand:public Command{

public:
  ForCommand(int line, Variable* var, Expr* expr, Command* cmds);

  virtual ~ForCommand();

  virtual void execute();

private:
  Variable* m_var;
  Expr* m_expr;
  Command* m_cmds;
};

#endif