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

// Function: sub_002D5EA0
// Address: 0x2d5ea0 - 0x2d6480
void sub_002D5EA0_0x2d5ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5EA0_0x2d5ea0");
#endif

    switch (ctx->pc) {
        case 0x2d5ea0u: goto label_2d5ea0;
        case 0x2d5ea4u: goto label_2d5ea4;
        case 0x2d5ea8u: goto label_2d5ea8;
        case 0x2d5eacu: goto label_2d5eac;
        case 0x2d5eb0u: goto label_2d5eb0;
        case 0x2d5eb4u: goto label_2d5eb4;
        case 0x2d5eb8u: goto label_2d5eb8;
        case 0x2d5ebcu: goto label_2d5ebc;
        case 0x2d5ec0u: goto label_2d5ec0;
        case 0x2d5ec4u: goto label_2d5ec4;
        case 0x2d5ec8u: goto label_2d5ec8;
        case 0x2d5eccu: goto label_2d5ecc;
        case 0x2d5ed0u: goto label_2d5ed0;
        case 0x2d5ed4u: goto label_2d5ed4;
        case 0x2d5ed8u: goto label_2d5ed8;
        case 0x2d5edcu: goto label_2d5edc;
        case 0x2d5ee0u: goto label_2d5ee0;
        case 0x2d5ee4u: goto label_2d5ee4;
        case 0x2d5ee8u: goto label_2d5ee8;
        case 0x2d5eecu: goto label_2d5eec;
        case 0x2d5ef0u: goto label_2d5ef0;
        case 0x2d5ef4u: goto label_2d5ef4;
        case 0x2d5ef8u: goto label_2d5ef8;
        case 0x2d5efcu: goto label_2d5efc;
        case 0x2d5f00u: goto label_2d5f00;
        case 0x2d5f04u: goto label_2d5f04;
        case 0x2d5f08u: goto label_2d5f08;
        case 0x2d5f0cu: goto label_2d5f0c;
        case 0x2d5f10u: goto label_2d5f10;
        case 0x2d5f14u: goto label_2d5f14;
        case 0x2d5f18u: goto label_2d5f18;
        case 0x2d5f1cu: goto label_2d5f1c;
        case 0x2d5f20u: goto label_2d5f20;
        case 0x2d5f24u: goto label_2d5f24;
        case 0x2d5f28u: goto label_2d5f28;
        case 0x2d5f2cu: goto label_2d5f2c;
        case 0x2d5f30u: goto label_2d5f30;
        case 0x2d5f34u: goto label_2d5f34;
        case 0x2d5f38u: goto label_2d5f38;
        case 0x2d5f3cu: goto label_2d5f3c;
        case 0x2d5f40u: goto label_2d5f40;
        case 0x2d5f44u: goto label_2d5f44;
        case 0x2d5f48u: goto label_2d5f48;
        case 0x2d5f4cu: goto label_2d5f4c;
        case 0x2d5f50u: goto label_2d5f50;
        case 0x2d5f54u: goto label_2d5f54;
        case 0x2d5f58u: goto label_2d5f58;
        case 0x2d5f5cu: goto label_2d5f5c;
        case 0x2d5f60u: goto label_2d5f60;
        case 0x2d5f64u: goto label_2d5f64;
        case 0x2d5f68u: goto label_2d5f68;
        case 0x2d5f6cu: goto label_2d5f6c;
        case 0x2d5f70u: goto label_2d5f70;
        case 0x2d5f74u: goto label_2d5f74;
        case 0x2d5f78u: goto label_2d5f78;
        case 0x2d5f7cu: goto label_2d5f7c;
        case 0x2d5f80u: goto label_2d5f80;
        case 0x2d5f84u: goto label_2d5f84;
        case 0x2d5f88u: goto label_2d5f88;
        case 0x2d5f8cu: goto label_2d5f8c;
        case 0x2d5f90u: goto label_2d5f90;
        case 0x2d5f94u: goto label_2d5f94;
        case 0x2d5f98u: goto label_2d5f98;
        case 0x2d5f9cu: goto label_2d5f9c;
        case 0x2d5fa0u: goto label_2d5fa0;
        case 0x2d5fa4u: goto label_2d5fa4;
        case 0x2d5fa8u: goto label_2d5fa8;
        case 0x2d5facu: goto label_2d5fac;
        case 0x2d5fb0u: goto label_2d5fb0;
        case 0x2d5fb4u: goto label_2d5fb4;
        case 0x2d5fb8u: goto label_2d5fb8;
        case 0x2d5fbcu: goto label_2d5fbc;
        case 0x2d5fc0u: goto label_2d5fc0;
        case 0x2d5fc4u: goto label_2d5fc4;
        case 0x2d5fc8u: goto label_2d5fc8;
        case 0x2d5fccu: goto label_2d5fcc;
        case 0x2d5fd0u: goto label_2d5fd0;
        case 0x2d5fd4u: goto label_2d5fd4;
        case 0x2d5fd8u: goto label_2d5fd8;
        case 0x2d5fdcu: goto label_2d5fdc;
        case 0x2d5fe0u: goto label_2d5fe0;
        case 0x2d5fe4u: goto label_2d5fe4;
        case 0x2d5fe8u: goto label_2d5fe8;
        case 0x2d5fecu: goto label_2d5fec;
        case 0x2d5ff0u: goto label_2d5ff0;
        case 0x2d5ff4u: goto label_2d5ff4;
        case 0x2d5ff8u: goto label_2d5ff8;
        case 0x2d5ffcu: goto label_2d5ffc;
        case 0x2d6000u: goto label_2d6000;
        case 0x2d6004u: goto label_2d6004;
        case 0x2d6008u: goto label_2d6008;
        case 0x2d600cu: goto label_2d600c;
        case 0x2d6010u: goto label_2d6010;
        case 0x2d6014u: goto label_2d6014;
        case 0x2d6018u: goto label_2d6018;
        case 0x2d601cu: goto label_2d601c;
        case 0x2d6020u: goto label_2d6020;
        case 0x2d6024u: goto label_2d6024;
        case 0x2d6028u: goto label_2d6028;
        case 0x2d602cu: goto label_2d602c;
        case 0x2d6030u: goto label_2d6030;
        case 0x2d6034u: goto label_2d6034;
        case 0x2d6038u: goto label_2d6038;
        case 0x2d603cu: goto label_2d603c;
        case 0x2d6040u: goto label_2d6040;
        case 0x2d6044u: goto label_2d6044;
        case 0x2d6048u: goto label_2d6048;
        case 0x2d604cu: goto label_2d604c;
        case 0x2d6050u: goto label_2d6050;
        case 0x2d6054u: goto label_2d6054;
        case 0x2d6058u: goto label_2d6058;
        case 0x2d605cu: goto label_2d605c;
        case 0x2d6060u: goto label_2d6060;
        case 0x2d6064u: goto label_2d6064;
        case 0x2d6068u: goto label_2d6068;
        case 0x2d606cu: goto label_2d606c;
        case 0x2d6070u: goto label_2d6070;
        case 0x2d6074u: goto label_2d6074;
        case 0x2d6078u: goto label_2d6078;
        case 0x2d607cu: goto label_2d607c;
        case 0x2d6080u: goto label_2d6080;
        case 0x2d6084u: goto label_2d6084;
        case 0x2d6088u: goto label_2d6088;
        case 0x2d608cu: goto label_2d608c;
        case 0x2d6090u: goto label_2d6090;
        case 0x2d6094u: goto label_2d6094;
        case 0x2d6098u: goto label_2d6098;
        case 0x2d609cu: goto label_2d609c;
        case 0x2d60a0u: goto label_2d60a0;
        case 0x2d60a4u: goto label_2d60a4;
        case 0x2d60a8u: goto label_2d60a8;
        case 0x2d60acu: goto label_2d60ac;
        case 0x2d60b0u: goto label_2d60b0;
        case 0x2d60b4u: goto label_2d60b4;
        case 0x2d60b8u: goto label_2d60b8;
        case 0x2d60bcu: goto label_2d60bc;
        case 0x2d60c0u: goto label_2d60c0;
        case 0x2d60c4u: goto label_2d60c4;
        case 0x2d60c8u: goto label_2d60c8;
        case 0x2d60ccu: goto label_2d60cc;
        case 0x2d60d0u: goto label_2d60d0;
        case 0x2d60d4u: goto label_2d60d4;
        case 0x2d60d8u: goto label_2d60d8;
        case 0x2d60dcu: goto label_2d60dc;
        case 0x2d60e0u: goto label_2d60e0;
        case 0x2d60e4u: goto label_2d60e4;
        case 0x2d60e8u: goto label_2d60e8;
        case 0x2d60ecu: goto label_2d60ec;
        case 0x2d60f0u: goto label_2d60f0;
        case 0x2d60f4u: goto label_2d60f4;
        case 0x2d60f8u: goto label_2d60f8;
        case 0x2d60fcu: goto label_2d60fc;
        case 0x2d6100u: goto label_2d6100;
        case 0x2d6104u: goto label_2d6104;
        case 0x2d6108u: goto label_2d6108;
        case 0x2d610cu: goto label_2d610c;
        case 0x2d6110u: goto label_2d6110;
        case 0x2d6114u: goto label_2d6114;
        case 0x2d6118u: goto label_2d6118;
        case 0x2d611cu: goto label_2d611c;
        case 0x2d6120u: goto label_2d6120;
        case 0x2d6124u: goto label_2d6124;
        case 0x2d6128u: goto label_2d6128;
        case 0x2d612cu: goto label_2d612c;
        case 0x2d6130u: goto label_2d6130;
        case 0x2d6134u: goto label_2d6134;
        case 0x2d6138u: goto label_2d6138;
        case 0x2d613cu: goto label_2d613c;
        case 0x2d6140u: goto label_2d6140;
        case 0x2d6144u: goto label_2d6144;
        case 0x2d6148u: goto label_2d6148;
        case 0x2d614cu: goto label_2d614c;
        case 0x2d6150u: goto label_2d6150;
        case 0x2d6154u: goto label_2d6154;
        case 0x2d6158u: goto label_2d6158;
        case 0x2d615cu: goto label_2d615c;
        case 0x2d6160u: goto label_2d6160;
        case 0x2d6164u: goto label_2d6164;
        case 0x2d6168u: goto label_2d6168;
        case 0x2d616cu: goto label_2d616c;
        case 0x2d6170u: goto label_2d6170;
        case 0x2d6174u: goto label_2d6174;
        case 0x2d6178u: goto label_2d6178;
        case 0x2d617cu: goto label_2d617c;
        case 0x2d6180u: goto label_2d6180;
        case 0x2d6184u: goto label_2d6184;
        case 0x2d6188u: goto label_2d6188;
        case 0x2d618cu: goto label_2d618c;
        case 0x2d6190u: goto label_2d6190;
        case 0x2d6194u: goto label_2d6194;
        case 0x2d6198u: goto label_2d6198;
        case 0x2d619cu: goto label_2d619c;
        case 0x2d61a0u: goto label_2d61a0;
        case 0x2d61a4u: goto label_2d61a4;
        case 0x2d61a8u: goto label_2d61a8;
        case 0x2d61acu: goto label_2d61ac;
        case 0x2d61b0u: goto label_2d61b0;
        case 0x2d61b4u: goto label_2d61b4;
        case 0x2d61b8u: goto label_2d61b8;
        case 0x2d61bcu: goto label_2d61bc;
        case 0x2d61c0u: goto label_2d61c0;
        case 0x2d61c4u: goto label_2d61c4;
        case 0x2d61c8u: goto label_2d61c8;
        case 0x2d61ccu: goto label_2d61cc;
        case 0x2d61d0u: goto label_2d61d0;
        case 0x2d61d4u: goto label_2d61d4;
        case 0x2d61d8u: goto label_2d61d8;
        case 0x2d61dcu: goto label_2d61dc;
        case 0x2d61e0u: goto label_2d61e0;
        case 0x2d61e4u: goto label_2d61e4;
        case 0x2d61e8u: goto label_2d61e8;
        case 0x2d61ecu: goto label_2d61ec;
        case 0x2d61f0u: goto label_2d61f0;
        case 0x2d61f4u: goto label_2d61f4;
        case 0x2d61f8u: goto label_2d61f8;
        case 0x2d61fcu: goto label_2d61fc;
        case 0x2d6200u: goto label_2d6200;
        case 0x2d6204u: goto label_2d6204;
        case 0x2d6208u: goto label_2d6208;
        case 0x2d620cu: goto label_2d620c;
        case 0x2d6210u: goto label_2d6210;
        case 0x2d6214u: goto label_2d6214;
        case 0x2d6218u: goto label_2d6218;
        case 0x2d621cu: goto label_2d621c;
        case 0x2d6220u: goto label_2d6220;
        case 0x2d6224u: goto label_2d6224;
        case 0x2d6228u: goto label_2d6228;
        case 0x2d622cu: goto label_2d622c;
        case 0x2d6230u: goto label_2d6230;
        case 0x2d6234u: goto label_2d6234;
        case 0x2d6238u: goto label_2d6238;
        case 0x2d623cu: goto label_2d623c;
        case 0x2d6240u: goto label_2d6240;
        case 0x2d6244u: goto label_2d6244;
        case 0x2d6248u: goto label_2d6248;
        case 0x2d624cu: goto label_2d624c;
        case 0x2d6250u: goto label_2d6250;
        case 0x2d6254u: goto label_2d6254;
        case 0x2d6258u: goto label_2d6258;
        case 0x2d625cu: goto label_2d625c;
        case 0x2d6260u: goto label_2d6260;
        case 0x2d6264u: goto label_2d6264;
        case 0x2d6268u: goto label_2d6268;
        case 0x2d626cu: goto label_2d626c;
        case 0x2d6270u: goto label_2d6270;
        case 0x2d6274u: goto label_2d6274;
        case 0x2d6278u: goto label_2d6278;
        case 0x2d627cu: goto label_2d627c;
        case 0x2d6280u: goto label_2d6280;
        case 0x2d6284u: goto label_2d6284;
        case 0x2d6288u: goto label_2d6288;
        case 0x2d628cu: goto label_2d628c;
        case 0x2d6290u: goto label_2d6290;
        case 0x2d6294u: goto label_2d6294;
        case 0x2d6298u: goto label_2d6298;
        case 0x2d629cu: goto label_2d629c;
        case 0x2d62a0u: goto label_2d62a0;
        case 0x2d62a4u: goto label_2d62a4;
        case 0x2d62a8u: goto label_2d62a8;
        case 0x2d62acu: goto label_2d62ac;
        case 0x2d62b0u: goto label_2d62b0;
        case 0x2d62b4u: goto label_2d62b4;
        case 0x2d62b8u: goto label_2d62b8;
        case 0x2d62bcu: goto label_2d62bc;
        case 0x2d62c0u: goto label_2d62c0;
        case 0x2d62c4u: goto label_2d62c4;
        case 0x2d62c8u: goto label_2d62c8;
        case 0x2d62ccu: goto label_2d62cc;
        case 0x2d62d0u: goto label_2d62d0;
        case 0x2d62d4u: goto label_2d62d4;
        case 0x2d62d8u: goto label_2d62d8;
        case 0x2d62dcu: goto label_2d62dc;
        case 0x2d62e0u: goto label_2d62e0;
        case 0x2d62e4u: goto label_2d62e4;
        case 0x2d62e8u: goto label_2d62e8;
        case 0x2d62ecu: goto label_2d62ec;
        case 0x2d62f0u: goto label_2d62f0;
        case 0x2d62f4u: goto label_2d62f4;
        case 0x2d62f8u: goto label_2d62f8;
        case 0x2d62fcu: goto label_2d62fc;
        case 0x2d6300u: goto label_2d6300;
        case 0x2d6304u: goto label_2d6304;
        case 0x2d6308u: goto label_2d6308;
        case 0x2d630cu: goto label_2d630c;
        case 0x2d6310u: goto label_2d6310;
        case 0x2d6314u: goto label_2d6314;
        case 0x2d6318u: goto label_2d6318;
        case 0x2d631cu: goto label_2d631c;
        case 0x2d6320u: goto label_2d6320;
        case 0x2d6324u: goto label_2d6324;
        case 0x2d6328u: goto label_2d6328;
        case 0x2d632cu: goto label_2d632c;
        case 0x2d6330u: goto label_2d6330;
        case 0x2d6334u: goto label_2d6334;
        case 0x2d6338u: goto label_2d6338;
        case 0x2d633cu: goto label_2d633c;
        case 0x2d6340u: goto label_2d6340;
        case 0x2d6344u: goto label_2d6344;
        case 0x2d6348u: goto label_2d6348;
        case 0x2d634cu: goto label_2d634c;
        case 0x2d6350u: goto label_2d6350;
        case 0x2d6354u: goto label_2d6354;
        case 0x2d6358u: goto label_2d6358;
        case 0x2d635cu: goto label_2d635c;
        case 0x2d6360u: goto label_2d6360;
        case 0x2d6364u: goto label_2d6364;
        case 0x2d6368u: goto label_2d6368;
        case 0x2d636cu: goto label_2d636c;
        case 0x2d6370u: goto label_2d6370;
        case 0x2d6374u: goto label_2d6374;
        case 0x2d6378u: goto label_2d6378;
        case 0x2d637cu: goto label_2d637c;
        case 0x2d6380u: goto label_2d6380;
        case 0x2d6384u: goto label_2d6384;
        case 0x2d6388u: goto label_2d6388;
        case 0x2d638cu: goto label_2d638c;
        case 0x2d6390u: goto label_2d6390;
        case 0x2d6394u: goto label_2d6394;
        case 0x2d6398u: goto label_2d6398;
        case 0x2d639cu: goto label_2d639c;
        case 0x2d63a0u: goto label_2d63a0;
        case 0x2d63a4u: goto label_2d63a4;
        case 0x2d63a8u: goto label_2d63a8;
        case 0x2d63acu: goto label_2d63ac;
        case 0x2d63b0u: goto label_2d63b0;
        case 0x2d63b4u: goto label_2d63b4;
        case 0x2d63b8u: goto label_2d63b8;
        case 0x2d63bcu: goto label_2d63bc;
        case 0x2d63c0u: goto label_2d63c0;
        case 0x2d63c4u: goto label_2d63c4;
        case 0x2d63c8u: goto label_2d63c8;
        case 0x2d63ccu: goto label_2d63cc;
        case 0x2d63d0u: goto label_2d63d0;
        case 0x2d63d4u: goto label_2d63d4;
        case 0x2d63d8u: goto label_2d63d8;
        case 0x2d63dcu: goto label_2d63dc;
        case 0x2d63e0u: goto label_2d63e0;
        case 0x2d63e4u: goto label_2d63e4;
        case 0x2d63e8u: goto label_2d63e8;
        case 0x2d63ecu: goto label_2d63ec;
        case 0x2d63f0u: goto label_2d63f0;
        case 0x2d63f4u: goto label_2d63f4;
        case 0x2d63f8u: goto label_2d63f8;
        case 0x2d63fcu: goto label_2d63fc;
        case 0x2d6400u: goto label_2d6400;
        case 0x2d6404u: goto label_2d6404;
        case 0x2d6408u: goto label_2d6408;
        case 0x2d640cu: goto label_2d640c;
        case 0x2d6410u: goto label_2d6410;
        case 0x2d6414u: goto label_2d6414;
        case 0x2d6418u: goto label_2d6418;
        case 0x2d641cu: goto label_2d641c;
        case 0x2d6420u: goto label_2d6420;
        case 0x2d6424u: goto label_2d6424;
        case 0x2d6428u: goto label_2d6428;
        case 0x2d642cu: goto label_2d642c;
        case 0x2d6430u: goto label_2d6430;
        case 0x2d6434u: goto label_2d6434;
        case 0x2d6438u: goto label_2d6438;
        case 0x2d643cu: goto label_2d643c;
        case 0x2d6440u: goto label_2d6440;
        case 0x2d6444u: goto label_2d6444;
        case 0x2d6448u: goto label_2d6448;
        case 0x2d644cu: goto label_2d644c;
        case 0x2d6450u: goto label_2d6450;
        case 0x2d6454u: goto label_2d6454;
        case 0x2d6458u: goto label_2d6458;
        case 0x2d645cu: goto label_2d645c;
        case 0x2d6460u: goto label_2d6460;
        case 0x2d6464u: goto label_2d6464;
        case 0x2d6468u: goto label_2d6468;
        case 0x2d646cu: goto label_2d646c;
        case 0x2d6470u: goto label_2d6470;
        case 0x2d6474u: goto label_2d6474;
        case 0x2d6478u: goto label_2d6478;
        case 0x2d647cu: goto label_2d647c;
        default: break;
    }

    ctx->pc = 0x2d5ea0u;

