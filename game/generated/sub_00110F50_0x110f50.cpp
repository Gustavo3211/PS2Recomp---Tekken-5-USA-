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

// Function: sub_00110F50
// Address: 0x110f50 - 0x111c68
void sub_00110F50_0x110f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110F50_0x110f50");
#endif

    switch (ctx->pc) {
        case 0x110f50u: goto label_110f50;
        case 0x110f54u: goto label_110f54;
        case 0x110f58u: goto label_110f58;
        case 0x110f5cu: goto label_110f5c;
        case 0x110f60u: goto label_110f60;
        case 0x110f64u: goto label_110f64;
        case 0x110f68u: goto label_110f68;
        case 0x110f6cu: goto label_110f6c;
        case 0x110f70u: goto label_110f70;
        case 0x110f74u: goto label_110f74;
        case 0x110f78u: goto label_110f78;
        case 0x110f7cu: goto label_110f7c;
        case 0x110f80u: goto label_110f80;
        case 0x110f84u: goto label_110f84;
        case 0x110f88u: goto label_110f88;
        case 0x110f8cu: goto label_110f8c;
        case 0x110f90u: goto label_110f90;
        case 0x110f94u: goto label_110f94;
        case 0x110f98u: goto label_110f98;
        case 0x110f9cu: goto label_110f9c;
        case 0x110fa0u: goto label_110fa0;
        case 0x110fa4u: goto label_110fa4;
        case 0x110fa8u: goto label_110fa8;
        case 0x110facu: goto label_110fac;
        case 0x110fb0u: goto label_110fb0;
        case 0x110fb4u: goto label_110fb4;
        case 0x110fb8u: goto label_110fb8;
        case 0x110fbcu: goto label_110fbc;
        case 0x110fc0u: goto label_110fc0;
        case 0x110fc4u: goto label_110fc4;
        case 0x110fc8u: goto label_110fc8;
        case 0x110fccu: goto label_110fcc;
        case 0x110fd0u: goto label_110fd0;
        case 0x110fd4u: goto label_110fd4;
        case 0x110fd8u: goto label_110fd8;
        case 0x110fdcu: goto label_110fdc;
        case 0x110fe0u: goto label_110fe0;
        case 0x110fe4u: goto label_110fe4;
        case 0x110fe8u: goto label_110fe8;
        case 0x110fecu: goto label_110fec;
        case 0x110ff0u: goto label_110ff0;
        case 0x110ff4u: goto label_110ff4;
        case 0x110ff8u: goto label_110ff8;
        case 0x110ffcu: goto label_110ffc;
        case 0x111000u: goto label_111000;
        case 0x111004u: goto label_111004;
        case 0x111008u: goto label_111008;
        case 0x11100cu: goto label_11100c;
        case 0x111010u: goto label_111010;
        case 0x111014u: goto label_111014;
        case 0x111018u: goto label_111018;
        case 0x11101cu: goto label_11101c;
        case 0x111020u: goto label_111020;
        case 0x111024u: goto label_111024;
        case 0x111028u: goto label_111028;
        case 0x11102cu: goto label_11102c;
        case 0x111030u: goto label_111030;
        case 0x111034u: goto label_111034;
        case 0x111038u: goto label_111038;
        case 0x11103cu: goto label_11103c;
        case 0x111040u: goto label_111040;
        case 0x111044u: goto label_111044;
        case 0x111048u: goto label_111048;
        case 0x11104cu: goto label_11104c;
        case 0x111050u: goto label_111050;
        case 0x111054u: goto label_111054;
        case 0x111058u: goto label_111058;
        case 0x11105cu: goto label_11105c;
        case 0x111060u: goto label_111060;
        case 0x111064u: goto label_111064;
        case 0x111068u: goto label_111068;
        case 0x11106cu: goto label_11106c;
        case 0x111070u: goto label_111070;
        case 0x111074u: goto label_111074;
        case 0x111078u: goto label_111078;
        case 0x11107cu: goto label_11107c;
        case 0x111080u: goto label_111080;
        case 0x111084u: goto label_111084;
        case 0x111088u: goto label_111088;
        case 0x11108cu: goto label_11108c;
        case 0x111090u: goto label_111090;
        case 0x111094u: goto label_111094;
        case 0x111098u: goto label_111098;
        case 0x11109cu: goto label_11109c;
        case 0x1110a0u: goto label_1110a0;
        case 0x1110a4u: goto label_1110a4;
        case 0x1110a8u: goto label_1110a8;
        case 0x1110acu: goto label_1110ac;
        case 0x1110b0u: goto label_1110b0;
        case 0x1110b4u: goto label_1110b4;
        case 0x1110b8u: goto label_1110b8;
        case 0x1110bcu: goto label_1110bc;
        case 0x1110c0u: goto label_1110c0;
        case 0x1110c4u: goto label_1110c4;
        case 0x1110c8u: goto label_1110c8;
        case 0x1110ccu: goto label_1110cc;
        case 0x1110d0u: goto label_1110d0;
        case 0x1110d4u: goto label_1110d4;
        case 0x1110d8u: goto label_1110d8;
        case 0x1110dcu: goto label_1110dc;
        case 0x1110e0u: goto label_1110e0;
        case 0x1110e4u: goto label_1110e4;
        case 0x1110e8u: goto label_1110e8;
        case 0x1110ecu: goto label_1110ec;
        case 0x1110f0u: goto label_1110f0;
        case 0x1110f4u: goto label_1110f4;
        case 0x1110f8u: goto label_1110f8;
        case 0x1110fcu: goto label_1110fc;
        case 0x111100u: goto label_111100;
        case 0x111104u: goto label_111104;
        case 0x111108u: goto label_111108;
        case 0x11110cu: goto label_11110c;
        case 0x111110u: goto label_111110;
        case 0x111114u: goto label_111114;
        case 0x111118u: goto label_111118;
        case 0x11111cu: goto label_11111c;
        case 0x111120u: goto label_111120;
        case 0x111124u: goto label_111124;
        case 0x111128u: goto label_111128;
        case 0x11112cu: goto label_11112c;
        case 0x111130u: goto label_111130;
        case 0x111134u: goto label_111134;
        case 0x111138u: goto label_111138;
        case 0x11113cu: goto label_11113c;
        case 0x111140u: goto label_111140;
        case 0x111144u: goto label_111144;
        case 0x111148u: goto label_111148;
        case 0x11114cu: goto label_11114c;
        case 0x111150u: goto label_111150;
        case 0x111154u: goto label_111154;
        case 0x111158u: goto label_111158;
        case 0x11115cu: goto label_11115c;
        case 0x111160u: goto label_111160;
        case 0x111164u: goto label_111164;
        case 0x111168u: goto label_111168;
        case 0x11116cu: goto label_11116c;
        case 0x111170u: goto label_111170;
        case 0x111174u: goto label_111174;
        case 0x111178u: goto label_111178;
        case 0x11117cu: goto label_11117c;
        case 0x111180u: goto label_111180;
        case 0x111184u: goto label_111184;
        case 0x111188u: goto label_111188;
        case 0x11118cu: goto label_11118c;
        case 0x111190u: goto label_111190;
        case 0x111194u: goto label_111194;
        case 0x111198u: goto label_111198;
        case 0x11119cu: goto label_11119c;
        case 0x1111a0u: goto label_1111a0;
        case 0x1111a4u: goto label_1111a4;
        case 0x1111a8u: goto label_1111a8;
        case 0x1111acu: goto label_1111ac;
        case 0x1111b0u: goto label_1111b0;
        case 0x1111b4u: goto label_1111b4;
        case 0x1111b8u: goto label_1111b8;
        case 0x1111bcu: goto label_1111bc;
        case 0x1111c0u: goto label_1111c0;
        case 0x1111c4u: goto label_1111c4;
        case 0x1111c8u: goto label_1111c8;
        case 0x1111ccu: goto label_1111cc;
        case 0x1111d0u: goto label_1111d0;
        case 0x1111d4u: goto label_1111d4;
        case 0x1111d8u: goto label_1111d8;
        case 0x1111dcu: goto label_1111dc;
        case 0x1111e0u: goto label_1111e0;
        case 0x1111e4u: goto label_1111e4;
        case 0x1111e8u: goto label_1111e8;
        case 0x1111ecu: goto label_1111ec;
        case 0x1111f0u: goto label_1111f0;
        case 0x1111f4u: goto label_1111f4;
        case 0x1111f8u: goto label_1111f8;
        case 0x1111fcu: goto label_1111fc;
        case 0x111200u: goto label_111200;
        case 0x111204u: goto label_111204;
        case 0x111208u: goto label_111208;
        case 0x11120cu: goto label_11120c;
        case 0x111210u: goto label_111210;
        case 0x111214u: goto label_111214;
        case 0x111218u: goto label_111218;
        case 0x11121cu: goto label_11121c;
        case 0x111220u: goto label_111220;
        case 0x111224u: goto label_111224;
        case 0x111228u: goto label_111228;
        case 0x11122cu: goto label_11122c;
        case 0x111230u: goto label_111230;
        case 0x111234u: goto label_111234;
        case 0x111238u: goto label_111238;
        case 0x11123cu: goto label_11123c;
        case 0x111240u: goto label_111240;
        case 0x111244u: goto label_111244;
        case 0x111248u: goto label_111248;
        case 0x11124cu: goto label_11124c;
        case 0x111250u: goto label_111250;
        case 0x111254u: goto label_111254;
        case 0x111258u: goto label_111258;
        case 0x11125cu: goto label_11125c;
        case 0x111260u: goto label_111260;
        case 0x111264u: goto label_111264;
        case 0x111268u: goto label_111268;
        case 0x11126cu: goto label_11126c;
        case 0x111270u: goto label_111270;
        case 0x111274u: goto label_111274;
        case 0x111278u: goto label_111278;
        case 0x11127cu: goto label_11127c;
        case 0x111280u: goto label_111280;
        case 0x111284u: goto label_111284;
        case 0x111288u: goto label_111288;
        case 0x11128cu: goto label_11128c;
        case 0x111290u: goto label_111290;
        case 0x111294u: goto label_111294;
        case 0x111298u: goto label_111298;
        case 0x11129cu: goto label_11129c;
        case 0x1112a0u: goto label_1112a0;
        case 0x1112a4u: goto label_1112a4;
        case 0x1112a8u: goto label_1112a8;
        case 0x1112acu: goto label_1112ac;
        case 0x1112b0u: goto label_1112b0;
        case 0x1112b4u: goto label_1112b4;
        case 0x1112b8u: goto label_1112b8;
        case 0x1112bcu: goto label_1112bc;
        case 0x1112c0u: goto label_1112c0;
        case 0x1112c4u: goto label_1112c4;
        case 0x1112c8u: goto label_1112c8;
        case 0x1112ccu: goto label_1112cc;
        case 0x1112d0u: goto label_1112d0;
        case 0x1112d4u: goto label_1112d4;
        case 0x1112d8u: goto label_1112d8;
        case 0x1112dcu: goto label_1112dc;
        case 0x1112e0u: goto label_1112e0;
        case 0x1112e4u: goto label_1112e4;
        case 0x1112e8u: goto label_1112e8;
        case 0x1112ecu: goto label_1112ec;
        case 0x1112f0u: goto label_1112f0;
        case 0x1112f4u: goto label_1112f4;
        case 0x1112f8u: goto label_1112f8;
        case 0x1112fcu: goto label_1112fc;
        case 0x111300u: goto label_111300;
        case 0x111304u: goto label_111304;
        case 0x111308u: goto label_111308;
        case 0x11130cu: goto label_11130c;
        case 0x111310u: goto label_111310;
        case 0x111314u: goto label_111314;
        case 0x111318u: goto label_111318;
        case 0x11131cu: goto label_11131c;
        case 0x111320u: goto label_111320;
        case 0x111324u: goto label_111324;
        case 0x111328u: goto label_111328;
        case 0x11132cu: goto label_11132c;
        case 0x111330u: goto label_111330;
        case 0x111334u: goto label_111334;
        case 0x111338u: goto label_111338;
        case 0x11133cu: goto label_11133c;
        case 0x111340u: goto label_111340;
        case 0x111344u: goto label_111344;
        case 0x111348u: goto label_111348;
        case 0x11134cu: goto label_11134c;
        case 0x111350u: goto label_111350;
        case 0x111354u: goto label_111354;
        case 0x111358u: goto label_111358;
        case 0x11135cu: goto label_11135c;
        case 0x111360u: goto label_111360;
        case 0x111364u: goto label_111364;
        case 0x111368u: goto label_111368;
        case 0x11136cu: goto label_11136c;
        case 0x111370u: goto label_111370;
        case 0x111374u: goto label_111374;
        case 0x111378u: goto label_111378;
        case 0x11137cu: goto label_11137c;
        case 0x111380u: goto label_111380;
        case 0x111384u: goto label_111384;
        case 0x111388u: goto label_111388;
        case 0x11138cu: goto label_11138c;
        case 0x111390u: goto label_111390;
        case 0x111394u: goto label_111394;
        case 0x111398u: goto label_111398;
        case 0x11139cu: goto label_11139c;
        case 0x1113a0u: goto label_1113a0;
        case 0x1113a4u: goto label_1113a4;
        case 0x1113a8u: goto label_1113a8;
        case 0x1113acu: goto label_1113ac;
        case 0x1113b0u: goto label_1113b0;
        case 0x1113b4u: goto label_1113b4;
        case 0x1113b8u: goto label_1113b8;
        case 0x1113bcu: goto label_1113bc;
        case 0x1113c0u: goto label_1113c0;
        case 0x1113c4u: goto label_1113c4;
        case 0x1113c8u: goto label_1113c8;
        case 0x1113ccu: goto label_1113cc;
        case 0x1113d0u: goto label_1113d0;
        case 0x1113d4u: goto label_1113d4;
        case 0x1113d8u: goto label_1113d8;
        case 0x1113dcu: goto label_1113dc;
        case 0x1113e0u: goto label_1113e0;
        case 0x1113e4u: goto label_1113e4;
        case 0x1113e8u: goto label_1113e8;
        case 0x1113ecu: goto label_1113ec;
        case 0x1113f0u: goto label_1113f0;
        case 0x1113f4u: goto label_1113f4;
        case 0x1113f8u: goto label_1113f8;
        case 0x1113fcu: goto label_1113fc;
        case 0x111400u: goto label_111400;
        case 0x111404u: goto label_111404;
        case 0x111408u: goto label_111408;
        case 0x11140cu: goto label_11140c;
        case 0x111410u: goto label_111410;
        case 0x111414u: goto label_111414;
        case 0x111418u: goto label_111418;
        case 0x11141cu: goto label_11141c;
        case 0x111420u: goto label_111420;
        case 0x111424u: goto label_111424;
        case 0x111428u: goto label_111428;
        case 0x11142cu: goto label_11142c;
        case 0x111430u: goto label_111430;
        case 0x111434u: goto label_111434;
        case 0x111438u: goto label_111438;
        case 0x11143cu: goto label_11143c;
        case 0x111440u: goto label_111440;
        case 0x111444u: goto label_111444;
        case 0x111448u: goto label_111448;
        case 0x11144cu: goto label_11144c;
        case 0x111450u: goto label_111450;
        case 0x111454u: goto label_111454;
        case 0x111458u: goto label_111458;
        case 0x11145cu: goto label_11145c;
        case 0x111460u: goto label_111460;
        case 0x111464u: goto label_111464;
        case 0x111468u: goto label_111468;
        case 0x11146cu: goto label_11146c;
        case 0x111470u: goto label_111470;
        case 0x111474u: goto label_111474;
        case 0x111478u: goto label_111478;
        case 0x11147cu: goto label_11147c;
        case 0x111480u: goto label_111480;
        case 0x111484u: goto label_111484;
        case 0x111488u: goto label_111488;
        case 0x11148cu: goto label_11148c;
        case 0x111490u: goto label_111490;
        case 0x111494u: goto label_111494;
        case 0x111498u: goto label_111498;
        case 0x11149cu: goto label_11149c;
        case 0x1114a0u: goto label_1114a0;
        case 0x1114a4u: goto label_1114a4;
        case 0x1114a8u: goto label_1114a8;
        case 0x1114acu: goto label_1114ac;
        case 0x1114b0u: goto label_1114b0;
        case 0x1114b4u: goto label_1114b4;
        case 0x1114b8u: goto label_1114b8;
        case 0x1114bcu: goto label_1114bc;
        case 0x1114c0u: goto label_1114c0;
        case 0x1114c4u: goto label_1114c4;
        case 0x1114c8u: goto label_1114c8;
        case 0x1114ccu: goto label_1114cc;
        case 0x1114d0u: goto label_1114d0;
        case 0x1114d4u: goto label_1114d4;
        case 0x1114d8u: goto label_1114d8;
        case 0x1114dcu: goto label_1114dc;
        case 0x1114e0u: goto label_1114e0;
        case 0x1114e4u: goto label_1114e4;
        case 0x1114e8u: goto label_1114e8;
        case 0x1114ecu: goto label_1114ec;
        case 0x1114f0u: goto label_1114f0;
        case 0x1114f4u: goto label_1114f4;
        case 0x1114f8u: goto label_1114f8;
        case 0x1114fcu: goto label_1114fc;
        case 0x111500u: goto label_111500;
        case 0x111504u: goto label_111504;
        case 0x111508u: goto label_111508;
        case 0x11150cu: goto label_11150c;
        case 0x111510u: goto label_111510;
        case 0x111514u: goto label_111514;
        case 0x111518u: goto label_111518;
        case 0x11151cu: goto label_11151c;
        case 0x111520u: goto label_111520;
        case 0x111524u: goto label_111524;
        case 0x111528u: goto label_111528;
        case 0x11152cu: goto label_11152c;
        case 0x111530u: goto label_111530;
        case 0x111534u: goto label_111534;
        case 0x111538u: goto label_111538;
        case 0x11153cu: goto label_11153c;
        case 0x111540u: goto label_111540;
        case 0x111544u: goto label_111544;
        case 0x111548u: goto label_111548;
        case 0x11154cu: goto label_11154c;
        case 0x111550u: goto label_111550;
        case 0x111554u: goto label_111554;
        case 0x111558u: goto label_111558;
        case 0x11155cu: goto label_11155c;
        case 0x111560u: goto label_111560;
        case 0x111564u: goto label_111564;
        case 0x111568u: goto label_111568;
        case 0x11156cu: goto label_11156c;
        case 0x111570u: goto label_111570;
        case 0x111574u: goto label_111574;
        case 0x111578u: goto label_111578;
        case 0x11157cu: goto label_11157c;
        case 0x111580u: goto label_111580;
        case 0x111584u: goto label_111584;
        case 0x111588u: goto label_111588;
        case 0x11158cu: goto label_11158c;
        case 0x111590u: goto label_111590;
        case 0x111594u: goto label_111594;
        case 0x111598u: goto label_111598;
        case 0x11159cu: goto label_11159c;
        case 0x1115a0u: goto label_1115a0;
        case 0x1115a4u: goto label_1115a4;
        case 0x1115a8u: goto label_1115a8;
        case 0x1115acu: goto label_1115ac;
        case 0x1115b0u: goto label_1115b0;
        case 0x1115b4u: goto label_1115b4;
        case 0x1115b8u: goto label_1115b8;
        case 0x1115bcu: goto label_1115bc;
        case 0x1115c0u: goto label_1115c0;
        case 0x1115c4u: goto label_1115c4;
        case 0x1115c8u: goto label_1115c8;
        case 0x1115ccu: goto label_1115cc;
        case 0x1115d0u: goto label_1115d0;
        case 0x1115d4u: goto label_1115d4;
        case 0x1115d8u: goto label_1115d8;
        case 0x1115dcu: goto label_1115dc;
        case 0x1115e0u: goto label_1115e0;
        case 0x1115e4u: goto label_1115e4;
        case 0x1115e8u: goto label_1115e8;
        case 0x1115ecu: goto label_1115ec;
        case 0x1115f0u: goto label_1115f0;
        case 0x1115f4u: goto label_1115f4;
        case 0x1115f8u: goto label_1115f8;
        case 0x1115fcu: goto label_1115fc;
        case 0x111600u: goto label_111600;
        case 0x111604u: goto label_111604;
        case 0x111608u: goto label_111608;
        case 0x11160cu: goto label_11160c;
        case 0x111610u: goto label_111610;
        case 0x111614u: goto label_111614;
        case 0x111618u: goto label_111618;
        case 0x11161cu: goto label_11161c;
        case 0x111620u: goto label_111620;
        case 0x111624u: goto label_111624;
        case 0x111628u: goto label_111628;
        case 0x11162cu: goto label_11162c;
        case 0x111630u: goto label_111630;
        case 0x111634u: goto label_111634;
        case 0x111638u: goto label_111638;
        case 0x11163cu: goto label_11163c;
        case 0x111640u: goto label_111640;
        case 0x111644u: goto label_111644;
        case 0x111648u: goto label_111648;
        case 0x11164cu: goto label_11164c;
        case 0x111650u: goto label_111650;
        case 0x111654u: goto label_111654;
        case 0x111658u: goto label_111658;
        case 0x11165cu: goto label_11165c;
        case 0x111660u: goto label_111660;
        case 0x111664u: goto label_111664;
        case 0x111668u: goto label_111668;
        case 0x11166cu: goto label_11166c;
        case 0x111670u: goto label_111670;
        case 0x111674u: goto label_111674;
        case 0x111678u: goto label_111678;
        case 0x11167cu: goto label_11167c;
        case 0x111680u: goto label_111680;
        case 0x111684u: goto label_111684;
        case 0x111688u: goto label_111688;
        case 0x11168cu: goto label_11168c;
        case 0x111690u: goto label_111690;
        case 0x111694u: goto label_111694;
        case 0x111698u: goto label_111698;
        case 0x11169cu: goto label_11169c;
        case 0x1116a0u: goto label_1116a0;
        case 0x1116a4u: goto label_1116a4;
        case 0x1116a8u: goto label_1116a8;
        case 0x1116acu: goto label_1116ac;
        case 0x1116b0u: goto label_1116b0;
        case 0x1116b4u: goto label_1116b4;
        case 0x1116b8u: goto label_1116b8;
        case 0x1116bcu: goto label_1116bc;
        case 0x1116c0u: goto label_1116c0;
        case 0x1116c4u: goto label_1116c4;
        case 0x1116c8u: goto label_1116c8;
        case 0x1116ccu: goto label_1116cc;
        case 0x1116d0u: goto label_1116d0;
        case 0x1116d4u: goto label_1116d4;
        case 0x1116d8u: goto label_1116d8;
        case 0x1116dcu: goto label_1116dc;
        case 0x1116e0u: goto label_1116e0;
        case 0x1116e4u: goto label_1116e4;
        case 0x1116e8u: goto label_1116e8;
        case 0x1116ecu: goto label_1116ec;
        case 0x1116f0u: goto label_1116f0;
        case 0x1116f4u: goto label_1116f4;
        case 0x1116f8u: goto label_1116f8;
        case 0x1116fcu: goto label_1116fc;
        case 0x111700u: goto label_111700;
        case 0x111704u: goto label_111704;
        case 0x111708u: goto label_111708;
        case 0x11170cu: goto label_11170c;
        case 0x111710u: goto label_111710;
        case 0x111714u: goto label_111714;
        case 0x111718u: goto label_111718;
        case 0x11171cu: goto label_11171c;
        case 0x111720u: goto label_111720;
        case 0x111724u: goto label_111724;
        case 0x111728u: goto label_111728;
        case 0x11172cu: goto label_11172c;
        case 0x111730u: goto label_111730;
        case 0x111734u: goto label_111734;
        case 0x111738u: goto label_111738;
        case 0x11173cu: goto label_11173c;
        case 0x111740u: goto label_111740;
        case 0x111744u: goto label_111744;
        case 0x111748u: goto label_111748;
        case 0x11174cu: goto label_11174c;
        case 0x111750u: goto label_111750;
        case 0x111754u: goto label_111754;
        case 0x111758u: goto label_111758;
        case 0x11175cu: goto label_11175c;
        case 0x111760u: goto label_111760;
        case 0x111764u: goto label_111764;
        case 0x111768u: goto label_111768;
        case 0x11176cu: goto label_11176c;
        case 0x111770u: goto label_111770;
        case 0x111774u: goto label_111774;
        case 0x111778u: goto label_111778;
        case 0x11177cu: goto label_11177c;
        case 0x111780u: goto label_111780;
        case 0x111784u: goto label_111784;
        case 0x111788u: goto label_111788;
        case 0x11178cu: goto label_11178c;
        case 0x111790u: goto label_111790;
        case 0x111794u: goto label_111794;
        case 0x111798u: goto label_111798;
        case 0x11179cu: goto label_11179c;
        case 0x1117a0u: goto label_1117a0;
        case 0x1117a4u: goto label_1117a4;
        case 0x1117a8u: goto label_1117a8;
        case 0x1117acu: goto label_1117ac;
        case 0x1117b0u: goto label_1117b0;
        case 0x1117b4u: goto label_1117b4;
        case 0x1117b8u: goto label_1117b8;
        case 0x1117bcu: goto label_1117bc;
        case 0x1117c0u: goto label_1117c0;
        case 0x1117c4u: goto label_1117c4;
        case 0x1117c8u: goto label_1117c8;
        case 0x1117ccu: goto label_1117cc;
        case 0x1117d0u: goto label_1117d0;
        case 0x1117d4u: goto label_1117d4;
        case 0x1117d8u: goto label_1117d8;
        case 0x1117dcu: goto label_1117dc;
        case 0x1117e0u: goto label_1117e0;
        case 0x1117e4u: goto label_1117e4;
        case 0x1117e8u: goto label_1117e8;
        case 0x1117ecu: goto label_1117ec;
        case 0x1117f0u: goto label_1117f0;
        case 0x1117f4u: goto label_1117f4;
        case 0x1117f8u: goto label_1117f8;
        case 0x1117fcu: goto label_1117fc;
        case 0x111800u: goto label_111800;
        case 0x111804u: goto label_111804;
        case 0x111808u: goto label_111808;
        case 0x11180cu: goto label_11180c;
        case 0x111810u: goto label_111810;
        case 0x111814u: goto label_111814;
        case 0x111818u: goto label_111818;
        case 0x11181cu: goto label_11181c;
        case 0x111820u: goto label_111820;
        case 0x111824u: goto label_111824;
        case 0x111828u: goto label_111828;
        case 0x11182cu: goto label_11182c;
        case 0x111830u: goto label_111830;
        case 0x111834u: goto label_111834;
        case 0x111838u: goto label_111838;
        case 0x11183cu: goto label_11183c;
        case 0x111840u: goto label_111840;
        case 0x111844u: goto label_111844;
        case 0x111848u: goto label_111848;
        case 0x11184cu: goto label_11184c;
        case 0x111850u: goto label_111850;
        case 0x111854u: goto label_111854;
        case 0x111858u: goto label_111858;
        case 0x11185cu: goto label_11185c;
        case 0x111860u: goto label_111860;
        case 0x111864u: goto label_111864;
        case 0x111868u: goto label_111868;
        case 0x11186cu: goto label_11186c;
        case 0x111870u: goto label_111870;
        case 0x111874u: goto label_111874;
        case 0x111878u: goto label_111878;
        case 0x11187cu: goto label_11187c;
        case 0x111880u: goto label_111880;
        case 0x111884u: goto label_111884;
        case 0x111888u: goto label_111888;
        case 0x11188cu: goto label_11188c;
        case 0x111890u: goto label_111890;
        case 0x111894u: goto label_111894;
        case 0x111898u: goto label_111898;
        case 0x11189cu: goto label_11189c;
        case 0x1118a0u: goto label_1118a0;
        case 0x1118a4u: goto label_1118a4;
        case 0x1118a8u: goto label_1118a8;
        case 0x1118acu: goto label_1118ac;
        case 0x1118b0u: goto label_1118b0;
        case 0x1118b4u: goto label_1118b4;
        case 0x1118b8u: goto label_1118b8;
        case 0x1118bcu: goto label_1118bc;
        case 0x1118c0u: goto label_1118c0;
        case 0x1118c4u: goto label_1118c4;
        case 0x1118c8u: goto label_1118c8;
        case 0x1118ccu: goto label_1118cc;
        case 0x1118d0u: goto label_1118d0;
        case 0x1118d4u: goto label_1118d4;
        case 0x1118d8u: goto label_1118d8;
        case 0x1118dcu: goto label_1118dc;
        case 0x1118e0u: goto label_1118e0;
        case 0x1118e4u: goto label_1118e4;
        case 0x1118e8u: goto label_1118e8;
        case 0x1118ecu: goto label_1118ec;
        case 0x1118f0u: goto label_1118f0;
        case 0x1118f4u: goto label_1118f4;
        case 0x1118f8u: goto label_1118f8;
        case 0x1118fcu: goto label_1118fc;
        case 0x111900u: goto label_111900;
        case 0x111904u: goto label_111904;
        case 0x111908u: goto label_111908;
        case 0x11190cu: goto label_11190c;
        case 0x111910u: goto label_111910;
        case 0x111914u: goto label_111914;
        case 0x111918u: goto label_111918;
        case 0x11191cu: goto label_11191c;
        case 0x111920u: goto label_111920;
        case 0x111924u: goto label_111924;
        case 0x111928u: goto label_111928;
        case 0x11192cu: goto label_11192c;
        case 0x111930u: goto label_111930;
        case 0x111934u: goto label_111934;
        case 0x111938u: goto label_111938;
        case 0x11193cu: goto label_11193c;
        case 0x111940u: goto label_111940;
        case 0x111944u: goto label_111944;
        case 0x111948u: goto label_111948;
        case 0x11194cu: goto label_11194c;
        case 0x111950u: goto label_111950;
        case 0x111954u: goto label_111954;
        case 0x111958u: goto label_111958;
        case 0x11195cu: goto label_11195c;
        case 0x111960u: goto label_111960;
        case 0x111964u: goto label_111964;
        case 0x111968u: goto label_111968;
        case 0x11196cu: goto label_11196c;
        case 0x111970u: goto label_111970;
        case 0x111974u: goto label_111974;
        case 0x111978u: goto label_111978;
        case 0x11197cu: goto label_11197c;
        case 0x111980u: goto label_111980;
        case 0x111984u: goto label_111984;
        case 0x111988u: goto label_111988;
        case 0x11198cu: goto label_11198c;
        case 0x111990u: goto label_111990;
        case 0x111994u: goto label_111994;
        case 0x111998u: goto label_111998;
        case 0x11199cu: goto label_11199c;
        case 0x1119a0u: goto label_1119a0;
        case 0x1119a4u: goto label_1119a4;
        case 0x1119a8u: goto label_1119a8;
        case 0x1119acu: goto label_1119ac;
        case 0x1119b0u: goto label_1119b0;
        case 0x1119b4u: goto label_1119b4;
        case 0x1119b8u: goto label_1119b8;
        case 0x1119bcu: goto label_1119bc;
        case 0x1119c0u: goto label_1119c0;
        case 0x1119c4u: goto label_1119c4;
        case 0x1119c8u: goto label_1119c8;
        case 0x1119ccu: goto label_1119cc;
        case 0x1119d0u: goto label_1119d0;
        case 0x1119d4u: goto label_1119d4;
        case 0x1119d8u: goto label_1119d8;
        case 0x1119dcu: goto label_1119dc;
        case 0x1119e0u: goto label_1119e0;
        case 0x1119e4u: goto label_1119e4;
        case 0x1119e8u: goto label_1119e8;
        case 0x1119ecu: goto label_1119ec;
        case 0x1119f0u: goto label_1119f0;
        case 0x1119f4u: goto label_1119f4;
        case 0x1119f8u: goto label_1119f8;
        case 0x1119fcu: goto label_1119fc;
        case 0x111a00u: goto label_111a00;
        case 0x111a04u: goto label_111a04;
        case 0x111a08u: goto label_111a08;
        case 0x111a0cu: goto label_111a0c;
        case 0x111a10u: goto label_111a10;
        case 0x111a14u: goto label_111a14;
        case 0x111a18u: goto label_111a18;
        case 0x111a1cu: goto label_111a1c;
        case 0x111a20u: goto label_111a20;
        case 0x111a24u: goto label_111a24;
        case 0x111a28u: goto label_111a28;
        case 0x111a2cu: goto label_111a2c;
        case 0x111a30u: goto label_111a30;
        case 0x111a34u: goto label_111a34;
        case 0x111a38u: goto label_111a38;
        case 0x111a3cu: goto label_111a3c;
        case 0x111a40u: goto label_111a40;
        case 0x111a44u: goto label_111a44;
        case 0x111a48u: goto label_111a48;
        case 0x111a4cu: goto label_111a4c;
        case 0x111a50u: goto label_111a50;
        case 0x111a54u: goto label_111a54;
        case 0x111a58u: goto label_111a58;
        case 0x111a5cu: goto label_111a5c;
        case 0x111a60u: goto label_111a60;
        case 0x111a64u: goto label_111a64;
        case 0x111a68u: goto label_111a68;
        case 0x111a6cu: goto label_111a6c;
        case 0x111a70u: goto label_111a70;
        case 0x111a74u: goto label_111a74;
        case 0x111a78u: goto label_111a78;
        case 0x111a7cu: goto label_111a7c;
        case 0x111a80u: goto label_111a80;
        case 0x111a84u: goto label_111a84;
        case 0x111a88u: goto label_111a88;
        case 0x111a8cu: goto label_111a8c;
        case 0x111a90u: goto label_111a90;
        case 0x111a94u: goto label_111a94;
        case 0x111a98u: goto label_111a98;
        case 0x111a9cu: goto label_111a9c;
        case 0x111aa0u: goto label_111aa0;
        case 0x111aa4u: goto label_111aa4;
        case 0x111aa8u: goto label_111aa8;
        case 0x111aacu: goto label_111aac;
        case 0x111ab0u: goto label_111ab0;
        case 0x111ab4u: goto label_111ab4;
        case 0x111ab8u: goto label_111ab8;
        case 0x111abcu: goto label_111abc;
        case 0x111ac0u: goto label_111ac0;
        case 0x111ac4u: goto label_111ac4;
        case 0x111ac8u: goto label_111ac8;
        case 0x111accu: goto label_111acc;
        case 0x111ad0u: goto label_111ad0;
        case 0x111ad4u: goto label_111ad4;
        case 0x111ad8u: goto label_111ad8;
        case 0x111adcu: goto label_111adc;
        case 0x111ae0u: goto label_111ae0;
        case 0x111ae4u: goto label_111ae4;
        case 0x111ae8u: goto label_111ae8;
        case 0x111aecu: goto label_111aec;
        case 0x111af0u: goto label_111af0;
        case 0x111af4u: goto label_111af4;
        case 0x111af8u: goto label_111af8;
        case 0x111afcu: goto label_111afc;
        case 0x111b00u: goto label_111b00;
        case 0x111b04u: goto label_111b04;
        case 0x111b08u: goto label_111b08;
        case 0x111b0cu: goto label_111b0c;
        case 0x111b10u: goto label_111b10;
        case 0x111b14u: goto label_111b14;
        case 0x111b18u: goto label_111b18;
        case 0x111b1cu: goto label_111b1c;
        case 0x111b20u: goto label_111b20;
        case 0x111b24u: goto label_111b24;
        case 0x111b28u: goto label_111b28;
        case 0x111b2cu: goto label_111b2c;
        case 0x111b30u: goto label_111b30;
        case 0x111b34u: goto label_111b34;
        case 0x111b38u: goto label_111b38;
        case 0x111b3cu: goto label_111b3c;
        case 0x111b40u: goto label_111b40;
        case 0x111b44u: goto label_111b44;
        case 0x111b48u: goto label_111b48;
        case 0x111b4cu: goto label_111b4c;
        case 0x111b50u: goto label_111b50;
        case 0x111b54u: goto label_111b54;
        case 0x111b58u: goto label_111b58;
        case 0x111b5cu: goto label_111b5c;
        case 0x111b60u: goto label_111b60;
        case 0x111b64u: goto label_111b64;
        case 0x111b68u: goto label_111b68;
        case 0x111b6cu: goto label_111b6c;
        case 0x111b70u: goto label_111b70;
        case 0x111b74u: goto label_111b74;
        case 0x111b78u: goto label_111b78;
        case 0x111b7cu: goto label_111b7c;
        case 0x111b80u: goto label_111b80;
        case 0x111b84u: goto label_111b84;
        case 0x111b88u: goto label_111b88;
        case 0x111b8cu: goto label_111b8c;
        case 0x111b90u: goto label_111b90;
        case 0x111b94u: goto label_111b94;
        case 0x111b98u: goto label_111b98;
        case 0x111b9cu: goto label_111b9c;
        case 0x111ba0u: goto label_111ba0;
        case 0x111ba4u: goto label_111ba4;
        case 0x111ba8u: goto label_111ba8;
        case 0x111bacu: goto label_111bac;
        case 0x111bb0u: goto label_111bb0;
        case 0x111bb4u: goto label_111bb4;
        case 0x111bb8u: goto label_111bb8;
        case 0x111bbcu: goto label_111bbc;
        case 0x111bc0u: goto label_111bc0;
        case 0x111bc4u: goto label_111bc4;
        case 0x111bc8u: goto label_111bc8;
        case 0x111bccu: goto label_111bcc;
        case 0x111bd0u: goto label_111bd0;
        case 0x111bd4u: goto label_111bd4;
        case 0x111bd8u: goto label_111bd8;
        case 0x111bdcu: goto label_111bdc;
        case 0x111be0u: goto label_111be0;
        case 0x111be4u: goto label_111be4;
        case 0x111be8u: goto label_111be8;
        case 0x111becu: goto label_111bec;
        case 0x111bf0u: goto label_111bf0;
        case 0x111bf4u: goto label_111bf4;
        case 0x111bf8u: goto label_111bf8;
        case 0x111bfcu: goto label_111bfc;
        case 0x111c00u: goto label_111c00;
        case 0x111c04u: goto label_111c04;
        case 0x111c08u: goto label_111c08;
        case 0x111c0cu: goto label_111c0c;
        case 0x111c10u: goto label_111c10;
        case 0x111c14u: goto label_111c14;
        case 0x111c18u: goto label_111c18;
        case 0x111c1cu: goto label_111c1c;
        case 0x111c20u: goto label_111c20;
        case 0x111c24u: goto label_111c24;
        case 0x111c28u: goto label_111c28;
        case 0x111c2cu: goto label_111c2c;
        case 0x111c30u: goto label_111c30;
        case 0x111c34u: goto label_111c34;
        case 0x111c38u: goto label_111c38;
        case 0x111c3cu: goto label_111c3c;
        case 0x111c40u: goto label_111c40;
        case 0x111c44u: goto label_111c44;
        case 0x111c48u: goto label_111c48;
        case 0x111c4cu: goto label_111c4c;
        case 0x111c50u: goto label_111c50;
        case 0x111c54u: goto label_111c54;
        case 0x111c58u: goto label_111c58;
        case 0x111c5cu: goto label_111c5c;
        case 0x111c60u: goto label_111c60;
        case 0x111c64u: goto label_111c64;
        default: break;
    }

    ctx->pc = 0x110f50u;

