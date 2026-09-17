#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D3FF0
// Address: 0x4d3ff0 - 0x4d4648
void sub_004D3FF0_0x4d3ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D3FF0_0x4d3ff0");
#endif

    switch (ctx->pc) {
        case 0x4d3ff0u: goto label_4d3ff0;
        case 0x4d3ff4u: goto label_4d3ff4;
        case 0x4d3ff8u: goto label_4d3ff8;
        case 0x4d3ffcu: goto label_4d3ffc;
        case 0x4d4000u: goto label_4d4000;
        case 0x4d4004u: goto label_4d4004;
        case 0x4d4008u: goto label_4d4008;
        case 0x4d400cu: goto label_4d400c;
        case 0x4d4010u: goto label_4d4010;
        case 0x4d4014u: goto label_4d4014;
        case 0x4d4018u: goto label_4d4018;
        case 0x4d401cu: goto label_4d401c;
        case 0x4d4020u: goto label_4d4020;
        case 0x4d4024u: goto label_4d4024;
        case 0x4d4028u: goto label_4d4028;
        case 0x4d402cu: goto label_4d402c;
        case 0x4d4030u: goto label_4d4030;
        case 0x4d4034u: goto label_4d4034;
        case 0x4d4038u: goto label_4d4038;
        case 0x4d403cu: goto label_4d403c;
        case 0x4d4040u: goto label_4d4040;
        case 0x4d4044u: goto label_4d4044;
        case 0x4d4048u: goto label_4d4048;
        case 0x4d404cu: goto label_4d404c;
        case 0x4d4050u: goto label_4d4050;
        case 0x4d4054u: goto label_4d4054;
        case 0x4d4058u: goto label_4d4058;
        case 0x4d405cu: goto label_4d405c;
        case 0x4d4060u: goto label_4d4060;
        case 0x4d4064u: goto label_4d4064;
        case 0x4d4068u: goto label_4d4068;
        case 0x4d406cu: goto label_4d406c;
        case 0x4d4070u: goto label_4d4070;
        case 0x4d4074u: goto label_4d4074;
        case 0x4d4078u: goto label_4d4078;
        case 0x4d407cu: goto label_4d407c;
        case 0x4d4080u: goto label_4d4080;
        case 0x4d4084u: goto label_4d4084;
        case 0x4d4088u: goto label_4d4088;
        case 0x4d408cu: goto label_4d408c;
        case 0x4d4090u: goto label_4d4090;
        case 0x4d4094u: goto label_4d4094;
        case 0x4d4098u: goto label_4d4098;
        case 0x4d409cu: goto label_4d409c;
        case 0x4d40a0u: goto label_4d40a0;
        case 0x4d40a4u: goto label_4d40a4;
        case 0x4d40a8u: goto label_4d40a8;
        case 0x4d40acu: goto label_4d40ac;
        case 0x4d40b0u: goto label_4d40b0;
        case 0x4d40b4u: goto label_4d40b4;
        case 0x4d40b8u: goto label_4d40b8;
        case 0x4d40bcu: goto label_4d40bc;
        case 0x4d40c0u: goto label_4d40c0;
        case 0x4d40c4u: goto label_4d40c4;
        case 0x4d40c8u: goto label_4d40c8;
        case 0x4d40ccu: goto label_4d40cc;
        case 0x4d40d0u: goto label_4d40d0;
        case 0x4d40d4u: goto label_4d40d4;
        case 0x4d40d8u: goto label_4d40d8;
        case 0x4d40dcu: goto label_4d40dc;
        case 0x4d40e0u: goto label_4d40e0;
        case 0x4d40e4u: goto label_4d40e4;
        case 0x4d40e8u: goto label_4d40e8;
        case 0x4d40ecu: goto label_4d40ec;
        case 0x4d40f0u: goto label_4d40f0;
        case 0x4d40f4u: goto label_4d40f4;
        case 0x4d40f8u: goto label_4d40f8;
        case 0x4d40fcu: goto label_4d40fc;
        case 0x4d4100u: goto label_4d4100;
        case 0x4d4104u: goto label_4d4104;
        case 0x4d4108u: goto label_4d4108;
        case 0x4d410cu: goto label_4d410c;
        case 0x4d4110u: goto label_4d4110;
        case 0x4d4114u: goto label_4d4114;
        case 0x4d4118u: goto label_4d4118;
        case 0x4d411cu: goto label_4d411c;
        case 0x4d4120u: goto label_4d4120;
        case 0x4d4124u: goto label_4d4124;
        case 0x4d4128u: goto label_4d4128;
        case 0x4d412cu: goto label_4d412c;
        case 0x4d4130u: goto label_4d4130;
        case 0x4d4134u: goto label_4d4134;
        case 0x4d4138u: goto label_4d4138;
        case 0x4d413cu: goto label_4d413c;
        case 0x4d4140u: goto label_4d4140;
        case 0x4d4144u: goto label_4d4144;
        case 0x4d4148u: goto label_4d4148;
        case 0x4d414cu: goto label_4d414c;
        case 0x4d4150u: goto label_4d4150;
        case 0x4d4154u: goto label_4d4154;
        case 0x4d4158u: goto label_4d4158;
        case 0x4d415cu: goto label_4d415c;
        case 0x4d4160u: goto label_4d4160;
        case 0x4d4164u: goto label_4d4164;
        case 0x4d4168u: goto label_4d4168;
        case 0x4d416cu: goto label_4d416c;
        case 0x4d4170u: goto label_4d4170;
        case 0x4d4174u: goto label_4d4174;
        case 0x4d4178u: goto label_4d4178;
        case 0x4d417cu: goto label_4d417c;
        case 0x4d4180u: goto label_4d4180;
        case 0x4d4184u: goto label_4d4184;
        case 0x4d4188u: goto label_4d4188;
        case 0x4d418cu: goto label_4d418c;
        case 0x4d4190u: goto label_4d4190;
        case 0x4d4194u: goto label_4d4194;
        case 0x4d4198u: goto label_4d4198;
        case 0x4d419cu: goto label_4d419c;
        case 0x4d41a0u: goto label_4d41a0;
        case 0x4d41a4u: goto label_4d41a4;
        case 0x4d41a8u: goto label_4d41a8;
        case 0x4d41acu: goto label_4d41ac;
        case 0x4d41b0u: goto label_4d41b0;
        case 0x4d41b4u: goto label_4d41b4;
        case 0x4d41b8u: goto label_4d41b8;
        case 0x4d41bcu: goto label_4d41bc;
        case 0x4d41c0u: goto label_4d41c0;
        case 0x4d41c4u: goto label_4d41c4;
        case 0x4d41c8u: goto label_4d41c8;
        case 0x4d41ccu: goto label_4d41cc;
        case 0x4d41d0u: goto label_4d41d0;
        case 0x4d41d4u: goto label_4d41d4;
        case 0x4d41d8u: goto label_4d41d8;
        case 0x4d41dcu: goto label_4d41dc;
        case 0x4d41e0u: goto label_4d41e0;
        case 0x4d41e4u: goto label_4d41e4;
        case 0x4d41e8u: goto label_4d41e8;
        case 0x4d41ecu: goto label_4d41ec;
        case 0x4d41f0u: goto label_4d41f0;
        case 0x4d41f4u: goto label_4d41f4;
        case 0x4d41f8u: goto label_4d41f8;
        case 0x4d41fcu: goto label_4d41fc;
        case 0x4d4200u: goto label_4d4200;
        case 0x4d4204u: goto label_4d4204;
        case 0x4d4208u: goto label_4d4208;
        case 0x4d420cu: goto label_4d420c;
        case 0x4d4210u: goto label_4d4210;
        case 0x4d4214u: goto label_4d4214;
        case 0x4d4218u: goto label_4d4218;
        case 0x4d421cu: goto label_4d421c;
        case 0x4d4220u: goto label_4d4220;
        case 0x4d4224u: goto label_4d4224;
        case 0x4d4228u: goto label_4d4228;
        case 0x4d422cu: goto label_4d422c;
        case 0x4d4230u: goto label_4d4230;
        case 0x4d4234u: goto label_4d4234;
        case 0x4d4238u: goto label_4d4238;
        case 0x4d423cu: goto label_4d423c;
        case 0x4d4240u: goto label_4d4240;
        case 0x4d4244u: goto label_4d4244;
        case 0x4d4248u: goto label_4d4248;
        case 0x4d424cu: goto label_4d424c;
        case 0x4d4250u: goto label_4d4250;
        case 0x4d4254u: goto label_4d4254;
        case 0x4d4258u: goto label_4d4258;
        case 0x4d425cu: goto label_4d425c;
        case 0x4d4260u: goto label_4d4260;
        case 0x4d4264u: goto label_4d4264;
        case 0x4d4268u: goto label_4d4268;
        case 0x4d426cu: goto label_4d426c;
        case 0x4d4270u: goto label_4d4270;
        case 0x4d4274u: goto label_4d4274;
        case 0x4d4278u: goto label_4d4278;
        case 0x4d427cu: goto label_4d427c;
        case 0x4d4280u: goto label_4d4280;
        case 0x4d4284u: goto label_4d4284;
        case 0x4d4288u: goto label_4d4288;
        case 0x4d428cu: goto label_4d428c;
        case 0x4d4290u: goto label_4d4290;
        case 0x4d4294u: goto label_4d4294;
        case 0x4d4298u: goto label_4d4298;
        case 0x4d429cu: goto label_4d429c;
        case 0x4d42a0u: goto label_4d42a0;
        case 0x4d42a4u: goto label_4d42a4;
        case 0x4d42a8u: goto label_4d42a8;
        case 0x4d42acu: goto label_4d42ac;
        case 0x4d42b0u: goto label_4d42b0;
        case 0x4d42b4u: goto label_4d42b4;
        case 0x4d42b8u: goto label_4d42b8;
        case 0x4d42bcu: goto label_4d42bc;
        case 0x4d42c0u: goto label_4d42c0;
        case 0x4d42c4u: goto label_4d42c4;
        case 0x4d42c8u: goto label_4d42c8;
        case 0x4d42ccu: goto label_4d42cc;
        case 0x4d42d0u: goto label_4d42d0;
        case 0x4d42d4u: goto label_4d42d4;
        case 0x4d42d8u: goto label_4d42d8;
        case 0x4d42dcu: goto label_4d42dc;
        case 0x4d42e0u: goto label_4d42e0;
        case 0x4d42e4u: goto label_4d42e4;
        case 0x4d42e8u: goto label_4d42e8;
        case 0x4d42ecu: goto label_4d42ec;
        case 0x4d42f0u: goto label_4d42f0;
        case 0x4d42f4u: goto label_4d42f4;
        case 0x4d42f8u: goto label_4d42f8;
        case 0x4d42fcu: goto label_4d42fc;
        case 0x4d4300u: goto label_4d4300;
        case 0x4d4304u: goto label_4d4304;
        case 0x4d4308u: goto label_4d4308;
        case 0x4d430cu: goto label_4d430c;
        case 0x4d4310u: goto label_4d4310;
        case 0x4d4314u: goto label_4d4314;
        case 0x4d4318u: goto label_4d4318;
        case 0x4d431cu: goto label_4d431c;
        case 0x4d4320u: goto label_4d4320;
        case 0x4d4324u: goto label_4d4324;
        case 0x4d4328u: goto label_4d4328;
        case 0x4d432cu: goto label_4d432c;
        case 0x4d4330u: goto label_4d4330;
        case 0x4d4334u: goto label_4d4334;
        case 0x4d4338u: goto label_4d4338;
        case 0x4d433cu: goto label_4d433c;
        case 0x4d4340u: goto label_4d4340;
        case 0x4d4344u: goto label_4d4344;
        case 0x4d4348u: goto label_4d4348;
        case 0x4d434cu: goto label_4d434c;
        case 0x4d4350u: goto label_4d4350;
        case 0x4d4354u: goto label_4d4354;
        case 0x4d4358u: goto label_4d4358;
        case 0x4d435cu: goto label_4d435c;
        case 0x4d4360u: goto label_4d4360;
        case 0x4d4364u: goto label_4d4364;
        case 0x4d4368u: goto label_4d4368;
        case 0x4d436cu: goto label_4d436c;
        case 0x4d4370u: goto label_4d4370;
        case 0x4d4374u: goto label_4d4374;
        case 0x4d4378u: goto label_4d4378;
        case 0x4d437cu: goto label_4d437c;
        case 0x4d4380u: goto label_4d4380;
        case 0x4d4384u: goto label_4d4384;
        case 0x4d4388u: goto label_4d4388;
        case 0x4d438cu: goto label_4d438c;
        case 0x4d4390u: goto label_4d4390;
        case 0x4d4394u: goto label_4d4394;
        case 0x4d4398u: goto label_4d4398;
        case 0x4d439cu: goto label_4d439c;
        case 0x4d43a0u: goto label_4d43a0;
        case 0x4d43a4u: goto label_4d43a4;
        case 0x4d43a8u: goto label_4d43a8;
        case 0x4d43acu: goto label_4d43ac;
        case 0x4d43b0u: goto label_4d43b0;
        case 0x4d43b4u: goto label_4d43b4;
        case 0x4d43b8u: goto label_4d43b8;
        case 0x4d43bcu: goto label_4d43bc;
        case 0x4d43c0u: goto label_4d43c0;
        case 0x4d43c4u: goto label_4d43c4;
        case 0x4d43c8u: goto label_4d43c8;
        case 0x4d43ccu: goto label_4d43cc;
        case 0x4d43d0u: goto label_4d43d0;
        case 0x4d43d4u: goto label_4d43d4;
        case 0x4d43d8u: goto label_4d43d8;
        case 0x4d43dcu: goto label_4d43dc;
        case 0x4d43e0u: goto label_4d43e0;
        case 0x4d43e4u: goto label_4d43e4;
        case 0x4d43e8u: goto label_4d43e8;
        case 0x4d43ecu: goto label_4d43ec;
        case 0x4d43f0u: goto label_4d43f0;
        case 0x4d43f4u: goto label_4d43f4;
        case 0x4d43f8u: goto label_4d43f8;
        case 0x4d43fcu: goto label_4d43fc;
        case 0x4d4400u: goto label_4d4400;
        case 0x4d4404u: goto label_4d4404;
        case 0x4d4408u: goto label_4d4408;
        case 0x4d440cu: goto label_4d440c;
        case 0x4d4410u: goto label_4d4410;
        case 0x4d4414u: goto label_4d4414;
        case 0x4d4418u: goto label_4d4418;
        case 0x4d441cu: goto label_4d441c;
        case 0x4d4420u: goto label_4d4420;
        case 0x4d4424u: goto label_4d4424;
        case 0x4d4428u: goto label_4d4428;
        case 0x4d442cu: goto label_4d442c;
        case 0x4d4430u: goto label_4d4430;
        case 0x4d4434u: goto label_4d4434;
        case 0x4d4438u: goto label_4d4438;
        case 0x4d443cu: goto label_4d443c;
        case 0x4d4440u: goto label_4d4440;
        case 0x4d4444u: goto label_4d4444;
        case 0x4d4448u: goto label_4d4448;
        case 0x4d444cu: goto label_4d444c;
        case 0x4d4450u: goto label_4d4450;
        case 0x4d4454u: goto label_4d4454;
        case 0x4d4458u: goto label_4d4458;
        case 0x4d445cu: goto label_4d445c;
        case 0x4d4460u: goto label_4d4460;
        case 0x4d4464u: goto label_4d4464;
        case 0x4d4468u: goto label_4d4468;
        case 0x4d446cu: goto label_4d446c;
        case 0x4d4470u: goto label_4d4470;
        case 0x4d4474u: goto label_4d4474;
        case 0x4d4478u: goto label_4d4478;
        case 0x4d447cu: goto label_4d447c;
        case 0x4d4480u: goto label_4d4480;
        case 0x4d4484u: goto label_4d4484;
        case 0x4d4488u: goto label_4d4488;
        case 0x4d448cu: goto label_4d448c;
        case 0x4d4490u: goto label_4d4490;
        case 0x4d4494u: goto label_4d4494;
        case 0x4d4498u: goto label_4d4498;
        case 0x4d449cu: goto label_4d449c;
        case 0x4d44a0u: goto label_4d44a0;
        case 0x4d44a4u: goto label_4d44a4;
        case 0x4d44a8u: goto label_4d44a8;
        case 0x4d44acu: goto label_4d44ac;
        case 0x4d44b0u: goto label_4d44b0;
        case 0x4d44b4u: goto label_4d44b4;
        case 0x4d44b8u: goto label_4d44b8;
        case 0x4d44bcu: goto label_4d44bc;
        case 0x4d44c0u: goto label_4d44c0;
        case 0x4d44c4u: goto label_4d44c4;
        case 0x4d44c8u: goto label_4d44c8;
        case 0x4d44ccu: goto label_4d44cc;
        case 0x4d44d0u: goto label_4d44d0;
        case 0x4d44d4u: goto label_4d44d4;
        case 0x4d44d8u: goto label_4d44d8;
        case 0x4d44dcu: goto label_4d44dc;
        case 0x4d44e0u: goto label_4d44e0;
        case 0x4d44e4u: goto label_4d44e4;
        case 0x4d44e8u: goto label_4d44e8;
        case 0x4d44ecu: goto label_4d44ec;
        case 0x4d44f0u: goto label_4d44f0;
        case 0x4d44f4u: goto label_4d44f4;
        case 0x4d44f8u: goto label_4d44f8;
        case 0x4d44fcu: goto label_4d44fc;
        case 0x4d4500u: goto label_4d4500;
        case 0x4d4504u: goto label_4d4504;
        case 0x4d4508u: goto label_4d4508;
        case 0x4d450cu: goto label_4d450c;
        case 0x4d4510u: goto label_4d4510;
        case 0x4d4514u: goto label_4d4514;
        case 0x4d4518u: goto label_4d4518;
        case 0x4d451cu: goto label_4d451c;
        case 0x4d4520u: goto label_4d4520;
        case 0x4d4524u: goto label_4d4524;
        case 0x4d4528u: goto label_4d4528;
        case 0x4d452cu: goto label_4d452c;
        case 0x4d4530u: goto label_4d4530;
        case 0x4d4534u: goto label_4d4534;
        case 0x4d4538u: goto label_4d4538;
        case 0x4d453cu: goto label_4d453c;
        case 0x4d4540u: goto label_4d4540;
        case 0x4d4544u: goto label_4d4544;
        case 0x4d4548u: goto label_4d4548;
        case 0x4d454cu: goto label_4d454c;
        case 0x4d4550u: goto label_4d4550;
        case 0x4d4554u: goto label_4d4554;
        case 0x4d4558u: goto label_4d4558;
        case 0x4d455cu: goto label_4d455c;
        case 0x4d4560u: goto label_4d4560;
        case 0x4d4564u: goto label_4d4564;
        case 0x4d4568u: goto label_4d4568;
        case 0x4d456cu: goto label_4d456c;
        case 0x4d4570u: goto label_4d4570;
        case 0x4d4574u: goto label_4d4574;
        case 0x4d4578u: goto label_4d4578;
        case 0x4d457cu: goto label_4d457c;
        case 0x4d4580u: goto label_4d4580;
        case 0x4d4584u: goto label_4d4584;
        case 0x4d4588u: goto label_4d4588;
        case 0x4d458cu: goto label_4d458c;
        case 0x4d4590u: goto label_4d4590;
        case 0x4d4594u: goto label_4d4594;
        case 0x4d4598u: goto label_4d4598;
        case 0x4d459cu: goto label_4d459c;
        case 0x4d45a0u: goto label_4d45a0;
        case 0x4d45a4u: goto label_4d45a4;
        case 0x4d45a8u: goto label_4d45a8;
        case 0x4d45acu: goto label_4d45ac;
        case 0x4d45b0u: goto label_4d45b0;
        case 0x4d45b4u: goto label_4d45b4;
        case 0x4d45b8u: goto label_4d45b8;
        case 0x4d45bcu: goto label_4d45bc;
        case 0x4d45c0u: goto label_4d45c0;
        case 0x4d45c4u: goto label_4d45c4;
        case 0x4d45c8u: goto label_4d45c8;
        case 0x4d45ccu: goto label_4d45cc;
        case 0x4d45d0u: goto label_4d45d0;
        case 0x4d45d4u: goto label_4d45d4;
        case 0x4d45d8u: goto label_4d45d8;
        case 0x4d45dcu: goto label_4d45dc;
        case 0x4d45e0u: goto label_4d45e0;
        case 0x4d45e4u: goto label_4d45e4;
        case 0x4d45e8u: goto label_4d45e8;
        case 0x4d45ecu: goto label_4d45ec;
        case 0x4d45f0u: goto label_4d45f0;
        case 0x4d45f4u: goto label_4d45f4;
        case 0x4d45f8u: goto label_4d45f8;
        case 0x4d45fcu: goto label_4d45fc;
        case 0x4d4600u: goto label_4d4600;
        case 0x4d4604u: goto label_4d4604;
        case 0x4d4608u: goto label_4d4608;
        case 0x4d460cu: goto label_4d460c;
        case 0x4d4610u: goto label_4d4610;
        case 0x4d4614u: goto label_4d4614;
        case 0x4d4618u: goto label_4d4618;
        case 0x4d461cu: goto label_4d461c;
        case 0x4d4620u: goto label_4d4620;
        case 0x4d4624u: goto label_4d4624;
        case 0x4d4628u: goto label_4d4628;
        case 0x4d462cu: goto label_4d462c;
        case 0x4d4630u: goto label_4d4630;
        case 0x4d4634u: goto label_4d4634;
        case 0x4d4638u: goto label_4d4638;
        case 0x4d463cu: goto label_4d463c;
        case 0x4d4640u: goto label_4d4640;
        case 0x4d4644u: goto label_4d4644;
        default: break;
    }

    ctx->pc = 0x4d3ff0u;

