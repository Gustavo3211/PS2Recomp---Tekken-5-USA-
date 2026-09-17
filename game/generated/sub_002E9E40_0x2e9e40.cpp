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

// Function: sub_002E9E40
// Address: 0x2e9e40 - 0x2ea538
void sub_002E9E40_0x2e9e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9E40_0x2e9e40");
#endif

    switch (ctx->pc) {
        case 0x2e9e40u: goto label_2e9e40;
        case 0x2e9e44u: goto label_2e9e44;
        case 0x2e9e48u: goto label_2e9e48;
        case 0x2e9e4cu: goto label_2e9e4c;
        case 0x2e9e50u: goto label_2e9e50;
        case 0x2e9e54u: goto label_2e9e54;
        case 0x2e9e58u: goto label_2e9e58;
        case 0x2e9e5cu: goto label_2e9e5c;
        case 0x2e9e60u: goto label_2e9e60;
        case 0x2e9e64u: goto label_2e9e64;
        case 0x2e9e68u: goto label_2e9e68;
        case 0x2e9e6cu: goto label_2e9e6c;
        case 0x2e9e70u: goto label_2e9e70;
        case 0x2e9e74u: goto label_2e9e74;
        case 0x2e9e78u: goto label_2e9e78;
        case 0x2e9e7cu: goto label_2e9e7c;
        case 0x2e9e80u: goto label_2e9e80;
        case 0x2e9e84u: goto label_2e9e84;
        case 0x2e9e88u: goto label_2e9e88;
        case 0x2e9e8cu: goto label_2e9e8c;
        case 0x2e9e90u: goto label_2e9e90;
        case 0x2e9e94u: goto label_2e9e94;
        case 0x2e9e98u: goto label_2e9e98;
        case 0x2e9e9cu: goto label_2e9e9c;
        case 0x2e9ea0u: goto label_2e9ea0;
        case 0x2e9ea4u: goto label_2e9ea4;
        case 0x2e9ea8u: goto label_2e9ea8;
        case 0x2e9eacu: goto label_2e9eac;
        case 0x2e9eb0u: goto label_2e9eb0;
        case 0x2e9eb4u: goto label_2e9eb4;
        case 0x2e9eb8u: goto label_2e9eb8;
        case 0x2e9ebcu: goto label_2e9ebc;
        case 0x2e9ec0u: goto label_2e9ec0;
        case 0x2e9ec4u: goto label_2e9ec4;
        case 0x2e9ec8u: goto label_2e9ec8;
        case 0x2e9eccu: goto label_2e9ecc;
        case 0x2e9ed0u: goto label_2e9ed0;
        case 0x2e9ed4u: goto label_2e9ed4;
        case 0x2e9ed8u: goto label_2e9ed8;
        case 0x2e9edcu: goto label_2e9edc;
        case 0x2e9ee0u: goto label_2e9ee0;
        case 0x2e9ee4u: goto label_2e9ee4;
        case 0x2e9ee8u: goto label_2e9ee8;
        case 0x2e9eecu: goto label_2e9eec;
        case 0x2e9ef0u: goto label_2e9ef0;
        case 0x2e9ef4u: goto label_2e9ef4;
        case 0x2e9ef8u: goto label_2e9ef8;
        case 0x2e9efcu: goto label_2e9efc;
        case 0x2e9f00u: goto label_2e9f00;
        case 0x2e9f04u: goto label_2e9f04;
        case 0x2e9f08u: goto label_2e9f08;
        case 0x2e9f0cu: goto label_2e9f0c;
        case 0x2e9f10u: goto label_2e9f10;
        case 0x2e9f14u: goto label_2e9f14;
        case 0x2e9f18u: goto label_2e9f18;
        case 0x2e9f1cu: goto label_2e9f1c;
        case 0x2e9f20u: goto label_2e9f20;
        case 0x2e9f24u: goto label_2e9f24;
        case 0x2e9f28u: goto label_2e9f28;
        case 0x2e9f2cu: goto label_2e9f2c;
        case 0x2e9f30u: goto label_2e9f30;
        case 0x2e9f34u: goto label_2e9f34;
        case 0x2e9f38u: goto label_2e9f38;
        case 0x2e9f3cu: goto label_2e9f3c;
        case 0x2e9f40u: goto label_2e9f40;
        case 0x2e9f44u: goto label_2e9f44;
        case 0x2e9f48u: goto label_2e9f48;
        case 0x2e9f4cu: goto label_2e9f4c;
        case 0x2e9f50u: goto label_2e9f50;
        case 0x2e9f54u: goto label_2e9f54;
        case 0x2e9f58u: goto label_2e9f58;
        case 0x2e9f5cu: goto label_2e9f5c;
        case 0x2e9f60u: goto label_2e9f60;
        case 0x2e9f64u: goto label_2e9f64;
        case 0x2e9f68u: goto label_2e9f68;
        case 0x2e9f6cu: goto label_2e9f6c;
        case 0x2e9f70u: goto label_2e9f70;
        case 0x2e9f74u: goto label_2e9f74;
        case 0x2e9f78u: goto label_2e9f78;
        case 0x2e9f7cu: goto label_2e9f7c;
        case 0x2e9f80u: goto label_2e9f80;
        case 0x2e9f84u: goto label_2e9f84;
        case 0x2e9f88u: goto label_2e9f88;
        case 0x2e9f8cu: goto label_2e9f8c;
        case 0x2e9f90u: goto label_2e9f90;
        case 0x2e9f94u: goto label_2e9f94;
        case 0x2e9f98u: goto label_2e9f98;
        case 0x2e9f9cu: goto label_2e9f9c;
        case 0x2e9fa0u: goto label_2e9fa0;
        case 0x2e9fa4u: goto label_2e9fa4;
        case 0x2e9fa8u: goto label_2e9fa8;
        case 0x2e9facu: goto label_2e9fac;
        case 0x2e9fb0u: goto label_2e9fb0;
        case 0x2e9fb4u: goto label_2e9fb4;
        case 0x2e9fb8u: goto label_2e9fb8;
        case 0x2e9fbcu: goto label_2e9fbc;
        case 0x2e9fc0u: goto label_2e9fc0;
        case 0x2e9fc4u: goto label_2e9fc4;
        case 0x2e9fc8u: goto label_2e9fc8;
        case 0x2e9fccu: goto label_2e9fcc;
        case 0x2e9fd0u: goto label_2e9fd0;
        case 0x2e9fd4u: goto label_2e9fd4;
        case 0x2e9fd8u: goto label_2e9fd8;
        case 0x2e9fdcu: goto label_2e9fdc;
        case 0x2e9fe0u: goto label_2e9fe0;
        case 0x2e9fe4u: goto label_2e9fe4;
        case 0x2e9fe8u: goto label_2e9fe8;
        case 0x2e9fecu: goto label_2e9fec;
        case 0x2e9ff0u: goto label_2e9ff0;
        case 0x2e9ff4u: goto label_2e9ff4;
        case 0x2e9ff8u: goto label_2e9ff8;
        case 0x2e9ffcu: goto label_2e9ffc;
        case 0x2ea000u: goto label_2ea000;
        case 0x2ea004u: goto label_2ea004;
        case 0x2ea008u: goto label_2ea008;
        case 0x2ea00cu: goto label_2ea00c;
        case 0x2ea010u: goto label_2ea010;
        case 0x2ea014u: goto label_2ea014;
        case 0x2ea018u: goto label_2ea018;
        case 0x2ea01cu: goto label_2ea01c;
        case 0x2ea020u: goto label_2ea020;
        case 0x2ea024u: goto label_2ea024;
        case 0x2ea028u: goto label_2ea028;
        case 0x2ea02cu: goto label_2ea02c;
        case 0x2ea030u: goto label_2ea030;
        case 0x2ea034u: goto label_2ea034;
        case 0x2ea038u: goto label_2ea038;
        case 0x2ea03cu: goto label_2ea03c;
        case 0x2ea040u: goto label_2ea040;
        case 0x2ea044u: goto label_2ea044;
        case 0x2ea048u: goto label_2ea048;
        case 0x2ea04cu: goto label_2ea04c;
        case 0x2ea050u: goto label_2ea050;
        case 0x2ea054u: goto label_2ea054;
        case 0x2ea058u: goto label_2ea058;
        case 0x2ea05cu: goto label_2ea05c;
        case 0x2ea060u: goto label_2ea060;
        case 0x2ea064u: goto label_2ea064;
        case 0x2ea068u: goto label_2ea068;
        case 0x2ea06cu: goto label_2ea06c;
        case 0x2ea070u: goto label_2ea070;
        case 0x2ea074u: goto label_2ea074;
        case 0x2ea078u: goto label_2ea078;
        case 0x2ea07cu: goto label_2ea07c;
        case 0x2ea080u: goto label_2ea080;
        case 0x2ea084u: goto label_2ea084;
        case 0x2ea088u: goto label_2ea088;
        case 0x2ea08cu: goto label_2ea08c;
        case 0x2ea090u: goto label_2ea090;
        case 0x2ea094u: goto label_2ea094;
        case 0x2ea098u: goto label_2ea098;
        case 0x2ea09cu: goto label_2ea09c;
        case 0x2ea0a0u: goto label_2ea0a0;
        case 0x2ea0a4u: goto label_2ea0a4;
        case 0x2ea0a8u: goto label_2ea0a8;
        case 0x2ea0acu: goto label_2ea0ac;
        case 0x2ea0b0u: goto label_2ea0b0;
        case 0x2ea0b4u: goto label_2ea0b4;
        case 0x2ea0b8u: goto label_2ea0b8;
        case 0x2ea0bcu: goto label_2ea0bc;
        case 0x2ea0c0u: goto label_2ea0c0;
        case 0x2ea0c4u: goto label_2ea0c4;
        case 0x2ea0c8u: goto label_2ea0c8;
        case 0x2ea0ccu: goto label_2ea0cc;
        case 0x2ea0d0u: goto label_2ea0d0;
        case 0x2ea0d4u: goto label_2ea0d4;
        case 0x2ea0d8u: goto label_2ea0d8;
        case 0x2ea0dcu: goto label_2ea0dc;
        case 0x2ea0e0u: goto label_2ea0e0;
        case 0x2ea0e4u: goto label_2ea0e4;
        case 0x2ea0e8u: goto label_2ea0e8;
        case 0x2ea0ecu: goto label_2ea0ec;
        case 0x2ea0f0u: goto label_2ea0f0;
        case 0x2ea0f4u: goto label_2ea0f4;
        case 0x2ea0f8u: goto label_2ea0f8;
        case 0x2ea0fcu: goto label_2ea0fc;
        case 0x2ea100u: goto label_2ea100;
        case 0x2ea104u: goto label_2ea104;
        case 0x2ea108u: goto label_2ea108;
        case 0x2ea10cu: goto label_2ea10c;
        case 0x2ea110u: goto label_2ea110;
        case 0x2ea114u: goto label_2ea114;
        case 0x2ea118u: goto label_2ea118;
        case 0x2ea11cu: goto label_2ea11c;
        case 0x2ea120u: goto label_2ea120;
        case 0x2ea124u: goto label_2ea124;
        case 0x2ea128u: goto label_2ea128;
        case 0x2ea12cu: goto label_2ea12c;
        case 0x2ea130u: goto label_2ea130;
        case 0x2ea134u: goto label_2ea134;
        case 0x2ea138u: goto label_2ea138;
        case 0x2ea13cu: goto label_2ea13c;
        case 0x2ea140u: goto label_2ea140;
        case 0x2ea144u: goto label_2ea144;
        case 0x2ea148u: goto label_2ea148;
        case 0x2ea14cu: goto label_2ea14c;
        case 0x2ea150u: goto label_2ea150;
        case 0x2ea154u: goto label_2ea154;
        case 0x2ea158u: goto label_2ea158;
        case 0x2ea15cu: goto label_2ea15c;
        case 0x2ea160u: goto label_2ea160;
        case 0x2ea164u: goto label_2ea164;
        case 0x2ea168u: goto label_2ea168;
        case 0x2ea16cu: goto label_2ea16c;
        case 0x2ea170u: goto label_2ea170;
        case 0x2ea174u: goto label_2ea174;
        case 0x2ea178u: goto label_2ea178;
        case 0x2ea17cu: goto label_2ea17c;
        case 0x2ea180u: goto label_2ea180;
        case 0x2ea184u: goto label_2ea184;
        case 0x2ea188u: goto label_2ea188;
        case 0x2ea18cu: goto label_2ea18c;
        case 0x2ea190u: goto label_2ea190;
        case 0x2ea194u: goto label_2ea194;
        case 0x2ea198u: goto label_2ea198;
        case 0x2ea19cu: goto label_2ea19c;
        case 0x2ea1a0u: goto label_2ea1a0;
        case 0x2ea1a4u: goto label_2ea1a4;
        case 0x2ea1a8u: goto label_2ea1a8;
        case 0x2ea1acu: goto label_2ea1ac;
        case 0x2ea1b0u: goto label_2ea1b0;
        case 0x2ea1b4u: goto label_2ea1b4;
        case 0x2ea1b8u: goto label_2ea1b8;
        case 0x2ea1bcu: goto label_2ea1bc;
        case 0x2ea1c0u: goto label_2ea1c0;
        case 0x2ea1c4u: goto label_2ea1c4;
        case 0x2ea1c8u: goto label_2ea1c8;
        case 0x2ea1ccu: goto label_2ea1cc;
        case 0x2ea1d0u: goto label_2ea1d0;
        case 0x2ea1d4u: goto label_2ea1d4;
        case 0x2ea1d8u: goto label_2ea1d8;
        case 0x2ea1dcu: goto label_2ea1dc;
        case 0x2ea1e0u: goto label_2ea1e0;
        case 0x2ea1e4u: goto label_2ea1e4;
        case 0x2ea1e8u: goto label_2ea1e8;
        case 0x2ea1ecu: goto label_2ea1ec;
        case 0x2ea1f0u: goto label_2ea1f0;
        case 0x2ea1f4u: goto label_2ea1f4;
        case 0x2ea1f8u: goto label_2ea1f8;
        case 0x2ea1fcu: goto label_2ea1fc;
        case 0x2ea200u: goto label_2ea200;
        case 0x2ea204u: goto label_2ea204;
        case 0x2ea208u: goto label_2ea208;
        case 0x2ea20cu: goto label_2ea20c;
        case 0x2ea210u: goto label_2ea210;
        case 0x2ea214u: goto label_2ea214;
        case 0x2ea218u: goto label_2ea218;
        case 0x2ea21cu: goto label_2ea21c;
        case 0x2ea220u: goto label_2ea220;
        case 0x2ea224u: goto label_2ea224;
        case 0x2ea228u: goto label_2ea228;
        case 0x2ea22cu: goto label_2ea22c;
        case 0x2ea230u: goto label_2ea230;
        case 0x2ea234u: goto label_2ea234;
        case 0x2ea238u: goto label_2ea238;
        case 0x2ea23cu: goto label_2ea23c;
        case 0x2ea240u: goto label_2ea240;
        case 0x2ea244u: goto label_2ea244;
        case 0x2ea248u: goto label_2ea248;
        case 0x2ea24cu: goto label_2ea24c;
        case 0x2ea250u: goto label_2ea250;
        case 0x2ea254u: goto label_2ea254;
        case 0x2ea258u: goto label_2ea258;
        case 0x2ea25cu: goto label_2ea25c;
        case 0x2ea260u: goto label_2ea260;
        case 0x2ea264u: goto label_2ea264;
        case 0x2ea268u: goto label_2ea268;
        case 0x2ea26cu: goto label_2ea26c;
        case 0x2ea270u: goto label_2ea270;
        case 0x2ea274u: goto label_2ea274;
        case 0x2ea278u: goto label_2ea278;
        case 0x2ea27cu: goto label_2ea27c;
        case 0x2ea280u: goto label_2ea280;
        case 0x2ea284u: goto label_2ea284;
        case 0x2ea288u: goto label_2ea288;
        case 0x2ea28cu: goto label_2ea28c;
        case 0x2ea290u: goto label_2ea290;
        case 0x2ea294u: goto label_2ea294;
        case 0x2ea298u: goto label_2ea298;
        case 0x2ea29cu: goto label_2ea29c;
        case 0x2ea2a0u: goto label_2ea2a0;
        case 0x2ea2a4u: goto label_2ea2a4;
        case 0x2ea2a8u: goto label_2ea2a8;
        case 0x2ea2acu: goto label_2ea2ac;
        case 0x2ea2b0u: goto label_2ea2b0;
        case 0x2ea2b4u: goto label_2ea2b4;
        case 0x2ea2b8u: goto label_2ea2b8;
        case 0x2ea2bcu: goto label_2ea2bc;
        case 0x2ea2c0u: goto label_2ea2c0;
        case 0x2ea2c4u: goto label_2ea2c4;
        case 0x2ea2c8u: goto label_2ea2c8;
        case 0x2ea2ccu: goto label_2ea2cc;
        case 0x2ea2d0u: goto label_2ea2d0;
        case 0x2ea2d4u: goto label_2ea2d4;
        case 0x2ea2d8u: goto label_2ea2d8;
        case 0x2ea2dcu: goto label_2ea2dc;
        case 0x2ea2e0u: goto label_2ea2e0;
        case 0x2ea2e4u: goto label_2ea2e4;
        case 0x2ea2e8u: goto label_2ea2e8;
        case 0x2ea2ecu: goto label_2ea2ec;
        case 0x2ea2f0u: goto label_2ea2f0;
        case 0x2ea2f4u: goto label_2ea2f4;
        case 0x2ea2f8u: goto label_2ea2f8;
        case 0x2ea2fcu: goto label_2ea2fc;
        case 0x2ea300u: goto label_2ea300;
        case 0x2ea304u: goto label_2ea304;
        case 0x2ea308u: goto label_2ea308;
        case 0x2ea30cu: goto label_2ea30c;
        case 0x2ea310u: goto label_2ea310;
        case 0x2ea314u: goto label_2ea314;
        case 0x2ea318u: goto label_2ea318;
        case 0x2ea31cu: goto label_2ea31c;
        case 0x2ea320u: goto label_2ea320;
        case 0x2ea324u: goto label_2ea324;
        case 0x2ea328u: goto label_2ea328;
        case 0x2ea32cu: goto label_2ea32c;
        case 0x2ea330u: goto label_2ea330;
        case 0x2ea334u: goto label_2ea334;
        case 0x2ea338u: goto label_2ea338;
        case 0x2ea33cu: goto label_2ea33c;
        case 0x2ea340u: goto label_2ea340;
        case 0x2ea344u: goto label_2ea344;
        case 0x2ea348u: goto label_2ea348;
        case 0x2ea34cu: goto label_2ea34c;
        case 0x2ea350u: goto label_2ea350;
        case 0x2ea354u: goto label_2ea354;
        case 0x2ea358u: goto label_2ea358;
        case 0x2ea35cu: goto label_2ea35c;
        case 0x2ea360u: goto label_2ea360;
        case 0x2ea364u: goto label_2ea364;
        case 0x2ea368u: goto label_2ea368;
        case 0x2ea36cu: goto label_2ea36c;
        case 0x2ea370u: goto label_2ea370;
        case 0x2ea374u: goto label_2ea374;
        case 0x2ea378u: goto label_2ea378;
        case 0x2ea37cu: goto label_2ea37c;
        case 0x2ea380u: goto label_2ea380;
        case 0x2ea384u: goto label_2ea384;
        case 0x2ea388u: goto label_2ea388;
        case 0x2ea38cu: goto label_2ea38c;
        case 0x2ea390u: goto label_2ea390;
        case 0x2ea394u: goto label_2ea394;
        case 0x2ea398u: goto label_2ea398;
        case 0x2ea39cu: goto label_2ea39c;
        case 0x2ea3a0u: goto label_2ea3a0;
        case 0x2ea3a4u: goto label_2ea3a4;
        case 0x2ea3a8u: goto label_2ea3a8;
        case 0x2ea3acu: goto label_2ea3ac;
        case 0x2ea3b0u: goto label_2ea3b0;
        case 0x2ea3b4u: goto label_2ea3b4;
        case 0x2ea3b8u: goto label_2ea3b8;
        case 0x2ea3bcu: goto label_2ea3bc;
        case 0x2ea3c0u: goto label_2ea3c0;
        case 0x2ea3c4u: goto label_2ea3c4;
        case 0x2ea3c8u: goto label_2ea3c8;
        case 0x2ea3ccu: goto label_2ea3cc;
        case 0x2ea3d0u: goto label_2ea3d0;
        case 0x2ea3d4u: goto label_2ea3d4;
        case 0x2ea3d8u: goto label_2ea3d8;
        case 0x2ea3dcu: goto label_2ea3dc;
        case 0x2ea3e0u: goto label_2ea3e0;
        case 0x2ea3e4u: goto label_2ea3e4;
        case 0x2ea3e8u: goto label_2ea3e8;
        case 0x2ea3ecu: goto label_2ea3ec;
        case 0x2ea3f0u: goto label_2ea3f0;
        case 0x2ea3f4u: goto label_2ea3f4;
        case 0x2ea3f8u: goto label_2ea3f8;
        case 0x2ea3fcu: goto label_2ea3fc;
        case 0x2ea400u: goto label_2ea400;
        case 0x2ea404u: goto label_2ea404;
        case 0x2ea408u: goto label_2ea408;
        case 0x2ea40cu: goto label_2ea40c;
        case 0x2ea410u: goto label_2ea410;
        case 0x2ea414u: goto label_2ea414;
        case 0x2ea418u: goto label_2ea418;
        case 0x2ea41cu: goto label_2ea41c;
        case 0x2ea420u: goto label_2ea420;
        case 0x2ea424u: goto label_2ea424;
        case 0x2ea428u: goto label_2ea428;
        case 0x2ea42cu: goto label_2ea42c;
        case 0x2ea430u: goto label_2ea430;
        case 0x2ea434u: goto label_2ea434;
        case 0x2ea438u: goto label_2ea438;
        case 0x2ea43cu: goto label_2ea43c;
        case 0x2ea440u: goto label_2ea440;
        case 0x2ea444u: goto label_2ea444;
        case 0x2ea448u: goto label_2ea448;
        case 0x2ea44cu: goto label_2ea44c;
        case 0x2ea450u: goto label_2ea450;
        case 0x2ea454u: goto label_2ea454;
        case 0x2ea458u: goto label_2ea458;
        case 0x2ea45cu: goto label_2ea45c;
        case 0x2ea460u: goto label_2ea460;
        case 0x2ea464u: goto label_2ea464;
        case 0x2ea468u: goto label_2ea468;
        case 0x2ea46cu: goto label_2ea46c;
        case 0x2ea470u: goto label_2ea470;
        case 0x2ea474u: goto label_2ea474;
        case 0x2ea478u: goto label_2ea478;
        case 0x2ea47cu: goto label_2ea47c;
        case 0x2ea480u: goto label_2ea480;
        case 0x2ea484u: goto label_2ea484;
        case 0x2ea488u: goto label_2ea488;
        case 0x2ea48cu: goto label_2ea48c;
        case 0x2ea490u: goto label_2ea490;
        case 0x2ea494u: goto label_2ea494;
        case 0x2ea498u: goto label_2ea498;
        case 0x2ea49cu: goto label_2ea49c;
        case 0x2ea4a0u: goto label_2ea4a0;
        case 0x2ea4a4u: goto label_2ea4a4;
        case 0x2ea4a8u: goto label_2ea4a8;
        case 0x2ea4acu: goto label_2ea4ac;
        case 0x2ea4b0u: goto label_2ea4b0;
        case 0x2ea4b4u: goto label_2ea4b4;
        case 0x2ea4b8u: goto label_2ea4b8;
        case 0x2ea4bcu: goto label_2ea4bc;
        case 0x2ea4c0u: goto label_2ea4c0;
        case 0x2ea4c4u: goto label_2ea4c4;
        case 0x2ea4c8u: goto label_2ea4c8;
        case 0x2ea4ccu: goto label_2ea4cc;
        case 0x2ea4d0u: goto label_2ea4d0;
        case 0x2ea4d4u: goto label_2ea4d4;
        case 0x2ea4d8u: goto label_2ea4d8;
        case 0x2ea4dcu: goto label_2ea4dc;
        case 0x2ea4e0u: goto label_2ea4e0;
        case 0x2ea4e4u: goto label_2ea4e4;
        case 0x2ea4e8u: goto label_2ea4e8;
        case 0x2ea4ecu: goto label_2ea4ec;
        case 0x2ea4f0u: goto label_2ea4f0;
        case 0x2ea4f4u: goto label_2ea4f4;
        case 0x2ea4f8u: goto label_2ea4f8;
        case 0x2ea4fcu: goto label_2ea4fc;
        case 0x2ea500u: goto label_2ea500;
        case 0x2ea504u: goto label_2ea504;
        case 0x2ea508u: goto label_2ea508;
        case 0x2ea50cu: goto label_2ea50c;
        case 0x2ea510u: goto label_2ea510;
        case 0x2ea514u: goto label_2ea514;
        case 0x2ea518u: goto label_2ea518;
        case 0x2ea51cu: goto label_2ea51c;
        case 0x2ea520u: goto label_2ea520;
        case 0x2ea524u: goto label_2ea524;
        case 0x2ea528u: goto label_2ea528;
        case 0x2ea52cu: goto label_2ea52c;
        case 0x2ea530u: goto label_2ea530;
        case 0x2ea534u: goto label_2ea534;
        default: break;
    }

    ctx->pc = 0x2e9e40u;