label_110f50:
    // 0x110f50: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x110f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_110f54:
    // 0x110f54: 0xffbe0100  sd          $fp, 0x100($sp)
    ctx->pc = 0x110f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 30));
label_110f58:
    // 0x110f58: 0x27a2001f  addiu       $v0, $sp, 0x1F
    ctx->pc = 0x110f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 31));
label_110f5c:
    // 0x110f5c: 0xffb600e0  sd          $s6, 0xE0($sp)
    ctx->pc = 0x110f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 22));
label_110f60:
    // 0x110f60: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x110f60u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_110f64:
    // 0x110f64: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x110f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
label_110f68:
    // 0x110f68: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x110f68u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_110f6c:
    // 0x110f6c: 0xffb700f0  sd          $s7, 0xF0($sp)
    ctx->pc = 0x110f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 23));
label_110f70:
    // 0x110f70: 0xffb500d0  sd          $s5, 0xD0($sp)
    ctx->pc = 0x110f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 21));
label_110f74:
    // 0x110f74: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x110f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
label_110f78:
    // 0x110f78: 0xffb300b0  sd          $s3, 0xB0($sp)
    ctx->pc = 0x110f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 19));
label_110f7c:
    // 0x110f7c: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x110f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
label_110f80:
    // 0x110f80: 0xffb10090  sd          $s1, 0x90($sp)
    ctx->pc = 0x110f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 17));
label_110f84:
    // 0x110f84: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x110f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
label_110f88:
    // 0x110f88: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x110f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
label_110f8c:
    // 0x110f8c: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x110f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
label_110f90:
    // 0x110f90: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x110f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
