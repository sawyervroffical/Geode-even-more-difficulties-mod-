#include <Geode/Geode.hpp>
#include <Geode/modify/LevelSearchLayer.hpp>

using namespace geode::prelude;

class $modify(MyLevelSearchLayer, LevelSearchLayer) {
    bool init(int p0) {
        if (!LevelSearchLayer::init(p0)) return false;

        // Find the difficulty menu or search options layout
        auto filterMenu = this->getChildByID("difficulty-filter-menu");
        if (!filterMenu) {
            filterMenu = CCMenu::create();
            filterMenu->setID("custom-difficulty-menu");
            this->addChild(filterMenu);
        }

        // Add 'More' button to open custom difficulties popup
        auto moreBtnSprite = ButtonSprite::create("More", "goldFont.fnt", "GJ_button_01.png", 0.8f);
        auto moreBtn = CCMenuItemSpriteExtra::create(
            moreBtnSprite,
            this,
            menu_selector(MyLevelSearchLayer::onMoreDifficulties)
        );
        moreBtn->setID("more-difficulties-button");

        filterMenu->addChild(moreBtn);
        filterMenu->updateLayout();

        return true;
    }

    void onMoreDifficulties(CCObject* sender) {
        auto alert = FLAlertLayer::create(
            "Custom Difficulties",
            "Select custom difficulties:\n- Meh\n- Crazy\n- Meh Demon\n- Impossible Demon",
            "OK"
        );
        alert->show();
    }
};