label_2e9e40:
    // 0x2e9e40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e9e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2e9e44:
    // 0x2e9e44: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2e9e44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_2e9e48:
    // 0x2e9e48: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e9e48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e9e4c:
    // 0x2e9e4c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e9e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e9e50:
    // 0x2e9e50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e9e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2e9e54:
    // 0x2e9e54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e9e54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e9e58:
    // 0x2e9e58: 0x34a50096  ori         $a1, $a1, 0x96
    ctx->pc = 0x2e9e58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)150);
label_2e9e5c:
    // 0x2e9e5c: 0x34c60097  ori         $a2, $a2, 0x97
    ctx->pc = 0x2e9e5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)151);
label_2e9e60:
    // 0x2e9e60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e9e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2e9e64:
    // 0x2e9e64: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e9e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2e9e68:
    // 0x2e9e68: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2e9e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2e9e6c:
    // 0x2e9e6c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2e9e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2e9e70:
    // 0x2e9e70: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2e9e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2e9e74:
    // 0x2e9e74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e9e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2e9e78:
    // 0x2e9e78: 0xc0bbe04  jal         func_2EF810
label_2e9e7c:
    if (ctx->pc == 0x2E9E7Cu) {
        ctx->pc = 0x2E9E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9E78u;
        // 0x2e9e7c: 0x34e70098  ori         $a3, $a3, 0x98 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)152);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9E80u;
        goto label_2e9e80;
    }
    ctx->pc = 0x2E9E78u;
    SET_GPR_U32(ctx, 31, 0x2E9E80u);
    ctx->pc = 0x2E9E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9E78u;
    // 0x2e9e7c: 0x34e70098  ori         $a3, $a3, 0x98 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)152);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF810u, 0x2E9E78u, 0x2E9E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9E80u;