label_110f94:
    // 0x110f94: 0x92c50000  lbu         $a1, 0x0($s6)
    ctx->pc = 0x110f94u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_110f98:
    // 0x110f98: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x110f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_110f9c:
    // 0x110f9c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x110f9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_110fa0:
    // 0x110fa0: 0x1040031c  beqz        $v0, . + 4 + (0x31C << 2)
label_110fa4:
    if (ctx->pc == 0x110FA4u) {
        ctx->pc = 0x110FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110FA0u;
        // 0x110fa4: 0xafa00058  sw          $zero, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110FA8u;
        goto label_110fa8;
    }
    ctx->pc = 0x110FA0u;
    {
        const bool branch_taken_0x110fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110FA0u;
        // 0x110fa4: 0xafa00058  sw          $zero, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110fa0) {
            ctx->pc = 0x111C14u;
            goto label_111c14;
        }
    }
    ctx->pc = 0x110FA8u;
label_110fa8:
    // 0x110fa8: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x110fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_110fac:
    // 0x110fac: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x110facu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
label_110fb0:
    // 0x110fb0: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x110fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_110fb4:
    // 0x110fb4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x110fb4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_110fb8:
    // 0x110fb8: 0x23603  sra         $a2, $v0, 24
    ctx->pc = 0x110fb8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 24));
label_110fbc:
    // 0x110fbc: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x110fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_110fc0:
    // 0x110fc0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x110fc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_110fc4:
    // 0x110fc4: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x110fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_110fc8:
    // 0x110fc8: 0x14c20300  bne         $a2, $v0, . + 4 + (0x300 << 2)
label_110fcc:
    if (ctx->pc == 0x110FCCu) {
        ctx->pc = 0x110FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110FC8u;
        // 0x110fcc: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110FD0u;
        goto label_110fd0;
    }
    ctx->pc = 0x110FC8u;
    {
        const bool branch_taken_0x110fc8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x110FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110FC8u;
        // 0x110fcc: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110fc8) {
            ctx->pc = 0x111BCCu;
            goto label_111bcc;
        }
    }
    ctx->pc = 0x110FD0u;
label_110fd0:
    // 0x110fd0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x110fd0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_110fd4:
    // 0x110fd4: 0x92c50000  lbu         $a1, 0x0($s6)
    ctx->pc = 0x110fd4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_110fd8:
    // 0x110fd8: 0x24a2ffe0  addiu       $v0, $a1, -0x20
    ctx->pc = 0x110fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
label_110fdc:
    // 0x110fdc: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x110fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_110fe0:
    // 0x110fe0: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x110fe0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
label_110fe4:
    // 0x110fe4: 0x2c830059  sltiu       $v1, $a0, 0x59
    ctx->pc = 0x110fe4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)89) ? 1 : 0);
label_110fe8:
    // 0x110fe8: 0x106001cc  beqz        $v1, . + 4 + (0x1CC << 2)
label_110fec:
    if (ctx->pc == 0x110FECu) {
        ctx->pc = 0x110FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110FE8u;
        // 0x110fec: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110FF0u;
        goto label_110ff0;
    }
    ctx->pc = 0x110FE8u;
    {
        const bool branch_taken_0x110fe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x110FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110FE8u;
        // 0x110fec: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110fe8) {
            ctx->pc = 0x11171Cu;
            goto label_11171c;
        }
    }
    ctx->pc = 0x110FF0u;
label_110ff0:
    // 0x110ff0: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x110ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
label_110ff4:
    // 0x110ff4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x110ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_110ff8:
    // 0x110ff8: 0x2442e010  addiu       $v0, $v0, -0x1FF0
    ctx->pc = 0x110ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959120));
label_110ffc:
    // 0x110ffc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x110ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_111000:
    // 0x111000: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x111000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_111004:
    // 0x111004: 0x800008  jr          $a0
label_111008:
    if (ctx->pc == 0x111008u) {
        ctx->pc = 0x11100Cu;
        goto label_11100c;
    }
    ctx->pc = 0x111004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11100Cu: goto label_11100c;
            case 0x111014u: goto label_111014;
            case 0x11101Cu: goto label_11101c;
            case 0x111024u: goto label_111024;
            case 0x11106Cu: goto label_11106c;
            case 0x1110F4u: goto label_1110f4;
            case 0x1110FCu: goto label_1110fc;
            case 0x111104u: goto label_111104;
            case 0x11110Cu: goto label_11110c;
            case 0x111114u: goto label_111114;
            case 0x1111C8u: goto label_1111c8;
            case 0x1111F4u: goto label_1111f4;
            case 0x1112B4u: goto label_1112b4;
            case 0x1113CCu: goto label_1113cc;
            case 0x111490u: goto label_111490;
            case 0x1114F4u: goto label_1114f4;
            case 0x111638u: goto label_111638;
            case 0x111670u: goto label_111670;
            case 0x11171Cu: goto label_11171c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111004u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x11100Cu;
label_11100c:
    // 0x11100c: 0x1000fff0  b           . + 4 + (-0x10 << 2)
label_111010:
    if (ctx->pc == 0x111010u) {
        ctx->pc = 0x111010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11100Cu;
        // 0x111010: 0x36b50001  ori         $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x111014u;
        goto label_111014;
    }
    ctx->pc = 0x11100Cu;
    {
        const bool branch_taken_0x11100c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11100Cu;
        // 0x111010: 0x36b50001  ori         $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11100c) {
            ctx->pc = 0x110FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110fd0;
        }
    }
    ctx->pc = 0x111014u;
label_111014:
    // 0x111014: 0x1000ffee  b           . + 4 + (-0x12 << 2)
label_111018:
    if (ctx->pc == 0x111018u) {
        ctx->pc = 0x111018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111014u;
        // 0x111018: 0x36b50002  ori         $s5, $s5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11101Cu;
        goto label_11101c;
    }
    ctx->pc = 0x111014u;
    {
        const bool branch_taken_0x111014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111014u;
        // 0x111018: 0x36b50002  ori         $s5, $s5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111014) {
            ctx->pc = 0x110FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110fd0;
        }
    }
    ctx->pc = 0x11101Cu;
label_11101c:
    // 0x11101c: 0x1000ffec  b           . + 4 + (-0x14 << 2)
label_111020:
    if (ctx->pc == 0x111020u) {
        ctx->pc = 0x111020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11101Cu;
        // 0x111020: 0x36b50004  ori         $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x111024u;
        goto label_111024;
    }
    ctx->pc = 0x11101Cu;
    {
        const bool branch_taken_0x11101c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11101Cu;
        // 0x111020: 0x36b50004  ori         $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11101c) {
            ctx->pc = 0x110FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110fd0;
        }
    }
    ctx->pc = 0x111024u;
label_111024:
    // 0x111024: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x111024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_111028:
    // 0x111028: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x111028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_11102c:
    // 0x11102c: 0x0  nop
    ctx->pc = 0x11102cu;
    // NOP
label_111030:
    // 0x111030: 0x2062018  mult        $a0, $s0, $a2
    ctx->pc = 0x111030u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_111034:
    // 0x111034: 0x51e00  sll         $v1, $a1, 24
    ctx->pc = 0x111034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_111038:
    // 0x111038: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x111038u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_11103c:
    // 0x11103c: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x11103cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
label_111040:
    // 0x111040: 0x92c50000  lbu         $a1, 0x0($s6)
    ctx->pc = 0x111040u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_111044:
    // 0x111044: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x111044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
label_111048:
    // 0x111048: 0x24a2ffd0  addiu       $v0, $a1, -0x30
    ctx->pc = 0x111048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
label_11104c:
    // 0x11104c: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x11104cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_111050:
    // 0x111050: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_111054:
    if (ctx->pc == 0x111054u) {
        ctx->pc = 0x111054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111050u;
        // 0x111054: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111058u;
        goto label_111058;
    }
    ctx->pc = 0x111050u;
    {
        const bool branch_taken_0x111050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111050u;
        // 0x111054: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111050) {
            ctx->pc = 0x111030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111030;
        }
    }
    ctx->pc = 0x111058u;
label_111058:
    // 0x111058: 0xafb00050  sw          $s0, 0x50($sp)
    ctx->pc = 0x111058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 16));
label_11105c:
    // 0x11105c: 0x10a002e7  beqz        $a1, . + 4 + (0x2E7 << 2)
label_111060:
    if (ctx->pc == 0x111060u) {
        ctx->pc = 0x111060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11105Cu;
        // 0x111060: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111064u;
        goto label_111064;
    }
    ctx->pc = 0x11105Cu;
    {
        const bool branch_taken_0x11105c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x111060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11105Cu;
        // 0x111060: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11105c) {
            ctx->pc = 0x111BFCu;
            goto label_111bfc;
        }
    }
    ctx->pc = 0x111064u;
label_111064:
    // 0x111064: 0x1000ffda  b           . + 4 + (-0x26 << 2)
label_111068:
    if (ctx->pc == 0x111068u) {
        ctx->pc = 0x111068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111064u;
        // 0x111068: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11106Cu;
        goto label_11106c;
    }
    ctx->pc = 0x111064u;
    {
        const bool branch_taken_0x111064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111064u;
        // 0x111068: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111064) {
            ctx->pc = 0x110FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110fd0;
        }
    }
    ctx->pc = 0x11106Cu;
label_11106c:
    // 0x11106c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x11106cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_111070:
    // 0x111070: 0x36b50020  ori         $s5, $s5, 0x20
    ctx->pc = 0x111070u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)32);
label_111074:
    // 0x111074: 0x82c30000  lb          $v1, 0x0($s6)
    ctx->pc = 0x111074u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_111078:
    // 0x111078: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x111078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_11107c:
    // 0x11107c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_111080:
    if (ctx->pc == 0x111080u) {
        ctx->pc = 0x111080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11107Cu;
        // 0x111080: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111084u;
        goto label_111084;
    }
    ctx->pc = 0x11107Cu;
    {
        const bool branch_taken_0x11107c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x111080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11107Cu;
        // 0x111080: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11107c) {
            ctx->pc = 0x1110A0u;
            goto label_1110a0;
        }
    }
    ctx->pc = 0x111084u;
label_111084:
    // 0x111084: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x111084u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_111088:
    // 0x111088: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x111088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_11108c:
    // 0x11108c: 0x8fd0fff8  lw          $s0, -0x8($fp)
    ctx->pc = 0x11108cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_111090:
    // 0x111090: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x111090u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_111094:
    // 0x111094: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x111094u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_111098:
    // 0x111098: 0x1000ffcd  b           . + 4 + (-0x33 << 2)
label_11109c:
    if (ctx->pc == 0x11109Cu) {
        ctx->pc = 0x11109Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111098u;
        // 0x11109c: 0x202400b  movn        $t0, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1110A0u;
        goto label_1110a0;
    }
    ctx->pc = 0x111098u;
    {
        const bool branch_taken_0x111098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11109Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111098u;
        // 0x11109c: 0x202400b  movn        $t0, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111098) {
            ctx->pc = 0x110FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110fd0;
        }
    }
    ctx->pc = 0x1110A0u;
label_1110a0:
    // 0x1110a0: 0x24a2ffd0  addiu       $v0, $a1, -0x30
    ctx->pc = 0x1110a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
label_1110a4:
    // 0x1110a4: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x1110a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_1110a8:
    // 0x1110a8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1110ac:
    if (ctx->pc == 0x1110ACu) {
        ctx->pc = 0x1110ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1110A8u;
        // 0x1110ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1110B0u;
        goto label_1110b0;
    }
    ctx->pc = 0x1110A8u;
    {
        const bool branch_taken_0x1110a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1110ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1110A8u;
        // 0x1110ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1110a8) {
            ctx->pc = 0x1110E0u;
            goto label_1110e0;
        }
    }
    ctx->pc = 0x1110B0u;
label_1110b0:
    // 0x1110b0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1110b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1110b4:
    // 0x1110b4: 0x0  nop
    ctx->pc = 0x1110b4u;
    // NOP
label_1110b8:
    // 0x1110b8: 0x2062018  mult        $a0, $s0, $a2
    ctx->pc = 0x1110b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1110bc:
    // 0x1110bc: 0x51e00  sll         $v1, $a1, 24
    ctx->pc = 0x1110bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_1110c0:
    // 0x1110c0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1110c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1110c4:
    // 0x1110c4: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x1110c4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
label_1110c8:
    // 0x1110c8: 0x92c50000  lbu         $a1, 0x0($s6)
    ctx->pc = 0x1110c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_1110cc:
    // 0x1110cc: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x1110ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
label_1110d0:
    // 0x1110d0: 0x24a2ffd0  addiu       $v0, $a1, -0x30
    ctx->pc = 0x1110d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
label_1110d4:
    // 0x1110d4: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x1110d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_1110d8:
    // 0x1110d8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1110dc:
    if (ctx->pc == 0x1110DCu) {
        ctx->pc = 0x1110DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1110D8u;
        // 0x1110dc: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1110E0u;
        goto label_1110e0;
    }
    ctx->pc = 0x1110D8u;
    {
        const bool branch_taken_0x1110d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1110DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1110D8u;
        // 0x1110dc: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1110d8) {
            ctx->pc = 0x1110B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1110b8;
        }
    }
    ctx->pc = 0x1110E0u;
label_1110e0:
    // 0x1110e0: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1110e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1110e4:
    // 0x1110e4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1110e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1110e8:
    // 0x1110e8: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1110e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1110ec:
    // 0x1110ec: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
label_1110f0:
    if (ctx->pc == 0x1110F0u) {
        ctx->pc = 0x1110F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1110ECu;
        // 0x1110f0: 0x202400b  movn        $t0, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1110F4u;
        goto label_1110f4;
    }
    ctx->pc = 0x1110ECu;
    {
        const bool branch_taken_0x1110ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1110F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1110ECu;
        // 0x1110f0: 0x202400b  movn        $t0, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1110ec) {
            ctx->pc = 0x11105Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11105c;
        }
    }
    ctx->pc = 0x1110F4u;
label_1110f4:
    // 0x1110f4: 0x1000ffb6  b           . + 4 + (-0x4A << 2)
label_1110f8:
    if (ctx->pc == 0x1110F8u) {
        ctx->pc = 0x1110F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1110F4u;
        // 0x1110f8: 0x36b50008  ori         $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1110FCu;
        goto label_1110fc;
    }
    ctx->pc = 0x1110F4u;
    {
        const bool branch_taken_0x1110f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1110F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1110F4u;
        // 0x1110f8: 0x36b50008  ori         $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1110f4) {
            ctx->pc = 0x110FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110fd0;
        }
    }
    ctx->pc = 0x1110FCu;
label_1110fc:
    // 0x1110fc: 0x1000ffb4  b           . + 4 + (-0x4C << 2)
label_111100:
    if (ctx->pc == 0x111100u) {
        ctx->pc = 0x111100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1110FCu;
        // 0x111100: 0x36b50010  ori         $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x111104u;
        goto label_111104;
    }
    ctx->pc = 0x1110FCu;
    {
        const bool branch_taken_0x1110fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1110FCu;
        // 0x111100: 0x36b50010  ori         $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1110fc) {
            ctx->pc = 0x110FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110fd0;
        }
    }
    ctx->pc = 0x111104u;
label_111104:
    // 0x111104: 0x1000ffb2  b           . + 4 + (-0x4E << 2)
label_111108:
    if (ctx->pc == 0x111108u) {
        ctx->pc = 0x111108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111104u;
        // 0x111108: 0x36b50040  ori         $s5, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11110Cu;
        goto label_11110c;
    }
    ctx->pc = 0x111104u;
    {
        const bool branch_taken_0x111104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111104u;
        // 0x111108: 0x36b50040  ori         $s5, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111104) {
            ctx->pc = 0x110FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110fd0;
        }
    }
    ctx->pc = 0x11110Cu;
label_11110c:
    // 0x11110c: 0x1000ffb0  b           . + 4 + (-0x50 << 2)
label_111110:
    if (ctx->pc == 0x111110u) {
        ctx->pc = 0x111110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11110Cu;
        // 0x111110: 0x36b50080  ori         $s5, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x111114u;
        goto label_111114;
    }
    ctx->pc = 0x11110Cu;
    {
        const bool branch_taken_0x11110c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11110Cu;
        // 0x111110: 0x36b50080  ori         $s5, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11110c) {
            ctx->pc = 0x110FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110fd0;
        }
    }
    ctx->pc = 0x111114u;
label_111114:
    // 0x111114: 0x32a20040  andi        $v0, $s5, 0x40
    ctx->pc = 0x111114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
label_111118:
    // 0x111118: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_11111c:
    if (ctx->pc == 0x11111Cu) {
        ctx->pc = 0x11111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111118u;
        // 0x11111c: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x111120u;
        goto label_111120;
    }
    ctx->pc = 0x111118u;
    {
        const bool branch_taken_0x111118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111118u;
        // 0x11111c: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111118) {
            ctx->pc = 0x11112Cu;
            goto label_11112c;
        }
    }
    ctx->pc = 0x111120u;
label_111120:
    // 0x111120: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x111120u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_111124:
    // 0x111124: 0x10000006  b           . + 4 + (0x6 << 2)
label_111128:
    if (ctx->pc == 0x111128u) {
        ctx->pc = 0x111128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111124u;
        // 0x111128: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11112Cu;
        goto label_11112c;
    }
    ctx->pc = 0x111124u;
    {
        const bool branch_taken_0x111124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111124u;
        // 0x111128: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111124) {
            ctx->pc = 0x111140u;
            goto label_111140;
        }
    }
    ctx->pc = 0x11112Cu;
label_11112c:
    // 0x11112c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_111130:
    if (ctx->pc == 0x111130u) {
        ctx->pc = 0x111130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11112Cu;
        // 0x111130: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111134u;
        goto label_111134;
    }
    ctx->pc = 0x11112Cu;
    {
        const bool branch_taken_0x11112c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11112Cu;
        // 0x111130: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11112c) {
            ctx->pc = 0x11113Cu;
            goto label_11113c;
        }
    }
    ctx->pc = 0x111134u;
label_111134:
    // 0x111134: 0x10000002  b           . + 4 + (0x2 << 2)
label_111138:
    if (ctx->pc == 0x111138u) {
        ctx->pc = 0x111138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111134u;
        // 0x111138: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11113Cu;
        goto label_11113c;
    }
    ctx->pc = 0x111134u;
    {
        const bool branch_taken_0x111134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111134u;
        // 0x111138: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111134) {
            ctx->pc = 0x111140u;
            goto label_111140;
        }
    }
    ctx->pc = 0x11113Cu;
label_11113c:
    // 0x11113c: 0x9fd0fff8  lwu         $s0, -0x8($fp)
    ctx->pc = 0x11113cu;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_111140:
    // 0x111140: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
label_111144:
    if (ctx->pc == 0x111144u) {
        ctx->pc = 0x111144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111140u;
        // 0x111144: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111148u;
        goto label_111148;
    }
    ctx->pc = 0x111140u;
    {
        const bool branch_taken_0x111140 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x111144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111140u;
        // 0x111144: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111140) {
            ctx->pc = 0x111170u;
            goto label_111170;
        }
    }
    ctx->pc = 0x111148u;
label_111148:
    // 0x111148: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x111148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_11114c:
    // 0x11114c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_111150:
    if (ctx->pc == 0x111150u) {
        ctx->pc = 0x111150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11114Cu;
        // 0x111150: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111154u;
        goto label_111154;
    }
    ctx->pc = 0x11114Cu;
    {
        const bool branch_taken_0x11114c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11114Cu;
        // 0x111150: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11114c) {
            ctx->pc = 0x11115Cu;
            goto label_11115c;
        }
    }
    ctx->pc = 0x111154u;
label_111154:
    // 0x111154: 0x11000017  beqz        $t0, . + 4 + (0x17 << 2)
label_111158:
    if (ctx->pc == 0x111158u) {
        ctx->pc = 0x111158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111154u;
        // 0x111158: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11115Cu;
        goto label_11115c;
    }
    ctx->pc = 0x111154u;
    {
        const bool branch_taken_0x111154 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x111158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111154u;
        // 0x111158: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111154) {
            ctx->pc = 0x1111B4u;
            goto label_1111b4;
        }
    }
    ctx->pc = 0x11115Cu;
label_11115c:
    // 0x11115c: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x11115cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_111160:
    // 0x111160: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x111160u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_111164:
    // 0x111164: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x111164u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_111168:
    // 0x111168: 0x10000013  b           . + 4 + (0x13 << 2)