label_2d5ea0:
    // 0x2d5ea0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2d5ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2d5ea4:
    // 0x2d5ea4: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x2d5ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
label_2d5ea8:
    // 0x2d5ea8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d5ea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d5eac:
    // 0x2d5eac: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x2d5eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
label_2d5eb0:
    // 0x2d5eb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d5eb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d5eb4:
    // 0x2d5eb4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2d5eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2d5eb8:
    // 0x2d5eb8: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x2d5eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_2d5ebc:
    // 0x2d5ebc: 0x24630038  addiu       $v1, $v1, 0x38
    ctx->pc = 0x2d5ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
label_2d5ec0:
    // 0x2d5ec0: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x2d5ec0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2d5ec4:
    // 0x2d5ec4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2d5ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2d5ec8:
    // 0x2d5ec8: 0x40f809  jalr        $v0
label_2d5ecc:
    if (ctx->pc == 0x2D5ECCu) {
        ctx->pc = 0x2D5ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5EC8u;
        // 0x2d5ecc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5ED0u;
        goto label_2d5ed0;
    }
    ctx->pc = 0x2D5EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D5ED0u);
        ctx->pc = 0x2D5ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5EC8u;
        // 0x2d5ecc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5EC8u, 0x2D5ED0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D5ED0u;
label_2d5ed0:
    // 0x2d5ed0: 0x260700b0  addiu       $a3, $s0, 0xB0
    ctx->pc = 0x2d5ed0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_2d5ed4:
    // 0x2d5ed4: 0x26240130  addiu       $a0, $s1, 0x130
    ctx->pc = 0x2d5ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 304));