label_2e9e80:
    // 0x2e9e80: 0x26250058  addiu       $a1, $s1, 0x58
    ctx->pc = 0x2e9e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_2e9e84:
    // 0x2e9e84: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2e9e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2e9e88:
    // 0x2e9e88: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e9e8c:
    if (ctx->pc == 0x2E9E8Cu) {
        ctx->pc = 0x2E9E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9E88u;
        // 0x2e9e8c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9E90u;
        goto label_2e9e90;
    }
    ctx->pc = 0x2E9E88u;
    {
        const bool branch_taken_0x2e9e88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9e88) {
            ctx->pc = 0x2E9E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9E88u;
            // 0x2e9e8c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9EA4u;
            goto label_2e9ea4;
        }
    }
    ctx->pc = 0x2E9E90u;
label_2e9e90:
    // 0x2e9e90: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e9e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e9e94:
    // 0x2e9e94: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2e9e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2e9e98:
    // 0x2e9e98: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_2e9e9c:
    if (ctx->pc == 0x2E9E9Cu) {
        ctx->pc = 0x2E9E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9E98u;
        // 0x2e9e9c: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9EA0u;
        goto label_2e9ea0;
    }
    ctx->pc = 0x2E9E98u;
    {
        const bool branch_taken_0x2e9e98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e9e98) {
            ctx->pc = 0x2E9E9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9E98u;
            // 0x2e9e9c: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9EB0u;
            goto label_2e9eb0;
        }
    }
    ctx->pc = 0x2E9EA0u;
label_2e9ea0:
    // 0x2e9ea0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2e9ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2e9ea4:
    // 0x2e9ea4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e9ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9ea8:
    // 0x2e9ea8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2e9ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2e9eac:
    // 0x2e9eac: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2e9eacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_2e9eb0:
    // 0x2e9eb0: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e9eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e9eb4:
    // 0x2e9eb4: 0x34a5007c  ori         $a1, $a1, 0x7C
    ctx->pc = 0x2e9eb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)124);
label_2e9eb8:
    // 0x2e9eb8: 0x34c60114  ori         $a2, $a2, 0x114
    ctx->pc = 0x2e9eb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)276);
label_2e9ebc:
    // 0x2e9ebc: 0xc0bb966  jal         func_2EE598
label_2e9ec0:
    if (ctx->pc == 0x2E9EC0u) {
        ctx->pc = 0x2E9EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9EBCu;
        // 0x2e9ec0: 0x26320060  addiu       $s2, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9EC4u;
        goto label_2e9ec4;
    }
    ctx->pc = 0x2E9EBCu;
    SET_GPR_U32(ctx, 31, 0x2E9EC4u);
    ctx->pc = 0x2E9EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9EBCu;
    // 0x2e9ec0: 0x26320060  addiu       $s2, $s1, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2E9EBCu, 0x2E9EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9EC4u;
label_2e9ec4:
    // 0x2e9ec4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e9ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e9ec8:
    // 0x2e9ec8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e9ecc:
    if (ctx->pc == 0x2E9ECCu) {
        ctx->pc = 0x2E9ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9EC8u;
        // 0x2e9ecc: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9ED0u;
        goto label_2e9ed0;
    }
    ctx->pc = 0x2E9EC8u;
    {
        const bool branch_taken_0x2e9ec8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9ec8) {
            ctx->pc = 0x2E9ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9EC8u;
            // 0x2e9ecc: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9EE4u;
            goto label_2e9ee4;
        }
    }
    ctx->pc = 0x2E9ED0u;
label_2e9ed0:
    // 0x2e9ed0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e9ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e9ed4:
    // 0x2e9ed4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2e9ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2e9ed8:
    // 0x2e9ed8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e9edc:
    if (ctx->pc == 0x2E9EDCu) {
        ctx->pc = 0x2E9EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9ED8u;
        // 0x2e9edc: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9EE0u;
        goto label_2e9ee0;
    }
    ctx->pc = 0x2E9ED8u;
    {
        const bool branch_taken_0x2e9ed8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E9EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9ED8u;
        // 0x2e9edc: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9ed8) {
            ctx->pc = 0x2E9EF0u;
            goto label_2e9ef0;
        }
    }
    ctx->pc = 0x2E9EE0u;
label_2e9ee0:
    // 0x2e9ee0: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2e9ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2e9ee4:
    // 0x2e9ee4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e9ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9ee8:
    // 0x2e9ee8: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2e9ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2e9eec:
    // 0x2e9eec: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2e9eecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_2e9ef0:
    // 0x2e9ef0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2e9ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e9ef4:
    // 0x2e9ef4: 0x34a50082  ori         $a1, $a1, 0x82
    ctx->pc = 0x2e9ef4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)130);
label_2e9ef8:
    // 0x2e9ef8: 0xc0bb966  jal         func_2EE598
label_2e9efc:
    if (ctx->pc == 0x2E9EFCu) {
        ctx->pc = 0x2E9EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9EF8u;
        // 0x2e9efc: 0x26300068  addiu       $s0, $s1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9F00u;
        goto label_2e9f00;
    }
    ctx->pc = 0x2E9EF8u;
    SET_GPR_U32(ctx, 31, 0x2E9F00u);
    ctx->pc = 0x2E9EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9EF8u;
    // 0x2e9efc: 0x26300068  addiu       $s0, $s1, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2E9EF8u, 0x2E9F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9F00u;
label_2e9f00:
    // 0x2e9f00: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e9f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e9f04:
    // 0x2e9f04: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e9f08:
    if (ctx->pc == 0x2E9F08u) {
        ctx->pc = 0x2E9F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9F04u;
        // 0x2e9f08: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9F0Cu;
        goto label_2e9f0c;
    }
    ctx->pc = 0x2E9F04u;
    {
        const bool branch_taken_0x2e9f04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9f04) {
            ctx->pc = 0x2E9F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9F04u;
            // 0x2e9f08: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9F20u;
            goto label_2e9f20;
        }
    }
    ctx->pc = 0x2E9F0Cu;
label_2e9f0c:
    // 0x2e9f0c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e9f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e9f10:
    // 0x2e9f10: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e9f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2e9f14:
    // 0x2e9f14: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e9f18:
    if (ctx->pc == 0x2E9F18u) {
        ctx->pc = 0x2E9F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9F14u;
        // 0x2e9f18: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9F1Cu;
        goto label_2e9f1c;
    }
    ctx->pc = 0x2E9F14u;
    {
        const bool branch_taken_0x2e9f14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E9F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9F14u;
        // 0x2e9f18: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9f14) {
            ctx->pc = 0x2E9F2Cu;
            goto label_2e9f2c;
        }
    }
    ctx->pc = 0x2E9F1Cu;
label_2e9f1c:
    // 0x2e9f1c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e9f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2e9f20:
    // 0x2e9f20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e9f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9f24:
    // 0x2e9f24: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e9f24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2e9f28:
    // 0x2e9f28: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2e9f28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_2e9f2c:
    // 0x2e9f2c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2e9f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e9f30:
    // 0x2e9f30: 0x34a50085  ori         $a1, $a1, 0x85
    ctx->pc = 0x2e9f30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)133);
label_2e9f34:
    // 0x2e9f34: 0xc0bb966  jal         func_2EE598
label_2e9f38:
    if (ctx->pc == 0x2E9F38u) {
        ctx->pc = 0x2E9F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9F34u;
        // 0x2e9f38: 0x26330070  addiu       $s3, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9F3Cu;
        goto label_2e9f3c;
    }
    ctx->pc = 0x2E9F34u;
    SET_GPR_U32(ctx, 31, 0x2E9F3Cu);
    ctx->pc = 0x2E9F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9F34u;
    // 0x2e9f38: 0x26330070  addiu       $s3, $s1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2E9F34u, 0x2E9F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9F3Cu;