label_11116c:
    if (ctx->pc == 0x11116Cu) {
        ctx->pc = 0x11116Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111168u;
        // 0x11116c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111170u;
        goto label_111170;
    }
    ctx->pc = 0x111168u;
    {
        const bool branch_taken_0x111168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11116Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111168u;
        // 0x11116c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111168) {
            ctx->pc = 0x1111B8u;
            goto label_1111b8;
        }
    }
    ctx->pc = 0x111170u;
label_111170:
    // 0x111170: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x111170u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_111174:
    // 0x111174: 0x32a30010  andi        $v1, $s5, 0x10
    ctx->pc = 0x111174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
label_111178:
    // 0x111178: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x111178u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_11117c:
    // 0x11117c: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x11117cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_111180:
    // 0x111180: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x111180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
label_111184:
    // 0x111184: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x111184u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
label_111188:
    // 0x111188: 0x1080fa  dsrl        $s0, $s0, 3
    ctx->pc = 0x111188u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 3);
label_11118c:
    // 0x11118c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11118cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_111190:
    // 0x111190: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x111190u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_111194:
    // 0x111194: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x111194u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_111198:
    // 0x111198: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
label_11119c:
    if (ctx->pc == 0x11119Cu) {
        ctx->pc = 0x1111A0u;
        goto label_1111a0;
    }
    ctx->pc = 0x111198u;
    {
        const bool branch_taken_0x111198 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x111198) {
            ctx->pc = 0x111180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111180;
        }
    }
    ctx->pc = 0x1111A0u;
label_1111a0:
    // 0x1111a0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1111a4:
    if (ctx->pc == 0x1111A4u) {
        ctx->pc = 0x1111A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1111A0u;
        // 0x1111a4: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1111A8u;
        goto label_1111a8;
    }
    ctx->pc = 0x1111A0u;
    {
        const bool branch_taken_0x1111a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1111A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1111A0u;
        // 0x1111a4: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1111a0) {
            ctx->pc = 0x1111BCu;
            goto label_1111bc;
        }
    }
    ctx->pc = 0x1111A8u;
label_1111a8:
    // 0x1111a8: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x1111a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_1111ac:
    // 0x1111ac: 0x10000003  b           . + 4 + (0x3 << 2)
label_1111b0:
    if (ctx->pc == 0x1111B0u) {
        ctx->pc = 0x1111B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1111ACu;
        // 0x1111b0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1111B4u;
        goto label_1111b4;
    }
    ctx->pc = 0x1111ACu;
    {
        const bool branch_taken_0x1111ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1111B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1111ACu;
        // 0x1111b0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1111ac) {
            ctx->pc = 0x1111BCu;
            goto label_1111bc;
        }
    }
    ctx->pc = 0x1111B4u;
label_1111b4:
    // 0x1111b4: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x1111b4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_1111b8:
    // 0x1111b8: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x1111b8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_1111bc:
    // 0x1111bc: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x1111bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1111c0:
    // 0x1111c0: 0x10000162  b           . + 4 + (0x162 << 2)
label_1111c4:
    if (ctx->pc == 0x1111C4u) {
        ctx->pc = 0x1111C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1111C0u;
        // 0x1111c4: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1111C8u;
        goto label_1111c8;
    }
    ctx->pc = 0x1111C0u;
    {
        const bool branch_taken_0x1111c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1111C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1111C0u;
        // 0x1111c4: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1111c0) {
            ctx->pc = 0x11174Cu;
            goto label_11174c;
        }
    }
    ctx->pc = 0x1111C8u;
label_1111c8:
    // 0x1111c8: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x1111c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
label_1111cc:
    // 0x1111cc: 0x32a30010  andi        $v1, $s5, 0x10
    ctx->pc = 0x1111ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
label_1111d0:
    // 0x1111d0: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_1111d4:
    if (ctx->pc == 0x1111D4u) {
        ctx->pc = 0x1111D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1111D0u;
        // 0x1111d4: 0x2444dfe0  addiu       $a0, $v0, -0x2020 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1111D8u;
        goto label_1111d8;
    }
    ctx->pc = 0x1111D0u;
    {
        const bool branch_taken_0x1111d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1111D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1111D0u;
        // 0x1111d4: 0x2444dfe0  addiu       $a0, $v0, -0x2020 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1111d0) {
            ctx->pc = 0x11121Cu;
            goto label_11121c;
        }
    }
    ctx->pc = 0x1111D8u;
label_1111d8:
    // 0x1111d8: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1111d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1111dc:
    // 0x1111dc: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x1111dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1111e0:
    // 0x1111e0: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x1111e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
label_1111e4:
    // 0x1111e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1111e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1111e8:
    // 0x1111e8: 0xa3a30021  sb          $v1, 0x21($sp)
    ctx->pc = 0x1111e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 3));
label_1111ec:
    // 0x1111ec: 0x1000000b  b           . + 4 + (0xB << 2)
label_1111f0:
    if (ctx->pc == 0x1111F0u) {
        ctx->pc = 0x1111F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1111ECu;
        // 0x1111f0: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1111F4u;
        goto label_1111f4;
    }
    ctx->pc = 0x1111ECu;
    {
        const bool branch_taken_0x1111ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1111F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1111ECu;
        // 0x1111f0: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1111ec) {
            ctx->pc = 0x11121Cu;
            goto label_11121c;
        }
    }
    ctx->pc = 0x1111F4u;
label_1111f4:
    // 0x1111f4: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x1111f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
label_1111f8:
    // 0x1111f8: 0x32a30010  andi        $v1, $s5, 0x10
    ctx->pc = 0x1111f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
label_1111fc:
    // 0x1111fc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_111200:
    if (ctx->pc == 0x111200u) {
        ctx->pc = 0x111200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1111FCu;
        // 0x111200: 0x2444dff8  addiu       $a0, $v0, -0x2008 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111204u;
        goto label_111204;
    }
    ctx->pc = 0x1111FCu;
    {
        const bool branch_taken_0x1111fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x111200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1111FCu;
        // 0x111200: 0x2444dff8  addiu       $a0, $v0, -0x2008 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1111fc) {
            ctx->pc = 0x11121Cu;
            goto label_11121c;
        }
    }
    ctx->pc = 0x111204u;
label_111204:
    // 0x111204: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x111204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_111208:
    // 0x111208: 0x24030058  addiu       $v1, $zero, 0x58
    ctx->pc = 0x111208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_11120c:
    // 0x11120c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x11120cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_111210:
    // 0x111210: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x111210u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
label_111214:
    // 0x111214: 0xafa50054  sw          $a1, 0x54($sp)
    ctx->pc = 0x111214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 5));
label_111218:
    // 0x111218: 0xa3a30021  sb          $v1, 0x21($sp)
    ctx->pc = 0x111218u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 3));
label_11121c:
    // 0x11121c: 0x32a20040  andi        $v0, $s5, 0x40
    ctx->pc = 0x11121cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
label_111220:
    // 0x111220: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_111224:
    if (ctx->pc == 0x111224u) {
        ctx->pc = 0x111224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111220u;
        // 0x111224: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x111228u;
        goto label_111228;
    }
    ctx->pc = 0x111220u;
    {
        const bool branch_taken_0x111220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111220u;
        // 0x111224: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111220) {
            ctx->pc = 0x111234u;
            goto label_111234;
        }
    }
    ctx->pc = 0x111228u;
label_111228:
    // 0x111228: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x111228u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_11122c:
    // 0x11122c: 0x10000006  b           . + 4 + (0x6 << 2)
label_111230:
    if (ctx->pc == 0x111230u) {
        ctx->pc = 0x111230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11122Cu;
        // 0x111230: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111234u;
        goto label_111234;
    }
    ctx->pc = 0x11122Cu;
    {
        const bool branch_taken_0x11122c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11122Cu;
        // 0x111230: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11122c) {
            ctx->pc = 0x111248u;
            goto label_111248;
        }
    }
    ctx->pc = 0x111234u;
label_111234:
    // 0x111234: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_111238:
    if (ctx->pc == 0x111238u) {
        ctx->pc = 0x111238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111234u;
        // 0x111238: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11123Cu;
        goto label_11123c;
    }
    ctx->pc = 0x111234u;
    {
        const bool branch_taken_0x111234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111234u;
        // 0x111238: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111234) {
            ctx->pc = 0x111244u;
            goto label_111244;
        }
    }
    ctx->pc = 0x11123Cu;
label_11123c:
    // 0x11123c: 0x10000002  b           . + 4 + (0x2 << 2)
label_111240:
    if (ctx->pc == 0x111240u) {
        ctx->pc = 0x111240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11123Cu;
        // 0x111240: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111244u;
        goto label_111244;
    }
    ctx->pc = 0x11123Cu;
    {
        const bool branch_taken_0x11123c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11123Cu;
        // 0x111240: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11123c) {
            ctx->pc = 0x111248u;
            goto label_111248;
        }
    }
    ctx->pc = 0x111244u;
label_111244:
    // 0x111244: 0x9fd0fff8  lwu         $s0, -0x8($fp)
    ctx->pc = 0x111244u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_111248:
    // 0x111248: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
label_11124c:
    if (ctx->pc == 0x11124Cu) {
        ctx->pc = 0x11124Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111248u;
        // 0x11124c: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111250u;
        goto label_111250;
    }
    ctx->pc = 0x111248u;
    {
        const bool branch_taken_0x111248 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11124Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111248u;
        // 0x11124c: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111248) {
            ctx->pc = 0x11127Cu;
            goto label_11127c;
        }
    }
    ctx->pc = 0x111250u;
label_111250:
    // 0x111250: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x111250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_111254:
    // 0x111254: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_111258:
    if (ctx->pc == 0x111258u) {
        ctx->pc = 0x111258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111254u;
        // 0x111258: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11125Cu;
        goto label_11125c;
    }
    ctx->pc = 0x111254u;
    {
        const bool branch_taken_0x111254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111254u;
        // 0x111258: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111254) {
            ctx->pc = 0x111264u;
            goto label_111264;
        }
    }
    ctx->pc = 0x11125Cu;
label_11125c:
    // 0x11125c: 0x11000086  beqz        $t0, . + 4 + (0x86 << 2)
label_111260:
    if (ctx->pc == 0x111260u) {
        ctx->pc = 0x111260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11125Cu;
        // 0x111260: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111264u;
        goto label_111264;
    }
    ctx->pc = 0x11125Cu;
    {
        const bool branch_taken_0x11125c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x111260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11125Cu;
        // 0x111260: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11125c) {
            ctx->pc = 0x111478u;
            goto label_111478;
        }
    }
    ctx->pc = 0x111264u;
label_111264:
    // 0x111264: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x111264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_111268:
    // 0x111268: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x111268u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_11126c:
    // 0x11126c: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x11126cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_111270:
    // 0x111270: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x111270u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_111274:
    // 0x111274: 0x10000081  b           . + 4 + (0x81 << 2)
label_111278:
    if (ctx->pc == 0x111278u) {
        ctx->pc = 0x111278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111274u;
        // 0x111278: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11127Cu;
        goto label_11127c;
    }
    ctx->pc = 0x111274u;
    {
        const bool branch_taken_0x111274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111274u;
        // 0x111278: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111274) {
            ctx->pc = 0x11147Cu;
            goto label_11147c;
        }
    }
    ctx->pc = 0x11127Cu;
label_11127c:
    // 0x11127c: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x11127cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_111280:
    // 0x111280: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x111280u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_111284:
    // 0x111284: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x111284u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_111288:
    // 0x111288: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x111288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
label_11128c:
    // 0x11128c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11128cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_111290:
    // 0x111290: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x111290u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_111294:
    // 0x111294: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x111294u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
label_111298:
    // 0x111298: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x111298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_11129c:
    // 0x11129c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x11129cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1112a0:
    // 0x1112a0: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x1112a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_1112a4:
    // 0x1112a4: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
label_1112a8:
    if (ctx->pc == 0x1112A8u) {
        ctx->pc = 0x1112A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112A4u;
        // 0x1112a8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1112ACu;
        goto label_1112ac;
    }
    ctx->pc = 0x1112A4u;
    {
        const bool branch_taken_0x1112a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1112A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112A4u;
        // 0x1112a8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1112a4) {
            ctx->pc = 0x111288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111288;
        }
    }
    ctx->pc = 0x1112ACu;
label_1112ac:
    // 0x1112ac: 0x10000075  b           . + 4 + (0x75 << 2)
label_1112b0:
    if (ctx->pc == 0x1112B0u) {
        ctx->pc = 0x1112B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112ACu;
        // 0x1112b0: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1112B4u;
        goto label_1112b4;
    }
    ctx->pc = 0x1112ACu;
    {
        const bool branch_taken_0x1112ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1112B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112ACu;
        // 0x1112b0: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1112ac) {
            ctx->pc = 0x111484u;
            goto label_111484;
        }
    }
    ctx->pc = 0x1112B4u;
label_1112b4:
    // 0x1112b4: 0x32a20040  andi        $v0, $s5, 0x40
    ctx->pc = 0x1112b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
label_1112b8:
    // 0x1112b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1112bc:
    if (ctx->pc == 0x1112BCu) {
        ctx->pc = 0x1112BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112B8u;
        // 0x1112bc: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1112C0u;
        goto label_1112c0;
    }
    ctx->pc = 0x1112B8u;
    {
        const bool branch_taken_0x1112b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1112BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112B8u;
        // 0x1112bc: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1112b8) {
            ctx->pc = 0x1112CCu;
            goto label_1112cc;
        }
    }
    ctx->pc = 0x1112C0u;
label_1112c0:
    // 0x1112c0: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x1112c0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_1112c4:
    // 0x1112c4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1112c8:
    if (ctx->pc == 0x1112C8u) {
        ctx->pc = 0x1112C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112C4u;
        // 0x1112c8: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1112CCu;
        goto label_1112cc;
    }
    ctx->pc = 0x1112C4u;
    {
        const bool branch_taken_0x1112c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1112C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112C4u;
        // 0x1112c8: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1112c4) {
            ctx->pc = 0x1112E0u;
            goto label_1112e0;
        }
    }
    ctx->pc = 0x1112CCu;
label_1112cc:
    // 0x1112cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1112d0:
    if (ctx->pc == 0x1112D0u) {
        ctx->pc = 0x1112D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112CCu;
        // 0x1112d0: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1112D4u;
        goto label_1112d4;
    }
    ctx->pc = 0x1112CCu;
    {
        const bool branch_taken_0x1112cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1112D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112CCu;
        // 0x1112d0: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1112cc) {
            ctx->pc = 0x1112DCu;
            goto label_1112dc;
        }
    }
    ctx->pc = 0x1112D4u;
label_1112d4:
    // 0x1112d4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1112d8:
    if (ctx->pc == 0x1112D8u) {
        ctx->pc = 0x1112D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112D4u;
        // 0x1112d8: 0x87d0fff8  lh          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1112DCu;
        goto label_1112dc;
    }
    ctx->pc = 0x1112D4u;
    {
        const bool branch_taken_0x1112d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1112D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112D4u;
        // 0x1112d8: 0x87d0fff8  lh          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1112d4) {
            ctx->pc = 0x1112E0u;
            goto label_1112e0;
        }
    }
    ctx->pc = 0x1112DCu;
label_1112dc:
    // 0x1112dc: 0x8fd0fff8  lw          $s0, -0x8($fp)
    ctx->pc = 0x1112dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_1112e0:
    // 0x1112e0: 0x600000d  bltz        $s0, . + 4 + (0xD << 2)
label_1112e4:
    if (ctx->pc == 0x1112E4u) {
        ctx->pc = 0x1112E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112E0u;
        // 0x1112e4: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1112E8u;
        goto label_1112e8;
    }
    ctx->pc = 0x1112E0u;
    {
        const bool branch_taken_0x1112e0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1112E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112E0u;
        // 0x1112e4: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1112e0) {
            ctx->pc = 0x111318u;
            goto label_111318;
        }
    }
    ctx->pc = 0x1112E8u;
label_1112e8:
    // 0x1112e8: 0x32a20002  andi        $v0, $s5, 0x2
    ctx->pc = 0x1112e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
label_1112ec:
    // 0x1112ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1112f0:
    if (ctx->pc == 0x1112F0u) {
        ctx->pc = 0x1112F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112ECu;
        // 0x1112f0: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1112F4u;
        goto label_1112f4;
    }
    ctx->pc = 0x1112ECu;
    {
        const bool branch_taken_0x1112ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1112F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112ECu;
        // 0x1112f0: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1112ec) {
            ctx->pc = 0x111300u;
            goto label_111300;
        }
    }
    ctx->pc = 0x1112F4u;
label_1112f4:
    // 0x1112f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1112f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1112f8:
    // 0x1112f8: 0x1000000a  b           . + 4 + (0xA << 2)
label_1112fc:
    if (ctx->pc == 0x1112FCu) {
        ctx->pc = 0x1112FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112F8u;
        // 0x1112fc: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111300u;
        goto label_111300;
    }
    ctx->pc = 0x1112F8u;
    {
        const bool branch_taken_0x1112f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1112FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112F8u;
        // 0x1112fc: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1112f8) {
            ctx->pc = 0x111324u;
            goto label_111324;
        }
    }
    ctx->pc = 0x111300u;
label_111300:
    // 0x111300: 0x32a20008  andi        $v0, $s5, 0x8
    ctx->pc = 0x111300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)8);
label_111304:
    // 0x111304: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_111308:
    if (ctx->pc == 0x111308u) {
        ctx->pc = 0x111308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111304u;
        // 0x111308: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11130Cu;
        goto label_11130c;
    }
    ctx->pc = 0x111304u;
    {
        const bool branch_taken_0x111304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111304u;
        // 0x111308: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111304) {
            ctx->pc = 0x111328u;
            goto label_111328;
        }
    }
    ctx->pc = 0x11130Cu;
label_11130c:
    // 0x11130c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11130cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_111310:
    // 0x111310: 0x10000004  b           . + 4 + (0x4 << 2)
label_111314:
    if (ctx->pc == 0x111314u) {
        ctx->pc = 0x111314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111310u;
        // 0x111314: 0xafa40054  sw          $a0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111318u;
        goto label_111318;
    }
    ctx->pc = 0x111310u;
    {
        const bool branch_taken_0x111310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111310u;
        // 0x111314: 0xafa40054  sw          $a0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111310) {
            ctx->pc = 0x111324u;
            goto label_111324;
        }
    }
    ctx->pc = 0x111318u;
label_111318:
    // 0x111318: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x111318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_11131c:
    // 0x11131c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11131cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_111320:
    // 0x111320: 0xafa50054  sw          $a1, 0x54($sp)
    ctx->pc = 0x111320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 5));
label_111324:
    // 0x111324: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x111324u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
label_111328:
    // 0x111328: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
label_11132c:
    if (ctx->pc == 0x11132Cu) {
        ctx->pc = 0x11132Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111328u;
        // 0x11132c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111330u;
        goto label_111330;
    }
    ctx->pc = 0x111328u;
    {
        const bool branch_taken_0x111328 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11132Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111328u;
        // 0x11132c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111328) {
            ctx->pc = 0x11135Cu;
            goto label_11135c;
        }
    }
    ctx->pc = 0x111330u;
label_111330:
    // 0x111330: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x111330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_111334:
    // 0x111334: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_111338:
    if (ctx->pc == 0x111338u) {
        ctx->pc = 0x111338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111334u;
        // 0x111338: 0x8fa3004c  lw          $v1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11133Cu;
        goto label_11133c;
    }
    ctx->pc = 0x111334u;
    {
        const bool branch_taken_0x111334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111334u;
        // 0x111338: 0x8fa3004c  lw          $v1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111334) {
            ctx->pc = 0x111344u;
            goto label_111344;
        }
    }
    ctx->pc = 0x11133Cu;
label_11133c:
    // 0x11133c: 0x1100001e  beqz        $t0, . + 4 + (0x1E << 2)
label_111340:
    if (ctx->pc == 0x111340u) {
        ctx->pc = 0x111340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11133Cu;
        // 0x111340: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111344u;
        goto label_111344;
    }
    ctx->pc = 0x11133Cu;
    {
        const bool branch_taken_0x11133c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x111340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11133Cu;
        // 0x111340: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11133c) {
            ctx->pc = 0x1113B8u;
            goto label_1113b8;
        }
    }
    ctx->pc = 0x111344u;
label_111344:
    // 0x111344: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x111344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_111348:
    // 0x111348: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x111348u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_11134c:
    // 0x11134c: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x11134cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_111350:
    // 0x111350: 0x2471ffff  addiu       $s1, $v1, -0x1
    ctx->pc = 0x111350u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_111354:
    // 0x111354: 0x10000019  b           . + 4 + (0x19 << 2)
