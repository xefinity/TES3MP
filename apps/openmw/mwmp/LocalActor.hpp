#ifndef OPENMW_LOCALACTOR_HPP
#define OPENMW_LOCALACTOR_HPP

#include <components/openmw-mp/Base/BaseActor.hpp>
#include "../mwworld/manualref.hpp"

namespace mwmp
{
    class LocalActor : public BaseActor
    {
    public:

        LocalActor();
        virtual ~LocalActor();

        void update(bool forceUpdate);

        void updatePosition(bool forceUpdate);
        void updateDrawState();

        MWWorld::Ptr getPtr();
        void setPtr(const MWWorld::Ptr& newPtr);

    private:
        MWWorld::Ptr ptr;

        bool posWasChanged;
    };
}

#endif //OPENMW_LOCALACTOR_HPP