label_2e9f3c:
    // 0x2e9f3c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2e9f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e9f40:
    // 0x2e9f40: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e9f44:
    if (ctx->pc == 0x2E9F44u) {
        ctx->pc = 0x2E9F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9F40u;
        // 0x2e9f44: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9F48u;
        goto label_2e9f48;
    }
    ctx->pc = 0x2E9F40u;
    {
        const bool branch_taken_0x2e9f40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9f40) {
            ctx->pc = 0x2E9F44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9F40u;
            // 0x2e9f44: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9F5Cu;
            goto label_2e9f5c;
        }
    }
    ctx->pc = 0x2E9F48u;
label_2e9f48:
    // 0x2e9f48: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e9f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e9f4c:
    // 0x2e9f4c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2e9f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2e9f50:
    // 0x2e9f50: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e9f54:
    if (ctx->pc == 0x2E9F54u) {
        ctx->pc = 0x2E9F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9F50u;
        // 0x2e9f54: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9F58u;
        goto label_2e9f58;
    }
    ctx->pc = 0x2E9F50u;
    {
        const bool branch_taken_0x2e9f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E9F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9F50u;
        // 0x2e9f54: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9f50) {
            ctx->pc = 0x2E9F68u;
            goto label_2e9f68;
        }
    }
    ctx->pc = 0x2E9F58u;
label_2e9f58:
    // 0x2e9f58: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2e9f58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_2e9f5c:
    // 0x2e9f5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e9f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9f60:
    // 0x2e9f60: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x2e9f60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_2e9f64:
    // 0x2e9f64: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2e9f64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_2e9f68:
    // 0x2e9f68: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2e9f68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e9f6c:
    // 0x2e9f6c: 0x34a50212  ori         $a1, $a1, 0x212
    ctx->pc = 0x2e9f6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)530);
label_2e9f70:
    // 0x2e9f70: 0xc0bb966  jal         func_2EE598
label_2e9f74:
    if (ctx->pc == 0x2E9F74u) {
        ctx->pc = 0x2E9F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9F70u;
        // 0x2e9f74: 0x26340078  addiu       $s4, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9F78u;
        goto label_2e9f78;
    }
    ctx->pc = 0x2E9F70u;
    SET_GPR_U32(ctx, 31, 0x2E9F78u);
    ctx->pc = 0x2E9F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9F70u;
    // 0x2e9f74: 0x26340078  addiu       $s4, $s1, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2E9F70u, 0x2E9F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9F78u;
label_2e9f78:
    // 0x2e9f78: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2e9f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2e9f7c:
    // 0x2e9f7c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e9f80:
    if (ctx->pc == 0x2E9F80u) {
        ctx->pc = 0x2E9F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9F7Cu;
        // 0x2e9f80: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9F84u;
        goto label_2e9f84;
    }
    ctx->pc = 0x2E9F7Cu;
    {
        const bool branch_taken_0x2e9f7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9f7c) {
            ctx->pc = 0x2E9F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9F7Cu;
            // 0x2e9f80: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9F98u;
            goto label_2e9f98;
        }
    }
    ctx->pc = 0x2E9F84u;
label_2e9f84:
    // 0x2e9f84: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e9f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e9f88:
    // 0x2e9f88: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2e9f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2e9f8c:
    // 0x2e9f8c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e9f90:
    if (ctx->pc == 0x2E9F90u) {
        ctx->pc = 0x2E9F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9F8Cu;
        // 0x2e9f90: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9F94u;
        goto label_2e9f94;
    }
    ctx->pc = 0x2E9F8Cu;
    {
        const bool branch_taken_0x2e9f8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E9F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9F8Cu;
        // 0x2e9f90: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9f8c) {
            ctx->pc = 0x2E9FA4u;
            goto label_2e9fa4;
        }
    }
    ctx->pc = 0x2E9F94u;
label_2e9f94:
    // 0x2e9f94: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x2e9f94u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_2e9f98:
    // 0x2e9f98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e9f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9f9c:
    // 0x2e9f9c: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x2e9f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_2e9fa0:
    // 0x2e9fa0: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2e9fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_2e9fa4:
    // 0x2e9fa4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2e9fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e9fa8:
    // 0x2e9fa8: 0x34a50215  ori         $a1, $a1, 0x215
    ctx->pc = 0x2e9fa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)533);
label_2e9fac:
    // 0x2e9fac: 0xc0bb966  jal         func_2EE598
label_2e9fb0:
    if (ctx->pc == 0x2E9FB0u) {
        ctx->pc = 0x2E9FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9FACu;
        // 0x2e9fb0: 0x26350080  addiu       $s5, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9FB4u;
        goto label_2e9fb4;
    }
    ctx->pc = 0x2E9FACu;
    SET_GPR_U32(ctx, 31, 0x2E9FB4u);
    ctx->pc = 0x2E9FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9FACu;
    // 0x2e9fb0: 0x26350080  addiu       $s5, $s1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2E9FACu, 0x2E9FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9FB4u;
label_2e9fb4:
    // 0x2e9fb4: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2e9fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2e9fb8:
    // 0x2e9fb8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e9fbc:
    if (ctx->pc == 0x2E9FBCu) {
        ctx->pc = 0x2E9FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9FB8u;
        // 0x2e9fbc: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9FC0u;
        goto label_2e9fc0;
    }
    ctx->pc = 0x2E9FB8u;
    {
        const bool branch_taken_0x2e9fb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9fb8) {
            ctx->pc = 0x2E9FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9FB8u;
            // 0x2e9fbc: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9FD4u;
            goto label_2e9fd4;
        }
    }
    ctx->pc = 0x2E9FC0u;
label_2e9fc0:
    // 0x2e9fc0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e9fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e9fc4:
    // 0x2e9fc4: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2e9fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2e9fc8:
    // 0x2e9fc8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e9fcc:
    if (ctx->pc == 0x2E9FCCu) {
        ctx->pc = 0x2E9FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9FC8u;
        // 0x2e9fcc: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9FD0u;
        goto label_2e9fd0;
    }
    ctx->pc = 0x2E9FC8u;
    {
        const bool branch_taken_0x2e9fc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E9FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9FC8u;
        // 0x2e9fcc: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9fc8) {
            ctx->pc = 0x2E9FE0u;
            goto label_2e9fe0;
        }
    }
    ctx->pc = 0x2E9FD0u;
label_2e9fd0:
    // 0x2e9fd0: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x2e9fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_2e9fd4:
    // 0x2e9fd4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e9fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9fd8:
    // 0x2e9fd8: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x2e9fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
label_2e9fdc:
    // 0x2e9fdc: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2e9fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_2e9fe0:
    // 0x2e9fe0: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e9fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e9fe4:
    // 0x2e9fe4: 0x34a50146  ori         $a1, $a1, 0x146
    ctx->pc = 0x2e9fe4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)326);
label_2e9fe8:
    // 0x2e9fe8: 0xc0bb966  jal         func_2EE598
label_2e9fec:
    if (ctx->pc == 0x2E9FECu) {
        ctx->pc = 0x2E9FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9FE8u;
        // 0x2e9fec: 0x34c601fe  ori         $a2, $a2, 0x1FE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)510);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9FF0u;
        goto label_2e9ff0;
    }
    ctx->pc = 0x2E9FE8u;
    SET_GPR_U32(ctx, 31, 0x2E9FF0u);
    ctx->pc = 0x2E9FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9FE8u;
    // 0x2e9fec: 0x34c601fe  ori         $a2, $a2, 0x1FE (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)510);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2E9FE8u, 0x2E9FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9FF0u;
label_2e9ff0:
    // 0x2e9ff0: 0x26250088  addiu       $a1, $s1, 0x88
    ctx->pc = 0x2e9ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
label_2e9ff4:
    // 0x2e9ff4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2e9ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2e9ff8:
    // 0x2e9ff8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e9ffc:
    if (ctx->pc == 0x2E9FFCu) {
        ctx->pc = 0x2E9FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9FF8u;
        // 0x2e9ffc: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA000u;
        goto label_2ea000;
    }
    ctx->pc = 0x2E9FF8u;
    {
        const bool branch_taken_0x2e9ff8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9ff8) {
            ctx->pc = 0x2E9FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9FF8u;
            // 0x2e9ffc: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA014u;
            goto label_2ea014;
        }
    }
    ctx->pc = 0x2EA000u;
label_2ea000:
    // 0x2ea000: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ea000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2ea004:
    // 0x2ea004: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ea004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2ea008:
    // 0x2ea008: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_2ea00c:
    if (ctx->pc == 0x2EA00Cu) {
        ctx->pc = 0x2EA00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA008u;
        // 0x2ea00c: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA010u;
        goto label_2ea010;
    }
    ctx->pc = 0x2EA008u;
    {
        const bool branch_taken_0x2ea008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ea008) {
            ctx->pc = 0x2EA00Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA008u;
            // 0x2ea00c: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA020u;
            goto label_2ea020;
        }
    }
    ctx->pc = 0x2EA010u;
label_2ea010:
    // 0x2ea010: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2ea010u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2ea014:
    // 0x2ea014: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ea014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea018:
    // 0x2ea018: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2ea018u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2ea01c:
    // 0x2ea01c: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2ea01cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_2ea020:
    // 0x2ea020: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2ea020u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2ea024:
    // 0x2ea024: 0x34a50149  ori         $a1, $a1, 0x149
    ctx->pc = 0x2ea024u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)329);
label_2ea028:
    // 0x2ea028: 0xc0bb966  jal         func_2EE598
label_2ea02c:
    if (ctx->pc == 0x2EA02Cu) {
        ctx->pc = 0x2EA02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA028u;
        // 0x2ea02c: 0x34c60201  ori         $a2, $a2, 0x201 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)513);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA030u;
        goto label_2ea030;
    }
    ctx->pc = 0x2EA028u;
    SET_GPR_U32(ctx, 31, 0x2EA030u);
    ctx->pc = 0x2EA02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA028u;
    // 0x2ea02c: 0x34c60201  ori         $a2, $a2, 0x201 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)513);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2EA028u, 0x2EA030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA030u;
label_2ea030:
    // 0x2ea030: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2ea030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ea034:
    // 0x2ea034: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2ea038:
    if (ctx->pc == 0x2EA038u) {
        ctx->pc = 0x2EA038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA034u;
        // 0x2ea038: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA03Cu;
        goto label_2ea03c;
    }
    ctx->pc = 0x2EA034u;
    {
        const bool branch_taken_0x2ea034 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea034) {
            ctx->pc = 0x2EA038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA034u;
            // 0x2ea038: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA050u;
            goto label_2ea050;
        }
    }
    ctx->pc = 0x2EA03Cu;
label_2ea03c:
    // 0x2ea03c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ea03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2ea040:
    // 0x2ea040: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2ea040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2ea044:
    // 0x2ea044: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2ea048:
    if (ctx->pc == 0x2EA048u) {
        ctx->pc = 0x2EA048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA044u;
        // 0x2ea048: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA04Cu;
        goto label_2ea04c;
    }
    ctx->pc = 0x2EA044u;
    {
        const bool branch_taken_0x2ea044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EA048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA044u;
        // 0x2ea048: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea044) {
            ctx->pc = 0x2EA05Cu;
            goto label_2ea05c;
        }
    }
    ctx->pc = 0x2EA04Cu;
label_2ea04c:
    // 0x2ea04c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2ea04cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2ea050:
    // 0x2ea050: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ea050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea054:
    // 0x2ea054: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2ea054u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2ea058:
    // 0x2ea058: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2ea058u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2ea05c:
    // 0x2ea05c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2ea05cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2ea060:
    // 0x2ea060: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ea060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea064:
    // 0x2ea064: 0x34c60083  ori         $a2, $a2, 0x83
    ctx->pc = 0x2ea064u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)131);