label_2d5ed8:
    // 0x2d5ed8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d5ed8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d5edc:
    // 0x2d5edc: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2d5edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d5ee0:
    // 0x2d5ee0: 0x262500d0  addiu       $a1, $s1, 0xD0
    ctx->pc = 0x2d5ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
label_2d5ee4:
    // 0x2d5ee4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2d5ee4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d5ee8:
    // 0x2d5ee8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d5ee8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d5eec:
    // 0x2d5eec: 0xc78294d0  lwc1        $f2, -0x6B30($gp)
    ctx->pc = 0x2d5eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2d5ef0:
    // 0x2d5ef0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2d5ef4:
    if (ctx->pc == 0x2D5EF4u) {
        ctx->pc = 0x2D5EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5EF0u;
        // 0x2d5ef4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5EF8u;
        goto label_2d5ef8;
    }
    ctx->pc = 0x2D5EF0u;
    {
        const bool branch_taken_0x2d5ef0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D5EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5EF0u;
        // 0x2d5ef4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5ef0) {
            ctx->pc = 0x2D5F08u;
            goto label_2d5f08;
        }
    }
    ctx->pc = 0x2D5EF8u;
label_2d5ef8:
    // 0x2d5ef8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2d5ef8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2d5efc:
    // 0x2d5efc: 0x10000004  b           . + 4 + (0x4 << 2)
label_2d5f00:
    if (ctx->pc == 0x2D5F00u) {
        ctx->pc = 0x2D5F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5EFCu;
        // 0x2d5f00: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5F04u;
        goto label_2d5f04;
    }
    ctx->pc = 0x2D5EFCu;
    {
        const bool branch_taken_0x2d5efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5EFCu;
        // 0x2d5f00: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5efc) {
            ctx->pc = 0x2D5F10u;
            goto label_2d5f10;
        }
    }
    ctx->pc = 0x2D5F04u;
label_2d5f04:
    // 0x2d5f04: 0x0  nop
    ctx->pc = 0x2d5f04u;
    // NOP
label_2d5f08:
    // 0x2d5f08: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2d5f08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_2d5f0c:
    // 0x2d5f0c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2d5f0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d5f10:
    // 0x2d5f10: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2d5f10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2d5f14:
    // 0x2d5f14: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x2d5f14u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2d5f18:
    // 0x2d5f18: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2d5f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2d5f1c:
    // 0x2d5f1c: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x2d5f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
label_2d5f20:
    // 0x2d5f20: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x2d5f20u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2d5f24:
    // 0x2d5f24: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x2d5f24u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_2d5f28:
    // 0x2d5f28: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x2d5f28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2d5f2c:
    // 0x2d5f2c: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x2d5f2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_2d5f30:
    // 0x2d5f30: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x2d5f30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_2d5f34:
    // 0x2d5f34: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x2d5f34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_2d5f38:
    // 0x2d5f38: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x2d5f38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_2d5f3c:
    // 0x2d5f3c: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x2d5f3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2d5f40:
    // 0x2d5f40: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x2d5f40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_2d5f44:
    // 0x2d5f44: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x2d5f44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2d5f48:
    // 0x2d5f48: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x2d5f48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_2d5f4c:
    // 0x2d5f4c: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x2d5f4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2d5f50:
    // 0x2d5f50: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x2d5f50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2d5f54:
    // 0x2d5f54: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x2d5f54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
