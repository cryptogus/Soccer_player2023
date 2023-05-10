#include <cstdint>

class Player {
    
    int total_;
    
    int acceleration_;
    int sprint_;
    int dribble_;
    int shot_power_;
    int free_kick_;
    int pass_;
    int curve_;

    static int level_; 
  public:
    Player (int ac, int sp, int dri, int shot, int free, int pass, int cur)
    {
        acceleration_ = ac;
        sprint_ = sp;
        dribble_ = dri;
        shot_power_ = shot;
        free_kick_ = free;
        pass_ = pass;
        curve_ = cur;

        total_ = (ac + sp + dri + shot + free + pass + cur) / 7;
    }
};