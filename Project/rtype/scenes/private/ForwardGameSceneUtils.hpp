//
// Created by milerius on 28/01/18.
//

#ifndef RTYPE_FORWARDGAMESCENEUTILS_HPP
#define RTYPE_FORWARDGAMESCENEUTILS_HPP

#include <utils/Enums.hpp>

namespace ig
{
    ENUM(Anim,
         BheetLv1AttackTopDown,
         BheetLv1AttackTurnUp,
         BheetLv1AttackTurnDown,
         BheetLv1AttackRedressUp,
         BheetLv1AttackRedressDown,
         BheetLv1AttackRollUp,
         BheetLv1AttackRollDown,
         KooyLv1AttackTopDown,
         KooyLv1AttackTurnUp,
         KooyLv1AttackTurnDown,
         KooyLv1AttackRedressUp,
         KooyLv1AttackRedressDown,
         KooyLv1AttackRollUp,
         KooyLv1AttackRollDown,
         MaulLv1TankTopDown,
         MaulLv1TankTurnUp,
         MaulLv1TankTurnDown,
         MaulLv1TankRedressUp,
         MaulLv1TankRedressDown,
         MaulLv1TankRollUp,
         MaulLv1TankRollDown
    );

    ENUM(Sprite,
         BheetLv1AttackTopDown,
         BheetLv1AttackTurnUp,
         BheetLv1AttackTurnDown,
         BheetLv1AttackRedressUp,
         BheetLv1AttackRedressDown,
         BheetLv1AttackRollUp,
         BheetLv1AttackRollDown,
         KooyLv1AttackTopDown,
         KooyLv1AttackTurnUp,
         KooyLv1AttackTurnDown,
         KooyLv1AttackRedressUp,
         KooyLv1AttackRedressDown,
         KooyLv1AttackRollUp,
         KooyLv1AttackRollDown,
         MaulLv1TankTopDown,
         MaulLv1TankTurnUp,
         MaulLv1TankTurnDown,
         MaulLv1TankRedressUp,
         MaulLv1TankRedressDown,
         MaulLv1TankRollUp,
         MaulLv1TankRollDown,
         Boss,
         Minion1,
         Minion2,
         Minion3,
         Minion4,
         Minion5,
         Bullet,
         BlueFog1,
         BlueFog2,
         BlueFog3,
         RedFog1,
         RedFog2,
         GreenFog1,
         GreenFog2,
         WhiteStar1,
         WhiteStar2,
         GreenStar1,
         GreenStar2,
         GreenStar3,
         GreenStar4,
         GreenStar5,
         BlueStar1,
         BlueStar2,
         BlueStar3,
         BlueStar4,
         BlueStar5,
         BlueStar6,
         BlueStar7,
         RedStar1,
         RedStar2,
         RedStar3,
         RedStar4,
         RedStar5,
         RedStar6,
         RedStar7,
         BluePlanet1,
         BluePlanet2,
         BluePlanet3,
         BluePlanet4,
         BluePlanet5,
         BluePlanet6,
         BluePlanet7,
         BluePlanet8,
         BluePlanet9,
         BluePlanet10,
         BluePlanet11,
         BluePlanet12,
         BluePlanet13,
         BluePlanet14,
         BluePlanet15,
         BluePlanet16,
         BluePlanet17,
         BluePlanet18,
         BluePlanet19,
         RedPlanet1,
         RedPlanet2,
         RedPlanet3,
         RedPlanet4,
         RedPlanet5,
         RedPlanet6,
         RedPlanet7,
         RedPlanet8,
         RedPlanet9,
         RedPlanet10,
         RedPlanet11,
         RedPlanet12,
         RedPlanet13,
         RedPlanet14,
         RedPlanet15,
         RedPlanet16,
         RedPlanet17,
         RedPlanet18,
         RedPlanet19,
         GreenPlanet1,
         GreenPlanet2,
         GreenPlanet3,
         GreenPlanet4,
         GreenPlanet5,
         GreenPlanet6,
         GreenPlanet7,
         GreenPlanet8,
         GreenPlanet9,
         GreenPlanet10,
         GreenPlanet11,
         GreenPlanet12,
         GreenPlanet13,
         GreenPlanet14);

    using SpriteT = ig::Sprite::EnumType;

    ENUM(Color,
         Blue,
         Red,
         Green);

    using AnimT = ig::Anim::EnumType;
}

#endif //RTYPE_FORWARDGAMESCENEUTILS_HPP
