#ifndef GAME_CMD_DISORIENT_H
#define GAME_CMD_DISORIENT_H

///////////////////////////////////////////////////////////////////////////////

class Disorient : public AbstractBuiltin
{
protected:
    PostAction doExecute( Context& );

public:
    Disorient();
    ~Disorient();
};

///////////////////////////////////////////////////////////////////////////////

#endif // GAME_CMD_DISORIENT_H