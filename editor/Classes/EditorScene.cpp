#include "EditorScene.h"
#include "ui/CocosGUI.h"
#include <iostream>

USING_NS_CC;

Scene* EditorScene::createScene()
{
    return EditorScene::create();
}


// on "init" you need to initialize your instance
bool EditorScene::init()
{
    auto visibleSize = Director::getInstance()->getVisibleSize();
    auto editBox = ui::EditBox::create(visibleSize, "Black.jpg");
    auto origin = Director::getInstance()->getVisibleOrigin();
    editBox->setPosition(Vec2(origin.x + visibleSize.width/2,
                                origin.y + visibleSize.height/2));
    editBox->setFontSize(25);
    editBox->setInsertionPointColor(Color4B::WHITE);
    editBox->setFocusEnabled(true);
    
    this->addChild(editBox);

    auto textField = ui::TextField::create("input words here","fonts/arial.ttf",30);
    textField->setPosition(Vec2(origin.x + visibleSize.width/2,
                                origin.y + visibleSize.height/2));
    textField->setContentSize(visibleSize);
    textField->setCursorChar('|');
    textField->setCursorEnabled(true);
//    this->addChild(textField, 1);
    log("x=%f y=%f width:%f height:%f",origin.x,origin.y,visibleSize.width,visibleSize.height);

    // auto tfTTF = TextFieldTTF::textFieldWithPlaceHolder("input here","Arial",30);
    // tfTTF->setPosition(Vec2(origin.x + visibleSize.width/4,
    //                             origin.y + visibleSize.height/4));
    // tfTTF->setCursorChar('|');
    // tfTTF->setCursorEnabled(true);
    // this->addChild(tfTTF, 1);


    return true;
}