label_4d3ff0:
    // 0x4d3ff0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d3ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4d3ff4:
    // 0x4d3ff4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d3ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4d3ff8:
    // 0x4d3ff8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d3ff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d3ffc:
    // 0x4d3ffc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d3ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4d4000:
    // 0x4d4000: 0x261101b4  addiu       $s1, $s0, 0x1B4
    ctx->pc = 0x4d4000u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
label_4d4004:
    // 0x4d4004: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d4004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4d4008:
    // 0x4d4008: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4d4008u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4d400c:
    // 0x4d400c: 0x4420011  bltzl       $v0, . + 4 + (0x11 << 2)
label_4d4010:
    if (ctx->pc == 0x4D4010u) {
        ctx->pc = 0x4D4010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D400Cu;
        // 0x4d4010: 0x860301bc  lh          $v1, 0x1BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4014u;
        goto label_4d4014;
    }
    ctx->pc = 0x4D400Cu;
    {
        const bool branch_taken_0x4d400c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4d400c) {
            ctx->pc = 0x4D4010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D400Cu;
            // 0x4d4010: 0x860301bc  lh          $v1, 0x1BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D4054u;
            goto label_4d4054;
        }
    }
    ctx->pc = 0x4D4014u;
label_4d4014:
    // 0x4d4014: 0xc12b642  jal         func_4AD908
