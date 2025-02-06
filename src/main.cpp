#include <Geode/Geode.hpp>
#include <Geode/modify/EditorUI.hpp>
using namespace geode::prelude;

// INSPIRED BY THE ORIGINAL DISCONTINUED MOD
// the code did not change from v1.0.0 (unreleased)

class $modify(EditorUI){
    GameObject* createObject(int p0, CCPoint p1) {
        GameObject* ret = EditorUI::createObject(p0, p1);
        bool enabled = Mod::get()->getSettingValue<bool>("enabled");
        if (enabled){
            ret->m_hasNoGlow = true;
        };
        return ret;
    }
};
