#ifndef GAME_CMD_BANUSER_H
#define GAME_CMD_BANUSER_H

///////////////////////////////////////////////////////////////////////////////

class BanUser : public AbstractBuiltin
{
protected:
    PostAction doExecute( Context& );

public:
    BanUser();
    ~BanUser();
};

///////////////////////////////////////////////////////////////////////////////

#endif // GAME_CMD_BANUSER_H