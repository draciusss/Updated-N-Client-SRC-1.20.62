#pragma once

void* oUpdateTick;

void onUpdate(__int64* _this) {
    bool cancelled = false;

    PreUpdateTickEvent preEvent{};
    preEvent.cancelled = &cancelled;
    DispatchEvent(&preEvent);

    CallFunc<void*, __int64*>(oUpdateTick, _this);

    UpdateTickEvent event{};
    event.cancelled = &cancelled;
    DispatchEvent(&event);
}

class onUpdateHook : public FuncHook
{
public:
    static onUpdateHook& Instance() {
        static onUpdateHook instance;
        return instance;
    }

    bool Initialize() override
    {
        void* updateTick = findSig(xorstr_("40 53 55 56 57 41 56 48 83 EC ? 48 8B 05 ? ? ? ? 48 33 C4 48 89 44 24 ? 48 8B EA"));
        return HookFunction(updateTick, (void*)&onUpdate, &oUpdateTick, xorstr_("Tick"));
    }
};