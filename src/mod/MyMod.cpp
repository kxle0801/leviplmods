#include "mod/MyMod.h"

#include "ll/api/mod/RegisterHelper.h"

namespace better_suicide {

BetterSuicide& BetterSuicide::getInstance() {
    static MyMod instance;
    return instance;
}

bool BetterSuicide::load() {
    getSelf().getLogger().debug("Loading...");
    // Code for loading the mod goes here.
    return true;
}

bool BetterSuicide::enable() {
    getSelf().getLogger().debug("Enabling...");
    // Code for enabling the mod goes here.
    return true;
}

bool BetterSuicide::disable() {
    getSelf().getLogger().debug("Disabling...");
    // Code for disabling the mod goes here.
    return true;
}

} // namespace my_mod

LL_REGISTER_MOD(better_suicide::BetterSuicide, better_suicide::BetterSuicide::getInstance());