label_2ea068:
    // 0x2ea068: 0xc0bb96a  jal         func_2EE5A8
label_2ea06c:
    if (ctx->pc == 0x2EA06Cu) {
        ctx->pc = 0x2EA06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA068u;
        // 0x2ea06c: 0x34e70117  ori         $a3, $a3, 0x117 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)279);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA070u;
        goto label_2ea070;
    }
    ctx->pc = 0x2EA068u;
    SET_GPR_U32(ctx, 31, 0x2EA070u);
    ctx->pc = 0x2EA06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA068u;
    // 0x2ea06c: 0x34e70117  ori         $a3, $a3, 0x117 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)279);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2EA068u, 0x2EA070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA070u;
label_2ea070:
    // 0x2ea070: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2ea070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ea074:
    // 0x2ea074: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2ea078:
    if (ctx->pc == 0x2EA078u) {
        ctx->pc = 0x2EA078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA074u;
        // 0x2ea078: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA07Cu;
        goto label_2ea07c;
    }
    ctx->pc = 0x2EA074u;
    {
        const bool branch_taken_0x2ea074 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea074) {
            ctx->pc = 0x2EA078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA074u;
            // 0x2ea078: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA090u;
            goto label_2ea090;
        }
    }
    ctx->pc = 0x2EA07Cu;
label_2ea07c:
    // 0x2ea07c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ea07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2ea080:
    // 0x2ea080: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2ea080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2ea084:
    // 0x2ea084: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2ea088:
    if (ctx->pc == 0x2EA088u) {
        ctx->pc = 0x2EA088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA084u;
        // 0x2ea088: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA08Cu;
        goto label_2ea08c;
    }
    ctx->pc = 0x2EA084u;
    {
        const bool branch_taken_0x2ea084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EA088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA084u;
        // 0x2ea088: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea084) {
            ctx->pc = 0x2EA09Cu;
            goto label_2ea09c;
        }
    }
    ctx->pc = 0x2EA08Cu;
label_2ea08c:
    // 0x2ea08c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2ea08cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2ea090:
    // 0x2ea090: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ea090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea094:
    // 0x2ea094: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2ea094u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2ea098:
    // 0x2ea098: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2ea098u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2ea09c:
    // 0x2ea09c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2ea09cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2ea0a0:
    // 0x2ea0a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ea0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ea0a4:
    // 0x2ea0a4: 0x34c60084  ori         $a2, $a2, 0x84
    ctx->pc = 0x2ea0a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)132);
label_2ea0a8:
    // 0x2ea0a8: 0xc0bb96a  jal         func_2EE5A8
label_2ea0ac:
    if (ctx->pc == 0x2EA0ACu) {
        ctx->pc = 0x2EA0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA0A8u;
        // 0x2ea0ac: 0x34e70118  ori         $a3, $a3, 0x118 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)280);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA0B0u;
        goto label_2ea0b0;
    }
    ctx->pc = 0x2EA0A8u;
    SET_GPR_U32(ctx, 31, 0x2EA0B0u);
    ctx->pc = 0x2EA0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA0A8u;
    // 0x2ea0ac: 0x34e70118  ori         $a3, $a3, 0x118 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)280);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2EA0A8u, 0x2EA0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA0B0u;
label_2ea0b0:
    // 0x2ea0b0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ea0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ea0b4:
    // 0x2ea0b4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2ea0b8:
    if (ctx->pc == 0x2EA0B8u) {
        ctx->pc = 0x2EA0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA0B4u;
        // 0x2ea0b8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA0BCu;
        goto label_2ea0bc;
    }
    ctx->pc = 0x2EA0B4u;
    {
        const bool branch_taken_0x2ea0b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea0b4) {
            ctx->pc = 0x2EA0B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA0B4u;
            // 0x2ea0b8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA0D0u;
            goto label_2ea0d0;
        }
    }
    ctx->pc = 0x2EA0BCu;
label_2ea0bc:
    // 0x2ea0bc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ea0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2ea0c0:
    // 0x2ea0c0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ea0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2ea0c4:
    // 0x2ea0c4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2ea0c8:
    if (ctx->pc == 0x2EA0C8u) {
        ctx->pc = 0x2EA0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA0C4u;
        // 0x2ea0c8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA0CCu;
        goto label_2ea0cc;
    }
    ctx->pc = 0x2EA0C4u;
    {
        const bool branch_taken_0x2ea0c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EA0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA0C4u;
        // 0x2ea0c8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea0c4) {
            ctx->pc = 0x2EA0DCu;
            goto label_2ea0dc;
        }
    }
    ctx->pc = 0x2EA0CCu;
label_2ea0cc:
    // 0x2ea0cc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2ea0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2ea0d0:
    // 0x2ea0d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ea0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea0d4:
    // 0x2ea0d4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2ea0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2ea0d8:
    // 0x2ea0d8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2ea0d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2ea0dc:
    // 0x2ea0dc: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2ea0dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2ea0e0:
    // 0x2ea0e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ea0e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea0e4:
    // 0x2ea0e4: 0x34c60086  ori         $a2, $a2, 0x86
    ctx->pc = 0x2ea0e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)134);
label_2ea0e8:
    // 0x2ea0e8: 0xc0bb96a  jal         func_2EE5A8
label_2ea0ec:
    if (ctx->pc == 0x2EA0ECu) {
        ctx->pc = 0x2EA0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA0E8u;
        // 0x2ea0ec: 0x34e70120  ori         $a3, $a3, 0x120 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)288);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA0F0u;
        goto label_2ea0f0;
    }
    ctx->pc = 0x2EA0E8u;
    SET_GPR_U32(ctx, 31, 0x2EA0F0u);
    ctx->pc = 0x2EA0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA0E8u;
    // 0x2ea0ec: 0x34e70120  ori         $a3, $a3, 0x120 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)288);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2EA0E8u, 0x2EA0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA0F0u;
label_2ea0f0:
    // 0x2ea0f0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ea0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ea0f4:
    // 0x2ea0f4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2ea0f8:
    if (ctx->pc == 0x2EA0F8u) {
        ctx->pc = 0x2EA0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA0F4u;
        // 0x2ea0f8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA0FCu;
        goto label_2ea0fc;
    }
    ctx->pc = 0x2EA0F4u;
    {
        const bool branch_taken_0x2ea0f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea0f4) {
            ctx->pc = 0x2EA0F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA0F4u;
            // 0x2ea0f8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA110u;
            goto label_2ea110;
        }
    }
    ctx->pc = 0x2EA0FCu;
label_2ea0fc:
    // 0x2ea0fc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ea0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2ea100:
    // 0x2ea100: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ea100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2ea104:
    // 0x2ea104: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2ea108:
    if (ctx->pc == 0x2EA108u) {
        ctx->pc = 0x2EA108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA104u;
        // 0x2ea108: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA10Cu;
        goto label_2ea10c;
    }
    ctx->pc = 0x2EA104u;
    {
        const bool branch_taken_0x2ea104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EA108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA104u;
        // 0x2ea108: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea104) {
            ctx->pc = 0x2EA11Cu;
            goto label_2ea11c;
        }
    }
    ctx->pc = 0x2EA10Cu;
label_2ea10c:
    // 0x2ea10c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2ea10cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2ea110:
    // 0x2ea110: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ea110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea114:
    // 0x2ea114: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2ea114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2ea118:
    // 0x2ea118: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2ea118u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2ea11c:
    // 0x2ea11c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2ea11cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2ea120:
    // 0x2ea120: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ea120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ea124:
    // 0x2ea124: 0x34c60087  ori         $a2, $a2, 0x87
    ctx->pc = 0x2ea124u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)135);
label_2ea128:
    // 0x2ea128: 0xc0bb96a  jal         func_2EE5A8
label_2ea12c:
    if (ctx->pc == 0x2EA12Cu) {
        ctx->pc = 0x2EA12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA128u;
        // 0x2ea12c: 0x34e7011f  ori         $a3, $a3, 0x11F (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)287);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA130u;
        goto label_2ea130;
    }
    ctx->pc = 0x2EA128u;
    SET_GPR_U32(ctx, 31, 0x2EA130u);
    ctx->pc = 0x2EA12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA128u;
    // 0x2ea12c: 0x34e7011f  ori         $a3, $a3, 0x11F (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)287);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2EA128u, 0x2EA130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA130u;
label_2ea130:
    // 0x2ea130: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ea130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ea134:
    // 0x2ea134: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2ea138:
    if (ctx->pc == 0x2EA138u) {
        ctx->pc = 0x2EA138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA134u;
        // 0x2ea138: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA13Cu;
        goto label_2ea13c;
    }
    ctx->pc = 0x2EA134u;
    {
        const bool branch_taken_0x2ea134 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea134) {
            ctx->pc = 0x2EA138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA134u;
            // 0x2ea138: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA150u;
            goto label_2ea150;
        }
    }
    ctx->pc = 0x2EA13Cu;
label_2ea13c:
    // 0x2ea13c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ea13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2ea140:
    // 0x2ea140: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ea140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2ea144:
    // 0x2ea144: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2ea148:
    if (ctx->pc == 0x2EA148u) {
        ctx->pc = 0x2EA148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA144u;
        // 0x2ea148: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA14Cu;
        goto label_2ea14c;
    }
    ctx->pc = 0x2EA144u;
    {
        const bool branch_taken_0x2ea144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EA148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA144u;
        // 0x2ea148: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea144) {
            ctx->pc = 0x2EA15Cu;
            goto label_2ea15c;
        }
    }
    ctx->pc = 0x2EA14Cu;
label_2ea14c:
    // 0x2ea14c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2ea14cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2ea150:
    // 0x2ea150: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ea150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea154:
    // 0x2ea154: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2ea154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2ea158:
    // 0x2ea158: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2ea158u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2ea15c:
    // 0x2ea15c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2ea15cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2ea160:
    // 0x2ea160: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2ea160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ea164:
    // 0x2ea164: 0x34c60088  ori         $a2, $a2, 0x88
    ctx->pc = 0x2ea164u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)136);
label_2ea168:
    // 0x2ea168: 0xc0bb96a  jal         func_2EE5A8
label_2ea16c:
    if (ctx->pc == 0x2EA16Cu) {
        ctx->pc = 0x2EA16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA168u;
        // 0x2ea16c: 0x34e7011e  ori         $a3, $a3, 0x11E (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)286);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA170u;
        goto label_2ea170;
    }
    ctx->pc = 0x2EA168u;
    SET_GPR_U32(ctx, 31, 0x2EA170u);
    ctx->pc = 0x2EA16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA168u;
    // 0x2ea16c: 0x34e7011e  ori         $a3, $a3, 0x11E (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)286);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2EA168u, 0x2EA170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA170u;
label_2ea170:
    // 0x2ea170: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ea170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ea174:
    // 0x2ea174: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2ea178:
    if (ctx->pc == 0x2EA178u) {
        ctx->pc = 0x2EA178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA174u;
        // 0x2ea178: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA17Cu;
        goto label_2ea17c;
    }
    ctx->pc = 0x2EA174u;
    {
        const bool branch_taken_0x2ea174 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea174) {
            ctx->pc = 0x2EA178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA174u;
            // 0x2ea178: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA190u;
            goto label_2ea190;
        }
    }
    ctx->pc = 0x2EA17Cu;
label_2ea17c:
    // 0x2ea17c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ea17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2ea180:
    // 0x2ea180: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ea180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2ea184:
    // 0x2ea184: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2ea188:
    if (ctx->pc == 0x2EA188u) {
        ctx->pc = 0x2EA188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA184u;
        // 0x2ea188: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA18Cu;
        goto label_2ea18c;
    }
    ctx->pc = 0x2EA184u;
    {
        const bool branch_taken_0x2ea184 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EA188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA184u;
        // 0x2ea188: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea184) {
            ctx->pc = 0x2EA19Cu;
            goto label_2ea19c;
        }
    }
    ctx->pc = 0x2EA18Cu;
