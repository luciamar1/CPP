#include "app.h"

namespace utils
{
    bool str_numeric(const std::string& str)
    {
        for (size_t iter = 0; str[iter]; iter ++)
        {
            if(!std::isdigit(str[iter]))
                return(false);
        }
        return(true);
    }
}