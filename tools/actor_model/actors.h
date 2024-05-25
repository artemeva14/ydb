#include <iostream>
#include <library/cpp/actors/core/actor.h>
#include <util/generic/ptr.h>
#include <library/cpp/actors/util/should_continue.h>

THolder<NActors::IActor> CreateReadActor(std::istream& strm, const NActors::TActorId& writeActor);
THolder<NActors::IActor> CreateMaximumPrimeDevisorActor(int64_t value, const NActors::TActorId& readActor, const NActors::TActorId& writeActor);
THolder<NActors::IActor> CreateWriteActor();
THolder<NActors::IActor> CreateSelfPingActor(const TDuration& latency);
std::shared_ptr<TProgramShouldContinue> GetProgramShouldContinue();