label_2d5f58:
    // 0x2d5f58: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x2d5f58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_2d5f5c:
    // 0x2d5f5c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2d5f60:
    if (ctx->pc == 0x2D5F60u) {
        ctx->pc = 0x2D5F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5F5Cu;
        // 0x2d5f60: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5F64u;
        goto label_2d5f64;
    }
    ctx->pc = 0x2D5F5Cu;
    {
        const bool branch_taken_0x2d5f5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5F5Cu;
        // 0x2d5f60: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5f5c) {
            ctx->pc = 0x2D5F70u;
            goto label_2d5f70;
        }
    }
    ctx->pc = 0x2D5F64u;
label_2d5f64:
    // 0x2d5f64: 0x4a0003bf  vwaitq
    ctx->pc = 0x2d5f64u;
    // VWAITQ (Q already resolved in this runtime)
label_2d5f68:
    // 0x2d5f68: 0x10000003  b           . + 4 + (0x3 << 2)
label_2d5f6c:
    if (ctx->pc == 0x2D5F6Cu) {
        ctx->pc = 0x2D5F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5F68u;
        // 0x2d5f6c: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5F70u;
        goto label_2d5f70;
    }
    ctx->pc = 0x2D5F68u;
    {
        const bool branch_taken_0x2d5f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5F68u;
        // 0x2d5f6c: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5f68) {
            ctx->pc = 0x2D5F78u;
            goto label_2d5f78;
        }
    }
    ctx->pc = 0x2D5F70u;
label_2d5f70:
    // 0x2d5f70: 0x4a0003bf  vwaitq
    ctx->pc = 0x2d5f70u;
    // VWAITQ (Q already resolved in this runtime)
label_2d5f74:
    // 0x2d5f74: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x2d5f74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2d5f78:
    // 0x2d5f78: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x2d5f78u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_2d5f7c:
    // 0x2d5f7c: 0xd8c50010  lqc2        $vf5, 0x10($a2)
    ctx->pc = 0x2d5f7cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
label_2d5f80:
    // 0x2d5f80: 0xd8c60020  lqc2        $vf6, 0x20($a2)
    ctx->pc = 0x2d5f80u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
label_2d5f84:
    // 0x2d5f84: 0xd8c70030  lqc2        $vf7, 0x30($a2)
    ctx->pc = 0x2d5f84u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
label_2d5f88:
    // 0x2d5f88: 0x4ae0012c  vsub.yzw    $vf4, $vf0, $vf0
    ctx->pc = 0x2d5f88u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2d5f8c:
    // 0x2d5f8c: 0x4b20016c  vsub.xw     $vf5, $vf0, $vf0
    ctx->pc = 0x2d5f8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2d5f90:
    // 0x2d5f90: 0x4b2001ac  vsub.xw     $vf6, $vf0, $vf0
    ctx->pc = 0x2d5f90u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_2d5f94:
    // 0x2d5f94: 0x4b000103  vaddw.x     $vf4, $vf0, $vf0w
    ctx->pc = 0x2d5f94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2d5f98:
    // 0x2d5f98: 0x4a9c0168  vadd.y      $vf5, $vf0, $vf28
    ctx->pc = 0x2d5f98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[28]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2d5f9c:
    // 0x2d5f9c: 0x4a9c0184  vsubx.y     $vf6, $vf0, $vf28x
    ctx->pc = 0x2d5f9cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_2d5fa0:
    // 0x2d5fa0: 0x4a5c0140  vaddx.z     $vf5, $vf0, $vf28x
    ctx->pc = 0x2d5fa0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2d5fa4:
    // 0x2d5fa4: 0x4a5c0181  vaddy.z     $vf6, $vf0, $vf28y
    ctx->pc = 0x2d5fa4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_2d5fa8:
    // 0x2d5fa8: 0xc78294d4  lwc1        $f2, -0x6B2C($gp)
    ctx->pc = 0x2d5fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2d5fac:
    // 0x2d5fac: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2d5facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d5fb0:
    // 0x2d5fb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d5fb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d5fb4:
    // 0x2d5fb4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d5fb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d5fb8:
    // 0x2d5fb8: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_2d5fbc:
    if (ctx->pc == 0x2D5FBCu) {
        ctx->pc = 0x2D5FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5FB8u;
        // 0x2d5fbc: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5FC0u;
        goto label_2d5fc0;
    }
    ctx->pc = 0x2D5FB8u;
    {
        const bool branch_taken_0x2d5fb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d5fb8) {
            ctx->pc = 0x2D5FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5FB8u;
            // 0x2d5fbc: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5FD0u;
            goto label_2d5fd0;
        }
    }
    ctx->pc = 0x2D5FC0u;
label_2d5fc0:
    // 0x2d5fc0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2d5fc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2d5fc4:
    // 0x2d5fc4: 0x10000003  b           . + 4 + (0x3 << 2)
label_2d5fc8:
    if (ctx->pc == 0x2D5FC8u) {
        ctx->pc = 0x2D5FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5FC4u;
        // 0x2d5fc8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5FCCu;
        goto label_2d5fcc;
    }
    ctx->pc = 0x2D5FC4u;
    {
        const bool branch_taken_0x2d5fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5FC4u;
        // 0x2d5fc8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5fc4) {
            ctx->pc = 0x2D5FD4u;
            goto label_2d5fd4;
        }
    }
    ctx->pc = 0x2D5FCCu;
label_2d5fcc:
    // 0x2d5fcc: 0x0  nop
    ctx->pc = 0x2d5fccu;
    // NOP
label_2d5fd0:
    // 0x2d5fd0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2d5fd0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d5fd4:
    // 0x2d5fd4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2d5fd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2d5fd8:
    // 0x2d5fd8: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x2d5fd8u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2d5fdc:
    // 0x2d5fdc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2d5fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2d5fe0:
    // 0x2d5fe0: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x2d5fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
label_2d5fe4:
    // 0x2d5fe4: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x2d5fe4u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2d5fe8:
    // 0x2d5fe8: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x2d5fe8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_2d5fec:
    // 0x2d5fec: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x2d5fecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2d5ff0:
    // 0x2d5ff0: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x2d5ff0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_2d5ff4:
    // 0x2d5ff4: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x2d5ff4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_2d5ff8:
    // 0x2d5ff8: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x2d5ff8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_2d5ffc:
    // 0x2d5ffc: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x2d5ffcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_2d6000:
    // 0x2d6000: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x2d6000u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2d6004:
    // 0x2d6004: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x2d6004u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_2d6008:
    // 0x2d6008: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x2d6008u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2d600c:
    // 0x2d600c: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x2d600cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_2d6010:
    // 0x2d6010: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x2d6010u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2d6014:
    // 0x2d6014: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x2d6014u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2d6018:
    // 0x2d6018: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x2d6018u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
label_2d601c:
    // 0x2d601c: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x2d601cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_2d6020:
    // 0x2d6020: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2d6024:
    if (ctx->pc == 0x2D6024u) {
        ctx->pc = 0x2D6024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6020u;
        // 0x2d6024: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6028u;
        goto label_2d6028;
    }
    ctx->pc = 0x2D6020u;
    {
        const bool branch_taken_0x2d6020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6020u;
        // 0x2d6024: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6020) {
            ctx->pc = 0x2D6038u;
            goto label_2d6038;
        }
    }
    ctx->pc = 0x2D6028u;
label_2d6028:
    // 0x2d6028: 0x4a0003bf  vwaitq
    ctx->pc = 0x2d6028u;
    // VWAITQ (Q already resolved in this runtime)
label_2d602c:
    // 0x2d602c: 0x10000004  b           . + 4 + (0x4 << 2)
label_2d6030:
    if (ctx->pc == 0x2D6030u) {
        ctx->pc = 0x2D6030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D602Cu;
        // 0x2d6030: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6034u;
        goto label_2d6034;
    }
    ctx->pc = 0x2D602Cu;
    {
        const bool branch_taken_0x2d602c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D602Cu;
        // 0x2d6030: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d602c) {
            ctx->pc = 0x2D6040u;
            goto label_2d6040;
        }
    }
    ctx->pc = 0x2D6034u;
label_2d6034:
    // 0x2d6034: 0x0  nop
    ctx->pc = 0x2d6034u;
    // NOP
label_2d6038:
    // 0x2d6038: 0x4a0003bf  vwaitq
    ctx->pc = 0x2d6038u;
    // VWAITQ (Q already resolved in this runtime)
