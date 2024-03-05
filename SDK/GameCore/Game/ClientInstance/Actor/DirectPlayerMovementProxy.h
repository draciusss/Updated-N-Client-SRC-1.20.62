#pragma once
class Mob;
class DirectPlayerMovementProxy
{
private:
    virtual void D0Func(); // 0
public:
    virtual void _getStateProvider(void);
    virtual void _getStateProvider2(void);
    virtual bool isRiding(void);
    virtual void hasPassenger(void);
    virtual bool isClientSide(void);
    virtual bool isCreative(void);
    virtual bool isInWater(void);
    virtual bool isOverScaffolding(void);
    virtual bool isSwimming(void);
    virtual bool isImmersedInWater(void);
    virtual bool isHeadInWater(void);
    virtual bool isSwimmer(void);
    virtual bool isImmobile(void);
    virtual bool isKnockedBackOnDeath(void);
    virtual void shouldBeImmobile(void);
    virtual bool isControlledByLocalInstance(void);
    virtual void hasTeleported(void);
    virtual bool isWearingLeatherBoots(void);
    virtual void hasFamily(HashedString const&);
    virtual bool isWorldBuilder(void);
    virtual bool isSleeping(void);
    virtual void usesOneWayCollision(void);
    virtual bool isStuckInCollider(void);
    virtual void setStuckInCollider(bool);
    virtual bool isStuckItem(void);
    virtual int getOnewayPhysicsBlocks(void);
    virtual void wasPenetratingLastFrame(void);
    virtual void setWasPenetratingLastFrame(bool);
    virtual bool isPrimaryLocalPlayer(void);
    virtual int getSubAABBs(void);
    virtual void setSubAABBs(std::vector<AABB<float>> const&);
    virtual int getLiquidAABB(MaterialType);
    virtual bool isStackable(void);
    virtual void testForEntityStacking(AABB<float> const&, std::vector<AABB<float>>&);
    virtual int getCollidableMobNear(void);
    virtual void setCollidableMobNear(bool);
    virtual int getWalkDist(void);
    virtual void setWalkDist(float);
    virtual bool isFlying(void);
    virtual void setIsFlying(bool);
    virtual bool isOnGround(void);
    virtual void setOnGround(bool);
    virtual void wasOnGround(void);
    virtual void setWasOnGround(bool);
    virtual int getHealth(void);
    virtual bool getHorizontalCollision(void);
    virtual void setHorizontalCollision(bool);
    virtual int getVerticalCollision(void);
    virtual void setVerticalCollision(bool);
    virtual int getCollision(void);
    virtual void setCollision(bool);
    virtual int getMaxAutoStep(void);
    virtual int getHeightOffset(void);
    virtual int getSlideOffset(void);
    virtual void setSlideOffset(Vector2<float> const&);
    virtual void setTerrainSurfaceOffset(float);
    virtual int getBlockMovementSlowdownMultiplier(void);
    virtual void setBlockMovementSlowdownMultiplier(BlockLegacy const&, Vector3<float> const&);
    virtual void resetBlockMovementSlowdownMultiplier(void);
    virtual int getCurrentSwimAmount(void);
    virtual int getAttribute(class Attribute const&);
    virtual void hasEffect(class MobEffect const&);
    virtual int getEffect(MobEffect const&);
    virtual int getActiveEffectCount(void);
    virtual int getEntityData(void);
    virtual void setStatusFlag(class ActorFlags, bool);
    virtual int getStatusFlag(class ActorFlags);
    virtual void hasCategory(class ActorCategory);
    virtual bool isType(class ActorType);
    virtual int getEntityTypeId(void);
    virtual int getPosition(void);
    virtual int getPosPrev(void);
    virtual void setPosDirect(Vector3<float> const&);
    virtual void setPosition(Vector3<float> const&);
    virtual int getPosDelta(void);
    virtual int getPosDeltaNonConst(void);
    virtual void setAABB(AABB<float> const&);
    virtual AABB<float>* getAABB(void);
    virtual Vector2<float> getAABBDim(void);
    virtual float getAttachPos(class ActorLocation, float);
    virtual Vector2<float> getRotation(void);
    virtual void setRotation(Vector2<float> const&);
    virtual int getPrevRotation(void);
    virtual int getFallDistance(void);
    virtual void setFallDistance(float);
    virtual bool isSneaking(void);
    virtual void setSneaking(bool);
    virtual float getHeadLookVector(float);
    virtual int getDimensionBlockSource(void);
    virtual int getRegionFromDimension(void);
    virtual void fetchCollisionShapes(AABB<float> const&, float*, bool, class IActorMovementProxy*);
    virtual void fetchEntities(IActorMovementProxy const*, AABB<float> const&);
    virtual void hasDimension(void);
    virtual int getVehicle(void);
    virtual bool isWASDControlled(void);
    virtual int getControllingSeat(void);
    virtual int getPassengerIndex(IActorMovementProxy const&);
    virtual void tryAsBoat(void);
    virtual void tryAsMob(void);
    virtual void tryAsMob2(void);
    virtual void tryAsPlayer(void);
    virtual void tryAsPlayer2(void);
    virtual int getUniqueID(void);
    virtual int getRuntimeID(void);
    virtual int getBlockPosCurrentlyStandingOn(IActorMovementProxy*);
    virtual int getBlockPosCurrentlyStandingOn(IActorMovementProxy*, BlockSource const&);
    virtual void shouldTriggerOnStandOn(BlockLegacy const&, class BlockPos const&);
    virtual void _containsSneakCollisionShapes(AABB<float> const&);
    virtual void move(Vector3<float> const&);
    virtual void moveBBs(Vector3<float> const&);
    virtual void checkFallDamage(float, bool);
    virtual void onBounceStarted(BlockPos const&, Block const&);
    virtual void updatePrevPosRot(void);
    virtual void sendActorMove(Vector3<float> const&);
    virtual void _teleportTo(Vector3<float> const&, bool, int, int);
    virtual void _getRawActor(void);
    virtual void _getRawActor2(void);
    virtual void _getEntityData(void);
    virtual void _setPreviousPosRot(void);
    virtual void _setHasTeleported(bool);
    virtual void _getAttributes(void);
    virtual void _advanceLiveFrame(class IReplayableActorInput const&);
    virtual int getEntity(void);
    virtual int getEntity2(void);
    virtual int getNoJumpDelay(void);
    virtual void setNoJumpDelay(int);
    virtual bool isJumping(void);
    virtual void setJumping(bool);
    virtual int getJumpVelRedux(void);
    virtual void setJumpVelRedux(bool);
    virtual int getJumpStartPos(void);
    virtual void setJumpStartPos(Vector3<float> const&);
    virtual int getJumpPower(void);
    virtual int getJumpTicks(void);
    virtual void setJumpTicks(int);
    virtual void _endJump(void);
    virtual void onPlayerJump(int);
    virtual int getSpeed(void);
    virtual void setSpeed(float);
    virtual bool isSprinting(void);
    virtual void setSprinting(bool);
    virtual bool isAllowedStandSliding(void);
    virtual void discardFriction(void);
    virtual int getTilt(void);
    virtual void setTilt(float);
    virtual void _allowAscendingScaffolding(void);
    virtual void ascendBlockByJumping(void);
    virtual void descendBlockByCrouching(void);
    virtual void ascendLadder(void);
    virtual void jumpFromGround(BlockSource* const&);
    virtual void canAscendCurrentBlockByJumping(void);
    virtual void canDescendBlockBelowByCrouching(void);
    virtual bool isGliding(void);
    virtual Vector3<float> getLocalMoveVelocity(void);
    virtual void setLocalMoveVelocity(Vector3<float> const&);
    virtual int getMobRotation(void);
    virtual void setMobRotation(float);
    virtual void newServerAiStep(void);
    virtual void aiStep(void);
    virtual void updateAttackAnim(void);
    virtual int getNoActionTime(void);
    virtual void setNoActionTime(int);
    virtual int getYHeadRot(void);
    virtual void setYHeadRot(float);
    virtual int getSwimSpeedMultiplier(void);
    virtual void setSwimSpeedMultiplier(float);
    virtual void pushActors(void);
    virtual void updateGliding(void);
    virtual void travel(float, float, float, bool);
    virtual void playJumpSound(BlockSource const&);
    virtual void emitJumpPreventedEvent(class BlockPos const&);
    virtual int getWaterWalkerEnchant(void);
    virtual int getFlySpeed(void);
    virtual void setFlySpeed(float);
    virtual void applyFinalFriction(float, bool);
    virtual int getFrictionModifier(void);
    virtual void setFrictionModifier(float);
    virtual Mob* _getMob(void);
    virtual void _setYHeadRotOld(float);
    virtual bool isSlowedByItemUse(void);
    virtual int getItemUseMovementModifier(void);
    virtual void startGliding(void);
    virtual void stopGliding(void);
    virtual bool isSpectator(void);
    virtual bool isUsingItem(void);
    virtual bool isServerAuthoritativeMovement(void);
    virtual bool isAutoJumping(void);
    virtual void setAutoJumping(bool);
    virtual bool isAutoJumpEnabled(void);
    virtual void wasAutoJumping(void);
    virtual void setWasAutoJumping(bool);
    virtual bool isLocalPlayer(void);
    virtual int getSneakHeight(void);
    virtual int getBob(void);
    virtual void setBob(float);
    virtual int getLastBob(void);
    virtual void setLastBob(float);
    virtual void tryGetPlayerActionComponent(void);
    virtual int getCurrentTick(void);
    virtual int getClientInstance(void);
    virtual int getClientInstance2(void);
    virtual int getGlidingTicks(void);
    virtual int getVRMoveAdjustAngle(void);
    virtual int getPlayerPaddleForce(class Side);
    virtual void setPlayerPaddleForce(Side, float);
    virtual bool isPaddling(Side);
    virtual void areHandsBusy(void);
    virtual void setHandsBusy(bool);
    virtual int getAbilityBool(class AbilitiesIndex);
    virtual void setAbilityBool(AbilitiesIndex, bool);
    virtual int getAbilityFloat(AbilitiesIndex);
    virtual void setAbilityFloat(AbilitiesIndex, float);
    virtual int getAbilities(void);
    virtual void updateClientPlayerInputState(void);
    virtual bool isEmoting(void);
    virtual void setEmotingStatus(bool);
    virtual void fireEventPersonaEmotePlayed(bool);
    virtual void sendPacket(class PlayerActionPacket&);
    virtual void sendPacket(class PassengerJumpPacket&);
    virtual void sendRequestAbilityPacket(AbilitiesIndex, bool);
    virtual bool isArmorFlyEnabled(void);
    virtual void setJumpRidingScale(float);
    virtual int getJumpRidingScale(void);
    virtual void registerFramewiseActionOrStop(void);
    virtual int getLoadingState(void);
    virtual void setCurrentLocalMoveVelocity(Vector2<float> const&);
    virtual void setLastPos(Vector3<float> const&);
    virtual int getLastPos(void);
    virtual void setLastDelta(Vector3<float> const&);
    virtual int getLastDelta(void);
    virtual void sendPlayerInput(void);
    virtual void sendInput(void);
    virtual void sendClientAuthInput(void);
    virtual void shouldSendPosition(void);
    virtual void sendPosition(void);
    virtual void checkMovementStats(Vector3<float> const&);
    virtual void sendPlayerMove(void);
    virtual void updateTouch(void);
    virtual void _getPlayer(void);
    virtual void _setPositionMode(int);
    virtual void _onMovePlayerPacketNormal(Vector3<float> const&, Vector2<float> const&, float);
    virtual void _resetPos(bool);
    virtual void _extractStateFromComponents(void);
    virtual void _applyStateToComponents(void);
    virtual int getControllingPlayer(void);
    virtual void setPaddleState(Side, bool);
};