label_2ea18c:
    // 0x2ea18c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2ea18cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2ea190:
    // 0x2ea190: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ea190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea194:
    // 0x2ea194: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2ea194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2ea198:
    // 0x2ea198: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2ea198u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2ea19c:
    // 0x2ea19c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2ea19cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2ea1a0:
    // 0x2ea1a0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2ea1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2ea1a4:
    // 0x2ea1a4: 0x34c60089  ori         $a2, $a2, 0x89
    ctx->pc = 0x2ea1a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)137);
label_2ea1a8:
    // 0x2ea1a8: 0xc0bb96a  jal         func_2EE5A8
label_2ea1ac:
    if (ctx->pc == 0x2EA1ACu) {
        ctx->pc = 0x2EA1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA1A8u;
        // 0x2ea1ac: 0x34e7011d  ori         $a3, $a3, 0x11D (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)285);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA1B0u;
        goto label_2ea1b0;
    }
    ctx->pc = 0x2EA1A8u;
    SET_GPR_U32(ctx, 31, 0x2EA1B0u);
    ctx->pc = 0x2EA1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA1A8u;
    // 0x2ea1ac: 0x34e7011d  ori         $a3, $a3, 0x11D (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)285);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2EA1A8u, 0x2EA1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA1B0u;
label_2ea1b0:
    // 0x2ea1b0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ea1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ea1b4:
    // 0x2ea1b4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2ea1b8:
    if (ctx->pc == 0x2EA1B8u) {
        ctx->pc = 0x2EA1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA1B4u;
        // 0x2ea1b8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA1BCu;
        goto label_2ea1bc;
    }
    ctx->pc = 0x2EA1B4u;
    {
        const bool branch_taken_0x2ea1b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea1b4) {
            ctx->pc = 0x2EA1B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA1B4u;
            // 0x2ea1b8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA1D0u;
            goto label_2ea1d0;
        }
    }
    ctx->pc = 0x2EA1BCu;
label_2ea1bc:
    // 0x2ea1bc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ea1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2ea1c0:
    // 0x2ea1c0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ea1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2ea1c4:
    // 0x2ea1c4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2ea1c8:
    if (ctx->pc == 0x2EA1C8u) {
        ctx->pc = 0x2EA1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA1C4u;
        // 0x2ea1c8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA1CCu;
        goto label_2ea1cc;
    }
    ctx->pc = 0x2EA1C4u;
    {
        const bool branch_taken_0x2ea1c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EA1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA1C4u;
        // 0x2ea1c8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea1c4) {
            ctx->pc = 0x2EA1DCu;
            goto label_2ea1dc;
        }
    }
    ctx->pc = 0x2EA1CCu;
label_2ea1cc:
    // 0x2ea1cc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2ea1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2ea1d0:
    // 0x2ea1d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ea1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea1d4:
    // 0x2ea1d4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2ea1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2ea1d8:
    // 0x2ea1d8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2ea1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2ea1dc:
    // 0x2ea1dc: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2ea1dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2ea1e0:
    // 0x2ea1e0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2ea1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2ea1e4:
    // 0x2ea1e4: 0x34c6008a  ori         $a2, $a2, 0x8A
    ctx->pc = 0x2ea1e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)138);
label_2ea1e8:
    // 0x2ea1e8: 0xc0bb96a  jal         func_2EE5A8
label_2ea1ec:
    if (ctx->pc == 0x2EA1ECu) {
        ctx->pc = 0x2EA1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA1E8u;
        // 0x2ea1ec: 0x34e7011c  ori         $a3, $a3, 0x11C (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)284);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA1F0u;
        goto label_2ea1f0;
    }
    ctx->pc = 0x2EA1E8u;
    SET_GPR_U32(ctx, 31, 0x2EA1F0u);
    ctx->pc = 0x2EA1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA1E8u;
    // 0x2ea1ec: 0x34e7011c  ori         $a3, $a3, 0x11C (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)284);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2EA1E8u, 0x2EA1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA1F0u;
label_2ea1f0:
    // 0x2ea1f0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ea1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ea1f4:
    // 0x2ea1f4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2ea1f8:
    if (ctx->pc == 0x2EA1F8u) {
        ctx->pc = 0x2EA1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA1F4u;
        // 0x2ea1f8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA1FCu;
        goto label_2ea1fc;
    }
    ctx->pc = 0x2EA1F4u;
    {
        const bool branch_taken_0x2ea1f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea1f4) {
            ctx->pc = 0x2EA1F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA1F4u;
            // 0x2ea1f8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA210u;
            goto label_2ea210;
        }
    }
    ctx->pc = 0x2EA1FCu;
label_2ea1fc:
    // 0x2ea1fc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ea1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2ea200:
    // 0x2ea200: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ea200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2ea204:
    // 0x2ea204: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2ea208:
    if (ctx->pc == 0x2EA208u) {
        ctx->pc = 0x2EA208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA204u;
        // 0x2ea208: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA20Cu;
        goto label_2ea20c;
    }
    ctx->pc = 0x2EA204u;
    {
        const bool branch_taken_0x2ea204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EA208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA204u;
        // 0x2ea208: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea204) {
            ctx->pc = 0x2EA21Cu;
            goto label_2ea21c;
        }
    }
    ctx->pc = 0x2EA20Cu;
label_2ea20c:
    // 0x2ea20c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2ea20cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2ea210:
    // 0x2ea210: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ea210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea214:
    // 0x2ea214: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2ea214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2ea218:
    // 0x2ea218: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2ea218u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2ea21c:
    // 0x2ea21c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2ea21cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2ea220:
    // 0x2ea220: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2ea220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2ea224:
    // 0x2ea224: 0x34c6008b  ori         $a2, $a2, 0x8B
    ctx->pc = 0x2ea224u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)139);
label_2ea228:
    // 0x2ea228: 0xc0bb96a  jal         func_2EE5A8
label_2ea22c:
    if (ctx->pc == 0x2EA22Cu) {
        ctx->pc = 0x2EA22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA228u;
        // 0x2ea22c: 0x34e7011b  ori         $a3, $a3, 0x11B (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)283);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA230u;
        goto label_2ea230;
    }
    ctx->pc = 0x2EA228u;
    SET_GPR_U32(ctx, 31, 0x2EA230u);
    ctx->pc = 0x2EA22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA228u;
    // 0x2ea22c: 0x34e7011b  ori         $a3, $a3, 0x11B (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)283);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2EA228u, 0x2EA230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA230u;
label_2ea230:
    // 0x2ea230: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ea230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ea234:
    // 0x2ea234: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2ea238:
    if (ctx->pc == 0x2EA238u) {
        ctx->pc = 0x2EA238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA234u;
        // 0x2ea238: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA23Cu;
        goto label_2ea23c;
    }
    ctx->pc = 0x2EA234u;
    {
        const bool branch_taken_0x2ea234 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea234) {
            ctx->pc = 0x2EA238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA234u;
            // 0x2ea238: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA250u;
            goto label_2ea250;
        }
    }
    ctx->pc = 0x2EA23Cu;
label_2ea23c:
    // 0x2ea23c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ea23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2ea240:
    // 0x2ea240: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ea240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2ea244:
    // 0x2ea244: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2ea248:
    if (ctx->pc == 0x2EA248u) {
        ctx->pc = 0x2EA248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA244u;
        // 0x2ea248: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA24Cu;
        goto label_2ea24c;
    }
    ctx->pc = 0x2EA244u;
    {
        const bool branch_taken_0x2ea244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EA248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA244u;
        // 0x2ea248: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea244) {
            ctx->pc = 0x2EA25Cu;
            goto label_2ea25c;
        }
    }
    ctx->pc = 0x2EA24Cu;
label_2ea24c:
    // 0x2ea24c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2ea24cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2ea250:
    // 0x2ea250: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ea250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea254:
    // 0x2ea254: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2ea254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2ea258:
    // 0x2ea258: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2ea258u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2ea25c:
    // 0x2ea25c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2ea25cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2ea260:
    // 0x2ea260: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2ea260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2ea264:
    // 0x2ea264: 0x34c6008c  ori         $a2, $a2, 0x8C
    ctx->pc = 0x2ea264u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)140);
label_2ea268:
    // 0x2ea268: 0xc0bb96a  jal         func_2EE5A8
label_2ea26c:
    if (ctx->pc == 0x2EA26Cu) {
        ctx->pc = 0x2EA26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA268u;
        // 0x2ea26c: 0x34e7011a  ori         $a3, $a3, 0x11A (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA270u;
        goto label_2ea270;
    }
    ctx->pc = 0x2EA268u;
    SET_GPR_U32(ctx, 31, 0x2EA270u);
    ctx->pc = 0x2EA26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA268u;
    // 0x2ea26c: 0x34e7011a  ori         $a3, $a3, 0x11A (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)282);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2EA268u, 0x2EA270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA270u;
label_2ea270:
    // 0x2ea270: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2ea270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ea274:
    // 0x2ea274: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2ea278:
    if (ctx->pc == 0x2EA278u) {
        ctx->pc = 0x2EA278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA274u;
        // 0x2ea278: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA27Cu;
        goto label_2ea27c;
    }
    ctx->pc = 0x2EA274u;
    {
        const bool branch_taken_0x2ea274 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea274) {
            ctx->pc = 0x2EA278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA274u;
            // 0x2ea278: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA290u;
            goto label_2ea290;
        }
    }
    ctx->pc = 0x2EA27Cu;
label_2ea27c:
    // 0x2ea27c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ea27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2ea280:
    // 0x2ea280: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2ea280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2ea284:
    // 0x2ea284: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2ea288:
    if (ctx->pc == 0x2EA288u) {
        ctx->pc = 0x2EA288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA284u;
        // 0x2ea288: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA28Cu;
        goto label_2ea28c;
    }
    ctx->pc = 0x2EA284u;
    {
        const bool branch_taken_0x2ea284 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EA288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA284u;
        // 0x2ea288: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea284) {
            ctx->pc = 0x2EA29Cu;
            goto label_2ea29c;
        }
    }
    ctx->pc = 0x2EA28Cu;
label_2ea28c:
    // 0x2ea28c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2ea28cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_2ea290:
    // 0x2ea290: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ea290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea294:
    // 0x2ea294: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x2ea294u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_2ea298:
    // 0x2ea298: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2ea298u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2ea29c:
    // 0x2ea29c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2ea29cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2ea2a0:
    // 0x2ea2a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ea2a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea2a4:
    // 0x2ea2a4: 0x34c60214  ori         $a2, $a2, 0x214
    ctx->pc = 0x2ea2a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)532);
label_2ea2a8:
    // 0x2ea2a8: 0xc0bb96a  jal         func_2EE5A8
label_2ea2ac:
    if (ctx->pc == 0x2EA2ACu) {
        ctx->pc = 0x2EA2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA2A8u;
        // 0x2ea2ac: 0x34e70219  ori         $a3, $a3, 0x219 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)537);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA2B0u;
        goto label_2ea2b0;
    }
    ctx->pc = 0x2EA2A8u;
    SET_GPR_U32(ctx, 31, 0x2EA2B0u);
    ctx->pc = 0x2EA2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA2A8u;
    // 0x2ea2ac: 0x34e70219  ori         $a3, $a3, 0x219 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)537);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2EA2A8u, 0x2EA2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA2B0u;