label_2d603c:
    // 0x2d603c: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x2d603cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2d6040:
    // 0x2d6040: 0x4a5c0701  vaddy.z     $vf28, $vf0, $vf28y
    ctx->pc = 0x2d6040u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2d6044:
    // 0x2d6044: 0x4b1c0741  vaddy.x     $vf29, $vf0, $vf28y
    ctx->pc = 0x2d6044u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_2d6048:
    // 0x2d6048: 0x4a5c0744  vsubx.z     $vf29, $vf0, $vf28x
    ctx->pc = 0x2d6048u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_2d604c:
    // 0x2d604c: 0x4b44e1be  vmulaz.xz   $ACC, $vf28, $vf4z
    ctx->pc = 0x2d604cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
label_2d6050:
    // 0x2d6050: 0x4b44e908  vmaddx.xz   $vf4, $vf29, $vf4x
    ctx->pc = 0x2d6050u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2d6054:
    // 0x2d6054: 0x4b45e1be  vmulaz.xz   $ACC, $vf28, $vf5z
    ctx->pc = 0x2d6054u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
label_2d6058:
    // 0x2d6058: 0x4b45e948  vmaddx.xz   $vf5, $vf29, $vf5x
    ctx->pc = 0x2d6058u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2d605c:
    // 0x2d605c: 0x4b46e1be  vmulaz.xz   $ACC, $vf28, $vf6z
    ctx->pc = 0x2d605cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
label_2d6060:
    // 0x2d6060: 0x4b46e988  vmaddx.xz   $vf6, $vf29, $vf6x
    ctx->pc = 0x2d6060u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_2d6064:
    // 0x2d6064: 0xc78294d8  lwc1        $f2, -0x6B28($gp)
    ctx->pc = 0x2d6064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2d6068:
    // 0x2d6068: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x2d6068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d606c:
    // 0x2d606c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d606cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d6070:
    // 0x2d6070: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d6070u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d6074:
    // 0x2d6074: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_2d6078:
    if (ctx->pc == 0x2D6078u) {
        ctx->pc = 0x2D6078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6074u;
        // 0x2d6078: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D607Cu;
        goto label_2d607c;
    }
    ctx->pc = 0x2D6074u;
    {
        const bool branch_taken_0x2d6074 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d6074) {
            ctx->pc = 0x2D6078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D6074u;
            // 0x2d6078: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6088u;
            goto label_2d6088;
        }
    }
    ctx->pc = 0x2D607Cu;
label_2d607c:
    // 0x2d607c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2d607cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2d6080:
    // 0x2d6080: 0x10000002  b           . + 4 + (0x2 << 2)
label_2d6084:
    if (ctx->pc == 0x2D6084u) {
        ctx->pc = 0x2D6084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6080u;
        // 0x2d6084: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6088u;
        goto label_2d6088;
    }
    ctx->pc = 0x2D6080u;
    {
        const bool branch_taken_0x2d6080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6080u;
        // 0x2d6084: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6080) {
            ctx->pc = 0x2D608Cu;
            goto label_2d608c;
        }
    }
    ctx->pc = 0x2D6088u;
label_2d6088:
    // 0x2d6088: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2d6088u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d608c:
    // 0x2d608c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2d608cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2d6090:
    // 0x2d6090: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x2d6090u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2d6094:
    // 0x2d6094: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2d6094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2d6098:
    // 0x2d6098: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x2d6098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
label_2d609c:
    // 0x2d609c: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x2d609cu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2d60a0:
    // 0x2d60a0: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x2d60a0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_2d60a4:
    // 0x2d60a4: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x2d60a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2d60a8:
    // 0x2d60a8: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x2d60a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_2d60ac:
    // 0x2d60ac: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x2d60acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_2d60b0:
    // 0x2d60b0: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x2d60b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_2d60b4:
    // 0x2d60b4: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x2d60b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_2d60b8:
    // 0x2d60b8: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x2d60b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2d60bc:
    // 0x2d60bc: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x2d60bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_2d60c0:
    // 0x2d60c0: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x2d60c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2d60c4:
    // 0x2d60c4: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x2d60c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_2d60c8:
    // 0x2d60c8: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x2d60c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2d60cc:
    // 0x2d60cc: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x2d60ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2d60d0:
    // 0x2d60d0: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x2d60d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
label_2d60d4:
    // 0x2d60d4: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x2d60d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_2d60d8:
    // 0x2d60d8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2d60dc:
    if (ctx->pc == 0x2D60DCu) {
        ctx->pc = 0x2D60DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D60D8u;
        // 0x2d60dc: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D60E0u;
        goto label_2d60e0;
    }
    ctx->pc = 0x2D60D8u;
    {
        const bool branch_taken_0x2d60d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D60DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D60D8u;
        // 0x2d60dc: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d60d8) {
            ctx->pc = 0x2D60F0u;
            goto label_2d60f0;
        }
    }
    ctx->pc = 0x2D60E0u;
label_2d60e0:
    // 0x2d60e0: 0x4a0003bf  vwaitq
    ctx->pc = 0x2d60e0u;
    // VWAITQ (Q already resolved in this runtime)
label_2d60e4:
    // 0x2d60e4: 0x10000004  b           . + 4 + (0x4 << 2)
label_2d60e8:
    if (ctx->pc == 0x2D60E8u) {
        ctx->pc = 0x2D60E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D60E4u;
        // 0x2d60e8: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D60ECu;
        goto label_2d60ec;
    }
    ctx->pc = 0x2D60E4u;
    {
        const bool branch_taken_0x2d60e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D60E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D60E4u;
        // 0x2d60e8: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d60e4) {
            ctx->pc = 0x2D60F8u;
            goto label_2d60f8;
        }
    }
    ctx->pc = 0x2D60ECu;
label_2d60ec:
    // 0x2d60ec: 0x0  nop
    ctx->pc = 0x2d60ecu;
    // NOP
label_2d60f0:
    // 0x2d60f0: 0x4a0003bf  vwaitq
    ctx->pc = 0x2d60f0u;
    // VWAITQ (Q already resolved in this runtime)
label_2d60f4:
    // 0x2d60f4: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x2d60f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2d60f8:
    // 0x2d60f8: 0x4a9c0740  vaddx.y     $vf29, $vf0, $vf28x
    ctx->pc = 0x2d60f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_2d60fc:
    // 0x2d60fc: 0x4b1c0741  vaddy.x     $vf29, $vf0, $vf28y
    ctx->pc = 0x2d60fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_2d6100:
    // 0x2d6100: 0x4b1c0704  vsubx.x     $vf28, $vf0, $vf28x
    ctx->pc = 0x2d6100u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2d6104:
    // 0x2d6104: 0x4b84e9bc  vmulax.xy   $ACC, $vf29, $vf4x
    ctx->pc = 0x2d6104u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, -1))); }
label_2d6108:
    // 0x2d6108: 0x4b84e109  vmaddy.xy   $vf4, $vf28, $vf4y
    ctx->pc = 0x2d6108u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2d610c:
    // 0x2d610c: 0x4b85e9bc  vmulax.xy   $ACC, $vf29, $vf5x
    ctx->pc = 0x2d610cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, -1))); }
label_2d6110:
    // 0x2d6110: 0x4b85e149  vmaddy.xy   $vf5, $vf28, $vf5y
    ctx->pc = 0x2d6110u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2d6114:
    // 0x2d6114: 0x4b86e9bc  vmulax.xy   $ACC, $vf29, $vf6x
    ctx->pc = 0x2d6114u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, -1))); }
label_2d6118:
    // 0x2d6118: 0x4b86e189  vmaddy.xy   $vf6, $vf28, $vf6y
    ctx->pc = 0x2d6118u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_2d611c:
    // 0x2d611c: 0xf8c40000  sqc2        $vf4, 0x0($a2)
    ctx->pc = 0x2d611cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_2d6120:
    // 0x2d6120: 0xf8c50010  sqc2        $vf5, 0x10($a2)
    ctx->pc = 0x2d6120u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[5]));
label_2d6124:
    // 0x2d6124: 0xf8c60020  sqc2        $vf6, 0x20($a2)
    ctx->pc = 0x2d6124u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[6]));
label_2d6128:
    // 0x2d6128: 0xf8c70030  sqc2        $vf7, 0x30($a2)
    ctx->pc = 0x2d6128u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[7]));
label_2d612c:
    // 0x2d612c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d612cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d6130:
    // 0x2d6130: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d6130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2d6134:
    // 0x2d6134: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d6134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2d6138:
    // 0x2d6138: 0xe4a00038  swc1        $f0, 0x38($a1)
    ctx->pc = 0x2d6138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
label_2d613c:
    // 0x2d613c: 0xe4a1003c  swc1        $f1, 0x3C($a1)
    ctx->pc = 0x2d613cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
label_2d6140:
    // 0x2d6140: 0xe4a00030  swc1        $f0, 0x30($a1)
    ctx->pc = 0x2d6140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
label_2d6144:
    // 0x2d6144: 0xe4a00034  swc1        $f0, 0x34($a1)
    ctx->pc = 0x2d6144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