label_4d4018:
    if (ctx->pc == 0x4D4018u) {
        ctx->pc = 0x4D401Cu;
        goto label_4d401c;
    }
    ctx->pc = 0x4D4014u;
    SET_GPR_U32(ctx, 31, 0x4D401Cu);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4D4014u, 0x4D401Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D401Cu;
label_4d401c:
    // 0x4d401c: 0xa6000118  sh          $zero, 0x118($s0)
    ctx->pc = 0x4d401cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 0));
label_4d4020:
    // 0x4d4020: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x4d4020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_4d4024:
    // 0x4d4024: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4d4024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4d4028:
    // 0x4d4028: 0xa602015e  sh          $v0, 0x15E($s0)
    ctx->pc = 0x4d4028u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 2));
label_4d402c:
    // 0x4d402c: 0xa603000e  sh          $v1, 0xE($s0)
    ctx->pc = 0x4d402cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
label_4d4030:
    // 0x4d4030: 0xa600011c  sh          $zero, 0x11C($s0)
    ctx->pc = 0x4d4030u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 284), (uint16_t)GPR_U32(ctx, 0));
label_4d4034:
    // 0x4d4034: 0xa6000120  sh          $zero, 0x120($s0)
    ctx->pc = 0x4d4034u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 288), (uint16_t)GPR_U32(ctx, 0));
label_4d4038:
    // 0x4d4038: 0xa6000160  sh          $zero, 0x160($s0)
    ctx->pc = 0x4d4038u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 352), (uint16_t)GPR_U32(ctx, 0));
label_4d403c:
    // 0x4d403c: 0xa6000162  sh          $zero, 0x162($s0)
    ctx->pc = 0x4d403cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 354), (uint16_t)GPR_U32(ctx, 0));
label_4d4040:
    // 0x4d4040: 0xa60001b6  sh          $zero, 0x1B6($s0)
    ctx->pc = 0x4d4040u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 0));
label_4d4044:
    // 0x4d4044: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4d4044u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4d4048:
    // 0x4d4048: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4d4048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_4d404c:
    // 0x4d404c: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4d404cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d4050:
    // 0x4d4050: 0x860301bc  lh          $v1, 0x1BC($s0)
    ctx->pc = 0x4d4050u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
