#include <string>

class Wrestler{

    std::string stage_name;
    std::string finisher;
    bool is_heel;

    public:
        Wrestler(std::string set_stage_name, std::string set_finisher, bool set_is_heel);
        std::string get_stage_name();
        std::string get_finisher();
        bool get_is_heel();

        ~Wrestler();

};