label_111358:
    if (ctx->pc == 0x111358u) {
        ctx->pc = 0x111358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111354u;
        // 0x111358: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11135Cu;
        goto label_11135c;
    }
    ctx->pc = 0x111354u;
    {
        const bool branch_taken_0x111354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111354u;
        // 0x111358: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111354) {
            ctx->pc = 0x1113BCu;
            goto label_1113bc;
        }
    }
    ctx->pc = 0x11135Cu;
label_11135c:
    // 0x11135c: 0x10182f  dsubu       $v1, $zero, $s0
    ctx->pc = 0x11135cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 16));
label_111360:
    // 0x111360: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x111360u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_111364:
    // 0x111364: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x111364u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_111368:
    // 0x111368: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_11136c:
    if (ctx->pc == 0x11136Cu) {
        ctx->pc = 0x11136Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111368u;
        // 0x11136c: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111370u;
        goto label_111370;
    }
    ctx->pc = 0x111368u;
    {
        const bool branch_taken_0x111368 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11136Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111368u;
        // 0x11136c: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111368) {
            ctx->pc = 0x1113B8u;
            goto label_1113b8;
        }
    }
    ctx->pc = 0x111370u;
label_111370:
    // 0x111370: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x111370u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_111374:
    // 0x111374: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x111374u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_111378:
    // 0x111378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x111378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11137c:
    // 0x11137c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x11137cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_111380:
    // 0x111380: 0xc04818e  jal         func_120638
label_111384:
    if (ctx->pc == 0x111384u) {
        ctx->pc = 0x111384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111380u;
        // 0x111384: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111388u;
        goto label_111388;
    }
    ctx->pc = 0x111380u;
    SET_GPR_U32(ctx, 31, 0x111388u);
    ctx->pc = 0x111384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111380u;
    // 0x111384: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120638u, 0x111380u, 0x111388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111388u;
label_111388:
    // 0x111388: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x111388u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
label_11138c:
    // 0x11138c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11138cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_111390:
    // 0x111390: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x111390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_111394:
    // 0x111394: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x111394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_111398:
    // 0x111398: 0xc047fe8  jal         func_11FFA0
label_11139c:
    if (ctx->pc == 0x11139Cu) {
        ctx->pc = 0x11139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111398u;
        // 0x11139c: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1113A0u;
        goto label_1113a0;
    }
    ctx->pc = 0x111398u;
    SET_GPR_U32(ctx, 31, 0x1113A0u);
    ctx->pc = 0x11139Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111398u;
    // 0x11139c: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FFA0u, 0x111398u, 0x1113A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1113A0u;
label_1113a0:
    // 0x1113a0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1113a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1113a4:
    // 0x1113a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1113a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1113a8:
    // 0x1113a8: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
label_1113ac:
    if (ctx->pc == 0x1113ACu) {
        ctx->pc = 0x1113ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1113A8u;
        // 0x1113ac: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1113B0u;
        goto label_1113b0;
    }
    ctx->pc = 0x1113A8u;
    {
        const bool branch_taken_0x1113a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1113ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1113A8u;
        // 0x1113ac: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1113a8) {
            ctx->pc = 0x111378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111378;
        }
    }
    ctx->pc = 0x1113B0u;
label_1113b0:
    // 0x1113b0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1113b4:
    if (ctx->pc == 0x1113B4u) {
        ctx->pc = 0x1113B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1113B0u;
        // 0x1113b4: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1113B8u;
        goto label_1113b8;
    }
    ctx->pc = 0x1113B0u;
    {
        const bool branch_taken_0x1113b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1113B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1113B0u;
        // 0x1113b4: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1113b0) {
            ctx->pc = 0x1113C4u;
            goto label_1113c4;
        }
    }
    ctx->pc = 0x1113B8u;
label_1113b8:
    // 0x1113b8: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x1113b8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_1113bc:
    // 0x1113bc: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x1113bcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_1113c0:
    // 0x1113c0: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x1113c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1113c4:
    // 0x1113c4: 0x100000e1  b           . + 4 + (0xE1 << 2)
label_1113c8:
    if (ctx->pc == 0x1113C8u) {
        ctx->pc = 0x1113C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1113C4u;
        // 0x1113c8: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1113CCu;
        goto label_1113cc;
    }
    ctx->pc = 0x1113C4u;
    {
        const bool branch_taken_0x1113c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1113C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1113C4u;
        // 0x1113c8: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1113c4) {
            ctx->pc = 0x11174Cu;
            goto label_11174c;
        }
    }
    ctx->pc = 0x1113CCu;
label_1113cc:
    // 0x1113cc: 0x32a20040  andi        $v0, $s5, 0x40
    ctx->pc = 0x1113ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
label_1113d0:
    // 0x1113d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1113d4:
    if (ctx->pc == 0x1113D4u) {
        ctx->pc = 0x1113D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1113D0u;
        // 0x1113d4: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1113D8u;
        goto label_1113d8;
    }
    ctx->pc = 0x1113D0u;
    {
        const bool branch_taken_0x1113d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1113D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1113D0u;
        // 0x1113d4: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1113d0) {
            ctx->pc = 0x1113E4u;
            goto label_1113e4;
        }
    }
    ctx->pc = 0x1113D8u;
label_1113d8:
    // 0x1113d8: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x1113d8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_1113dc:
    // 0x1113dc: 0x10000006  b           . + 4 + (0x6 << 2)
label_1113e0:
    if (ctx->pc == 0x1113E0u) {
        ctx->pc = 0x1113E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1113DCu;
        // 0x1113e0: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1113E4u;
        goto label_1113e4;
    }
    ctx->pc = 0x1113DCu;
    {
        const bool branch_taken_0x1113dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1113E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1113DCu;
        // 0x1113e0: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1113dc) {
            ctx->pc = 0x1113F8u;
            goto label_1113f8;
        }
    }
    ctx->pc = 0x1113E4u;
label_1113e4:
    // 0x1113e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1113e8:
    if (ctx->pc == 0x1113E8u) {
        ctx->pc = 0x1113E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1113E4u;
        // 0x1113e8: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1113ECu;
        goto label_1113ec;
    }
    ctx->pc = 0x1113E4u;
    {
        const bool branch_taken_0x1113e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1113E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1113E4u;
        // 0x1113e8: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1113e4) {
            ctx->pc = 0x1113F4u;
            goto label_1113f4;
        }
    }
    ctx->pc = 0x1113ECu;
label_1113ec:
    // 0x1113ec: 0x10000002  b           . + 4 + (0x2 << 2)
label_1113f0:
    if (ctx->pc == 0x1113F0u) {
        ctx->pc = 0x1113F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1113ECu;
        // 0x1113f0: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1113F4u;
        goto label_1113f4;
    }
    ctx->pc = 0x1113ECu;
    {
        const bool branch_taken_0x1113ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1113F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1113ECu;
        // 0x1113f0: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1113ec) {
            ctx->pc = 0x1113F8u;
            goto label_1113f8;
        }
    }
    ctx->pc = 0x1113F4u;
label_1113f4:
    // 0x1113f4: 0x9fd0fff8  lwu         $s0, -0x8($fp)
    ctx->pc = 0x1113f4u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_1113f8:
    // 0x1113f8: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
label_1113fc:
    if (ctx->pc == 0x1113FCu) {
        ctx->pc = 0x1113FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1113F8u;
        // 0x1113fc: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111400u;
        goto label_111400;
    }
    ctx->pc = 0x1113F8u;
    {
        const bool branch_taken_0x1113f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1113FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1113F8u;
        // 0x1113fc: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1113f8) {
            ctx->pc = 0x111428u;
            goto label_111428;
        }
    }
    ctx->pc = 0x111400u;
label_111400:
    // 0x111400: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x111400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_111404:
    // 0x111404: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_111408:
    if (ctx->pc == 0x111408u) {
        ctx->pc = 0x111408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111404u;
        // 0x111408: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11140Cu;
        goto label_11140c;
    }
    ctx->pc = 0x111404u;
    {
        const bool branch_taken_0x111404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111404u;
        // 0x111408: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111404) {
            ctx->pc = 0x111414u;
            goto label_111414;
        }
    }
    ctx->pc = 0x11140Cu;
label_11140c:
    // 0x11140c: 0x1100001a  beqz        $t0, . + 4 + (0x1A << 2)
label_111410:
    if (ctx->pc == 0x111410u) {
        ctx->pc = 0x111410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11140Cu;
        // 0x111410: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111414u;
        goto label_111414;
    }
    ctx->pc = 0x11140Cu;
    {
        const bool branch_taken_0x11140c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x111410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11140Cu;
        // 0x111410: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11140c) {
            ctx->pc = 0x111478u;
            goto label_111478;
        }
    }
    ctx->pc = 0x111414u;
label_111414:
    // 0x111414: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x111414u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_111418:
    // 0x111418: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x111418u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_11141c:
    // 0x11141c: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x11141cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_111420:
    // 0x111420: 0x10000016  b           . + 4 + (0x16 << 2)
label_111424:
    if (ctx->pc == 0x111424u) {
        ctx->pc = 0x111424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111420u;
        // 0x111424: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111428u;
        goto label_111428;
    }
    ctx->pc = 0x111420u;
    {
        const bool branch_taken_0x111420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111420u;
        // 0x111424: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111420) {
            ctx->pc = 0x11147Cu;
            goto label_11147c;
        }
    }
    ctx->pc = 0x111428u;
label_111428:
    // 0x111428: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x111428u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_11142c:
    // 0x11142c: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x11142cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_111430:
    // 0x111430: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x111430u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_111434:
    // 0x111434: 0x0  nop
    ctx->pc = 0x111434u;
    // NOP
label_111438:
    // 0x111438: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x111438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11143c:
    // 0x11143c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x11143cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_111440:
    // 0x111440: 0xc048492  jal         func_121248
label_111444:
    if (ctx->pc == 0x111444u) {
        ctx->pc = 0x111444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111440u;
        // 0x111444: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111448u;
        goto label_111448;
    }
    ctx->pc = 0x111440u;
    SET_GPR_U32(ctx, 31, 0x111448u);
    ctx->pc = 0x111444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111440u;
    // 0x111444: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121248u, 0x111440u, 0x111448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111448u;
label_111448:
    // 0x111448: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x111448u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
label_11144c:
    // 0x11144c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11144cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_111450:
    // 0x111450: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x111450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_111454:
    // 0x111454: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x111454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_111458:
    // 0x111458: 0xc048332  jal         func_120CC8
label_11145c:
    if (ctx->pc == 0x11145Cu) {
        ctx->pc = 0x11145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111458u;
        // 0x11145c: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111460u;
        goto label_111460;
    }
    ctx->pc = 0x111458u;
    SET_GPR_U32(ctx, 31, 0x111460u);
    ctx->pc = 0x11145Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111458u;
    // 0x11145c: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120CC8u, 0x111458u, 0x111460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111460u;
label_111460:
    // 0x111460: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x111460u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_111464:
    // 0x111464: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x111464u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_111468:
    // 0x111468: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
label_11146c:
    if (ctx->pc == 0x11146Cu) {
        ctx->pc = 0x11146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111468u;
        // 0x11146c: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111470u;
        goto label_111470;
    }
    ctx->pc = 0x111468u;
    {
        const bool branch_taken_0x111468 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111468u;
        // 0x11146c: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111468) {
            ctx->pc = 0x111438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111438;
        }
    }
    ctx->pc = 0x111470u;
label_111470:
    // 0x111470: 0x10000004  b           . + 4 + (0x4 << 2)
label_111474:
    if (ctx->pc == 0x111474u) {
        ctx->pc = 0x111474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111470u;
        // 0x111474: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111478u;
        goto label_111478;
    }
    ctx->pc = 0x111470u;
    {
        const bool branch_taken_0x111470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111470u;
        // 0x111474: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111470) {
            ctx->pc = 0x111484u;
            goto label_111484;
        }
    }
    ctx->pc = 0x111478u;
label_111478:
    // 0x111478: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x111478u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_11147c:
    // 0x11147c: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x11147cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_111480:
    // 0x111480: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x111480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_111484:
    // 0x111484: 0x26320001  addiu       $s2, $s1, 0x1
    ctx->pc = 0x111484u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_111488:
    // 0x111488: 0x100000b1  b           . + 4 + (0xB1 << 2)
label_11148c:
    if (ctx->pc == 0x11148Cu) {
        ctx->pc = 0x11148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111488u;
        // 0x11148c: 0x512023  subu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111490u;
        goto label_111490;
    }
    ctx->pc = 0x111488u;
    {
        const bool branch_taken_0x111488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111488u;
        // 0x11148c: 0x512023  subu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111488) {
            ctx->pc = 0x111750u;
            goto label_111750;
        }
    }
    ctx->pc = 0x111490u;
label_111490:
    // 0x111490: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x111490u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_111494:
    // 0x111494: 0xc048e00  jal         func_123800
label_111498:
    if (ctx->pc == 0x111498u) {
        ctx->pc = 0x111498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111494u;
        // 0x111498: 0xdfc4fff8  ld          $a0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11149Cu;
        goto label_11149c;
    }
    ctx->pc = 0x111494u;
    SET_GPR_U32(ctx, 31, 0x11149Cu);
    ctx->pc = 0x111498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111494u;
    // 0x111498: 0xdfc4fff8  ld          $a0, -0x8($fp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123800u, 0x111494u, 0x11149Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11149Cu;
label_11149c:
    // 0x11149c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x11149cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1114a0:
    // 0x1114a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1114a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1114a4:
    // 0x1114a4: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x1114a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1114a8:
    // 0x1114a8: 0x0  nop
    ctx->pc = 0x1114a8u;
    // NOP
label_1114ac:
    // 0x1114ac: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1114b0:
    if (ctx->pc == 0x1114B0u) {
        ctx->pc = 0x1114B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1114ACu;
        // 0x1114b0: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1114B4u;
        goto label_1114b4;
    }
    ctx->pc = 0x1114ACu;
    {
        const bool branch_taken_0x1114ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1114B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1114ACu;
        // 0x1114b0: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1114ac) {
            ctx->pc = 0x1114C4u;
            goto label_1114c4;
        }
    }
    ctx->pc = 0x1114B4u;
label_1114b4:
    // 0x1114b4: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x1114b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1114b8:
    // 0x1114b8: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x1114b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1114bc:
    // 0x1114bc: 0x100001c7  b           . + 4 + (0x1C7 << 2)
label_1114c0:
    if (ctx->pc == 0x1114C0u) {
        ctx->pc = 0x1114C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1114BCu;
        // 0x1114c0: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1114C4u;
        goto label_1114c4;
    }
    ctx->pc = 0x1114BCu;
    {
        const bool branch_taken_0x1114bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1114C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1114BCu;
        // 0x1114c0: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1114bc) {
            ctx->pc = 0x111BDCu;
            goto label_111bdc;
        }
    }
    ctx->pc = 0x1114C4u;
label_1114c4:
    // 0x1114c4: 0xc048be8  jal         func_122FA0
label_1114c8:
    if (ctx->pc == 0x1114C8u) {
        ctx->pc = 0x1114C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1114C4u;
        // 0x1114c8: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1114CCu;
        goto label_1114cc;
    }
    ctx->pc = 0x1114C4u;
    SET_GPR_U32(ctx, 31, 0x1114CCu);
    ctx->pc = 0x1114C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1114C4u;
    // 0x1114c8: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122FA0u, 0x1114C4u, 0x1114CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1114CCu;
label_1114cc:
    // 0x1114cc: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x1114ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_1114d0:
    // 0x1114d0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1114d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1114d4:
    // 0x1114d4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1114d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1114d8:
    // 0x1114d8: 0xc04435e  jal         func_110D78
label_1114dc:
    if (ctx->pc == 0x1114DCu) {
        ctx->pc = 0x1114DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1114D8u;
        // 0x1114dc: 0x8fa6005c  lw          $a2, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1114E0u;
        goto label_1114e0;
    }
    ctx->pc = 0x1114D8u;
    SET_GPR_U32(ctx, 31, 0x1114E0u);
    ctx->pc = 0x1114DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1114D8u;
    // 0x1114dc: 0x8fa6005c  lw          $a2, 0x5C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D78u, 0x1114D8u, 0x1114E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1114E0u;
label_1114e0:
    // 0x1114e0: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1114e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1114e4:
    // 0x1114e4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1114e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1114e8:
    // 0x1114e8: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x1114e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
label_1114ec:
    // 0x1114ec: 0x100001c3  b           . + 4 + (0x1C3 << 2)
label_1114f0:
    if (ctx->pc == 0x1114F0u) {
        ctx->pc = 0x1114F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1114ECu;
        // 0x1114f0: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1114F4u;
        goto label_1114f4;
    }
    ctx->pc = 0x1114ECu;
    {
        const bool branch_taken_0x1114ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1114F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1114ECu;
        // 0x1114f0: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1114ec) {
            ctx->pc = 0x111BFCu;
            goto label_111bfc;
        }
    }
    ctx->pc = 0x1114F4u;
label_1114f4:
    // 0x1114f4: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x1114f4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_1114f8:
    // 0x1114f8: 0x8fc3fff8  lw          $v1, -0x8($fp)
    ctx->pc = 0x1114f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_1114fc:
    // 0x1114fc: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
label_111500:
    if (ctx->pc == 0x111500u) {
        ctx->pc = 0x111500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1114FCu;
        // 0x111500: 0x32a20020  andi        $v0, $s5, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x111504u;
        goto label_111504;
    }
    ctx->pc = 0x1114FCu;
    {
        const bool branch_taken_0x1114fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x111500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1114FCu;
        // 0x111500: 0x32a20020  andi        $v0, $s5, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1114fc) {
            ctx->pc = 0x111588u;
            goto label_111588;
        }
    }
    ctx->pc = 0x111504u;
label_111504:
    // 0x111504: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x111504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_111508:
    // 0x111508: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x111508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_11150c:
    // 0x11150c: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x11150cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_111510:
    // 0x111510: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x111510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_111514:
    // 0x111514: 0x60f809  jalr        $v1
label_111518:
    if (ctx->pc == 0x111518u) {
        ctx->pc = 0x111518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111514u;
        // 0x111518: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11151Cu;
        goto label_11151c;
    }
    ctx->pc = 0x111514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11151Cu);
        ctx->pc = 0x111518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111514u;
        // 0x111518: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111514u, 0x11151Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11151Cu;
label_11151c:
    // 0x11151c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x11151cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_111520:
    // 0x111520: 0x2406006e  addiu       $a2, $zero, 0x6E
    ctx->pc = 0x111520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_111524:
    // 0x111524: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x111524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_111528:
    // 0x111528: 0x60f809  jalr        $v1
label_11152c:
    if (ctx->pc == 0x11152Cu) {
        ctx->pc = 0x11152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111528u;
        // 0x11152c: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111530u;
        goto label_111530;
    }
    ctx->pc = 0x111528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x111530u);
        ctx->pc = 0x11152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111528u;
        // 0x11152c: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111528u, 0x111530u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x111530u;
label_111530:
    // 0x111530: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x111530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_111534:
    // 0x111534: 0x24060075  addiu       $a2, $zero, 0x75
    ctx->pc = 0x111534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
label_111538:
    // 0x111538: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x111538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_11153c:
    // 0x11153c: 0x60f809  jalr        $v1
label_111540:
    if (ctx->pc == 0x111540u) {
        ctx->pc = 0x111540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11153Cu;
        // 0x111540: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111544u;
        goto label_111544;
    }
    ctx->pc = 0x11153Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x111544u);
        ctx->pc = 0x111540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11153Cu;
        // 0x111540: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11153Cu, 0x111544u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x111544u;
label_111544:
    // 0x111544: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x111544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_111548:
    // 0x111548: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x111548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_11154c:
    // 0x11154c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x11154cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_111550:
    // 0x111550: 0x60f809  jalr        $v1
label_111554:
    if (ctx->pc == 0x111554u) {
        ctx->pc = 0x111554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111550u;
        // 0x111554: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111558u;
        goto label_111558;
    }
    ctx->pc = 0x111550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x111558u);
        ctx->pc = 0x111554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111550u;
        // 0x111554: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111550u, 0x111558u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x111558u;
label_111558:
    // 0x111558: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x111558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_11155c:
    // 0x11155c: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x11155cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_111560:
    // 0x111560: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x111560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_111564:
    // 0x111564: 0x60f809  jalr        $v1
label_111568:
    if (ctx->pc == 0x111568u) {
        ctx->pc = 0x111568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111564u;
        // 0x111568: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11156Cu;
        goto label_11156c;
    }
    ctx->pc = 0x111564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11156Cu);
        ctx->pc = 0x111568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111564u;
        // 0x111568: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111564u, 0x11156Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11156Cu;