label_4d4054:
    // 0x4d4054: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4d4054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4d4058:
    // 0x4d4058: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_4d405c:
    if (ctx->pc == 0x4D405Cu) {
        ctx->pc = 0x4D405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4058u;
        // 0x4d405c: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4060u;
        goto label_4d4060;
    }
    ctx->pc = 0x4D4058u;
    {
        const bool branch_taken_0x4d4058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4D405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4058u;
        // 0x4d405c: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d4058) {
            ctx->pc = 0x4D40A8u;
            goto label_4d40a8;
        }
    }
    ctx->pc = 0x4D4060u;
label_4d4060:
    // 0x4d4060: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_4d4064:
    if (ctx->pc == 0x4D4064u) {
        ctx->pc = 0x4D4064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4060u;
        // 0x4d4064: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4068u;
        goto label_4d4068;
    }
    ctx->pc = 0x4D4060u;
    {
        const bool branch_taken_0x4d4060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d4060) {
            ctx->pc = 0x4D4064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D4060u;
            // 0x4d4064: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D4078u;
            goto label_4d4078;
        }
    }
    ctx->pc = 0x4D4068u;
label_4d4068:
    // 0x4d4068: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_4d406c:
    if (ctx->pc == 0x4D406Cu) {
        ctx->pc = 0x4D406Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4068u;
        // 0x4d406c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4070u;
        goto label_4d4070;
    }
    ctx->pc = 0x4D4068u;
    {
        const bool branch_taken_0x4d4068 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D406Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4068u;
        // 0x4d406c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d4068) {
            ctx->pc = 0x4D4090u;
            goto label_4d4090;
        }
    }
    ctx->pc = 0x4D4070u;
label_4d4070:
    // 0x4d4070: 0x1000001f  b           . + 4 + (0x1F << 2)
label_4d4074:
    if (ctx->pc == 0x4D4074u) {
        ctx->pc = 0x4D4074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4070u;
        // 0x4d4074: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4078u;
        goto label_4d4078;
    }
    ctx->pc = 0x4D4070u;
    {
        const bool branch_taken_0x4d4070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D4074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4070u;
        // 0x4d4074: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d4070) {
            ctx->pc = 0x4D40F0u;
            goto label_4d40f0;
        }
    }
    ctx->pc = 0x4D4078u;
label_4d4078:
    // 0x4d4078: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_4d407c:
    if (ctx->pc == 0x4D407Cu) {
        ctx->pc = 0x4D407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4078u;
        // 0x4d407c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4080u;
        goto label_4d4080;
    }
    ctx->pc = 0x4D4078u;
    {
        const bool branch_taken_0x4d4078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4D407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4078u;
        // 0x4d407c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d4078) {
            ctx->pc = 0x4D40C0u;
            goto label_4d40c0;
        }
    }
    ctx->pc = 0x4D4080u;
label_4d4080:
    // 0x4d4080: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
label_4d4084:
    if (ctx->pc == 0x4D4084u) {
        ctx->pc = 0x4D4084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4080u;
        // 0x4d4084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4088u;
        goto label_4d4088;
    }
    ctx->pc = 0x4D4080u;
    {
        const bool branch_taken_0x4d4080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4D4084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4080u;
        // 0x4d4084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d4080) {
            ctx->pc = 0x4D40D8u;
            goto label_4d40d8;
        }
    }
    ctx->pc = 0x4D4088u;
label_4d4088:
    // 0x4d4088: 0x10000019  b           . + 4 + (0x19 << 2)
label_4d408c:
    if (ctx->pc == 0x4D408Cu) {
        ctx->pc = 0x4D408Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4088u;
        // 0x4d408c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4090u;
        goto label_4d4090;
    }
    ctx->pc = 0x4D4088u;
    {
        const bool branch_taken_0x4d4088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D408Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4088u;
        // 0x4d408c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d4088) {
            ctx->pc = 0x4D40F0u;
            goto label_4d40f0;
        }
    }
    ctx->pc = 0x4D4090u;
label_4d4090:
    // 0x4d4090: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d4090u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d4094:
    // 0x4d4094: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d4094u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d4098:
    // 0x4d4098: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d4098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d409c:
    // 0x4d409c: 0x8135040  j           func_4D4100
label_4d40a0:
    if (ctx->pc == 0x4D40A0u) {
        ctx->pc = 0x4D40A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D409Cu;
        // 0x4d40a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D40A4u;
        goto label_4d40a4;
    }
    ctx->pc = 0x4D409Cu;
    ctx->pc = 0x4D40A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D409Cu;
    // 0x4d40a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D4100u;
    goto label_4d4100;
    ctx->pc = 0x4D40A4u;
label_4d40a4:
    // 0x4d40a4: 0x0  nop
    ctx->pc = 0x4d40a4u;
    // NOP
label_4d40a8:
    // 0x4d40a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d40a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d40ac:
    // 0x4d40ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d40acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d40b0:
    // 0x4d40b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d40b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d40b4:
    // 0x4d40b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d40b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d40b8:
    // 0x4d40b8: 0x8135092  j           func_4D4248
label_4d40bc:
    if (ctx->pc == 0x4D40BCu) {
        ctx->pc = 0x4D40BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D40B8u;
        // 0x4d40bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D40C0u;
        goto label_4d40c0;
    }
    ctx->pc = 0x4D40B8u;
    ctx->pc = 0x4D40BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D40B8u;
    // 0x4d40bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D4248u;
    goto label_4d4248;
    ctx->pc = 0x4D40C0u;
label_4d40c0:
    // 0x4d40c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d40c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d40c4:
    // 0x4d40c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d40c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d40c8:
    // 0x4d40c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d40c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d40cc:
    // 0x4d40cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d40ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d40d0:
    // 0x4d40d0: 0x8135120  j           func_4D4480
label_4d40d4:
    if (ctx->pc == 0x4D40D4u) {
        ctx->pc = 0x4D40D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D40D0u;
        // 0x4d40d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D40D8u;
        goto label_4d40d8;
    }
    ctx->pc = 0x4D40D0u;
    ctx->pc = 0x4D40D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D40D0u;
    // 0x4d40d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D4480u;
    goto label_4d4480;
    ctx->pc = 0x4D40D8u;
label_4d40d8:
    // 0x4d40d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d40d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d40dc:
    // 0x4d40dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d40dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d40e0:
    // 0x4d40e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d40e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d40e4:
    // 0x4d40e4: 0x813513a  j           func_4D44E8
label_4d40e8:
    if (ctx->pc == 0x4D40E8u) {
        ctx->pc = 0x4D40E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D40E4u;
        // 0x4d40e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D40ECu;
        goto label_4d40ec;
    }
    ctx->pc = 0x4D40E4u;
    ctx->pc = 0x4D40E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D40E4u;
    // 0x4d40e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D44E8u;
    goto label_4d44e8;
    ctx->pc = 0x4D40ECu;
label_4d40ec:
    // 0x4d40ec: 0x0  nop
    ctx->pc = 0x4d40ecu;
    // NOP
label_4d40f0:
    // 0x4d40f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d40f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d40f4:
    // 0x4d40f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d40f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d40f8:
    // 0x4d40f8: 0x3e00008  jr          $ra
label_4d40fc:
    if (ctx->pc == 0x4D40FCu) {
        ctx->pc = 0x4D40FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D40F8u;
        // 0x4d40fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4100u;
        goto label_4d4100;
    }
    ctx->pc = 0x4D40F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D40FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D40F8u;
        // 0x4d40fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D40F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D4100u;
label_4d4100:
    // 0x4d4100: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d4100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4d4104:
    // 0x4d4104: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4d4104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_4d4108:
    // 0x4d4108: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d4108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_4d410c:
    // 0x4d410c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d410cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4d4110:
    // 0x4d4110: 0x24451058  addiu       $a1, $v0, 0x1058
    ctx->pc = 0x4d4110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4184));
label_4d4114:
    // 0x4d4114: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d4114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4d4118:
    // 0x4d4118: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4d4118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_4d411c:
    // 0x4d411c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4d411cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_4d4120:
    // 0x4d4120: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x4d4120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_4d4124:
    // 0x4d4124: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4d4124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_4d4128:
    // 0x4d4128: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x4d4128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_4d412c:
    // 0x4d412c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4d412cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4d4130:
    // 0x4d4130: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d4130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4d4134:
    // 0x4d4134: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4d4134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4d4138:
    // 0x4d4138: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4d4138u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_4d413c:
    // 0x4d413c: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4d413cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4d4140:
    // 0x4d4140: 0x4600034  bltz        $v1, . + 4 + (0x34 << 2)
label_4d4144:
    if (ctx->pc == 0x4D4144u) {
        ctx->pc = 0x4D4144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4140u;
        // 0x4d4144: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4148u;
        goto label_4d4148;
    }
    ctx->pc = 0x4D4140u;
    {
        const bool branch_taken_0x4d4140 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4D4144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4140u;
        // 0x4d4144: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d4140) {
            ctx->pc = 0x4D4214u;
            goto label_4d4214;
        }
    }
    ctx->pc = 0x4D4148u;