label_2ea2b0:
    // 0x2ea2b0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2ea2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ea2b4:
    // 0x2ea2b4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2ea2b8:
    if (ctx->pc == 0x2EA2B8u) {
        ctx->pc = 0x2EA2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA2B4u;
        // 0x2ea2b8: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA2BCu;
        goto label_2ea2bc;
    }
    ctx->pc = 0x2EA2B4u;
    {
        const bool branch_taken_0x2ea2b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea2b4) {
            ctx->pc = 0x2EA2B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA2B4u;
            // 0x2ea2b8: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA2D0u;
            goto label_2ea2d0;
        }
    }
    ctx->pc = 0x2EA2BCu;
label_2ea2bc:
    // 0x2ea2bc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ea2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2ea2c0:
    // 0x2ea2c0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2ea2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2ea2c4:
    // 0x2ea2c4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2ea2c8:
    if (ctx->pc == 0x2EA2C8u) {
        ctx->pc = 0x2EA2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA2C4u;
        // 0x2ea2c8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA2CCu;
        goto label_2ea2cc;
    }
    ctx->pc = 0x2EA2C4u;
    {
        const bool branch_taken_0x2ea2c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EA2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA2C4u;
        // 0x2ea2c8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea2c4) {
            ctx->pc = 0x2EA2DCu;
            goto label_2ea2dc;
        }
    }
    ctx->pc = 0x2EA2CCu;
label_2ea2cc:
    // 0x2ea2cc: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2ea2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_2ea2d0:
    // 0x2ea2d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ea2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea2d4:
    // 0x2ea2d4: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x2ea2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_2ea2d8:
    // 0x2ea2d8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2ea2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2ea2dc:
    // 0x2ea2dc: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2ea2dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2ea2e0:
    // 0x2ea2e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ea2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ea2e4:
    // 0x2ea2e4: 0x34c60213  ori         $a2, $a2, 0x213
    ctx->pc = 0x2ea2e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)531);
label_2ea2e8:
    // 0x2ea2e8: 0xc0bb96a  jal         func_2EE5A8
label_2ea2ec:
    if (ctx->pc == 0x2EA2ECu) {
        ctx->pc = 0x2EA2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA2E8u;
        // 0x2ea2ec: 0x34e70218  ori         $a3, $a3, 0x218 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)536);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA2F0u;
        goto label_2ea2f0;
    }
    ctx->pc = 0x2EA2E8u;
    SET_GPR_U32(ctx, 31, 0x2EA2F0u);
    ctx->pc = 0x2EA2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA2E8u;
    // 0x2ea2ec: 0x34e70218  ori         $a3, $a3, 0x218 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)536);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2EA2E8u, 0x2EA2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA2F0u;
label_2ea2f0:
    // 0x2ea2f0: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2ea2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2ea2f4:
    // 0x2ea2f4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2ea2f8:
    if (ctx->pc == 0x2EA2F8u) {
        ctx->pc = 0x2EA2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA2F4u;
        // 0x2ea2f8: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA2FCu;
        goto label_2ea2fc;
    }
    ctx->pc = 0x2EA2F4u;
    {
        const bool branch_taken_0x2ea2f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea2f4) {
            ctx->pc = 0x2EA2F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA2F4u;
            // 0x2ea2f8: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA310u;
            goto label_2ea310;
        }
    }
    ctx->pc = 0x2EA2FCu;
label_2ea2fc:
    // 0x2ea2fc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ea2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2ea300:
    // 0x2ea300: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2ea300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2ea304:
    // 0x2ea304: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2ea308:
    if (ctx->pc == 0x2EA308u) {
        ctx->pc = 0x2EA308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA304u;
        // 0x2ea308: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA30Cu;
        goto label_2ea30c;
    }
    ctx->pc = 0x2EA304u;
    {
        const bool branch_taken_0x2ea304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EA308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA304u;
        // 0x2ea308: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea304) {
            ctx->pc = 0x2EA31Cu;
            goto label_2ea31c;
        }
    }
    ctx->pc = 0x2EA30Cu;
label_2ea30c:
    // 0x2ea30c: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x2ea30cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_2ea310:
    // 0x2ea310: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ea310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea314:
    // 0x2ea314: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x2ea314u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_2ea318:
    // 0x2ea318: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2ea318u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2ea31c:
    // 0x2ea31c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2ea31cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2ea320:
    // 0x2ea320: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ea320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea324:
    // 0x2ea324: 0x34c60217  ori         $a2, $a2, 0x217
    ctx->pc = 0x2ea324u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)535);
label_2ea328:
    // 0x2ea328: 0xc0bb96a  jal         func_2EE5A8
label_2ea32c:
    if (ctx->pc == 0x2EA32Cu) {
        ctx->pc = 0x2EA32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA328u;
        // 0x2ea32c: 0x34e7021b  ori         $a3, $a3, 0x21B (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)539);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA330u;
        goto label_2ea330;
    }
    ctx->pc = 0x2EA328u;
    SET_GPR_U32(ctx, 31, 0x2EA330u);
    ctx->pc = 0x2EA32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA328u;
    // 0x2ea32c: 0x34e7021b  ori         $a3, $a3, 0x21B (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)539);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2EA328u, 0x2EA330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA330u;
label_2ea330:
    // 0x2ea330: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2ea330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2ea334:
    // 0x2ea334: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2ea338:
    if (ctx->pc == 0x2EA338u) {
        ctx->pc = 0x2EA338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA334u;
        // 0x2ea338: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA33Cu;
        goto label_2ea33c;
    }
    ctx->pc = 0x2EA334u;
    {
        const bool branch_taken_0x2ea334 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea334) {
            ctx->pc = 0x2EA338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA334u;
            // 0x2ea338: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA350u;
            goto label_2ea350;
        }
    }
    ctx->pc = 0x2EA33Cu;
label_2ea33c:
    // 0x2ea33c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ea33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2ea340:
    // 0x2ea340: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2ea340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2ea344:
    // 0x2ea344: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2ea348:
    if (ctx->pc == 0x2EA348u) {
        ctx->pc = 0x2EA348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA344u;
        // 0x2ea348: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA34Cu;
        goto label_2ea34c;
    }
    ctx->pc = 0x2EA344u;
    {
        const bool branch_taken_0x2ea344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EA348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA344u;
        // 0x2ea348: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea344) {
            ctx->pc = 0x2EA35Cu;
            goto label_2ea35c;
        }
    }
    ctx->pc = 0x2EA34Cu;
label_2ea34c:
    // 0x2ea34c: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x2ea34cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_2ea350:
    // 0x2ea350: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ea350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea354:
    // 0x2ea354: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x2ea354u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_2ea358:
    // 0x2ea358: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2ea358u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2ea35c:
    // 0x2ea35c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2ea35cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2ea360:
    // 0x2ea360: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ea360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ea364:
    // 0x2ea364: 0x34c60216  ori         $a2, $a2, 0x216
    ctx->pc = 0x2ea364u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)534);
label_2ea368:
    // 0x2ea368: 0xc0bb96a  jal         func_2EE5A8
label_2ea36c:
    if (ctx->pc == 0x2EA36Cu) {
        ctx->pc = 0x2EA36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA368u;
        // 0x2ea36c: 0x34e7021a  ori         $a3, $a3, 0x21A (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)538);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA370u;
        goto label_2ea370;
    }
    ctx->pc = 0x2EA368u;
    SET_GPR_U32(ctx, 31, 0x2EA370u);
    ctx->pc = 0x2EA36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA368u;
    // 0x2ea36c: 0x34e7021a  ori         $a3, $a3, 0x21A (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)538);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2EA368u, 0x2EA370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA370u;
label_2ea370:
    // 0x2ea370: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2ea370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2ea374:
    // 0x2ea374: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2ea378:
    if (ctx->pc == 0x2EA378u) {
        ctx->pc = 0x2EA378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA374u;
        // 0x2ea378: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA37Cu;
        goto label_2ea37c;
    }
    ctx->pc = 0x2EA374u;
    {
        const bool branch_taken_0x2ea374 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea374) {
            ctx->pc = 0x2EA378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA374u;
            // 0x2ea378: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA390u;
            goto label_2ea390;
        }
    }
    ctx->pc = 0x2EA37Cu;
label_2ea37c:
    // 0x2ea37c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ea37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2ea380:
    // 0x2ea380: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2ea380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2ea384:
    // 0x2ea384: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2ea388:
    if (ctx->pc == 0x2EA388u) {
        ctx->pc = 0x2EA388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA384u;
        // 0x2ea388: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA38Cu;
        goto label_2ea38c;
    }
    ctx->pc = 0x2EA384u;
    {
        const bool branch_taken_0x2ea384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EA388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA384u;
        // 0x2ea388: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea384) {
            ctx->pc = 0x2EA39Cu;
            goto label_2ea39c;
        }
    }
    ctx->pc = 0x2EA38Cu;
label_2ea38c:
    // 0x2ea38c: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x2ea38cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_2ea390:
    // 0x2ea390: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ea390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea394:
    // 0x2ea394: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x2ea394u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
label_2ea398:
    // 0x2ea398: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2ea398u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2ea39c:
    // 0x2ea39c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2ea39cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2ea3a0:
    // 0x2ea3a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ea3a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea3a4:
    // 0x2ea3a4: 0x34c60147  ori         $a2, $a2, 0x147
    ctx->pc = 0x2ea3a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)327);
label_2ea3a8:
    // 0x2ea3a8: 0xc0bb96a  jal         func_2EE5A8
label_2ea3ac:
    if (ctx->pc == 0x2EA3ACu) {
        ctx->pc = 0x2EA3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA3A8u;
        // 0x2ea3ac: 0x34e70200  ori         $a3, $a3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA3B0u;
        goto label_2ea3b0;
    }
    ctx->pc = 0x2EA3A8u;
    SET_GPR_U32(ctx, 31, 0x2EA3B0u);
    ctx->pc = 0x2EA3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA3A8u;
    // 0x2ea3ac: 0x34e70200  ori         $a3, $a3, 0x200 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)512);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2EA3A8u, 0x2EA3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA3B0u;
label_2ea3b0:
    // 0x2ea3b0: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2ea3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2ea3b4:
    // 0x2ea3b4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2ea3b8:
    if (ctx->pc == 0x2EA3B8u) {
        ctx->pc = 0x2EA3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA3B4u;
        // 0x2ea3b8: 0xaea00004  sw          $zero, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA3BCu;
        goto label_2ea3bc;
    }
    ctx->pc = 0x2EA3B4u;
    {
        const bool branch_taken_0x2ea3b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea3b4) {
            ctx->pc = 0x2EA3B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA3B4u;
            // 0x2ea3b8: 0xaea00004  sw          $zero, 0x4($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA3D0u;
            goto label_2ea3d0;
        }
    }
    ctx->pc = 0x2EA3BCu;
label_2ea3bc:
    // 0x2ea3bc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ea3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2ea3c0:
    // 0x2ea3c0: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2ea3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2ea3c4:
    // 0x2ea3c4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2ea3c8:
    if (ctx->pc == 0x2EA3C8u) {
        ctx->pc = 0x2EA3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA3C4u;
        // 0x2ea3c8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA3CCu;
        goto label_2ea3cc;
    }
    ctx->pc = 0x2EA3C4u;
    {
        const bool branch_taken_0x2ea3c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EA3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA3C4u;
        // 0x2ea3c8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea3c4) {
            ctx->pc = 0x2EA3DCu;
            goto label_2ea3dc;
        }
    }
    ctx->pc = 0x2EA3CCu;
label_2ea3cc:
    // 0x2ea3cc: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x2ea3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