label_11156c:
    // 0x11156c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x11156cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_111570:
    // 0x111570: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x111570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_111574:
    // 0x111574: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x111574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_111578:
    // 0x111578: 0x60f809  jalr        $v1
label_11157c:
    if (ctx->pc == 0x11157Cu) {
        ctx->pc = 0x11157Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111578u;
        // 0x11157c: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111580u;
        goto label_111580;
    }
    ctx->pc = 0x111578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x111580u);
        ctx->pc = 0x11157Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111578u;
        // 0x11157c: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111578u, 0x111580u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x111580u;
label_111580:
    // 0x111580: 0x1000019e  b           . + 4 + (0x19E << 2)
label_111584:
    if (ctx->pc == 0x111584u) {
        ctx->pc = 0x111584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111580u;
        // 0x111584: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111588u;
        goto label_111588;
    }
    ctx->pc = 0x111580u;
    {
        const bool branch_taken_0x111580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111580u;
        // 0x111584: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111580) {
            ctx->pc = 0x111BFCu;
            goto label_111bfc;
        }
    }
    ctx->pc = 0x111588u;
label_111588:
    // 0x111588: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_11158c:
    if (ctx->pc == 0x11158Cu) {
        ctx->pc = 0x11158Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111588u;
        // 0x11158c: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111590u;
        goto label_111590;
    }
    ctx->pc = 0x111588u;
    {
        const bool branch_taken_0x111588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11158Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111588u;
        // 0x11158c: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111588) {
            ctx->pc = 0x1115E8u;
            goto label_1115e8;
        }
    }
    ctx->pc = 0x111590u;
label_111590:
    // 0x111590: 0x19000010  blez        $t0, . + 4 + (0x10 << 2)
label_111594:
    if (ctx->pc == 0x111594u) {
        ctx->pc = 0x111594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111590u;
        // 0x111594: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111598u;
        goto label_111598;
    }
    ctx->pc = 0x111590u;
    {
        const bool branch_taken_0x111590 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x111594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111590u;
        // 0x111594: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111590) {
            ctx->pc = 0x1115D4u;
            goto label_1115d4;
        }
    }
    ctx->pc = 0x111598u;
label_111598:
    // 0x111598: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x111598u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_11159c:
    // 0x11159c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1115a0:
    if (ctx->pc == 0x1115A0u) {
        ctx->pc = 0x1115A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11159Cu;
        // 0x1115a0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1115A4u;
        goto label_1115a4;
    }
    ctx->pc = 0x11159Cu;
    {
        const bool branch_taken_0x11159c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1115A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11159Cu;
        // 0x1115a0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11159c) {
            ctx->pc = 0x1115D4u;
            goto label_1115d4;
        }
    }
    ctx->pc = 0x1115A4u;
label_1115a4:
    // 0x1115a4: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x1115a4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1115a8:
    // 0x1115a8: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x1115a8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_1115ac:
    // 0x1115ac: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x1115acu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_1115b0:
    // 0x1115b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1115b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1115b4:
    // 0x1115b4: 0x208102a  slt         $v0, $s0, $t0
    ctx->pc = 0x1115b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_1115b8:
    // 0x1115b8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_1115bc:
    if (ctx->pc == 0x1115BCu) {
        ctx->pc = 0x1115BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1115B8u;
        // 0x1115bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1115C0u;
        goto label_1115c0;
    }
    ctx->pc = 0x1115B8u;
    {
        const bool branch_taken_0x1115b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1115BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1115B8u;
        // 0x1115bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1115b8) {
            ctx->pc = 0x111630u;
            goto label_111630;
        }
    }
    ctx->pc = 0x1115C0u;
label_1115c0:
    // 0x1115c0: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1115c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1115c4:
    // 0x1115c4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1115c8:
    if (ctx->pc == 0x1115C8u) {
        ctx->pc = 0x1115C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1115C4u;
        // 0x1115c8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1115CCu;
        goto label_1115cc;
    }
    ctx->pc = 0x1115C4u;
    {
        const bool branch_taken_0x1115c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1115C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1115C4u;
        // 0x1115c8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1115c4) {
            ctx->pc = 0x1115B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1115b0;
        }
    }
    ctx->pc = 0x1115CCu;
label_1115cc:
    // 0x1115cc: 0x10000060  b           . + 4 + (0x60 << 2)
label_1115d0:
    if (ctx->pc == 0x1115D0u) {
        ctx->pc = 0x1115D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1115CCu;
        // 0x1115d0: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1115D4u;
        goto label_1115d4;
    }
    ctx->pc = 0x1115CCu;
    {
        const bool branch_taken_0x1115cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1115D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1115CCu;
        // 0x1115d0: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1115cc) {
            ctx->pc = 0x111750u;
            goto label_111750;
        }
    }
    ctx->pc = 0x1115D4u;
label_1115d4:
    // 0x1115d4: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x1115d4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1115d8:
    // 0x1115d8: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x1115d8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_1115dc:
    // 0x1115dc: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x1115dcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_1115e0:
    // 0x1115e0: 0x10000013  b           . + 4 + (0x13 << 2)
label_1115e4:
    if (ctx->pc == 0x1115E4u) {
        ctx->pc = 0x1115E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1115E0u;
        // 0x1115e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1115E8u;
        goto label_1115e8;
    }
    ctx->pc = 0x1115E0u;
    {
        const bool branch_taken_0x1115e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1115E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1115E0u;
        // 0x1115e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1115e0) {
            ctx->pc = 0x111630u;
            goto label_111630;
        }
    }
    ctx->pc = 0x1115E8u;
label_1115e8:
    // 0x1115e8: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1115e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1115ec:
    // 0x1115ec: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1115f0:
    if (ctx->pc == 0x1115F0u) {
        ctx->pc = 0x1115F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1115ECu;
        // 0x1115f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1115F4u;
        goto label_1115f4;
    }
    ctx->pc = 0x1115ECu;
    {
        const bool branch_taken_0x1115ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1115F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1115ECu;
        // 0x1115f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1115ec) {
            ctx->pc = 0x111624u;
            goto label_111624;
        }
    }
    ctx->pc = 0x1115F4u;
label_1115f4:
    // 0x1115f4: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x1115f4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1115f8:
    // 0x1115f8: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x1115f8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_1115fc:
    // 0x1115fc: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x1115fcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_111600:
    // 0x111600: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x111600u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_111604:
    // 0x111604: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x111604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_111608:
    // 0x111608: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x111608u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_11160c:
    // 0x11160c: 0x0  nop
    ctx->pc = 0x11160cu;
    // NOP
label_111610:
    // 0x111610: 0x0  nop
    ctx->pc = 0x111610u;
    // NOP
label_111614:
    // 0x111614: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_111618:
    if (ctx->pc == 0x111618u) {
        ctx->pc = 0x11161Cu;
        goto label_11161c;
    }
    ctx->pc = 0x111614u;
    {
        const bool branch_taken_0x111614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111614) {
            ctx->pc = 0x111600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111600;
        }
    }
    ctx->pc = 0x11161Cu;
label_11161c:
    // 0x11161c: 0x1000004c  b           . + 4 + (0x4C << 2)
label_111620:
    if (ctx->pc == 0x111620u) {
        ctx->pc = 0x111620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11161Cu;
        // 0x111620: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111624u;
        goto label_111624;
    }
    ctx->pc = 0x11161Cu;
    {
        const bool branch_taken_0x11161c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11161Cu;
        // 0x111620: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11161c) {
            ctx->pc = 0x111750u;
            goto label_111750;
        }
    }
    ctx->pc = 0x111624u;
label_111624:
    // 0x111624: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x111624u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_111628:
    // 0x111628: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x111628u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_11162c:
    // 0x11162c: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x11162cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_111630:
    // 0x111630: 0x10000047  b           . + 4 + (0x47 << 2)
label_111634:
    if (ctx->pc == 0x111634u) {
        ctx->pc = 0x111634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111630u;
        // 0x111634: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111638u;
        goto label_111638;
    }
    ctx->pc = 0x111630u;
    {
        const bool branch_taken_0x111630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111630u;
        // 0x111634: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111630) {
            ctx->pc = 0x111750u;
            goto label_111750;
        }
    }
    ctx->pc = 0x111638u;
label_111638:
    // 0x111638: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x111638u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_11163c:
    // 0x11163c: 0x8fb1004c  lw          $s1, 0x4C($sp)
    ctx->pc = 0x11163cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_111640:
    // 0x111640: 0x83d0fff8  lb          $s0, -0x8($fp)
    ctx->pc = 0x111640u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_111644:
    // 0x111644: 0x36b50100  ori         $s5, $s5, 0x100
    ctx->pc = 0x111644u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)256);
label_111648:
    // 0x111648: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x111648u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11164c:
    // 0x11164c: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x11164cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_111650:
    // 0x111650: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x111650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_111654:
    // 0x111654: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x111654u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_111658:
    // 0x111658: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x111658u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_11165c:
    // 0x11165c: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x11165cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_111660:
    // 0x111660: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x111660u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_111664:
    // 0x111664: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x111664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_111668:
    // 0x111668: 0x10000038  b           . + 4 + (0x38 << 2)
label_11166c:
    if (ctx->pc == 0x11166Cu) {
        ctx->pc = 0x11166Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111668u;
        // 0x11166c: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111670u;
        goto label_111670;
    }
    ctx->pc = 0x111668u;
    {
        const bool branch_taken_0x111668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11166Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111668u;
        // 0x11166c: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111668) {
            ctx->pc = 0x11174Cu;
            goto label_11174c;
        }
    }
    ctx->pc = 0x111670u;
label_111670:
    // 0x111670: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x111670u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_111674:
    // 0x111674: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x111674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
label_111678:
    // 0x111678: 0x9fd0fff8  lwu         $s0, -0x8($fp)
    ctx->pc = 0x111678u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_11167c:
    // 0x11167c: 0x2444dfe0  addiu       $a0, $v0, -0x2020
    ctx->pc = 0x11167cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959072));
label_111680:
    // 0x111680: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
label_111684:
    if (ctx->pc == 0x111684u) {
        ctx->pc = 0x111684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111680u;
        // 0x111684: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111688u;
        goto label_111688;
    }
    ctx->pc = 0x111680u;
    {
        const bool branch_taken_0x111680 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x111684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111680u;
        // 0x111684: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111680) {
            ctx->pc = 0x1116B0u;
            goto label_1116b0;
        }
    }
    ctx->pc = 0x111688u;
label_111688:
    // 0x111688: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x111688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_11168c:
    // 0x11168c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_111690:
    if (ctx->pc == 0x111690u) {
        ctx->pc = 0x111690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11168Cu;
        // 0x111690: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111694u;
        goto label_111694;
    }
    ctx->pc = 0x11168Cu;
    {
        const bool branch_taken_0x11168c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11168Cu;
        // 0x111690: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11168c) {
            ctx->pc = 0x11169Cu;
            goto label_11169c;
        }
    }
    ctx->pc = 0x111694u;
label_111694:
    // 0x111694: 0x11000015  beqz        $t0, . + 4 + (0x15 << 2)
label_111698:
    if (ctx->pc == 0x111698u) {
        ctx->pc = 0x111698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111694u;
        // 0x111698: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11169Cu;
        goto label_11169c;
    }
    ctx->pc = 0x111694u;
    {
        const bool branch_taken_0x111694 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x111698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111694u;
        // 0x111698: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111694) {
            ctx->pc = 0x1116ECu;
            goto label_1116ec;
        }
    }
    ctx->pc = 0x11169Cu;
label_11169c:
    // 0x11169c: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x11169cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1116a0:
    // 0x1116a0: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x1116a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_1116a4:
    // 0x1116a4: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x1116a4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_1116a8:
    // 0x1116a8: 0x10000011  b           . + 4 + (0x11 << 2)
label_1116ac:
    if (ctx->pc == 0x1116ACu) {
        ctx->pc = 0x1116ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1116A8u;
        // 0x1116ac: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1116B0u;
        goto label_1116b0;
    }
    ctx->pc = 0x1116A8u;
    {
        const bool branch_taken_0x1116a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1116ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1116A8u;
        // 0x1116ac: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1116a8) {
            ctx->pc = 0x1116F0u;
            goto label_1116f0;
        }
    }
    ctx->pc = 0x1116B0u;
label_1116b0:
    // 0x1116b0: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x1116b0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1116b4:
    // 0x1116b4: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x1116b4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_1116b8:
    // 0x1116b8: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x1116b8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_1116bc:
    // 0x1116bc: 0x0  nop
    ctx->pc = 0x1116bcu;
    // NOP
label_1116c0:
    // 0x1116c0: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x1116c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
label_1116c4:
    // 0x1116c4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1116c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1116c8:
    // 0x1116c8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1116c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1116cc:
    // 0x1116cc: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x1116ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
label_1116d0:
    // 0x1116d0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1116d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1116d4:
    // 0x1116d4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1116d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1116d8:
    // 0x1116d8: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x1116d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_1116dc:
    // 0x1116dc: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
label_1116e0:
    if (ctx->pc == 0x1116E0u) {
        ctx->pc = 0x1116E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1116DCu;
        // 0x1116e0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1116E4u;
        goto label_1116e4;
    }
    ctx->pc = 0x1116DCu;
    {
        const bool branch_taken_0x1116dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1116E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1116DCu;
        // 0x1116e0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1116dc) {
            ctx->pc = 0x1116C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1116c0;
        }
    }
    ctx->pc = 0x1116E4u;
label_1116e4:
    // 0x1116e4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1116e8:
    if (ctx->pc == 0x1116E8u) {
        ctx->pc = 0x1116E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1116E4u;
        // 0x1116e8: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1116ECu;
        goto label_1116ec;
    }
    ctx->pc = 0x1116E4u;
    {
        const bool branch_taken_0x1116e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1116E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1116E4u;
        // 0x1116e8: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1116e4) {
            ctx->pc = 0x1116F8u;
            goto label_1116f8;
        }
    }
    ctx->pc = 0x1116ECu;
label_1116ec:
    // 0x1116ec: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x1116ecu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_1116f0:
    // 0x1116f0: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x1116f0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_1116f4:
    // 0x1116f4: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1116f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1116f8:
    // 0x1116f8: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x1116f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1116fc:
    // 0x1116fc: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x1116fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
label_111700:
    // 0x111700: 0x26320001  addiu       $s2, $s1, 0x1
    ctx->pc = 0x111700u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_111704:
    // 0x111704: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x111704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_111708:
    // 0x111708: 0xa3a30021  sb          $v1, 0x21($sp)
    ctx->pc = 0x111708u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 3));
label_11170c:
    // 0x11170c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x11170cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_111710:
    // 0x111710: 0x512023  subu        $a0, $v0, $s1
    ctx->pc = 0x111710u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_111714:
    // 0x111714: 0x1000000e  b           . + 4 + (0xE << 2)
label_111718:
    if (ctx->pc == 0x111718u) {
        ctx->pc = 0x111718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111714u;
        // 0x111718: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11171Cu;
        goto label_11171c;
    }
    ctx->pc = 0x111714u;
    {
        const bool branch_taken_0x111714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111714u;
        // 0x111718: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111714) {
            ctx->pc = 0x111750u;
            goto label_111750;
        }
    }
    ctx->pc = 0x11171Cu;
label_11171c:
    // 0x11171c: 0x61600  sll         $v0, $a2, 24
    ctx->pc = 0x11171cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
label_111720:
    // 0x111720: 0x10400135  beqz        $v0, . + 4 + (0x135 << 2)
label_111724:
    if (ctx->pc == 0x111724u) {
        ctx->pc = 0x111724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111720u;
        // 0x111724: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111728u;
        goto label_111728;
    }
    ctx->pc = 0x111720u;
    {
        const bool branch_taken_0x111720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111720u;
        // 0x111724: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111720) {
            ctx->pc = 0x111BF8u;
            goto label_111bf8;
        }
    }
    ctx->pc = 0x111728u;
label_111728:
    // 0x111728: 0x36b50100  ori         $s5, $s5, 0x100
    ctx->pc = 0x111728u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)256);
label_11172c:
    // 0x11172c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x11172cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_111730:
    // 0x111730: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x111730u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_111734:
    // 0x111734: 0xa2250000  sb          $a1, 0x0($s1)
    ctx->pc = 0x111734u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 5));
label_111738:
    // 0x111738: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x111738u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_11173c:
    // 0x11173c: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x11173cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_111740:
    // 0x111740: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x111740u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_111744:
    // 0x111744: 0x26320001  addiu       $s2, $s1, 0x1
    ctx->pc = 0x111744u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_111748:
    // 0x111748: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x111748u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_11174c:
    // 0x11174c: 0xb12023  subu        $a0, $a1, $s1
    ctx->pc = 0x11174cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_111750:
    // 0x111750: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x111750u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_111754:
    // 0x111754: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x111754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_111758:
    // 0x111758: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x111758u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_11175c:
    // 0x11175c: 0x1044023  subu        $t0, $t0, $a0
    ctx->pc = 0x11175cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_111760:
    // 0x111760: 0x2400a  movz        $t0, $zero, $v0
    ctx->pc = 0x111760u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_111764:
    // 0x111764: 0xa41823  subu        $v1, $a1, $a0
    ctx->pc = 0x111764u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_111768:
    // 0x111768: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x111768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_11176c:
    // 0x11176c: 0x2448821  addu        $s1, $s2, $a0
    ctx->pc = 0x11176cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_111770:
    // 0x111770: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x111770u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_111774:
    // 0x111774: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x111774u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_111778:
    // 0x111778: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
label_11177c:
    if (ctx->pc == 0x11177Cu) {
        ctx->pc = 0x11177Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111778u;
        // 0x11177c: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111780u;
        goto label_111780;
    }
    ctx->pc = 0x111778u;
    {
        const bool branch_taken_0x111778 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x11177Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111778u;
        // 0x11177c: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111778) {
            ctx->pc = 0x11179Cu;
            goto label_11179c;
        }
    }
    ctx->pc = 0x111780u;
label_111780:
    // 0x111780: 0x32a20004  andi        $v0, $s5, 0x4
    ctx->pc = 0x111780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
label_111784:
    // 0x111784: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_111788:
    if (ctx->pc == 0x111788u) {
        ctx->pc = 0x111788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111784u;
        // 0x111788: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11178Cu;
        goto label_11178c;
    }
    ctx->pc = 0x111784u;
    {
        const bool branch_taken_0x111784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111784u;
        // 0x111788: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111784) {
            ctx->pc = 0x1117BCu;
            goto label_1117bc;
        }
    }
    ctx->pc = 0x11178Cu;
label_11178c:
    // 0x11178c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x11178cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_111790:
    // 0x111790: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x111790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_111794:
    // 0x111794: 0x10000008  b           . + 4 + (0x8 << 2)
label_111798:
    if (ctx->pc == 0x111798u) {
        ctx->pc = 0x111798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111794u;
        // 0x111798: 0x28820001  slti        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11179Cu;
        goto label_11179c;
    }
    ctx->pc = 0x111794u;
    {
        const bool branch_taken_0x111794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111794u;
        // 0x111798: 0x28820001  slti        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111794) {
            ctx->pc = 0x1117B8u;
            goto label_1117b8;
        }
    }
    ctx->pc = 0x11179Cu;
label_11179c:
    // 0x11179c: 0x32a30024  andi        $v1, $s5, 0x24
    ctx->pc = 0x11179cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)36);
label_1117a0:
    // 0x1117a0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1117a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1117a4:
    // 0x1117a4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1117a8:
    if (ctx->pc == 0x1117A8u) {
        ctx->pc = 0x1117A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1117A4u;
        // 0x1117a8: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1117ACu;
        goto label_1117ac;
    }
    ctx->pc = 0x1117A4u;
    {
        const bool branch_taken_0x1117a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1117A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1117A4u;
        // 0x1117a8: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1117a4) {
            ctx->pc = 0x1117BCu;
            goto label_1117bc;
        }
    }
    ctx->pc = 0x1117ACu;
label_1117ac:
    // 0x1117ac: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1117acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1117b0:
    // 0x1117b0: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1117b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1117b4:
    // 0x1117b4: 0x28a20001  slti        $v0, $a1, 0x1
    ctx->pc = 0x1117b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1) ? 1 : 0);
label_1117b8:
    // 0x1117b8: 0x62380a  movz        $a3, $v1, $v0
    ctx->pc = 0x1117b8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
label_1117bc:
    // 0x1117bc: 0x12600042  beqz        $s3, . + 4 + (0x42 << 2)