label_4d4148:
    // 0x4d4148: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4d4148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_4d414c:
    // 0x4d414c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4d414cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
label_4d4150:
    // 0x4d4150: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4d4150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4d4154:
    // 0x4d4154: 0x24547848  addiu       $s4, $v0, 0x7848
    ctx->pc = 0x4d4154u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 30792));
label_4d4158:
    // 0x4d4158: 0x24711048  addiu       $s1, $v1, 0x1048
    ctx->pc = 0x4d4158u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4168));
label_4d415c:
    // 0x4d415c: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x4d415cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
label_4d4160:
    // 0x4d4160: 0xc12b5dc  jal         func_4AD770
label_4d4164:
    if (ctx->pc == 0x4D4164u) {
        ctx->pc = 0x4D4164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4160u;
        // 0x4d4164: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4168u;
        goto label_4d4168;
    }
    ctx->pc = 0x4D4160u;
    SET_GPR_U32(ctx, 31, 0x4D4168u);
    ctx->pc = 0x4D4164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D4160u;
    // 0x4d4164: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4D4160u, 0x4D4168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D4168u;
label_4d4168:
    // 0x4d4168: 0x24030058  addiu       $v1, $zero, 0x58
    ctx->pc = 0x4d4168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_4d416c:
    // 0x4d416c: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4d416cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
label_4d4170:
    // 0x4d4170: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x4d4170u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4d4174:
    // 0x4d4174: 0xa440015e  sh          $zero, 0x15E($v0)
    ctx->pc = 0x4d4174u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 350), (uint16_t)GPR_U32(ctx, 0));
label_4d4178:
    // 0x4d4178: 0xa44401be  sh          $a0, 0x1BE($v0)
    ctx->pc = 0x4d4178u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 446), (uint16_t)GPR_U32(ctx, 4));
label_4d417c:
    // 0x4d417c: 0xa4400160  sh          $zero, 0x160($v0)
    ctx->pc = 0x4d417cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 352), (uint16_t)GPR_U32(ctx, 0));
label_4d4180:
    // 0x4d4180: 0xac520140  sw          $s2, 0x140($v0)
    ctx->pc = 0x4d4180u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 18));
label_4d4184:
    // 0x4d4184: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4d4184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4d4188:
    // 0x4d4188: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4d4188u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4d418c:
    // 0x4d418c: 0x932024  and         $a0, $a0, $s3
    ctx->pc = 0x4d418cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 19));
label_4d4190:
    // 0x4d4190: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4d4190u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4d4194:
    // 0x4d4194: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4d4194u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_4d4198:
    // 0x4d4198: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4d4198u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4d419c:
    // 0x4d419c: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4d419cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4d41a0:
    // 0x4d41a0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x4d41a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4d41a4:
    // 0x4d41a4: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x4d41a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
label_4d41a8:
    // 0x4d41a8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4d41a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_4d41ac:
    // 0x4d41ac: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4d41acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_4d41b0:
    // 0x4d41b0: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4d41b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4d41b4:
    // 0x4d41b4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4d41b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_4d41b8:
    // 0x4d41b8: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x4d41b8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
label_4d41bc:
    // 0x4d41bc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4d41bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_4d41c0:
    // 0x4d41c0: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x4d41c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_4d41c4:
    // 0x4d41c4: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x4d41c4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_4d41c8:
    // 0x4d41c8: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x4d41c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_4d41cc:
    // 0x4d41cc: 0xa4440162  sh          $a0, 0x162($v0)
    ctx->pc = 0x4d41ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 354), (uint16_t)GPR_U32(ctx, 4));
label_4d41d0:
    // 0x4d41d0: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x4d41d0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_4d41d4:
    // 0x4d41d4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x4d41d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_4d41d8:
    // 0x4d41d8: 0xa4450164  sh          $a1, 0x164($v0)
    ctx->pc = 0x4d41d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 356), (uint16_t)GPR_U32(ctx, 5));
label_4d41dc:
    // 0x4d41dc: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x4d41dcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_4d41e0:
    // 0x4d41e0: 0xa4440166  sh          $a0, 0x166($v0)
    ctx->pc = 0x4d41e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 358), (uint16_t)GPR_U32(ctx, 4));
label_4d41e4:
    // 0x4d41e4: 0x94650002  lhu         $a1, 0x2($v1)
    ctx->pc = 0x4d41e4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_4d41e8:
    // 0x4d41e8: 0xa4450168  sh          $a1, 0x168($v0)
    ctx->pc = 0x4d41e8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 360), (uint16_t)GPR_U32(ctx, 5));
label_4d41ec:
    // 0x4d41ec: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4d41ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4d41f0:
    // 0x4d41f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4d41f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4d41f4:
    // 0x4d41f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4d41f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4d41f8:
    // 0x4d41f8: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4d41f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
label_4d41fc:
    // 0x4d41fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d41fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d4200:
    // 0x4d4200: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d4200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d4204:
    // 0x4d4204: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d4204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4d4208:
    // 0x4d4208: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4d4208u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4d420c:
    // 0x4d420c: 0x441ffd4  bgez        $v0, . + 4 + (-0x2C << 2)
label_4d4210:
    if (ctx->pc == 0x4D4210u) {
        ctx->pc = 0x4D4214u;
        goto label_4d4214;
    }
    ctx->pc = 0x4D420Cu;
    {
        const bool branch_taken_0x4d420c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4d420c) {
            ctx->pc = 0x4D4160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d4160;
        }
    }
    ctx->pc = 0x4D4214u;
label_4d4214:
    // 0x4d4214: 0x264301bc  addiu       $v1, $s2, 0x1BC
    ctx->pc = 0x4d4214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 444));
label_4d4218:
    // 0x4d4218: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4d4218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4d421c:
    // 0x4d421c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4d421cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_4d4220:
    // 0x4d4220: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d4220u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d4224:
    // 0x4d4224: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d4224u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d4228:
    // 0x4d4228: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d4228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_4d422c:
    // 0x4d422c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d422cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d4230:
    // 0x4d4230: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d4230u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4d4234:
    // 0x4d4234: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d4234u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d4238:
    // 0x4d4238: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4d4238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_4d423c:
    // 0x4d423c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4d423cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d4240:
    // 0x4d4240: 0x8135092  j           func_4D4248
label_4d4244:
    if (ctx->pc == 0x4D4244u) {
        ctx->pc = 0x4D4244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4240u;
        // 0x4d4244: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4248u;
        goto label_4d4248;
    }
    ctx->pc = 0x4D4240u;
    ctx->pc = 0x4D4244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D4240u;
    // 0x4d4244: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D4248u;
    goto label_4d4248;
    ctx->pc = 0x4D4248u;
label_4d4248:
    // 0x4d4248: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4d4248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4d424c:
    // 0x4d424c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d424cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4d4250:
    // 0x4d4250: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d4250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4d4254:
    // 0x4d4254: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4d4254u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
label_4d4258:
    // 0x4d4258: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d4258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_4d425c:
    // 0x4d425c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4d425cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_4d4260:
    // 0x4d4260: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4d4260u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d4264:
    // 0x4d4264: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4d4264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_4d4268:
    // 0x4d4268: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4d4268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_4d426c:
    // 0x4d426c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4d426cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_4d4270:
    // 0x4d4270: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x4d4270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_4d4274:
    // 0x4d4274: 0xc13e3f8  jal         func_4F8FE0
label_4d4278:
    if (ctx->pc == 0x4D4278u) {
        ctx->pc = 0x4D4278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4274u;
        // 0x4d4278: 0x3c16007f  lui         $s6, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D427Cu;
        goto label_4d427c;
    }
    ctx->pc = 0x4D4274u;
    SET_GPR_U32(ctx, 31, 0x4D427Cu);
    ctx->pc = 0x4D4278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D4274u;
    // 0x4d4278: 0x3c16007f  lui         $s6, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F8FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F8FE0u, 0x4D4274u, 0x4D427Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D427Cu;
label_4d427c:
    // 0x4d427c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4d427cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d4280:
    // 0x4d4280: 0x26c51058  addiu       $a1, $s6, 0x1058
    ctx->pc = 0x4d4280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4184));
label_4d4284:
    // 0x4d4284: 0x86440000  lh          $a0, 0x0($s2)
    ctx->pc = 0x4d4284u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4d4288:
    // 0x4d4288: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4d4288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
label_4d428c:
    // 0x4d428c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4d428cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4d4290:
    // 0x4d4290: 0x24701048  addiu       $s0, $v1, 0x1048
    ctx->pc = 0x4d4290u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4168));