label_2ea3d0:
    // 0x2ea3d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ea3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea3d4:
    // 0x2ea3d4: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x2ea3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_2ea3d8:
    // 0x2ea3d8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2ea3d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2ea3dc:
    // 0x2ea3dc: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2ea3dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2ea3e0:
    // 0x2ea3e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ea3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ea3e4:
    // 0x2ea3e4: 0x34c60148  ori         $a2, $a2, 0x148
    ctx->pc = 0x2ea3e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)328);
label_2ea3e8:
    // 0x2ea3e8: 0xc0bb96a  jal         func_2EE5A8
label_2ea3ec:
    if (ctx->pc == 0x2EA3ECu) {
        ctx->pc = 0x2EA3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA3E8u;
        // 0x2ea3ec: 0x34e701ff  ori         $a3, $a3, 0x1FF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)511);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA3F0u;
        goto label_2ea3f0;
    }
    ctx->pc = 0x2EA3E8u;
    SET_GPR_U32(ctx, 31, 0x2EA3F0u);
    ctx->pc = 0x2EA3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA3E8u;
    // 0x2ea3ec: 0x34e701ff  ori         $a3, $a3, 0x1FF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)511);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2EA3E8u, 0x2EA3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA3F0u;
label_2ea3f0:
    // 0x2ea3f0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2ea3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ea3f4:
    // 0x2ea3f4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2ea3f8:
    if (ctx->pc == 0x2EA3F8u) {
        ctx->pc = 0x2EA3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA3F4u;
        // 0x2ea3f8: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA3FCu;
        goto label_2ea3fc;
    }
    ctx->pc = 0x2EA3F4u;
    {
        const bool branch_taken_0x2ea3f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea3f4) {
            ctx->pc = 0x2EA3F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA3F4u;
            // 0x2ea3f8: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA410u;
            goto label_2ea410;
        }
    }
    ctx->pc = 0x2EA3FCu;
label_2ea3fc:
    // 0x2ea3fc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ea3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2ea400:
    // 0x2ea400: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2ea400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2ea404:
    // 0x2ea404: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2ea408:
    if (ctx->pc == 0x2EA408u) {
        ctx->pc = 0x2EA408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA404u;
        // 0x2ea408: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA40Cu;
        goto label_2ea40c;
    }
    ctx->pc = 0x2EA404u;
    {
        const bool branch_taken_0x2ea404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EA408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA404u;
        // 0x2ea408: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea404) {
            ctx->pc = 0x2EA418u;
            goto label_2ea418;
        }
    }
    ctx->pc = 0x2EA40Cu;
label_2ea40c:
    // 0x2ea40c: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2ea40cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2ea410:
    // 0x2ea410: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ea410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea414:
    // 0x2ea414: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2ea414u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2ea418:
    // 0x2ea418: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2ea418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2ea41c:
    // 0x2ea41c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2ea41cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_2ea420:
    // 0x2ea420: 0x24a5f4d8  addiu       $a1, $a1, -0xB28
    ctx->pc = 0x2ea420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964440));
label_2ea424:
    // 0x2ea424: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2ea424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2ea428:
    // 0x2ea428: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2ea428u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2ea42c:
    // 0x2ea42c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2ea42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2ea430:
    // 0x2ea430: 0x60f809  jalr        $v1
label_2ea434:
    if (ctx->pc == 0x2EA434u) {
        ctx->pc = 0x2EA434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA430u;
        // 0x2ea434: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA438u;
        goto label_2ea438;
    }
    ctx->pc = 0x2EA430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EA438u);
        ctx->pc = 0x2EA434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA430u;
        // 0x2ea434: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA430u, 0x2EA438u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EA438u;
label_2ea438:
    // 0x2ea438: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ea438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ea43c:
    // 0x2ea43c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2ea440:
    if (ctx->pc == 0x2EA440u) {
        ctx->pc = 0x2EA440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA43Cu;
        // 0x2ea440: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA444u;
        goto label_2ea444;
    }
    ctx->pc = 0x2EA43Cu;
    {
        const bool branch_taken_0x2ea43c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea43c) {
            ctx->pc = 0x2EA440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA43Cu;
            // 0x2ea440: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA458u;
            goto label_2ea458;
        }
    }
    ctx->pc = 0x2EA444u;
label_2ea444:
    // 0x2ea444: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ea444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2ea448:
    // 0x2ea448: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ea448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2ea44c:
    // 0x2ea44c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2ea450:
    if (ctx->pc == 0x2EA450u) {
        ctx->pc = 0x2EA450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA44Cu;
        // 0x2ea450: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA454u;
        goto label_2ea454;
    }
    ctx->pc = 0x2EA44Cu;
    {
        const bool branch_taken_0x2ea44c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EA450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA44Cu;
        // 0x2ea450: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea44c) {
            ctx->pc = 0x2EA460u;
            goto label_2ea460;
        }
    }
    ctx->pc = 0x2EA454u;
label_2ea454:
    // 0x2ea454: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2ea454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2ea458:
    // 0x2ea458: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ea458u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea45c:
    // 0x2ea45c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2ea45cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2ea460:
    // 0x2ea460: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2ea460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2ea464:
    // 0x2ea464: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2ea464u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_2ea468:
    // 0x2ea468: 0x24a5f4e4  addiu       $a1, $a1, -0xB1C
    ctx->pc = 0x2ea468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964452));
label_2ea46c:
    // 0x2ea46c: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2ea46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2ea470:
    // 0x2ea470: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2ea470u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2ea474:
    // 0x2ea474: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2ea474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2ea478:
    // 0x2ea478: 0x60f809  jalr        $v1
label_2ea47c:
    if (ctx->pc == 0x2EA47Cu) {
        ctx->pc = 0x2EA47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA478u;
        // 0x2ea47c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA480u;
        goto label_2ea480;
    }
    ctx->pc = 0x2EA478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EA480u);
        ctx->pc = 0x2EA47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA478u;
        // 0x2ea47c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA478u, 0x2EA480u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EA480u;
label_2ea480:
    // 0x2ea480: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2ea480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ea484:
    // 0x2ea484: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2ea488:
    if (ctx->pc == 0x2EA488u) {
        ctx->pc = 0x2EA488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA484u;
        // 0x2ea488: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA48Cu;
        goto label_2ea48c;
    }
    ctx->pc = 0x2EA484u;
    {
        const bool branch_taken_0x2ea484 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea484) {
            ctx->pc = 0x2EA488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA484u;
            // 0x2ea488: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA4A0u;
            goto label_2ea4a0;
        }
    }
    ctx->pc = 0x2EA48Cu;
label_2ea48c:
    // 0x2ea48c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ea48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2ea490:
    // 0x2ea490: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2ea490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2ea494:
    // 0x2ea494: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2ea498:
    if (ctx->pc == 0x2EA498u) {
        ctx->pc = 0x2EA498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA494u;
        // 0x2ea498: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA49Cu;
        goto label_2ea49c;
    }
    ctx->pc = 0x2EA494u;
    {
        const bool branch_taken_0x2ea494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EA498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA494u;
        // 0x2ea498: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea494) {
            ctx->pc = 0x2EA4A8u;
            goto label_2ea4a8;
        }
    }
    ctx->pc = 0x2EA49Cu;
label_2ea49c:
    // 0x2ea49c: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x2ea49cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_2ea4a0:
    // 0x2ea4a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ea4a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea4a4:
    // 0x2ea4a4: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2ea4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_2ea4a8:
    // 0x2ea4a8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2ea4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2ea4ac:
    // 0x2ea4ac: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2ea4acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_2ea4b0:
    // 0x2ea4b0: 0x24a5f5d4  addiu       $a1, $a1, -0xA2C
    ctx->pc = 0x2ea4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964692));
label_2ea4b4:
    // 0x2ea4b4: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2ea4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2ea4b8:
    // 0x2ea4b8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2ea4b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2ea4bc:
    // 0x2ea4bc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2ea4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2ea4c0:
    // 0x2ea4c0: 0x60f809  jalr        $v1
label_2ea4c4:
    if (ctx->pc == 0x2EA4C4u) {
        ctx->pc = 0x2EA4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA4C0u;
        // 0x2ea4c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA4C8u;
        goto label_2ea4c8;
    }
    ctx->pc = 0x2EA4C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EA4C8u);
        ctx->pc = 0x2EA4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA4C0u;
        // 0x2ea4c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA4C0u, 0x2EA4C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EA4C8u;
label_2ea4c8:
    // 0x2ea4c8: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2ea4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2ea4cc:
    // 0x2ea4cc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2ea4d0:
    if (ctx->pc == 0x2EA4D0u) {
        ctx->pc = 0x2EA4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA4CCu;
        // 0x2ea4d0: 0xae800004  sw          $zero, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA4D4u;
        goto label_2ea4d4;
    }
    ctx->pc = 0x2EA4CCu;
    {
        const bool branch_taken_0x2ea4cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea4cc) {
            ctx->pc = 0x2EA4D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA4CCu;
            // 0x2ea4d0: 0xae800004  sw          $zero, 0x4($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA4E8u;
            goto label_2ea4e8;
        }
    }
    ctx->pc = 0x2EA4D4u;
label_2ea4d4:
    // 0x2ea4d4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ea4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2ea4d8:
    // 0x2ea4d8: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2ea4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2ea4dc:
    // 0x2ea4dc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2ea4e0:
    if (ctx->pc == 0x2EA4E0u) {
        ctx->pc = 0x2EA4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA4DCu;
        // 0x2ea4e0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA4E4u;
        goto label_2ea4e4;
    }
    ctx->pc = 0x2EA4DCu;
    {
        const bool branch_taken_0x2ea4dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EA4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA4DCu;
        // 0x2ea4e0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea4dc) {
            ctx->pc = 0x2EA4F0u;
            goto label_2ea4f0;
        }
    }
    ctx->pc = 0x2EA4E4u;
label_2ea4e4:
    // 0x2ea4e4: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x2ea4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_2ea4e8:
    // 0x2ea4e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ea4e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea4ec:
    // 0x2ea4ec: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x2ea4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_2ea4f0:
    // 0x2ea4f0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2ea4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2ea4f4:
    // 0x2ea4f4: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2ea4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_2ea4f8:
    // 0x2ea4f8: 0x24a5f5e0  addiu       $a1, $a1, -0xA20
    ctx->pc = 0x2ea4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964704));
label_2ea4fc:
    // 0x2ea4fc: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2ea4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2ea500:
    // 0x2ea500: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2ea500u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2ea504:
    // 0x2ea504: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2ea504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2ea508:
    // 0x2ea508: 0x60f809  jalr        $v1
label_2ea50c:
    if (ctx->pc == 0x2EA50Cu) {
        ctx->pc = 0x2EA50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA508u;
        // 0x2ea50c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA510u;
        goto label_2ea510;
    }
    ctx->pc = 0x2EA508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EA510u);
        ctx->pc = 0x2EA50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA508u;
        // 0x2ea50c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA508u, 0x2EA510u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EA510u;
label_2ea510:
    // 0x2ea510: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ea510u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ea514:
    // 0x2ea514: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ea514u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2ea518:
    // 0x2ea518: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ea518u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ea51c:
    // 0x2ea51c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ea51cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2ea520:
    // 0x2ea520: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2ea520u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ea524:
    // 0x2ea524: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2ea524u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2ea528:
    // 0x2ea528: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ea528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2ea52c:
    // 0x2ea52c: 0x3e00008  jr          $ra
label_2ea530:
    if (ctx->pc == 0x2EA530u) {
        ctx->pc = 0x2EA530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA52Cu;
        // 0x2ea530: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA534u;
        goto label_2ea534;
    }
    ctx->pc = 0x2EA52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EA530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA52Cu;
        // 0x2ea530: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA52Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EA534u;
label_2ea534:
    // 0x2ea534: 0x0  nop
    ctx->pc = 0x2ea534u;
    // NOP
    ctx->pc = 0x2ea538u;
}