label_2d6148:
    // 0x2d6148: 0xae200110  sw          $zero, 0x110($s1)
    ctx->pc = 0x2d6148u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 0));
label_2d614c:
    // 0x2d614c: 0xc6200100  lwc1        $f0, 0x100($s1)
    ctx->pc = 0x2d614cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d6150:
    // 0x2d6150: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x2d6150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d6154:
    // 0x2d6154: 0xc6220108  lwc1        $f2, 0x108($s1)
    ctx->pc = 0x2d6154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2d6158:
    // 0x2d6158: 0xc6230140  lwc1        $f3, 0x140($s1)
    ctx->pc = 0x2d6158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2d615c:
    // 0x2d615c: 0xc6240144  lwc1        $f4, 0x144($s1)
    ctx->pc = 0x2d615cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2d6160:
    // 0x2d6160: 0xc6250148  lwc1        $f5, 0x148($s1)
    ctx->pc = 0x2d6160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2d6164:
    // 0x2d6164: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2d6164u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_2d6168:
    // 0x2d6168: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2d6168u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_2d616c:
    // 0x2d616c: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x2d616cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
label_2d6170:
    // 0x2d6170: 0xe6200100  swc1        $f0, 0x100($s1)
    ctx->pc = 0x2d6170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 256), bits); }
label_2d6174:
    // 0x2d6174: 0xe6210104  swc1        $f1, 0x104($s1)
    ctx->pc = 0x2d6174u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
label_2d6178:
    // 0x2d6178: 0x1100000b  beqz        $t0, . + 4 + (0xB << 2)
label_2d617c:
    if (ctx->pc == 0x2D617Cu) {
        ctx->pc = 0x2D617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6178u;
        // 0x2d617c: 0xe6220108  swc1        $f2, 0x108($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6180u;
        goto label_2d6180;
    }
    ctx->pc = 0x2D6178u;
    {
        const bool branch_taken_0x2d6178 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6178u;
        // 0x2d617c: 0xe6220108  swc1        $f2, 0x108($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6178) {
            ctx->pc = 0x2D61A8u;
            goto label_2d61a8;
        }
    }
    ctx->pc = 0x2D6180u;
label_2d6180:
    // 0x2d6180: 0x8e220124  lw          $v0, 0x124($s1)
    ctx->pc = 0x2d6180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
label_2d6184:
    // 0x2d6184: 0x8d040034  lw          $a0, 0x34($t0)
    ctx->pc = 0x2d6184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 52)));
label_2d6188:
    // 0x2d6188: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2d6188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2d618c:
    // 0x2d618c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d618cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2d6190:
    // 0x2d6190: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2d6190u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2d6194:
    // 0x2d6194: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x2d6194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2d6198:
    // 0x2d6198: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2d619c:
    if (ctx->pc == 0x2D619Cu) {
        ctx->pc = 0x2D61A0u;
        goto label_2d61a0;
    }
    ctx->pc = 0x2D6198u;
    {
        const bool branch_taken_0x2d6198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6198) {
            ctx->pc = 0x2D61A8u;
            goto label_2d61a8;
        }
    }
    ctx->pc = 0x2D61A0u;
label_2d61a0:
    // 0x2d61a0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2d61a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2d61a4:
    // 0x2d61a4: 0xae220110  sw          $v0, 0x110($s1)
    ctx->pc = 0x2d61a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 2));
label_2d61a8:
    // 0x2d61a8: 0x10e0000f  beqz        $a3, . + 4 + (0xF << 2)
label_2d61ac:
    if (ctx->pc == 0x2D61ACu) {
        ctx->pc = 0x2D61ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D61A8u;
        // 0x2d61ac: 0xae200118  sw          $zero, 0x118($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D61B0u;
        goto label_2d61b0;
    }
    ctx->pc = 0x2D61A8u;
    {
        const bool branch_taken_0x2d61a8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D61ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D61A8u;
        // 0x2d61ac: 0xae200118  sw          $zero, 0x118($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d61a8) {
            ctx->pc = 0x2D61E8u;
            goto label_2d61e8;
        }
    }
    ctx->pc = 0x2D61B0u;
label_2d61b0:
    // 0x2d61b0: 0x8e220124  lw          $v0, 0x124($s1)
    ctx->pc = 0x2d61b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
label_2d61b4:
    // 0x2d61b4: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x2d61b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_2d61b8:
    // 0x2d61b8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d61b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2d61bc:
    // 0x2d61bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d61bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2d61c0:
    // 0x2d61c0: 0x38100  sll         $s0, $v1, 4
    ctx->pc = 0x2d61c0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2d61c4:
    // 0x2d61c4: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2d61c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_2d61c8:
    // 0x2d61c8: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
label_2d61cc:
    if (ctx->pc == 0x2D61CCu) {
        ctx->pc = 0x2D61CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D61C8u;
        // 0x2d61cc: 0x8e230120  lw          $v1, 0x120($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D61D0u;
        goto label_2d61d0;
    }
    ctx->pc = 0x2D61C8u;
    {
        const bool branch_taken_0x2d61c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d61c8) {
            ctx->pc = 0x2D61CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D61C8u;
            // 0x2d61cc: 0x8e230120  lw          $v1, 0x120($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D61ECu;
            goto label_2d61ec;
        }
    }
    ctx->pc = 0x2D61D0u;
label_2d61d0:
    // 0x2d61d0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2d61d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2d61d4:
    // 0x2d61d4: 0xae230118  sw          $v1, 0x118($s1)
    ctx->pc = 0x2d61d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 3));
label_2d61d8:
    // 0x2d61d8: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x2d61d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_2d61dc:
    // 0x2d61dc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d61dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2d61e0:
    // 0x2d61e0: 0x2442004c  addiu       $v0, $v0, 0x4C
    ctx->pc = 0x2d61e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
label_2d61e4:
    // 0x2d61e4: 0xae22011c  sw          $v0, 0x11C($s1)
    ctx->pc = 0x2d61e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 2));
label_2d61e8:
    // 0x2d61e8: 0x8e230120  lw          $v1, 0x120($s1)
    ctx->pc = 0x2d61e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
label_2d61ec:
    // 0x2d61ec: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2d61ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2d61f0:
    // 0x2d61f0: 0x1062009f  beq         $v1, $v0, . + 4 + (0x9F << 2)
label_2d61f4:
    if (ctx->pc == 0x2D61F4u) {
        ctx->pc = 0x2D61F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D61F0u;
        // 0x2d61f4: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D61F8u;
        goto label_2d61f8;
    }
    ctx->pc = 0x2D61F0u;
    {
        const bool branch_taken_0x2d61f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D61F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D61F0u;
        // 0x2d61f4: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d61f0) {
            ctx->pc = 0x2D6470u;
            goto label_2d6470;
        }
    }
    ctx->pc = 0x2D61F8u;
label_2d61f8:
    // 0x2d61f8: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x2d61f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_2d61fc:
    // 0x2d61fc: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x2d61fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2d6200:
    // 0x2d6200: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x2d6200u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_2d6204:
    // 0x2d6204: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x2d6204u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_2d6208:
    // 0x2d6208: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x2d6208u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_2d620c:
    // 0x2d620c: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x2d620cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2d6210:
    // 0x2d6210: 0xd8490010  lqc2        $vf9, 0x10($v0)
    ctx->pc = 0x2d6210u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_2d6214:
    // 0x2d6214: 0xd84a0020  lqc2        $vf10, 0x20($v0)
    ctx->pc = 0x2d6214u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_2d6218:
    // 0x2d6218: 0xd84b0030  lqc2        $vf11, 0x30($v0)
    ctx->pc = 0x2d6218u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_2d621c:
    // 0x2d621c: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x2d621cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_2d6220:
    // 0x2d6220: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x2d6220u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_2d6224:
    // 0x2d6224: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x2d6224u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_2d6228:
    // 0x2d6228: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x2d6228u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2d622c:
    // 0x2d622c: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x2d622cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_2d6230:
    // 0x2d6230: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x2d6230u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_2d6234:
    // 0x2d6234: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x2d6234u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_2d6238:
    // 0x2d6238: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x2d6238u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2d623c:
    // 0x2d623c: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x2d623cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_2d6240:
    // 0x2d6240: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x2d6240u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_2d6244:
    // 0x2d6244: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x2d6244u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_2d6248:
    // 0x2d6248: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x2d6248u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_2d624c:
    // 0x2d624c: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x2d624cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_2d6250:
    // 0x2d6250: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x2d6250u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_2d6254:
    // 0x2d6254: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x2d6254u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_2d6258:
    // 0x2d6258: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x2d6258u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_2d625c:
    // 0x2d625c: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2d625cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_2d6260:
    // 0x2d6260: 0xfba50010  sqc2        $vf5, 0x10($sp)
    ctx->pc = 0x2d6260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[5]));