label_4d4294:
    // 0x4d4294: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4d4294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4d4298:
    // 0x4d4298: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x4d4298u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
label_4d429c:
    // 0x4d429c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d429cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4d42a0:
    // 0x4d42a0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4d42a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_4d42a4:
    // 0x4d42a4: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4d42a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
label_4d42a8:
    // 0x4d42a8: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x4d42a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_4d42ac:
    // 0x4d42ac: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4d42acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_4d42b0:
    // 0x4d42b0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4d42b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_4d42b4:
    // 0x4d42b4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d42b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4d42b8:
    // 0x4d42b8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d42b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d42bc:
    // 0x4d42bc: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4d42bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4d42c0:
    // 0x4d42c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4d42c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4d42c4:
    // 0x4d42c4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d42c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_4d42c8:
    // 0x4d42c8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d42c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d42cc:
    // 0x4d42cc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d42ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4d42d0:
    // 0x4d42d0: 0xc12b638  jal         func_4AD8E0
label_4d42d4:
    if (ctx->pc == 0x4D42D4u) {
        ctx->pc = 0x4D42D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D42D0u;
        // 0x4d42d4: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D42D8u;
        goto label_4d42d8;
    }
    ctx->pc = 0x4D42D0u;
    SET_GPR_U32(ctx, 31, 0x4D42D8u);
    ctx->pc = 0x4D42D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D42D0u;
    // 0x4d42d4: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8E0u, 0x4D42D0u, 0x4D42D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D42D8u;
label_4d42d8:
    // 0x4d42d8: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
label_4d42dc:
    if (ctx->pc == 0x4D42DCu) {
        ctx->pc = 0x4D42DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D42D8u;
        // 0x4d42dc: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D42E0u;
        goto label_4d42e0;
    }
    ctx->pc = 0x4D42D8u;
    {
        const bool branch_taken_0x4d42d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D42DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D42D8u;
        // 0x4d42dc: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d42d8) {
            ctx->pc = 0x4D4458u;
            goto label_4d4458;
        }
    }
    ctx->pc = 0x4D42E0u;
label_4d42e0:
    // 0x4d42e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4d42e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4d42e4:
    // 0x4d42e4: 0x868201be  lh          $v0, 0x1BE($s4)
    ctx->pc = 0x4d42e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 446)));
label_4d42e8:
    // 0x4d42e8: 0x3c15ffff  lui         $s5, 0xFFFF
    ctx->pc = 0x4d42e8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65535 << 16));
label_4d42ec:
    // 0x4d42ec: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x4d42ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4d42f0:
    // 0x4d42f0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d42f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d42f4:
    // 0x4d42f4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d42f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_4d42f8:
    // 0x4d42f8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d42f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d42fc:
    // 0x4d42fc: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x4d42fcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d4300:
    // 0x4d4300: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d4300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4d4304:
    // 0x4d4304: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d4304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d4308:
    // 0x4d4308: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x4d4308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_4d430c:
    // 0x4d430c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4d430cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4d4310:
    // 0x4d4310: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4d4310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4d4314:
    // 0x4d4314: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d4314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_4d4318:
    // 0x4d4318: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d4318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d431c:
    // 0x4d431c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d431cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4d4320:
    // 0x4d4320: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4d4320u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4d4324:
    // 0x4d4324: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d4324u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4d4328:
    // 0x4d4328: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4d4328u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_4d432c:
    // 0x4d432c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4d432cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4d4330:
    // 0x4d4330: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4d4330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4d4334:
    // 0x4d4334: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x4d4334u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d4338:
    // 0x4d4338: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x4d4338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_4d433c:
    // 0x4d433c: 0x0  nop
    ctx->pc = 0x4d433cu;
    // NOP
label_4d4340:
    // 0x4d4340: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4d4340u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4d4344:
    // 0x4d4344: 0x4400027  bltz        $v0, . + 4 + (0x27 << 2)
label_4d4348:
    if (ctx->pc == 0x4D4348u) {
        ctx->pc = 0x4D4348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4344u;
        // 0x4d4348: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D434Cu;
        goto label_4d434c;
    }
    ctx->pc = 0x4D4344u;
    {
        const bool branch_taken_0x4d4344 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4D4348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4344u;
        // 0x4d4348: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d4344) {
            ctx->pc = 0x4D43E4u;
            goto label_4d43e4;
        }
    }
    ctx->pc = 0x4D434Cu;
label_4d434c:
    // 0x4d434c: 0xc12b5f2  jal         func_4AD7C8
label_4d4350:
    if (ctx->pc == 0x4D4350u) {
        ctx->pc = 0x4D4350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D434Cu;
        // 0x4d4350: 0x86700000  lh          $s0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4354u;
        goto label_4d4354;
    }
    ctx->pc = 0x4D434Cu;
    SET_GPR_U32(ctx, 31, 0x4D4354u);
    ctx->pc = 0x4D4350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D434Cu;
    // 0x4d4350: 0x86700000  lh          $s0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD7C8u, 0x4D434Cu, 0x4D4354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D4354u;
label_4d4354:
    // 0x4d4354: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4d4354u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4d4358:
    // 0x4d4358: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x4d4358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4d435c:
    // 0x4d435c: 0x24460014  addiu       $a2, $v0, 0x14
    ctx->pc = 0x4d435cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_4d4360:
    // 0x4d4360: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4d4360u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
label_4d4364:
    // 0x4d4364: 0x24470018  addiu       $a3, $v0, 0x18
    ctx->pc = 0x4d4364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_4d4368:
    // 0x4d4368: 0x2158025  or          $s0, $s0, $s5
    ctx->pc = 0x4d4368u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 21));
label_4d436c:
    // 0x4d436c: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x4d436cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_4d4370:
    // 0x4d4370: 0xa44301be  sh          $v1, 0x1BE($v0)
    ctx->pc = 0x4d4370u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 446), (uint16_t)GPR_U32(ctx, 3));
label_4d4374:
    // 0x4d4374: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x4d4374u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4d4378:
    // 0x4d4378: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4d4378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4d437c:
    // 0x4d437c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4d437cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_4d4380:
    // 0x4d4380: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4d4380u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4d4384:
    // 0x4d4384: 0x751825  or          $v1, $v1, $s5
    ctx->pc = 0x4d4384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
label_4d4388:
    // 0x4d4388: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4d4388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_4d438c:
    // 0x4d438c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4d438cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4d4390:
    // 0x4d4390: 0x96440002  lhu         $a0, 0x2($s2)
    ctx->pc = 0x4d4390u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_4d4394:
    // 0x4d4394: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4d4394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4d4398:
    // 0x4d4398: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4d4398u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_4d439c:
    // 0x4d439c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4d439cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4d43a0:
    // 0x4d43a0: 0x751825  or          $v1, $v1, $s5
    ctx->pc = 0x4d43a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
label_4d43a4:
    // 0x4d43a4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4d43a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_4d43a8:
    // 0x4d43a8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4d43a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_4d43ac:
    // 0x4d43ac: 0x96440004  lhu         $a0, 0x4($s2)
    ctx->pc = 0x4d43acu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_4d43b0:
    // 0x4d43b0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4d43b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4d43b4:
    // 0x4d43b4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4d43b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_4d43b8:
    // 0x4d43b8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4d43b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4d43bc:
    // 0x4d43bc: 0x751825  or          $v1, $v1, $s5
    ctx->pc = 0x4d43bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
label_4d43c0:
    // 0x4d43c0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4d43c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_4d43c4:
    // 0x4d43c4: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4d43c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_4d43c8:
    // 0x4d43c8: 0xac540140  sw          $s4, 0x140($v0)
    ctx->pc = 0x4d43c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 20));
label_4d43cc:
    // 0x4d43cc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4d43ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4d43d0:
    // 0x4d43d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d43d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d43d4:
    // 0x4d43d4: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x4d43d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
label_4d43d8:
    // 0x4d43d8: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4d43d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4d43dc:
    // 0x4d43dc: 0x96640000  lhu         $a0, 0x0($s3)
    ctx->pc = 0x4d43dcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_4d43e0:
    // 0x4d43e0: 0xa44401b8  sh          $a0, 0x1B8($v0)
    ctx->pc = 0x4d43e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 440), (uint16_t)GPR_U32(ctx, 4));
label_4d43e4:
    // 0x4d43e4: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4d43e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_4d43e8:
    // 0x4d43e8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x4d43e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_4d43ec:
    // 0x4d43ec: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4d43ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4d43f0:
    // 0x4d43f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4d43f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4d43f4:
    // 0x4d43f4: 0x96c41058  lhu         $a0, 0x1058($s6)
    ctx->pc = 0x4d43f4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 4184)));