label_1117c0:
    if (ctx->pc == 0x1117C0u) {
        ctx->pc = 0x1117C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1117BCu;
        // 0x1117c0: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1117C4u;
        goto label_1117c4;
    }
    ctx->pc = 0x1117BCu;
    {
        const bool branch_taken_0x1117bc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1117C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1117BCu;
        // 0x1117c0: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1117bc) {
            ctx->pc = 0x1118C8u;
            goto label_1118c8;
        }
    }
    ctx->pc = 0x1117C4u;
label_1117c4:
    // 0x1117c4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1117c8:
    if (ctx->pc == 0x1117C8u) {
        ctx->pc = 0x1117C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1117C4u;
        // 0x1117c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1117CCu;
        goto label_1117cc;
    }
    ctx->pc = 0x1117C4u;
    {
        const bool branch_taken_0x1117c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1117C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1117C4u;
        // 0x1117c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1117c4) {
            ctx->pc = 0x11181Cu;
            goto label_11181c;
        }
    }
    ctx->pc = 0x1117CCu;
label_1117cc:
    // 0x1117cc: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x1117ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1117d0:
    // 0x1117d0: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x1117d0u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_1117d4:
    // 0x1117d4: 0x0  nop
    ctx->pc = 0x1117d4u;
    // NOP
label_1117d8:
    // 0x1117d8: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x1117d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_1117dc:
    // 0x1117dc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1117dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1117e0:
    // 0x1117e0: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x1117e0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1117e4:
    // 0x1117e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1117e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1117e8:
    // 0x1117e8: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x1117e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1117ec:
    // 0x1117ec: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x1117ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_1117f0:
    // 0x1117f0: 0x60f809  jalr        $v1
label_1117f4:
    if (ctx->pc == 0x1117F4u) {
        ctx->pc = 0x1117F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1117F0u;
        // 0x1117f4: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1117F8u;
        goto label_1117f8;
    }
    ctx->pc = 0x1117F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1117F8u);
        ctx->pc = 0x1117F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1117F0u;
        // 0x1117f4: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1117F0u, 0x1117F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1117F8u;
label_1117f8:
    // 0x1117f8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1117f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1117fc:
    // 0x1117fc: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x1117fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_111800:
    // 0x111800: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x111800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_111804:
    // 0x111804: 0x7ba80070  lq          $t0, 0x70($sp)
    ctx->pc = 0x111804u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_111808:
    // 0x111808: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x111808u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_11180c:
    // 0x11180c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_111810:
    if (ctx->pc == 0x111810u) {
        ctx->pc = 0x111810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11180Cu;
        // 0x111810: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111814u;
        goto label_111814;
    }
    ctx->pc = 0x11180Cu;
    {
        const bool branch_taken_0x11180c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11180Cu;
        // 0x111810: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11180c) {
            ctx->pc = 0x1117D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1117d8;
        }
    }
    ctx->pc = 0x111814u;
label_111814:
    // 0x111814: 0x10000002  b           . + 4 + (0x2 << 2)
label_111818:
    if (ctx->pc == 0x111818u) {
        ctx->pc = 0x11181Cu;
        goto label_11181c;
    }
    ctx->pc = 0x111814u;
    {
        const bool branch_taken_0x111814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x111814) {
            ctx->pc = 0x111820u;
            goto label_111820;
        }
    }
    ctx->pc = 0x11181Cu;
label_11181c:
    // 0x11181c: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x11181cu;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_111820:
    // 0x111820: 0x1900000d  blez        $t0, . + 4 + (0xD << 2)
label_111824:
    if (ctx->pc == 0x111824u) {
        ctx->pc = 0x111828u;
        goto label_111828;
    }
    ctx->pc = 0x111820u;
    {
        const bool branch_taken_0x111820 = (GPR_S32(ctx, 8) <= 0);
        if (branch_taken_0x111820) {
            ctx->pc = 0x111858u;
            goto label_111858;
        }
    }
    ctx->pc = 0x111828u;
label_111828:
    // 0x111828: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x111828u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_11182c:
    // 0x11182c: 0x0  nop
    ctx->pc = 0x11182cu;
    // NOP
label_111830:
    // 0x111830: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x111830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_111834:
    // 0x111834: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x111834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_111838:
    // 0x111838: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x111838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_11183c:
    // 0x11183c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x11183cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_111840:
    // 0x111840: 0x60f809  jalr        $v1
label_111844:
    if (ctx->pc == 0x111844u) {
        ctx->pc = 0x111844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111840u;
        // 0x111844: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111848u;
        goto label_111848;
    }
    ctx->pc = 0x111840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x111848u);
        ctx->pc = 0x111844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111840u;
        // 0x111844: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111840u, 0x111848u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x111848u;
label_111848:
    // 0x111848: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x111848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_11184c:
    // 0x11184c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11184cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_111850:
    // 0x111850: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
label_111854:
    if (ctx->pc == 0x111854u) {
        ctx->pc = 0x111854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111850u;
        // 0x111854: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111858u;
        goto label_111858;
    }
    ctx->pc = 0x111850u;
    {
        const bool branch_taken_0x111850 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x111854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111850u;
        // 0x111854: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111850) {
            ctx->pc = 0x111830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111830;
        }
    }
    ctx->pc = 0x111858u;
label_111858:
    // 0x111858: 0x1280000d  beqz        $s4, . + 4 + (0xD << 2)
label_11185c:
    if (ctx->pc == 0x11185Cu) {
        ctx->pc = 0x11185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111858u;
        // 0x11185c: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111860u;
        goto label_111860;
    }
    ctx->pc = 0x111858u;
    {
        const bool branch_taken_0x111858 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x11185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111858u;
        // 0x11185c: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111858) {
            ctx->pc = 0x111890u;
            goto label_111890;
        }
    }
    ctx->pc = 0x111860u;
label_111860:
    // 0x111860: 0x82460000  lb          $a2, 0x0($s2)
    ctx->pc = 0x111860u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_111864:
    // 0x111864: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x111864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_111868:
    // 0x111868: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x111868u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_11186c:
    // 0x11186c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x11186cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_111870:
    // 0x111870: 0x60f809  jalr        $v1
label_111874:
    if (ctx->pc == 0x111874u) {
        ctx->pc = 0x111874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111870u;
        // 0x111874: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111878u;
        goto label_111878;
    }
    ctx->pc = 0x111870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x111878u);
        ctx->pc = 0x111874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111870u;
        // 0x111874: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111870u, 0x111878u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x111878u;
label_111878:
    // 0x111878: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x111878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_11187c:
    // 0x11187c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11187cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_111880:
    // 0x111880: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x111880u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_111884:
    // 0x111884: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_111888:
    if (ctx->pc == 0x111888u) {
        ctx->pc = 0x111888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111884u;
        // 0x111888: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11188Cu;
        goto label_11188c;
    }
    ctx->pc = 0x111884u;
    {
        const bool branch_taken_0x111884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111884u;
        // 0x111888: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111884) {
            ctx->pc = 0x111860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111860;
        }
    }
    ctx->pc = 0x11188Cu;
label_11188c:
    // 0x11188c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x11188cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_111890:
    // 0x111890: 0x18a0ff16  blez        $a1, . + 4 + (-0xEA << 2)
label_111894:
    if (ctx->pc == 0x111894u) {
        ctx->pc = 0x111894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111890u;
        // 0x111894: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111898u;
        goto label_111898;
    }
    ctx->pc = 0x111890u;
    {
        const bool branch_taken_0x111890 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x111894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111890u;
        // 0x111894: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111890) {
            ctx->pc = 0x1114ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1114ec;
        }
    }
    ctx->pc = 0x111898u;
label_111898:
    // 0x111898: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x111898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_11189c:
    // 0x11189c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x11189cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1118a0:
    // 0x1118a0: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x1118a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1118a4:
    // 0x1118a4: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x1118a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_1118a8:
    // 0x1118a8: 0x60f809  jalr        $v1
label_1118ac:
    if (ctx->pc == 0x1118ACu) {
        ctx->pc = 0x1118ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1118A8u;
        // 0x1118ac: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1118B0u;
        goto label_1118b0;
    }
    ctx->pc = 0x1118A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1118B0u);
        ctx->pc = 0x1118ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1118A8u;
        // 0x1118ac: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1118A8u, 0x1118B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1118B0u;
label_1118b0:
    // 0x1118b0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1118b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1118b4:
    // 0x1118b4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1118b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1118b8:
    // 0x1118b8: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
label_1118bc:
    if (ctx->pc == 0x1118BCu) {
        ctx->pc = 0x1118BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1118B8u;
        // 0x1118bc: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1118C0u;
        goto label_1118c0;
    }
    ctx->pc = 0x1118B8u;
    {
        const bool branch_taken_0x1118b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1118BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1118B8u;
        // 0x1118bc: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1118b8) {
            ctx->pc = 0x111898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111898;
        }
    }
    ctx->pc = 0x1118C0u;
label_1118c0:
    // 0x1118c0: 0x100000ce  b           . + 4 + (0xCE << 2)
label_1118c4:
    if (ctx->pc == 0x1118C4u) {
        ctx->pc = 0x1118C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1118C0u;
        // 0x1118c4: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1118C8u;
        goto label_1118c8;
    }
    ctx->pc = 0x1118C0u;
    {
        const bool branch_taken_0x1118c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1118C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1118C0u;
        // 0x1118c4: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1118c0) {
            ctx->pc = 0x111BFCu;
            goto label_111bfc;
        }
    }
    ctx->pc = 0x1118C8u;
label_1118c8:
    // 0x1118c8: 0x32a20004  andi        $v0, $s5, 0x4
    ctx->pc = 0x1118c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
label_1118cc:
    // 0x1118cc: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
label_1118d0:
    if (ctx->pc == 0x1118D0u) {
        ctx->pc = 0x1118D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1118CCu;
        // 0x1118d0: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1118D4u;
        goto label_1118d4;
    }
    ctx->pc = 0x1118CCu;
    {
        const bool branch_taken_0x1118cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1118D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1118CCu;
        // 0x1118d0: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1118cc) {
            ctx->pc = 0x111AACu;
            goto label_111aac;
        }
    }
    ctx->pc = 0x1118D4u;
label_1118d4:
    // 0x1118d4: 0x14e2002e  bne         $a3, $v0, . + 4 + (0x2E << 2)
label_1118d8:
    if (ctx->pc == 0x1118D8u) {
        ctx->pc = 0x1118D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1118D4u;
        // 0x1118d8: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1118DCu;
        goto label_1118dc;
    }
    ctx->pc = 0x1118D4u;
    {
        const bool branch_taken_0x1118d4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1118D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1118D4u;
        // 0x1118d8: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1118d4) {
            ctx->pc = 0x111990u;
            goto label_111990;
        }
    }
    ctx->pc = 0x1118DCu;
label_1118dc:
    // 0x1118dc: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x1118dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_1118e0:
    // 0x1118e0: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
label_1118e4:
    if (ctx->pc == 0x1118E4u) {
        ctx->pc = 0x1118E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1118E0u;
        // 0x1118e4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1118E8u;
        goto label_1118e8;
    }
    ctx->pc = 0x1118E0u;
    {
        const bool branch_taken_0x1118e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1118E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1118E0u;
        // 0x1118e4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1118e0) {
            ctx->pc = 0x11193Cu;
            goto label_11193c;
        }
    }
    ctx->pc = 0x1118E8u;
label_1118e8:
    // 0x1118e8: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x1118e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1118ec:
    // 0x1118ec: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x1118ecu;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_1118f0:
    // 0x1118f0: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x1118f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_1118f4:
    // 0x1118f4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1118f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1118f8:
    // 0x1118f8: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x1118f8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1118fc:
    // 0x1118fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1118fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_111900:
    // 0x111900: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x111900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_111904:
    // 0x111904: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x111904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_111908:
    // 0x111908: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x111908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
label_11190c:
    // 0x11190c: 0x60f809  jalr        $v1
label_111910:
    if (ctx->pc == 0x111910u) {
        ctx->pc = 0x111910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11190Cu;
        // 0x111910: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111914u;
        goto label_111914;
    }
    ctx->pc = 0x11190Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x111914u);
        ctx->pc = 0x111910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11190Cu;
        // 0x111910: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11190Cu, 0x111914u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x111914u;
label_111914:
    // 0x111914: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x111914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_111918:
    // 0x111918: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x111918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_11191c:
    // 0x11191c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11191cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_111920:
    // 0x111920: 0x7ba70060  lq          $a3, 0x60($sp)
    ctx->pc = 0x111920u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_111924:
    // 0x111924: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x111924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_111928:
    // 0x111928: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x111928u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_11192c:
    // 0x11192c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_111930:
    if (ctx->pc == 0x111930u) {
        ctx->pc = 0x111930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11192Cu;
        // 0x111930: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111934u;
        goto label_111934;
    }
    ctx->pc = 0x11192Cu;
    {
        const bool branch_taken_0x11192c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11192Cu;
        // 0x111930: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11192c) {
            ctx->pc = 0x1118F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1118f0;
        }
    }
    ctx->pc = 0x111934u;
label_111934:
    // 0x111934: 0x10000003  b           . + 4 + (0x3 << 2)
label_111938:
    if (ctx->pc == 0x111938u) {
        ctx->pc = 0x111938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111934u;
        // 0x111938: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11193Cu;
        goto label_11193c;
    }
    ctx->pc = 0x111934u;
    {
        const bool branch_taken_0x111934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111934u;
        // 0x111938: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111934) {
            ctx->pc = 0x111944u;
            goto label_111944;
        }
    }
    ctx->pc = 0x11193Cu;
label_11193c:
    // 0x11193c: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x11193cu;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_111940:
    // 0x111940: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x111940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_111944:
    // 0x111944: 0x1840003d  blez        $v0, . + 4 + (0x3D << 2)
label_111948:
    if (ctx->pc == 0x111948u) {
        ctx->pc = 0x11194Cu;
        goto label_11194c;
    }
    ctx->pc = 0x111944u;
    {
        const bool branch_taken_0x111944 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x111944) {
            ctx->pc = 0x111A3Cu;
            goto label_111a3c;
        }
    }
    ctx->pc = 0x11194Cu;
label_11194c:
    // 0x11194c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11194cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_111950:
    // 0x111950: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x111950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_111954:
    // 0x111954: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x111954u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_111958:
    // 0x111958: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x111958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_11195c:
    // 0x11195c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x11195cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_111960:
    // 0x111960: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x111960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_111964:
    // 0x111964: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x111964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
label_111968:
    // 0x111968: 0x60f809  jalr        $v1
label_11196c:
    if (ctx->pc == 0x11196Cu) {
        ctx->pc = 0x11196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111968u;
        // 0x11196c: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111970u;
        goto label_111970;
    }
    ctx->pc = 0x111968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x111970u);
        ctx->pc = 0x11196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111968u;
        // 0x11196c: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111968u, 0x111970u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x111970u;
label_111970:
    // 0x111970: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x111970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_111974:
    // 0x111974: 0x7ba70060  lq          $a3, 0x60($sp)
    ctx->pc = 0x111974u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_111978:
    // 0x111978: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x111978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_11197c:
    // 0x11197c: 0x7ba80070  lq          $t0, 0x70($sp)
    ctx->pc = 0x11197cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_111980:
    // 0x111980: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
label_111984:
    if (ctx->pc == 0x111984u) {
        ctx->pc = 0x111984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111980u;
        // 0x111984: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111988u;
        goto label_111988;
    }
    ctx->pc = 0x111980u;
    {
        const bool branch_taken_0x111980 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x111984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111980u;
        // 0x111984: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111980) {
            ctx->pc = 0x111950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111950;
        }
    }
    ctx->pc = 0x111988u;
label_111988:
    // 0x111988: 0x1000002c  b           . + 4 + (0x2C << 2)
label_11198c:
    if (ctx->pc == 0x11198Cu) {
        ctx->pc = 0x111990u;
        goto label_111990;
    }
    ctx->pc = 0x111988u;
    {
        const bool branch_taken_0x111988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x111988) {
            ctx->pc = 0x111A3Cu;
            goto label_111a3c;
        }
    }
    ctx->pc = 0x111990u;
label_111990:
    // 0x111990: 0x18a00015  blez        $a1, . + 4 + (0x15 << 2)
label_111994:
    if (ctx->pc == 0x111994u) {
        ctx->pc = 0x111994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111990u;
        // 0x111994: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111998u;
        goto label_111998;
    }
    ctx->pc = 0x111990u;
    {
        const bool branch_taken_0x111990 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x111994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111990u;
        // 0x111994: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111990) {
            ctx->pc = 0x1119E8u;
            goto label_1119e8;
        }
    }
    ctx->pc = 0x111998u;
label_111998:
    // 0x111998: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x111998u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_11199c:
    // 0x11199c: 0x0  nop
    ctx->pc = 0x11199cu;
    // NOP
label_1119a0:
    // 0x1119a0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1119a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1119a4:
    // 0x1119a4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1119a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1119a8:
    // 0x1119a8: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x1119a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1119ac:
    // 0x1119ac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1119acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1119b0:
    // 0x1119b0: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x1119b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_1119b4:
    // 0x1119b4: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x1119b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
label_1119b8:
    // 0x1119b8: 0x60f809  jalr        $v1
label_1119bc:
    if (ctx->pc == 0x1119BCu) {
        ctx->pc = 0x1119BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1119B8u;
        // 0x1119bc: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1119C0u;
        goto label_1119c0;
    }
    ctx->pc = 0x1119B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1119C0u);
        ctx->pc = 0x1119BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1119B8u;
        // 0x1119bc: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1119B8u, 0x1119C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1119C0u;
label_1119c0:
    // 0x1119c0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1119c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1119c4:
    // 0x1119c4: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1119c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1119c8:
    // 0x1119c8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1119c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1119cc:
    // 0x1119cc: 0x7ba70060  lq          $a3, 0x60($sp)
    ctx->pc = 0x1119ccu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1119d0:
    // 0x1119d0: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x1119d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_1119d4:
    // 0x1119d4: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x1119d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1119d8:
    // 0x1119d8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_1119dc:
    if (ctx->pc == 0x1119DCu) {
        ctx->pc = 0x1119DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1119D8u;
        // 0x1119dc: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1119E0u;
        goto label_1119e0;
    }
    ctx->pc = 0x1119D8u;
    {
        const bool branch_taken_0x1119d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1119DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1119D8u;
        // 0x1119dc: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1119d8) {
            ctx->pc = 0x1119A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1119a0;
        }
    }
    ctx->pc = 0x1119E0u;
label_1119e0:
    // 0x1119e0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1119e4:
    if (ctx->pc == 0x1119E4u) {
        ctx->pc = 0x1119E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1119E0u;
        // 0x1119e4: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1119E8u;
        goto label_1119e8;
    }
    ctx->pc = 0x1119E0u;
    {
        const bool branch_taken_0x1119e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1119E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1119E0u;
        // 0x1119e4: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1119e0) {
            ctx->pc = 0x1119F0u;
            goto label_1119f0;
        }
    }
    ctx->pc = 0x1119E8u;
label_1119e8:
    // 0x1119e8: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x1119e8u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_1119ec:
    // 0x1119ec: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x1119ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_1119f0:
    // 0x1119f0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1119f4:
    if (ctx->pc == 0x1119F4u) {
        ctx->pc = 0x1119F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1119F0u;
        // 0x1119f4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1119F8u;
        goto label_1119f8;
    }
    ctx->pc = 0x1119F0u;
    {
        const bool branch_taken_0x1119f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1119F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1119F0u;
        // 0x1119f4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1119f0) {
            ctx->pc = 0x111A3Cu;
            goto label_111a3c;
        }
    }
    ctx->pc = 0x1119F8u;
label_1119f8:
    // 0x1119f8: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x1119f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1119fc:
    // 0x1119fc: 0x0  nop
    ctx->pc = 0x1119fcu;
    // NOP
label_111a00:
    // 0x111a00: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x111a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_111a04:
    // 0x111a04: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x111a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_111a08:
    // 0x111a08: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x111a08u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_111a0c:
    // 0x111a0c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x111a0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_111a10:
    // 0x111a10: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x111a10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_111a14:
    // 0x111a14: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x111a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_111a18:
    // 0x111a18: 0x60f809  jalr        $v1
label_111a1c:
    if (ctx->pc == 0x111A1Cu) {
        ctx->pc = 0x111A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A18u;
        // 0x111a1c: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111A20u;
        goto label_111a20;
    }
    ctx->pc = 0x111A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x111A20u);
        ctx->pc = 0x111A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A18u;
        // 0x111a1c: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111A18u, 0x111A20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x111A20u;