label_2d6264:
    // 0x2d6264: 0xfba60020  sqc2        $vf6, 0x20($sp)
    ctx->pc = 0x2d6264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[6]));
label_2d6268:
    // 0x2d6268: 0xfba70030  sqc2        $vf7, 0x30($sp)
    ctx->pc = 0x2d6268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[7]));
label_2d626c:
    // 0x2d626c: 0xc6240150  lwc1        $f4, 0x150($s1)
    ctx->pc = 0x2d626cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2d6270:
    // 0x2d6270: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2d6270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2d6274:
    // 0x2d6274: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d6274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2d6278:
    // 0x2d6278: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d6278u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2d627c:
    // 0x2d627c: 0xc6250154  lwc1        $f5, 0x154($s1)
    ctx->pc = 0x2d627cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2d6280:
    // 0x2d6280: 0xc6260158  lwc1        $f6, 0x158($s1)
    ctx->pc = 0x2d6280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2d6284:
    // 0x2d6284: 0x0  nop
    ctx->pc = 0x2d6284u;
    // NOP
label_2d6288:
    // 0x2d6288: 0x0  nop
    ctx->pc = 0x2d6288u;
    // NOP
label_2d628c:
    // 0x2d628c: 0x460408c3  div.s       $f3, $f1, $f4
    ctx->pc = 0x2d628cu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[3] = ctx->f[1] / ctx->f[4];
label_2d6290:
    // 0x2d6290: 0xc620015c  lwc1        $f0, 0x15C($s1)
    ctx->pc = 0x2d6290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d6294:
    // 0x2d6294: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x2d6294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_2d6298:
    // 0x2d6298: 0x0  nop
    ctx->pc = 0x2d6298u;
    // NOP
label_2d629c:
    // 0x2d629c: 0x0  nop
    ctx->pc = 0x2d629cu;
    // NOP
label_2d62a0:
    // 0x2d62a0: 0x46060883  div.s       $f2, $f1, $f6
    ctx->pc = 0x2d62a0u;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[6];
label_2d62a4:
    // 0x2d62a4: 0xe6230000  swc1        $f3, 0x0($s1)
    ctx->pc = 0x2d62a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2d62a8:
    // 0x2d62a8: 0x0  nop
    ctx->pc = 0x2d62a8u;
    // NOP
label_2d62ac:
    // 0x2d62ac: 0x0  nop
    ctx->pc = 0x2d62acu;
    // NOP
label_2d62b0:
    // 0x2d62b0: 0x46050843  div.s       $f1, $f1, $f5
    ctx->pc = 0x2d62b0u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[5];
label_2d62b4:
    // 0x2d62b4: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x2d62b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_2d62b8:
    // 0x2d62b8: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x2d62b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_2d62bc:
    // 0x2d62bc: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x2d62bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2d62c0:
    // 0x2d62c0: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x2d62c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2d62c4:
    // 0x2d62c4: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x2d62c4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2d62c8:
    // 0x2d62c8: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x2d62c8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_2d62cc:
    // 0x2d62cc: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x2d62ccu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_2d62d0:
    // 0x2d62d0: 0xf8840030  sqc2        $vf4, 0x30($a0)
    ctx->pc = 0x2d62d0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_2d62d4:
    // 0x2d62d4: 0xf8850020  sqc2        $vf5, 0x20($a0)
    ctx->pc = 0x2d62d4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[5]));
label_2d62d8:
    // 0x2d62d8: 0xf8860010  sqc2        $vf6, 0x10($a0)
    ctx->pc = 0x2d62d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[6]));
label_2d62dc:
    // 0x2d62dc: 0xf8870000  sqc2        $vf7, 0x0($a0)
    ctx->pc = 0x2d62dcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[7]));
label_2d62e0:
    // 0x2d62e0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2d62e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2d62e4:
    // 0x2d62e4: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x2d62e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d62e8:
    // 0x2d62e8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2d62ec:
    if (ctx->pc == 0x2D62ECu) {
        ctx->pc = 0x2D62ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D62E8u;
        // 0x2d62ec: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D62F0u;
        goto label_2d62f0;
    }
    ctx->pc = 0x2D62E8u;
    {
        const bool branch_taken_0x2d62e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D62ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D62E8u;
        // 0x2d62ec: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d62e8) {
            ctx->pc = 0x2D62F4u;
            goto label_2d62f4;
        }
    }
    ctx->pc = 0x2D62F0u;
label_2d62f0:
    // 0x2d62f0: 0x46000906  mov.s       $f4, $f1
    ctx->pc = 0x2d62f0u;
    ctx->f[4] = FPU_MOV_S(ctx->f[1]);
label_2d62f4:
    // 0x2d62f4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2d62f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2d62f8:
    // 0x2d62f8: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x2d62f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2d62fc:
    // 0x2d62fc: 0x48a2a800  qmtc2.ni    $v0, $vf21
    ctx->pc = 0x2d62fcu;
    ctx->vu0_vf[21] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2d6300:
    // 0x2d6300: 0x4b152118  vmulx.x     $vf4, $vf4, $vf21x
    ctx->pc = 0x2d6300u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2d6304:
    // 0x2d6304: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2d6304u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_2d6308:
    // 0x2d6308: 0x46002806  mov.s       $f0, $f5
    ctx->pc = 0x2d6308u;
    ctx->f[0] = FPU_MOV_S(ctx->f[5]);
label_2d630c:
    // 0x2d630c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2d630cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d6310:
    // 0x2d6310: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2d6314:
    if (ctx->pc == 0x2D6314u) {
        ctx->pc = 0x2D6314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6310u;
        // 0x2d6314: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6318u;
        goto label_2d6318;
    }
    ctx->pc = 0x2D6310u;
    {
        const bool branch_taken_0x2d6310 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D6314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6310u;
        // 0x2d6314: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6310) {
            ctx->pc = 0x2D631Cu;
            goto label_2d631c;
        }
    }
    ctx->pc = 0x2D6318u;
label_2d6318:
    // 0x2d6318: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x2d6318u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_2d631c:
    // 0x2d631c: 0xd8640010  lqc2        $vf4, 0x10($v1)
    ctx->pc = 0x2d631cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_2d6320:
    // 0x2d6320: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2d6320u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2d6324:
    // 0x2d6324: 0x48a2a800  qmtc2.ni    $v0, $vf21
    ctx->pc = 0x2d6324u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2d6328:
    // 0x2d6328: 0x4a952118  vmulx.y     $vf4, $vf4, $vf21x
    ctx->pc = 0x2d6328u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2d632c:
    // 0x2d632c: 0xf8640010  sqc2        $vf4, 0x10($v1)
    ctx->pc = 0x2d632cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_2d6330:
    // 0x2d6330: 0x46003006  mov.s       $f0, $f6
    ctx->pc = 0x2d6330u;
    ctx->f[0] = FPU_MOV_S(ctx->f[6]);
label_2d6334:
    // 0x2d6334: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2d6334u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d6338:
    // 0x2d6338: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2d633c:
    if (ctx->pc == 0x2D633Cu) {
        ctx->pc = 0x2D633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6338u;
        // 0x2d633c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6340u;
        goto label_2d6340;
    }
    ctx->pc = 0x2D6338u;
    {
        const bool branch_taken_0x2d6338 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6338u;
        // 0x2d633c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6338) {
            ctx->pc = 0x2D6344u;
            goto label_2d6344;
        }
    }
    ctx->pc = 0x2D6340u;
label_2d6340:
    // 0x2d6340: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x2d6340u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_2d6344:
    // 0x2d6344: 0xd8640020  lqc2        $vf4, 0x20($v1)
    ctx->pc = 0x2d6344u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_2d6348:
    // 0x2d6348: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2d6348u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2d634c:
    // 0x2d634c: 0x48a2a800  qmtc2.ni    $v0, $vf21
    ctx->pc = 0x2d634cu;
    ctx->vu0_vf[21] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2d6350:
    // 0x2d6350: 0x4a552118  vmulx.z     $vf4, $vf4, $vf21x
    ctx->pc = 0x2d6350u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2d6354:
    // 0x2d6354: 0xf8640020  sqc2        $vf4, 0x20($v1)
    ctx->pc = 0x2d6354u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_2d6358:
    // 0x2d6358: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x2d6358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2d635c:
    // 0x2d635c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2d635cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2d6360:
    // 0x2d6360: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x2d6360u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_2d6364:
    // 0x2d6364: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x2d6364u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_2d6368:
    // 0x2d6368: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x2d6368u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