label_4d43f8:
    // 0x4d43f8: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4d43f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
label_4d43fc:
    // 0x4d43fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d43fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d4400:
    // 0x4d4400: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d4400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d4404:
    // 0x4d4404: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4d4404u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4d4408:
    // 0x4d4408: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4d4408u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_4d440c:
    // 0x4d440c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4d440cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4d4410:
    // 0x4d4410: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
label_4d4414:
    if (ctx->pc == 0x4D4414u) {
        ctx->pc = 0x4D4414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4410u;
        // 0x4d4414: 0x26520006  addiu       $s2, $s2, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4418u;
        goto label_4d4418;
    }
    ctx->pc = 0x4D4410u;
    {
        const bool branch_taken_0x4d4410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D4414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4410u;
        // 0x4d4414: 0x26520006  addiu       $s2, $s2, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d4410) {
            ctx->pc = 0x4D4340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d4340;
        }
    }
    ctx->pc = 0x4D4418u;
label_4d4418:
    // 0x4d4418: 0x268301bc  addiu       $v1, $s4, 0x1BC
    ctx->pc = 0x4d4418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 444));
label_4d441c:
    // 0x4d441c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4d441cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4d4420:
    // 0x4d4420: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4d4420u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_4d4424:
    // 0x4d4424: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d4424u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d4428:
    // 0x4d4428: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d4428u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d442c:
    // 0x4d442c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d442cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_4d4430:
    // 0x4d4430: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d4430u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d4434:
    // 0x4d4434: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d4434u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4d4438:
    // 0x4d4438: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d4438u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d443c:
    // 0x4d443c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d443cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_4d4440:
    // 0x4d4440: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4d4440u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4d4444:
    // 0x4d4444: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4d4444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_4d4448:
    // 0x4d4448: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4d4448u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d444c:
    // 0x4d444c: 0x8135120  j           func_4D4480
label_4d4450:
    if (ctx->pc == 0x4D4450u) {
        ctx->pc = 0x4D4450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D444Cu;
        // 0x4d4450: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4454u;
        goto label_4d4454;
    }
    ctx->pc = 0x4D444Cu;
    ctx->pc = 0x4D4450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D444Cu;
    // 0x4d4450: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D4480u;
    goto label_4d4480;
    ctx->pc = 0x4D4454u;
label_4d4454:
    // 0x4d4454: 0x0  nop
    ctx->pc = 0x4d4454u;
    // NOP
label_4d4458:
    // 0x4d4458: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d4458u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d445c:
    // 0x4d445c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d445cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d4460:
    // 0x4d4460: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d4460u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d4464:
    // 0x4d4464: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d4464u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4d4468:
    // 0x4d4468: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d4468u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d446c:
    // 0x4d446c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d446cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_4d4470:
    // 0x4d4470: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4d4470u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4d4474:
    // 0x4d4474: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4d4474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_4d4478:
    // 0x4d4478: 0x3e00008  jr          $ra
label_4d447c:
    if (ctx->pc == 0x4D447Cu) {
        ctx->pc = 0x4D447Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4478u;
        // 0x4d447c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4480u;
        goto label_4d4480;
    }
    ctx->pc = 0x4D4478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D447Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4478u;
        // 0x4d447c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D4478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D4480u;
label_4d4480:
    // 0x4d4480: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d4480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4d4484:
    // 0x4d4484: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d4484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4d4488:
    // 0x4d4488: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4d4488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_4d448c:
    // 0x4d448c: 0xc122db4  jal         func_48B6D0
label_4d4490:
    if (ctx->pc == 0x4D4490u) {
        ctx->pc = 0x4D4490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D448Cu;
        // 0x4d4490: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4494u;
        goto label_4d4494;
    }
    ctx->pc = 0x4D448Cu;
    SET_GPR_U32(ctx, 31, 0x4D4494u);
    ctx->pc = 0x4D4490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D448Cu;
    // 0x4d4490: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4D448Cu, 0x4D4494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D4494u;
label_4d4494:
    // 0x4d4494: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_4d4498:
    if (ctx->pc == 0x4D4498u) {
        ctx->pc = 0x4D4498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4494u;
        // 0x4d4498: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D449Cu;
        goto label_4d449c;
    }
    ctx->pc = 0x4D4494u;
    {
        const bool branch_taken_0x4d4494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d4494) {
            ctx->pc = 0x4D4498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D4494u;
            // 0x4d4498: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D44DCu;
            goto label_4d44dc;
        }
    }
    ctx->pc = 0x4D449Cu;
label_4d449c:
    // 0x4d449c: 0x86020148  lh          $v0, 0x148($s0)
    ctx->pc = 0x4d449cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 328)));
label_4d44a0:
    // 0x4d44a0: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_4d44a4:
    if (ctx->pc == 0x4D44A4u) {
        ctx->pc = 0x4D44A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D44A0u;
        // 0x4d44a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D44A8u;
        goto label_4d44a8;
    }
    ctx->pc = 0x4D44A0u;
    {
        const bool branch_taken_0x4d44a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d44a0) {
            ctx->pc = 0x4D44A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D44A0u;
            // 0x4d44a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D44DCu;
            goto label_4d44dc;
        }
    }
    ctx->pc = 0x4D44A8u;
label_4d44a8:
    // 0x4d44a8: 0xc126d66  jal         func_49B598
label_4d44ac:
    if (ctx->pc == 0x4D44ACu) {
        ctx->pc = 0x4D44ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D44A8u;
        // 0x4d44ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D44B0u;
        goto label_4d44b0;
    }
    ctx->pc = 0x4D44A8u;
    SET_GPR_U32(ctx, 31, 0x4D44B0u);
    ctx->pc = 0x4D44ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D44A8u;
    // 0x4d44ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49B598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49B598u, 0x4D44A8u, 0x4D44B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D44B0u;
label_4d44b0:
    // 0x4d44b0: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4d44b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_4d44b4:
    // 0x4d44b4: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x4d44b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
label_4d44b8:
    // 0x4d44b8: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x4d44b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_4d44bc:
    // 0x4d44bc: 0xa44323c4  sh          $v1, 0x23C4($v0)
    ctx->pc = 0x4d44bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 9156), (uint16_t)GPR_U32(ctx, 3));
label_4d44c0:
    // 0x4d44c0: 0xc1297fa  jal         func_4A5FE8
label_4d44c4:
    if (ctx->pc == 0x4D44C4u) {
        ctx->pc = 0x4D44C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D44C0u;
        // 0x4d44c4: 0xa44023c2  sh          $zero, 0x23C2($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 9154), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D44C8u;
        goto label_4d44c8;
    }
    ctx->pc = 0x4D44C0u;
    SET_GPR_U32(ctx, 31, 0x4D44C8u);
    ctx->pc = 0x4D44C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D44C0u;
    // 0x4d44c4: 0xa44023c2  sh          $zero, 0x23C2($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 9154), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4D44C0u, 0x4D44C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D44C8u;
label_4d44c8:
    // 0x4d44c8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x4d44c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4d44cc:
    // 0x4d44cc: 0xa6000166  sh          $zero, 0x166($s0)
    ctx->pc = 0x4d44ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 358), (uint16_t)GPR_U32(ctx, 0));
label_4d44d0:
    // 0x4d44d0: 0xa60201bc  sh          $v0, 0x1BC($s0)
    ctx->pc = 0x4d44d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 444), (uint16_t)GPR_U32(ctx, 2));
label_4d44d4:
    // 0x4d44d4: 0xa6000168  sh          $zero, 0x168($s0)
    ctx->pc = 0x4d44d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 360), (uint16_t)GPR_U32(ctx, 0));
label_4d44d8:
    // 0x4d44d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d44d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d44dc:
    // 0x4d44dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4d44dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d44e0:
    // 0x4d44e0: 0x3e00008  jr          $ra
label_4d44e4:
    if (ctx->pc == 0x4D44E4u) {
        ctx->pc = 0x4D44E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D44E0u;
        // 0x4d44e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D44E8u;
        goto label_4d44e8;
    }
    ctx->pc = 0x4D44E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D44E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D44E0u;
        // 0x4d44e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D44E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D44E8u;
label_4d44e8:
    // 0x4d44e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4d44e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4d44ec:
    // 0x4d44ec: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4d44ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
label_4d44f0:
    // 0x4d44f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d44f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4d44f4:
    // 0x4d44f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d44f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d44f8:
    // 0x4d44f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d44f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4d44fc:
    // 0x4d44fc: 0x26110168  addiu       $s1, $s0, 0x168
    ctx->pc = 0x4d44fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 360));
label_4d4500:
    // 0x4d4500: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d4500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_4d4504:
    // 0x4d4504: 0x26030166  addiu       $v1, $s0, 0x166
    ctx->pc = 0x4d4504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 358));