label_111a20:
    // 0x111a20: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x111a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_111a24:
    // 0x111a24: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x111a24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_111a28:
    // 0x111a28: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x111a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_111a2c:
    // 0x111a2c: 0x7ba80070  lq          $t0, 0x70($sp)
    ctx->pc = 0x111a2cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_111a30:
    // 0x111a30: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x111a30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_111a34:
    // 0x111a34: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_111a38:
    if (ctx->pc == 0x111A38u) {
        ctx->pc = 0x111A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A34u;
        // 0x111a38: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111A3Cu;
        goto label_111a3c;
    }
    ctx->pc = 0x111A34u;
    {
        const bool branch_taken_0x111a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A34u;
        // 0x111a38: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a34) {
            ctx->pc = 0x111A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111a00;
        }
    }
    ctx->pc = 0x111A3Cu;
label_111a3c:
    // 0x111a3c: 0x1900000c  blez        $t0, . + 4 + (0xC << 2)
label_111a40:
    if (ctx->pc == 0x111A40u) {
        ctx->pc = 0x111A44u;
        goto label_111a44;
    }
    ctx->pc = 0x111A3Cu;
    {
        const bool branch_taken_0x111a3c = (GPR_S32(ctx, 8) <= 0);
        if (branch_taken_0x111a3c) {
            ctx->pc = 0x111A70u;
            goto label_111a70;
        }
    }
    ctx->pc = 0x111A44u;
label_111a44:
    // 0x111a44: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x111a44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_111a48:
    // 0x111a48: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x111a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_111a4c:
    // 0x111a4c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x111a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_111a50:
    // 0x111a50: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x111a50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_111a54:
    // 0x111a54: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x111a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_111a58:
    // 0x111a58: 0x60f809  jalr        $v1
label_111a5c:
    if (ctx->pc == 0x111A5Cu) {
        ctx->pc = 0x111A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A58u;
        // 0x111a5c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111A60u;
        goto label_111a60;
    }
    ctx->pc = 0x111A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x111A60u);
        ctx->pc = 0x111A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A58u;
        // 0x111a5c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111A58u, 0x111A60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x111A60u;
label_111a60:
    // 0x111a60: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x111a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_111a64:
    // 0x111a64: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x111a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_111a68:
    // 0x111a68: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
label_111a6c:
    if (ctx->pc == 0x111A6Cu) {
        ctx->pc = 0x111A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A68u;
        // 0x111a6c: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111A70u;
        goto label_111a70;
    }
    ctx->pc = 0x111A68u;
    {
        const bool branch_taken_0x111a68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x111A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A68u;
        // 0x111a6c: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a68) {
            ctx->pc = 0x111A48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111a48;
        }
    }
    ctx->pc = 0x111A70u;
label_111a70:
    // 0x111a70: 0x52800062  beql        $s4, $zero, . + 4 + (0x62 << 2)
label_111a74:
    if (ctx->pc == 0x111A74u) {
        ctx->pc = 0x111A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A70u;
        // 0x111a74: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111A78u;
        goto label_111a78;
    }
    ctx->pc = 0x111A70u;
    {
        const bool branch_taken_0x111a70 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x111a70) {
            ctx->pc = 0x111A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111A70u;
            // 0x111a74: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111BFCu;
            goto label_111bfc;
        }
    }
    ctx->pc = 0x111A78u;
label_111a78:
    // 0x111a78: 0x82460000  lb          $a2, 0x0($s2)
    ctx->pc = 0x111a78u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_111a7c:
    // 0x111a7c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x111a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_111a80:
    // 0x111a80: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x111a80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_111a84:
    // 0x111a84: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x111a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_111a88:
    // 0x111a88: 0x60f809  jalr        $v1
label_111a8c:
    if (ctx->pc == 0x111A8Cu) {
        ctx->pc = 0x111A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A88u;
        // 0x111a8c: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111A90u;
        goto label_111a90;
    }
    ctx->pc = 0x111A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x111A90u);
        ctx->pc = 0x111A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A88u;
        // 0x111a8c: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111A88u, 0x111A90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x111A90u;
label_111a90:
    // 0x111a90: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x111a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_111a94:
    // 0x111a94: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x111a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_111a98:
    // 0x111a98: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x111a98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_111a9c:
    // 0x111a9c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_111aa0:
    if (ctx->pc == 0x111AA0u) {
        ctx->pc = 0x111AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A9Cu;
        // 0x111aa0: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111AA4u;
        goto label_111aa4;
    }
    ctx->pc = 0x111A9Cu;
    {
        const bool branch_taken_0x111a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A9Cu;
        // 0x111aa0: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a9c) {
            ctx->pc = 0x111A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111a78;
        }
    }
    ctx->pc = 0x111AA4u;
label_111aa4:
    // 0x111aa4: 0x10000055  b           . + 4 + (0x55 << 2)
label_111aa8:
    if (ctx->pc == 0x111AA8u) {
        ctx->pc = 0x111AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111AA4u;
        // 0x111aa8: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111AACu;
        goto label_111aac;
    }
    ctx->pc = 0x111AA4u;
    {
        const bool branch_taken_0x111aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111AA4u;
        // 0x111aa8: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111aa4) {
            ctx->pc = 0x111BFCu;
            goto label_111bfc;
        }
    }
    ctx->pc = 0x111AACu;
label_111aac:
    // 0x111aac: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x111aacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_111ab0:
    // 0x111ab0: 0x18a00015  blez        $a1, . + 4 + (0x15 << 2)
label_111ab4:
    if (ctx->pc == 0x111AB4u) {
        ctx->pc = 0x111AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111AB0u;
        // 0x111ab4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111AB8u;
        goto label_111ab8;
    }
    ctx->pc = 0x111AB0u;
    {
        const bool branch_taken_0x111ab0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x111AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111AB0u;
        // 0x111ab4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111ab0) {
            ctx->pc = 0x111B08u;
            goto label_111b08;
        }
    }
    ctx->pc = 0x111AB8u;
label_111ab8:
    // 0x111ab8: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x111ab8u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_111abc:
    // 0x111abc: 0x0  nop
    ctx->pc = 0x111abcu;
    // NOP
label_111ac0:
    // 0x111ac0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x111ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_111ac4:
    // 0x111ac4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x111ac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_111ac8:
    // 0x111ac8: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x111ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_111acc:
    // 0x111acc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x111accu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_111ad0:
    // 0x111ad0: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x111ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_111ad4:
    // 0x111ad4: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x111ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
label_111ad8:
    // 0x111ad8: 0x60f809  jalr        $v1
label_111adc:
    if (ctx->pc == 0x111ADCu) {
        ctx->pc = 0x111ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111AD8u;
        // 0x111adc: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111AE0u;
        goto label_111ae0;
    }
    ctx->pc = 0x111AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x111AE0u);
        ctx->pc = 0x111ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111AD8u;
        // 0x111adc: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111AD8u, 0x111AE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x111AE0u;
label_111ae0:
    // 0x111ae0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x111ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_111ae4:
    // 0x111ae4: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x111ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_111ae8:
    // 0x111ae8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x111ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_111aec:
    // 0x111aec: 0x7ba70060  lq          $a3, 0x60($sp)
    ctx->pc = 0x111aecu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_111af0:
    // 0x111af0: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x111af0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_111af4:
    // 0x111af4: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x111af4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_111af8:
    // 0x111af8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_111afc:
    if (ctx->pc == 0x111AFCu) {
        ctx->pc = 0x111AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111AF8u;
        // 0x111afc: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111B00u;
        goto label_111b00;
    }
    ctx->pc = 0x111AF8u;
    {
        const bool branch_taken_0x111af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111AF8u;
        // 0x111afc: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111af8) {
            ctx->pc = 0x111AC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111ac0;
        }
    }
    ctx->pc = 0x111B00u;
label_111b00:
    // 0x111b00: 0x10000003  b           . + 4 + (0x3 << 2)
label_111b04:
    if (ctx->pc == 0x111B04u) {
        ctx->pc = 0x111B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B00u;
        // 0x111b04: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111B08u;
        goto label_111b08;
    }
    ctx->pc = 0x111B00u;
    {
        const bool branch_taken_0x111b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B00u;
        // 0x111b04: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111b00) {
            ctx->pc = 0x111B10u;
            goto label_111b10;
        }
    }
    ctx->pc = 0x111B08u;
label_111b08:
    // 0x111b08: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x111b08u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_111b0c:
    // 0x111b0c: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x111b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_111b10:
    // 0x111b10: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_111b14:
    if (ctx->pc == 0x111B14u) {
        ctx->pc = 0x111B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B10u;
        // 0x111b14: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111B18u;
        goto label_111b18;
    }
    ctx->pc = 0x111B10u;
    {
        const bool branch_taken_0x111b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B10u;
        // 0x111b14: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111b10) {
            ctx->pc = 0x111B5Cu;
            goto label_111b5c;
        }
    }
    ctx->pc = 0x111B18u;
label_111b18:
    // 0x111b18: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x111b18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_111b1c:
    // 0x111b1c: 0x0  nop
    ctx->pc = 0x111b1cu;
    // NOP
label_111b20:
    // 0x111b20: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x111b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_111b24:
    // 0x111b24: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x111b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_111b28:
    // 0x111b28: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x111b28u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_111b2c:
    // 0x111b2c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x111b2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_111b30:
    // 0x111b30: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x111b30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_111b34:
    // 0x111b34: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x111b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_111b38:
    // 0x111b38: 0x60f809  jalr        $v1
label_111b3c:
    if (ctx->pc == 0x111B3Cu) {
        ctx->pc = 0x111B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B38u;
        // 0x111b3c: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111B40u;
        goto label_111b40;
    }
    ctx->pc = 0x111B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x111B40u);
        ctx->pc = 0x111B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B38u;
        // 0x111b3c: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111B38u, 0x111B40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x111B40u;
label_111b40:
    // 0x111b40: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x111b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_111b44:
    // 0x111b44: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x111b44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_111b48:
    // 0x111b48: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x111b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_111b4c:
    // 0x111b4c: 0x7ba80070  lq          $t0, 0x70($sp)
    ctx->pc = 0x111b4cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_111b50:
    // 0x111b50: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x111b50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_111b54:
    // 0x111b54: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_111b58:
    if (ctx->pc == 0x111B58u) {
        ctx->pc = 0x111B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B54u;
        // 0x111b58: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111B5Cu;
        goto label_111b5c;
    }
    ctx->pc = 0x111B54u;
    {
        const bool branch_taken_0x111b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B54u;
        // 0x111b58: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111b54) {
            ctx->pc = 0x111B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111b20;
        }
    }
    ctx->pc = 0x111B5Cu;
label_111b5c:
    // 0x111b5c: 0x1900000c  blez        $t0, . + 4 + (0xC << 2)
label_111b60:
    if (ctx->pc == 0x111B60u) {
        ctx->pc = 0x111B64u;
        goto label_111b64;
    }
    ctx->pc = 0x111B5Cu;
    {
        const bool branch_taken_0x111b5c = (GPR_S32(ctx, 8) <= 0);
        if (branch_taken_0x111b5c) {
            ctx->pc = 0x111B90u;
            goto label_111b90;
        }
    }
    ctx->pc = 0x111B64u;
label_111b64:
    // 0x111b64: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x111b64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_111b68:
    // 0x111b68: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x111b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_111b6c:
    // 0x111b6c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x111b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_111b70:
    // 0x111b70: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x111b70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_111b74:
    // 0x111b74: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x111b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_111b78:
    // 0x111b78: 0x60f809  jalr        $v1
label_111b7c:
    if (ctx->pc == 0x111B7Cu) {
        ctx->pc = 0x111B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B78u;
        // 0x111b7c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111B80u;
        goto label_111b80;
    }
    ctx->pc = 0x111B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x111B80u);
        ctx->pc = 0x111B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B78u;
        // 0x111b7c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111B78u, 0x111B80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x111B80u;
label_111b80:
    // 0x111b80: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x111b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_111b84:
    // 0x111b84: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x111b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_111b88:
    // 0x111b88: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
label_111b8c:
    if (ctx->pc == 0x111B8Cu) {
        ctx->pc = 0x111B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B88u;
        // 0x111b8c: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111B90u;
        goto label_111b90;
    }
    ctx->pc = 0x111B88u;
    {
        const bool branch_taken_0x111b88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x111B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B88u;
        // 0x111b8c: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111b88) {
            ctx->pc = 0x111B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111b68;
        }
    }
    ctx->pc = 0x111B90u;
label_111b90:
    // 0x111b90: 0x5280001a  beql        $s4, $zero, . + 4 + (0x1A << 2)
label_111b94:
    if (ctx->pc == 0x111B94u) {
        ctx->pc = 0x111B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B90u;
        // 0x111b94: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111B98u;
        goto label_111b98;
    }
    ctx->pc = 0x111B90u;
    {
        const bool branch_taken_0x111b90 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x111b90) {
            ctx->pc = 0x111B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111B90u;
            // 0x111b94: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111BFCu;
            goto label_111bfc;
        }
    }
    ctx->pc = 0x111B98u;
label_111b98:
    // 0x111b98: 0x82460000  lb          $a2, 0x0($s2)
    ctx->pc = 0x111b98u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_111b9c:
    // 0x111b9c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x111b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_111ba0:
    // 0x111ba0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x111ba0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_111ba4:
    // 0x111ba4: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x111ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_111ba8:
    // 0x111ba8: 0x60f809  jalr        $v1
label_111bac:
    if (ctx->pc == 0x111BACu) {
        ctx->pc = 0x111BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111BA8u;
        // 0x111bac: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111BB0u;
        goto label_111bb0;
    }
    ctx->pc = 0x111BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x111BB0u);
        ctx->pc = 0x111BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111BA8u;
        // 0x111bac: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111BA8u, 0x111BB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x111BB0u;
label_111bb0:
    // 0x111bb0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x111bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_111bb4:
    // 0x111bb4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x111bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_111bb8:
    // 0x111bb8: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x111bb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_111bbc:
    // 0x111bbc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_111bc0:
    if (ctx->pc == 0x111BC0u) {
        ctx->pc = 0x111BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111BBCu;
        // 0x111bc0: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111BC4u;
        goto label_111bc4;
    }
    ctx->pc = 0x111BBCu;
    {
        const bool branch_taken_0x111bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111BBCu;
        // 0x111bc0: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111bbc) {
            ctx->pc = 0x111B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111b98;
        }
    }
    ctx->pc = 0x111BC4u;
label_111bc4:
    // 0x111bc4: 0x1000000d  b           . + 4 + (0xD << 2)
label_111bc8:
    if (ctx->pc == 0x111BC8u) {
        ctx->pc = 0x111BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111BC4u;
        // 0x111bc8: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111BCCu;
        goto label_111bcc;
    }
    ctx->pc = 0x111BC4u;
    {
        const bool branch_taken_0x111bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111BC4u;
        // 0x111bc8: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111bc4) {
            ctx->pc = 0x111BFCu;
            goto label_111bfc;
        }
    }
    ctx->pc = 0x111BCCu;
label_111bcc:
    // 0x111bcc: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
label_111bd0:
    if (ctx->pc == 0x111BD0u) {
        ctx->pc = 0x111BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111BCCu;
        // 0x111bd0: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111BD4u;
        goto label_111bd4;
    }
    ctx->pc = 0x111BCCu;
    {
        const bool branch_taken_0x111bcc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x111BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111BCCu;
        // 0x111bd0: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111bcc) {
            ctx->pc = 0x111BF8u;
            goto label_111bf8;
        }
    }
    ctx->pc = 0x111BD4u;
label_111bd4:
    // 0x111bd4: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x111bd4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_111bd8:
    // 0x111bd8: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x111bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_111bdc:
    // 0x111bdc: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x111bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_111be0:
    // 0x111be0: 0x60f809  jalr        $v1
label_111be4:
    if (ctx->pc == 0x111BE4u) {
        ctx->pc = 0x111BE8u;
        goto label_111be8;
    }
    ctx->pc = 0x111BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x111BE8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111BE0u, 0x111BE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x111BE8u;
label_111be8:
    // 0x111be8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x111be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_111bec:
    // 0x111bec: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x111becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_111bf0:
    // 0x111bf0: 0x1000fe3e  b           . + 4 + (-0x1C2 << 2)
label_111bf4:
    if (ctx->pc == 0x111BF4u) {
        ctx->pc = 0x111BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111BF0u;
        // 0x111bf4: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111BF8u;
        goto label_111bf8;
    }
    ctx->pc = 0x111BF0u;
    {
        const bool branch_taken_0x111bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111BF0u;
        // 0x111bf4: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111bf0) {
            ctx->pc = 0x1114ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1114ec;
        }
    }
    ctx->pc = 0x111BF8u;
label_111bf8:
    // 0x111bf8: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x111bf8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_111bfc:
    // 0x111bfc: 0x2e5b00b  movn        $s6, $s7, $a1
    ctx->pc = 0x111bfcu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 23));
label_111c00:
    // 0x111c00: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x111c00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_111c04:
    // 0x111c04: 0x1440fcea  bnez        $v0, . + 4 + (-0x316 << 2)
label_111c08:
    if (ctx->pc == 0x111C08u) {
        ctx->pc = 0x111C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C04u;
        // 0x111c08: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111C0Cu;
        goto label_111c0c;
    }
    ctx->pc = 0x111C04u;
    {
        const bool branch_taken_0x111c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C04u;
        // 0x111c08: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111c04) {
            ctx->pc = 0x110FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110fb0;
        }
    }
    ctx->pc = 0x111C0Cu;
label_111c0c:
    // 0x111c0c: 0x10000004  b           . + 4 + (0x4 << 2)
label_111c10:
    if (ctx->pc == 0x111C10u) {
        ctx->pc = 0x111C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C0Cu;
        // 0x111c10: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111C14u;
        goto label_111c14;
    }
    ctx->pc = 0x111C0Cu;
    {
        const bool branch_taken_0x111c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C0Cu;
        // 0x111c10: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111c0c) {
            ctx->pc = 0x111C20u;
            goto label_111c20;
        }
    }
    ctx->pc = 0x111C14u;
label_111c14:
    // 0x111c14: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x111c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_111c18:
    // 0x111c18: 0xafa5005c  sw          $a1, 0x5C($sp)
    ctx->pc = 0x111c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 5));
label_111c1c:
    // 0x111c1c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x111c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_111c20:
    // 0x111c20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x111c20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_111c24:
    // 0x111c24: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x111c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_111c28:
    // 0x111c28: 0x60f809  jalr        $v1
label_111c2c:
    if (ctx->pc == 0x111C2Cu) {
        ctx->pc = 0x111C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C28u;
        // 0x111c2c: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111C30u;
        goto label_111c30;
    }
    ctx->pc = 0x111C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x111C30u);
        ctx->pc = 0x111C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C28u;
        // 0x111c2c: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111C28u, 0x111C30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x111C30u;
label_111c30:
    // 0x111c30: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x111c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_111c34:
    // 0x111c34: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x111c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_111c38:
    // 0x111c38: 0xdfbe0100  ld          $fp, 0x100($sp)
    ctx->pc = 0x111c38u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_111c3c:
    // 0x111c3c: 0xdfb700f0  ld          $s7, 0xF0($sp)
    ctx->pc = 0x111c3cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_111c40:
    // 0x111c40: 0xdfb600e0  ld          $s6, 0xE0($sp)
    ctx->pc = 0x111c40u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_111c44:
    // 0x111c44: 0xdfb500d0  ld          $s5, 0xD0($sp)
    ctx->pc = 0x111c44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_111c48:
    // 0x111c48: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x111c48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_111c4c:
    // 0x111c4c: 0xdfb300b0  ld          $s3, 0xB0($sp)
    ctx->pc = 0x111c4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_111c50:
    // 0x111c50: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x111c50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_111c54:
    // 0x111c54: 0xdfb10090  ld          $s1, 0x90($sp)
    ctx->pc = 0x111c54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_111c58:
    // 0x111c58: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x111c58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_111c5c:
    // 0x111c5c: 0x3e00008  jr          $ra
label_111c60:
    if (ctx->pc == 0x111C60u) {
        ctx->pc = 0x111C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C5Cu;
        // 0x111c60: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111C64u;
        goto label_111c64;
    }
    ctx->pc = 0x111C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C5Cu;
        // 0x111c60: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111C64u;
label_111c64:
    // 0x111c64: 0x0  nop
    ctx->pc = 0x111c64u;
    // NOP
    ctx->pc = 0x111c68u;
}