label_2d636c:
    // 0x2d636c: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x2d636cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d6370:
    // 0x2d6370: 0xdba90010  lqc2        $vf9, 0x10($sp)
    ctx->pc = 0x2d6370u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d6374:
    // 0x2d6374: 0xdbaa0020  lqc2        $vf10, 0x20($sp)
    ctx->pc = 0x2d6374u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d6378:
    // 0x2d6378: 0xdbab0030  lqc2        $vf11, 0x30($sp)
    ctx->pc = 0x2d6378u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2d637c:
    // 0x2d637c: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x2d637cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_2d6380:
    // 0x2d6380: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x2d6380u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_2d6384:
    // 0x2d6384: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x2d6384u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_2d6388:
    // 0x2d6388: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x2d6388u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2d638c:
    // 0x2d638c: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x2d638cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_2d6390:
    // 0x2d6390: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x2d6390u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_2d6394:
    // 0x2d6394: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x2d6394u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_2d6398:
    // 0x2d6398: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x2d6398u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2d639c:
    // 0x2d639c: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x2d639cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_2d63a0:
    // 0x2d63a0: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x2d63a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_2d63a4:
    // 0x2d63a4: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x2d63a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_2d63a8:
    // 0x2d63a8: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x2d63a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_2d63ac:
    // 0x2d63ac: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x2d63acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_2d63b0:
    // 0x2d63b0: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x2d63b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_2d63b4:
    // 0x2d63b4: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x2d63b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_2d63b8:
    // 0x2d63b8: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x2d63b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_2d63bc:
    // 0x2d63bc: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2d63bcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_2d63c0:
    // 0x2d63c0: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x2d63c0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
label_2d63c4:
    // 0x2d63c4: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x2d63c4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
label_2d63c8:
    // 0x2d63c8: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x2d63c8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
label_2d63cc:
    // 0x2d63cc: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2d63ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d63d0:
    // 0x2d63d0: 0x26290050  addiu       $t1, $s1, 0x50
    ctx->pc = 0x2d63d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_2d63d4:
    // 0x2d63d4: 0x7ba60000  lq          $a2, 0x0($sp)
    ctx->pc = 0x2d63d4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d63d8:
    // 0x2d63d8: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x2d63d8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d63dc:
    // 0x2d63dc: 0x7ba70020  lq          $a3, 0x20($sp)
    ctx->pc = 0x2d63dcu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d63e0:
    // 0x2d63e0: 0x48230000  qmfc2.ni    $v1, $vf0
    ctx->pc = 0x2d63e0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[0]));
label_2d63e4:
    // 0x2d63e4: 0x70862c88  pextlw      $a1, $a0, $a2
    ctx->pc = 0x2d63e4u;
    SET_GPR_VEC(ctx, 5, PS2_PEXTLW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
label_2d63e8:
    // 0x2d63e8: 0x708624a8  pextuw      $a0, $a0, $a2
    ctx->pc = 0x2d63e8u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTUW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
label_2d63ec:
    // 0x2d63ec: 0x70671488  pextlw      $v0, $v1, $a3
    ctx->pc = 0x2d63ecu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
label_2d63f0:
    // 0x2d63f0: 0x70671ca8  pextuw      $v1, $v1, $a3
    ctx->pc = 0x2d63f0u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
label_2d63f4:
    // 0x2d63f4: 0x70453389  pcpyld      $a2, $v0, $a1
    ctx->pc = 0x2d63f4u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
label_2d63f8:
    // 0x2d63f8: 0x70a22ba9  pcpyud      $a1, $a1, $v0
    ctx->pc = 0x2d63f8u;
    SET_GPR_VEC(ctx, 5, _mm_unpackhi_epi64(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
label_2d63fc:
    // 0x2d63fc: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x2d63fcu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_2d6400:
    // 0x2d6400: 0xdba70030  lqc2        $vf7, 0x30($sp)
    ctx->pc = 0x2d6400u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2d6404:
    // 0x2d6404: 0xd9100000  lqc2        $vf16, 0x0($t0)
    ctx->pc = 0x2d6404u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_2d6408:
    // 0x2d6408: 0x48a62000  qmtc2.ni    $a2, $vf4
    ctx->pc = 0x2d6408u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_2d640c:
    // 0x2d640c: 0x48a52800  qmtc2.ni    $a1, $vf5
    ctx->pc = 0x2d640cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_2d6410:
    // 0x2d6410: 0x48a33000  qmtc2.ni    $v1, $vf6
    ctx->pc = 0x2d6410u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2d6414:
    // 0x2d6414: 0x4bc002bc  vadda.xyz   $ACC, $vf0, $vf0
    ctx->pc = 0x2d6414u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2d6418:
    // 0x2d6418: 0x4bc720fc  vmsubax.xyz $ACC, $vf4, $vf7x
    ctx->pc = 0x2d6418u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2d641c:
    // 0x2d641c: 0x4bc728fd  vmsubay.xyz $ACC, $vf5, $vf7y
    ctx->pc = 0x2d641cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2d6420:
    // 0x2d6420: 0x4bc731ce  vmsubz.xyz  $vf7, $vf6, $vf7z
    ctx->pc = 0x2d6420u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_2d6424:
    // 0x2d6424: 0x4bd0212a  vmul.xyz    $vf4, $vf4, $vf16
    ctx->pc = 0x2d6424u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2d6428:
    // 0x2d6428: 0x4bd0296a  vmul.xyz    $vf5, $vf5, $vf16
    ctx->pc = 0x2d6428u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2d642c:
    // 0x2d642c: 0x4bd031aa  vmul.xyz    $vf6, $vf6, $vf16
    ctx->pc = 0x2d642cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_2d6430:
    // 0x2d6430: 0x4bd039ea  vmul.xyz    $vf7, $vf7, $vf16
    ctx->pc = 0x2d6430u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_2d6434:
    // 0x2d6434: 0xf9240000  sqc2        $vf4, 0x0($t1)
    ctx->pc = 0x2d6434u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_2d6438:
    // 0x2d6438: 0xf9250010  sqc2        $vf5, 0x10($t1)
    ctx->pc = 0x2d6438u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 16), _mm_castps_si128(ctx->vu0_vf[5]));
label_2d643c:
    // 0x2d643c: 0xf9260020  sqc2        $vf6, 0x20($t1)
    ctx->pc = 0x2d643cu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 32), _mm_castps_si128(ctx->vu0_vf[6]));
label_2d6440:
    // 0x2d6440: 0xf9270030  sqc2        $vf7, 0x30($t1)
    ctx->pc = 0x2d6440u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 48), _mm_castps_si128(ctx->vu0_vf[7]));
label_2d6444:
    // 0x2d6444: 0x25060050  addiu       $a2, $t0, 0x50
    ctx->pc = 0x2d6444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 80));
label_2d6448:
    // 0x2d6448: 0x25080090  addiu       $t0, $t0, 0x90
    ctx->pc = 0x2d6448u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 144));
label_2d644c:
    // 0x2d644c: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x2d644cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_2d6450:
    // 0x2d6450: 0x78c30010  lq          $v1, 0x10($a2)
    ctx->pc = 0x2d6450u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 16)));
label_2d6454:
    // 0x2d6454: 0x78c40020  lq          $a0, 0x20($a2)
    ctx->pc = 0x2d6454u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 6), 32)));
label_2d6458:
    // 0x2d6458: 0x78c50030  lq          $a1, 0x30($a2)
    ctx->pc = 0x2d6458u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 48)));
label_2d645c:
    // 0x2d645c: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x2d645cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
label_2d6460:
    // 0x2d6460: 0x7d030010  sq          $v1, 0x10($t0)
    ctx->pc = 0x2d6460u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 3));
label_2d6464:
    // 0x2d6464: 0x7d040020  sq          $a0, 0x20($t0)
    ctx->pc = 0x2d6464u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 32), GPR_VEC(ctx, 4));
label_2d6468:
    // 0x2d6468: 0x7d050030  sq          $a1, 0x30($t0)
    ctx->pc = 0x2d6468u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 48), GPR_VEC(ctx, 5));
label_2d646c:
    // 0x2d646c: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x2d646cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2d6470:
    // 0x2d6470: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x2d6470u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_2d6474:
    // 0x2d6474: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2d6474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2d6478:
    // 0x2d6478: 0x3e00008  jr          $ra
label_2d647c:
    if (ctx->pc == 0x2D647Cu) {
        ctx->pc = 0x2D647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6478u;
        // 0x2d647c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6480u;
        goto label_fallthrough_0x2d6478;
    }
    ctx->pc = 0x2D6478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6478u;
        // 0x2d647c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d6478:
    ctx->pc = 0x2D6480u;
}