label_4d4508:
    // 0x4d4508: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4d4508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_4d450c:
    // 0x4d450c: 0x24d3105c  addiu       $s3, $a2, 0x105C
    ctx->pc = 0x4d450cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), 4188));
label_4d4510:
    // 0x4d4510: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4d4510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_4d4514:
    // 0x4d4514: 0x24140006  addiu       $s4, $zero, 0x6
    ctx->pc = 0x4d4514u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4d4518:
    // 0x4d4518: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4d4518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_4d451c:
    // 0x4d451c: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x4d451cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
label_4d4520:
    // 0x4d4520: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4d4520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_4d4524:
    // 0x4d4524: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x4d4524u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d4528:
    // 0x4d4528: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4d4528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_4d452c:
    // 0x4d452c: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x4d452cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4d4530:
    // 0x4d4530: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4d4530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_4d4534:
    // 0x4d4534: 0x3c1effff  lui         $fp, 0xFFFF
    ctx->pc = 0x4d4534u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65535 << 16));
label_4d4538:
    // 0x4d4538: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4d4538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_4d453c:
    // 0x4d453c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4d453cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
label_4d4540:
    // 0x4d4540: 0x24957890  addiu       $s5, $a0, 0x7890
    ctx->pc = 0x4d4540u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 30864));
label_4d4544:
    // 0x4d4544: 0x24b21048  addiu       $s2, $a1, 0x1048
    ctx->pc = 0x4d4544u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 4168));
label_4d4548:
    // 0x4d4548: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4d4548u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_4d454c:
    // 0x4d454c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4d454cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4d4550:
    // 0x4d4550: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4d4550u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d4554:
    // 0x4d4554: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x4d4554u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
label_4d4558:
    // 0x4d4558: 0x86c30000  lh          $v1, 0x0($s6)
    ctx->pc = 0x4d4558u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
label_4d455c:
    // 0x4d455c: 0x74001a  div         $zero, $v1, $s4
    ctx->pc = 0x4d455cu;
    { int32_t divisor = GPR_S32(ctx, 20);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_4d4560:
    // 0x4d4560: 0x1812  mflo        $v1
    ctx->pc = 0x4d4560u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_4d4564:
    // 0x4d4564: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x4d4564u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_4d4568:
    // 0x4d4568: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4d4568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4d456c:
    // 0x4d456c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4d456cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4d4570:
    // 0x4d4570: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x4d4570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_4d4574:
    // 0x4d4574: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x4d4574u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_4d4578:
    // 0x4d4578: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4d4578u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4d457c:
    // 0x4d457c: 0x4600016  bltz        $v1, . + 4 + (0x16 << 2)
label_4d4580:
    if (ctx->pc == 0x4D4580u) {
        ctx->pc = 0x4D4580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D457Cu;
        // 0x4d4580: 0x94420000  lhu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4584u;
        goto label_4d4584;
    }
    ctx->pc = 0x4D457Cu;
    {
        const bool branch_taken_0x4d457c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4D4580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D457Cu;
        // 0x4d4580: 0x94420000  lhu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d457c) {
            ctx->pc = 0x4D45D8u;
            goto label_4d45d8;
        }
    }
    ctx->pc = 0x4D4584u;
label_4d4584:
    // 0x4d4584: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4d4584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4d4588:
    // 0x4d4588: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x4d4588u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_4d458c:
    // 0x4d458c: 0x86e20000  lh          $v0, 0x0($s7)
    ctx->pc = 0x4d458cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
label_4d4590:
    // 0x4d4590: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d4590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d4594:
    // 0x4d4594: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x4d4594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
label_4d4598:
    // 0x4d4598: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d4598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d459c:
    // 0x4d459c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4d459cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_4d45a0:
    // 0x4d45a0: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4d45a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4d45a4:
    // 0x4d45a4: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4d45a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4d45a8:
    // 0x4d45a8: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_4d45ac:
    if (ctx->pc == 0x4D45ACu) {
        ctx->pc = 0x4D45B0u;
        goto label_4d45b0;
    }
    ctx->pc = 0x4D45A8u;
    {
        const bool branch_taken_0x4d45a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d45a8) {
            ctx->pc = 0x4D4610u;
            goto label_4d4610;
        }
    }
    ctx->pc = 0x4D45B0u;
label_4d45b0:
    // 0x4d45b0: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4d45b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4d45b4:
    // 0x4d45b4: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x4d45b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
label_4d45b8:
    // 0x4d45b8: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4d45b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d45bc:
    // 0x4d45bc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4d45bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4d45c0:
    // 0x4d45c0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4d45c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4d45c4:
    // 0x4d45c4: 0x40f809  jalr        $v0
label_4d45c8:
    if (ctx->pc == 0x4D45C8u) {
        ctx->pc = 0x4D45C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D45C4u;
        // 0x4d45c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D45CCu;
        goto label_4d45cc;
    }
    ctx->pc = 0x4D45C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4D45CCu);
        ctx->pc = 0x4D45C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D45C4u;
        // 0x4d45c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D45C4u, 0x4D45CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4D45CCu;
label_4d45cc:
    // 0x4d45cc: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
label_4d45d0:
    if (ctx->pc == 0x4D45D0u) {
        ctx->pc = 0x4D45D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D45CCu;
        // 0x4d45d0: 0xae750000  sw          $s5, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D45D4u;
        goto label_4d45d4;
    }
    ctx->pc = 0x4D45CCu;
    {
        const bool branch_taken_0x4d45cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D45D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D45CCu;
        // 0x4d45d0: 0xae750000  sw          $s5, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d45cc) {
            ctx->pc = 0x4D4558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d4558;
        }
    }
    ctx->pc = 0x4D45D4u;
label_4d45d4:
    // 0x4d45d4: 0x0  nop
    ctx->pc = 0x4d45d4u;
    // NOP
label_4d45d8:
    // 0x4d45d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d45d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d45dc:
    // 0x4d45dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d45dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d45e0:
    // 0x4d45e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d45e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d45e4:
    // 0x4d45e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d45e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d45e8:
    // 0x4d45e8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d45e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4d45ec:
    // 0x4d45ec: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d45ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d45f0:
    // 0x4d45f0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d45f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_4d45f4:
    // 0x4d45f4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4d45f4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4d45f8:
    // 0x4d45f8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4d45f8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_4d45fc:
    // 0x4d45fc: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4d45fcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4d4600:
    // 0x4d4600: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4d4600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_4d4604:
    // 0x4d4604: 0x8122db4  j           func_48B6D0
label_4d4608:
    if (ctx->pc == 0x4D4608u) {
        ctx->pc = 0x4D4608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4604u;
        // 0x4d4608: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D460Cu;
        goto label_4d460c;
    }
    ctx->pc = 0x4D4604u;
    ctx->pc = 0x4D4608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D4604u;
    // 0x4d4608: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    sub_0048B6D0_0x48b6d0(rdram, ctx, runtime); return;
    ctx->pc = 0x4D460Cu;
label_4d460c:
    // 0x4d460c: 0x0  nop
    ctx->pc = 0x4d460cu;
    // NOP
label_4d4610:
    // 0x4d4610: 0xc122db4  jal         func_48B6D0
label_4d4614:
    if (ctx->pc == 0x4D4614u) {
        ctx->pc = 0x4D4614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4610u;
        // 0x4d4614: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4618u;
        goto label_4d4618;
    }
    ctx->pc = 0x4D4610u;
    SET_GPR_U32(ctx, 31, 0x4D4618u);
    ctx->pc = 0x4D4614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D4610u;
    // 0x4d4614: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4D4610u, 0x4D4618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D4618u;
label_4d4618:
    // 0x4d4618: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d4618u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d461c:
    // 0x4d461c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d461cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d4620:
    // 0x4d4620: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d4620u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d4624:
    // 0x4d4624: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d4624u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4d4628:
    // 0x4d4628: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d4628u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d462c:
    // 0x4d462c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d462cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_4d4630:
    // 0x4d4630: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4d4630u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4d4634:
    // 0x4d4634: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4d4634u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_4d4638:
    // 0x4d4638: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4d4638u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4d463c:
    // 0x4d463c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4d463cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_4d4640:
    // 0x4d4640: 0x3e00008  jr          $ra
label_4d4644:
    if (ctx->pc == 0x4D4644u) {
        ctx->pc = 0x4D4644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4640u;
        // 0x4d4644: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4648u;
        goto label_fallthrough_0x4d4640;
    }
    ctx->pc = 0x4D4640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D4644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4640u;
        // 0x4d4644: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D4640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4d4640:
    ctx->pc = 0x4D4648u;
}
