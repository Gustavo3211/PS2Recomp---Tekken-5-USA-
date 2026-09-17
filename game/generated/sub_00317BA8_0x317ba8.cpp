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

// Function: sub_00317BA8
// Address: 0x317ba8 - 0x318284
void sub_00317BA8_0x317ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00317BA8_0x317ba8");
#endif

    switch (ctx->pc) {
        case 0x317ba8u: goto label_317ba8;
        case 0x317bacu: goto label_317bac;
        case 0x317bb0u: goto label_317bb0;
        case 0x317bb4u: goto label_317bb4;
        case 0x317bb8u: goto label_317bb8;
        case 0x317bbcu: goto label_317bbc;
        case 0x317bc0u: goto label_317bc0;
        case 0x317bc4u: goto label_317bc4;
        case 0x317bc8u: goto label_317bc8;
        case 0x317bccu: goto label_317bcc;
        case 0x317bd0u: goto label_317bd0;
        case 0x317bd4u: goto label_317bd4;
        case 0x317bd8u: goto label_317bd8;
        case 0x317bdcu: goto label_317bdc;
        case 0x317be0u: goto label_317be0;
        case 0x317be4u: goto label_317be4;
        case 0x317be8u: goto label_317be8;
        case 0x317becu: goto label_317bec;
        case 0x317bf0u: goto label_317bf0;
        case 0x317bf4u: goto label_317bf4;
        case 0x317bf8u: goto label_317bf8;
        case 0x317bfcu: goto label_317bfc;
        case 0x317c00u: goto label_317c00;
        case 0x317c04u: goto label_317c04;
        case 0x317c08u: goto label_317c08;
        case 0x317c0cu: goto label_317c0c;
        case 0x317c10u: goto label_317c10;
        case 0x317c14u: goto label_317c14;
        case 0x317c18u: goto label_317c18;
        case 0x317c1cu: goto label_317c1c;
        case 0x317c20u: goto label_317c20;
        case 0x317c24u: goto label_317c24;
        case 0x317c28u: goto label_317c28;
        case 0x317c2cu: goto label_317c2c;
        case 0x317c30u: goto label_317c30;
        case 0x317c34u: goto label_317c34;
        case 0x317c38u: goto label_317c38;
        case 0x317c3cu: goto label_317c3c;
        case 0x317c40u: goto label_317c40;
        case 0x317c44u: goto label_317c44;
        case 0x317c48u: goto label_317c48;
        case 0x317c4cu: goto label_317c4c;
        case 0x317c50u: goto label_317c50;
        case 0x317c54u: goto label_317c54;
        case 0x317c58u: goto label_317c58;
        case 0x317c5cu: goto label_317c5c;
        case 0x317c60u: goto label_317c60;
        case 0x317c64u: goto label_317c64;
        case 0x317c68u: goto label_317c68;
        case 0x317c6cu: goto label_317c6c;
        case 0x317c70u: goto label_317c70;
        case 0x317c74u: goto label_317c74;
        case 0x317c78u: goto label_317c78;
        case 0x317c7cu: goto label_317c7c;
        case 0x317c80u: goto label_317c80;
        case 0x317c84u: goto label_317c84;
        case 0x317c88u: goto label_317c88;
        case 0x317c8cu: goto label_317c8c;
        case 0x317c90u: goto label_317c90;
        case 0x317c94u: goto label_317c94;
        case 0x317c98u: goto label_317c98;
        case 0x317c9cu: goto label_317c9c;
        case 0x317ca0u: goto label_317ca0;
        case 0x317ca4u: goto label_317ca4;
        case 0x317ca8u: goto label_317ca8;
        case 0x317cacu: goto label_317cac;
        case 0x317cb0u: goto label_317cb0;
        case 0x317cb4u: goto label_317cb4;
        case 0x317cb8u: goto label_317cb8;
        case 0x317cbcu: goto label_317cbc;
        case 0x317cc0u: goto label_317cc0;
        case 0x317cc4u: goto label_317cc4;
        case 0x317cc8u: goto label_317cc8;
        case 0x317cccu: goto label_317ccc;
        case 0x317cd0u: goto label_317cd0;
        case 0x317cd4u: goto label_317cd4;
        case 0x317cd8u: goto label_317cd8;
        case 0x317cdcu: goto label_317cdc;
        case 0x317ce0u: goto label_317ce0;
        case 0x317ce4u: goto label_317ce4;
        case 0x317ce8u: goto label_317ce8;
        case 0x317cecu: goto label_317cec;
        case 0x317cf0u: goto label_317cf0;
        case 0x317cf4u: goto label_317cf4;
        case 0x317cf8u: goto label_317cf8;
        case 0x317cfcu: goto label_317cfc;
        case 0x317d00u: goto label_317d00;
        case 0x317d04u: goto label_317d04;
        case 0x317d08u: goto label_317d08;
        case 0x317d0cu: goto label_317d0c;
        case 0x317d10u: goto label_317d10;
        case 0x317d14u: goto label_317d14;
        case 0x317d18u: goto label_317d18;
        case 0x317d1cu: goto label_317d1c;
        case 0x317d20u: goto label_317d20;
        case 0x317d24u: goto label_317d24;
        case 0x317d28u: goto label_317d28;
        case 0x317d2cu: goto label_317d2c;
        case 0x317d30u: goto label_317d30;
        case 0x317d34u: goto label_317d34;
        case 0x317d38u: goto label_317d38;
        case 0x317d3cu: goto label_317d3c;
        case 0x317d40u: goto label_317d40;
        case 0x317d44u: goto label_317d44;
        case 0x317d48u: goto label_317d48;
        case 0x317d4cu: goto label_317d4c;
        case 0x317d50u: goto label_317d50;
        case 0x317d54u: goto label_317d54;
        case 0x317d58u: goto label_317d58;
        case 0x317d5cu: goto label_317d5c;
        case 0x317d60u: goto label_317d60;
        case 0x317d64u: goto label_317d64;
        case 0x317d68u: goto label_317d68;
        case 0x317d6cu: goto label_317d6c;
        case 0x317d70u: goto label_317d70;
        case 0x317d74u: goto label_317d74;
        case 0x317d78u: goto label_317d78;
        case 0x317d7cu: goto label_317d7c;
        case 0x317d80u: goto label_317d80;
        case 0x317d84u: goto label_317d84;
        case 0x317d88u: goto label_317d88;
        case 0x317d8cu: goto label_317d8c;
        case 0x317d90u: goto label_317d90;
        case 0x317d94u: goto label_317d94;
        case 0x317d98u: goto label_317d98;
        case 0x317d9cu: goto label_317d9c;
        case 0x317da0u: goto label_317da0;
        case 0x317da4u: goto label_317da4;
        case 0x317da8u: goto label_317da8;
        case 0x317dacu: goto label_317dac;
        case 0x317db0u: goto label_317db0;
        case 0x317db4u: goto label_317db4;
        case 0x317db8u: goto label_317db8;
        case 0x317dbcu: goto label_317dbc;
        case 0x317dc0u: goto label_317dc0;
        case 0x317dc4u: goto label_317dc4;
        case 0x317dc8u: goto label_317dc8;
        case 0x317dccu: goto label_317dcc;
        case 0x317dd0u: goto label_317dd0;
        case 0x317dd4u: goto label_317dd4;
        case 0x317dd8u: goto label_317dd8;
        case 0x317ddcu: goto label_317ddc;
        case 0x317de0u: goto label_317de0;
        case 0x317de4u: goto label_317de4;
        case 0x317de8u: goto label_317de8;
        case 0x317decu: goto label_317dec;
        case 0x317df0u: goto label_317df0;
        case 0x317df4u: goto label_317df4;
        case 0x317df8u: goto label_317df8;
        case 0x317dfcu: goto label_317dfc;
        case 0x317e00u: goto label_317e00;
        case 0x317e04u: goto label_317e04;
        case 0x317e08u: goto label_317e08;
        case 0x317e0cu: goto label_317e0c;
        case 0x317e10u: goto label_317e10;
        case 0x317e14u: goto label_317e14;
        case 0x317e18u: goto label_317e18;
        case 0x317e1cu: goto label_317e1c;
        case 0x317e20u: goto label_317e20;
        case 0x317e24u: goto label_317e24;
        case 0x317e28u: goto label_317e28;
        case 0x317e2cu: goto label_317e2c;
        case 0x317e30u: goto label_317e30;
        case 0x317e34u: goto label_317e34;
        case 0x317e38u: goto label_317e38;
        case 0x317e3cu: goto label_317e3c;
        case 0x317e40u: goto label_317e40;
        case 0x317e44u: goto label_317e44;
        case 0x317e48u: goto label_317e48;
        case 0x317e4cu: goto label_317e4c;
        case 0x317e50u: goto label_317e50;
        case 0x317e54u: goto label_317e54;
        case 0x317e58u: goto label_317e58;
        case 0x317e5cu: goto label_317e5c;
        case 0x317e60u: goto label_317e60;
        case 0x317e64u: goto label_317e64;
        case 0x317e68u: goto label_317e68;
        case 0x317e6cu: goto label_317e6c;
        case 0x317e70u: goto label_317e70;
        case 0x317e74u: goto label_317e74;
        case 0x317e78u: goto label_317e78;
        case 0x317e7cu: goto label_317e7c;
        case 0x317e80u: goto label_317e80;
        case 0x317e84u: goto label_317e84;
        case 0x317e88u: goto label_317e88;
        case 0x317e8cu: goto label_317e8c;
        case 0x317e90u: goto label_317e90;
        case 0x317e94u: goto label_317e94;
        case 0x317e98u: goto label_317e98;
        case 0x317e9cu: goto label_317e9c;
        case 0x317ea0u: goto label_317ea0;
        case 0x317ea4u: goto label_317ea4;
        case 0x317ea8u: goto label_317ea8;
        case 0x317eacu: goto label_317eac;
        case 0x317eb0u: goto label_317eb0;
        case 0x317eb4u: goto label_317eb4;
        case 0x317eb8u: goto label_317eb8;
        case 0x317ebcu: goto label_317ebc;
        case 0x317ec0u: goto label_317ec0;
        case 0x317ec4u: goto label_317ec4;
        case 0x317ec8u: goto label_317ec8;
        case 0x317eccu: goto label_317ecc;
        case 0x317ed0u: goto label_317ed0;
        case 0x317ed4u: goto label_317ed4;
        case 0x317ed8u: goto label_317ed8;
        case 0x317edcu: goto label_317edc;
        case 0x317ee0u: goto label_317ee0;
        case 0x317ee4u: goto label_317ee4;
        case 0x317ee8u: goto label_317ee8;
        case 0x317eecu: goto label_317eec;
        case 0x317ef0u: goto label_317ef0;
        case 0x317ef4u: goto label_317ef4;
        case 0x317ef8u: goto label_317ef8;
        case 0x317efcu: goto label_317efc;
        case 0x317f00u: goto label_317f00;
        case 0x317f04u: goto label_317f04;
        case 0x317f08u: goto label_317f08;
        case 0x317f0cu: goto label_317f0c;
        case 0x317f10u: goto label_317f10;
        case 0x317f14u: goto label_317f14;
        case 0x317f18u: goto label_317f18;
        case 0x317f1cu: goto label_317f1c;
        case 0x317f20u: goto label_317f20;
        case 0x317f24u: goto label_317f24;
        case 0x317f28u: goto label_317f28;
        case 0x317f2cu: goto label_317f2c;
        case 0x317f30u: goto label_317f30;
        case 0x317f34u: goto label_317f34;
        case 0x317f38u: goto label_317f38;
        case 0x317f3cu: goto label_317f3c;
        case 0x317f40u: goto label_317f40;
        case 0x317f44u: goto label_317f44;
        case 0x317f48u: goto label_317f48;
        case 0x317f4cu: goto label_317f4c;
        case 0x317f50u: goto label_317f50;
        case 0x317f54u: goto label_317f54;
        case 0x317f58u: goto label_317f58;
        case 0x317f5cu: goto label_317f5c;
        case 0x317f60u: goto label_317f60;
        case 0x317f64u: goto label_317f64;
        case 0x317f68u: goto label_317f68;
        case 0x317f6cu: goto label_317f6c;
        case 0x317f70u: goto label_317f70;
        case 0x317f74u: goto label_317f74;
        case 0x317f78u: goto label_317f78;
        case 0x317f7cu: goto label_317f7c;
        case 0x317f80u: goto label_317f80;
        case 0x317f84u: goto label_317f84;
        case 0x317f88u: goto label_317f88;
        case 0x317f8cu: goto label_317f8c;
        case 0x317f90u: goto label_317f90;
        case 0x317f94u: goto label_317f94;
        case 0x317f98u: goto label_317f98;
        case 0x317f9cu: goto label_317f9c;
        case 0x317fa0u: goto label_317fa0;
        case 0x317fa4u: goto label_317fa4;
        case 0x317fa8u: goto label_317fa8;
        case 0x317facu: goto label_317fac;
        case 0x317fb0u: goto label_317fb0;
        case 0x317fb4u: goto label_317fb4;
        case 0x317fb8u: goto label_317fb8;
        case 0x317fbcu: goto label_317fbc;
        case 0x317fc0u: goto label_317fc0;
        case 0x317fc4u: goto label_317fc4;
        case 0x317fc8u: goto label_317fc8;
        case 0x317fccu: goto label_317fcc;
        case 0x317fd0u: goto label_317fd0;
        case 0x317fd4u: goto label_317fd4;
        case 0x317fd8u: goto label_317fd8;
        case 0x317fdcu: goto label_317fdc;
        case 0x317fe0u: goto label_317fe0;
        case 0x317fe4u: goto label_317fe4;
        case 0x317fe8u: goto label_317fe8;
        case 0x317fecu: goto label_317fec;
        case 0x317ff0u: goto label_317ff0;
        case 0x317ff4u: goto label_317ff4;
        case 0x317ff8u: goto label_317ff8;
        case 0x317ffcu: goto label_317ffc;
        case 0x318000u: goto label_318000;
        case 0x318004u: goto label_318004;
        case 0x318008u: goto label_318008;
        case 0x31800cu: goto label_31800c;
        case 0x318010u: goto label_318010;
        case 0x318014u: goto label_318014;
        case 0x318018u: goto label_318018;
        case 0x31801cu: goto label_31801c;
        case 0x318020u: goto label_318020;
        case 0x318024u: goto label_318024;
        case 0x318028u: goto label_318028;
        case 0x31802cu: goto label_31802c;
        case 0x318030u: goto label_318030;
        case 0x318034u: goto label_318034;
        case 0x318038u: goto label_318038;
        case 0x31803cu: goto label_31803c;
        case 0x318040u: goto label_318040;
        case 0x318044u: goto label_318044;
        case 0x318048u: goto label_318048;
        case 0x31804cu: goto label_31804c;
        case 0x318050u: goto label_318050;
        case 0x318054u: goto label_318054;
        case 0x318058u: goto label_318058;
        case 0x31805cu: goto label_31805c;
        case 0x318060u: goto label_318060;
        case 0x318064u: goto label_318064;
        case 0x318068u: goto label_318068;
        case 0x31806cu: goto label_31806c;
        case 0x318070u: goto label_318070;
        case 0x318074u: goto label_318074;
        case 0x318078u: goto label_318078;
        case 0x31807cu: goto label_31807c;
        case 0x318080u: goto label_318080;
        case 0x318084u: goto label_318084;
        case 0x318088u: goto label_318088;
        case 0x31808cu: goto label_31808c;
        case 0x318090u: goto label_318090;
        case 0x318094u: goto label_318094;
        case 0x318098u: goto label_318098;
        case 0x31809cu: goto label_31809c;
        case 0x3180a0u: goto label_3180a0;
        case 0x3180a4u: goto label_3180a4;
        case 0x3180a8u: goto label_3180a8;
        case 0x3180acu: goto label_3180ac;
        case 0x3180b0u: goto label_3180b0;
        case 0x3180b4u: goto label_3180b4;
        case 0x3180b8u: goto label_3180b8;
        case 0x3180bcu: goto label_3180bc;
        case 0x3180c0u: goto label_3180c0;
        case 0x3180c4u: goto label_3180c4;
        case 0x3180c8u: goto label_3180c8;
        case 0x3180ccu: goto label_3180cc;
        case 0x3180d0u: goto label_3180d0;
        case 0x3180d4u: goto label_3180d4;
        case 0x3180d8u: goto label_3180d8;
        case 0x3180dcu: goto label_3180dc;
        case 0x3180e0u: goto label_3180e0;
        case 0x3180e4u: goto label_3180e4;
        case 0x3180e8u: goto label_3180e8;
        case 0x3180ecu: goto label_3180ec;
        case 0x3180f0u: goto label_3180f0;
        case 0x3180f4u: goto label_3180f4;
        case 0x3180f8u: goto label_3180f8;
        case 0x3180fcu: goto label_3180fc;
        case 0x318100u: goto label_318100;
        case 0x318104u: goto label_318104;
        case 0x318108u: goto label_318108;
        case 0x31810cu: goto label_31810c;
        case 0x318110u: goto label_318110;
        case 0x318114u: goto label_318114;
        case 0x318118u: goto label_318118;
        case 0x31811cu: goto label_31811c;
        case 0x318120u: goto label_318120;
        case 0x318124u: goto label_318124;
        case 0x318128u: goto label_318128;
        case 0x31812cu: goto label_31812c;
        case 0x318130u: goto label_318130;
        case 0x318134u: goto label_318134;
        case 0x318138u: goto label_318138;
        case 0x31813cu: goto label_31813c;
        case 0x318140u: goto label_318140;
        case 0x318144u: goto label_318144;
        case 0x318148u: goto label_318148;
        case 0x31814cu: goto label_31814c;
        case 0x318150u: goto label_318150;
        case 0x318154u: goto label_318154;
        case 0x318158u: goto label_318158;
        case 0x31815cu: goto label_31815c;
        case 0x318160u: goto label_318160;
        case 0x318164u: goto label_318164;
        case 0x318168u: goto label_318168;
        case 0x31816cu: goto label_31816c;
        case 0x318170u: goto label_318170;
        case 0x318174u: goto label_318174;
        case 0x318178u: goto label_318178;
        case 0x31817cu: goto label_31817c;
        case 0x318180u: goto label_318180;
        case 0x318184u: goto label_318184;
        case 0x318188u: goto label_318188;
        case 0x31818cu: goto label_31818c;
        case 0x318190u: goto label_318190;
        case 0x318194u: goto label_318194;
        case 0x318198u: goto label_318198;
        case 0x31819cu: goto label_31819c;
        case 0x3181a0u: goto label_3181a0;
        case 0x3181a4u: goto label_3181a4;
        case 0x3181a8u: goto label_3181a8;
        case 0x3181acu: goto label_3181ac;
        case 0x3181b0u: goto label_3181b0;
        case 0x3181b4u: goto label_3181b4;
        case 0x3181b8u: goto label_3181b8;
        case 0x3181bcu: goto label_3181bc;
        case 0x3181c0u: goto label_3181c0;
        case 0x3181c4u: goto label_3181c4;
        case 0x3181c8u: goto label_3181c8;
        case 0x3181ccu: goto label_3181cc;
        case 0x3181d0u: goto label_3181d0;
        case 0x3181d4u: goto label_3181d4;
        case 0x3181d8u: goto label_3181d8;
        case 0x3181dcu: goto label_3181dc;
        case 0x3181e0u: goto label_3181e0;
        case 0x3181e4u: goto label_3181e4;
        case 0x3181e8u: goto label_3181e8;
        case 0x3181ecu: goto label_3181ec;
        case 0x3181f0u: goto label_3181f0;
        case 0x3181f4u: goto label_3181f4;
        case 0x3181f8u: goto label_3181f8;
        case 0x3181fcu: goto label_3181fc;
        case 0x318200u: goto label_318200;
        case 0x318204u: goto label_318204;
        case 0x318208u: goto label_318208;
        case 0x31820cu: goto label_31820c;
        case 0x318210u: goto label_318210;
        case 0x318214u: goto label_318214;
        case 0x318218u: goto label_318218;
        case 0x31821cu: goto label_31821c;
        case 0x318220u: goto label_318220;
        case 0x318224u: goto label_318224;
        case 0x318228u: goto label_318228;
        case 0x31822cu: goto label_31822c;
        case 0x318230u: goto label_318230;
        case 0x318234u: goto label_318234;
        case 0x318238u: goto label_318238;
        case 0x31823cu: goto label_31823c;
        case 0x318240u: goto label_318240;
        case 0x318244u: goto label_318244;
        case 0x318248u: goto label_318248;
        case 0x31824cu: goto label_31824c;
        case 0x318250u: goto label_318250;
        case 0x318254u: goto label_318254;
        case 0x318258u: goto label_318258;
        case 0x31825cu: goto label_31825c;
        case 0x318260u: goto label_318260;
        case 0x318264u: goto label_318264;
        case 0x318268u: goto label_318268;
        case 0x31826cu: goto label_31826c;
        case 0x318270u: goto label_318270;
        case 0x318274u: goto label_318274;
        case 0x318278u: goto label_318278;
        case 0x31827cu: goto label_31827c;
        case 0x318280u: goto label_318280;
        default: break;
    }

    ctx->pc = 0x317ba8u;

label_317ba8:
    // 0x317ba8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x317ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_317bac:
    // 0x317bac: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x317bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
label_317bb0:
    // 0x317bb0: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x317bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_317bb4:
    // 0x317bb4: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x317bb4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_317bb8:
    // 0x317bb8: 0xafc40048  sw          $a0, 0x48($fp)
    ctx->pc = 0x317bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 72), GPR_U32(ctx, 4));
label_317bbc:
    // 0x317bbc: 0x8fc30048  lw          $v1, 0x48($fp)
    ctx->pc = 0x317bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_317bc0:
    // 0x317bc0: 0x8c620078  lw          $v0, 0x78($v1)
    ctx->pc = 0x317bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
label_317bc4:
    // 0x317bc4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_317bc8:
    if (ctx->pc == 0x317BC8u) {
        ctx->pc = 0x317BCCu;
        goto label_317bcc;
    }
    ctx->pc = 0x317BC4u;
    {
        const bool branch_taken_0x317bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x317bc4) {
            ctx->pc = 0x317C08u;
            goto label_317c08;
        }
    }
    ctx->pc = 0x317BCCu;
label_317bcc:
    // 0x317bcc: 0x8fc40048  lw          $a0, 0x48($fp)
    ctx->pc = 0x317bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_317bd0:
    // 0x317bd0: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x317bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_317bd4:
    // 0x317bd4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_317bd8:
    if (ctx->pc == 0x317BD8u) {
        ctx->pc = 0x317BDCu;
        goto label_317bdc;
    }
    ctx->pc = 0x317BD4u;
    {
        const bool branch_taken_0x317bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x317bd4) {
            ctx->pc = 0x317C08u;
            goto label_317c08;
        }
    }
    ctx->pc = 0x317BDCu;
label_317bdc:
    // 0x317bdc: 0x8fc40048  lw          $a0, 0x48($fp)
    ctx->pc = 0x317bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_317be0:
    // 0x317be0: 0xc0c6426  jal         func_319098
label_317be4:
    if (ctx->pc == 0x317BE4u) {
        ctx->pc = 0x317BE8u;
        goto label_317be8;
    }
    ctx->pc = 0x317BE0u;
    SET_GPR_U32(ctx, 31, 0x317BE8u);
    ctx->pc = 0x319098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319098u, 0x317BE0u, 0x317BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317BE8u;
label_317be8:
    // 0x317be8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_317bec:
    if (ctx->pc == 0x317BECu) {
        ctx->pc = 0x317BF0u;
        goto label_317bf0;
    }
    ctx->pc = 0x317BE8u;
    {
        const bool branch_taken_0x317be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x317be8) {
            ctx->pc = 0x317C08u;
            goto label_317c08;
        }
    }
    ctx->pc = 0x317BF0u;
label_317bf0:
    // 0x317bf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x317bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_317bf4:
    // 0x317bf4: 0x8fc60048  lw          $a2, 0x48($fp)
    ctx->pc = 0x317bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_317bf8:
    // 0x317bf8: 0xacc20078  sw          $v0, 0x78($a2)
    ctx->pc = 0x317bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 120), GPR_U32(ctx, 2));
label_317bfc:
    // 0x317bfc: 0x8fc40048  lw          $a0, 0x48($fp)
    ctx->pc = 0x317bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_317c00:
    // 0x317c00: 0xc0c666e  jal         func_3199B8
label_317c04:
    if (ctx->pc == 0x317C04u) {
        ctx->pc = 0x317C08u;
        goto label_317c08;
    }
    ctx->pc = 0x317C00u;
    SET_GPR_U32(ctx, 31, 0x317C08u);
    ctx->pc = 0x3199B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3199B8u, 0x317C00u, 0x317C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317C08u;
label_317c08:
    // 0x317c08: 0x8fc30048  lw          $v1, 0x48($fp)
    ctx->pc = 0x317c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_317c0c:
    // 0x317c0c: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x317c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_317c10:
    // 0x317c10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x317c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_317c14:
    // 0x317c14: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_317c18:
    if (ctx->pc == 0x317C18u) {
        ctx->pc = 0x317C1Cu;
        goto label_317c1c;
    }
    ctx->pc = 0x317C14u;
    {
        const bool branch_taken_0x317c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x317c14) {
            ctx->pc = 0x317C28u;
            goto label_317c28;
        }
    }
    ctx->pc = 0x317C1Cu;
label_317c1c:
    // 0x317c1c: 0x8fc40048  lw          $a0, 0x48($fp)
    ctx->pc = 0x317c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_317c20:
    // 0x317c20: 0xc0c6272  jal         func_3189C8
label_317c24:
    if (ctx->pc == 0x317C24u) {
        ctx->pc = 0x317C28u;
        goto label_317c28;
    }
    ctx->pc = 0x317C20u;
    SET_GPR_U32(ctx, 31, 0x317C28u);
    ctx->pc = 0x3189C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3189C8u, 0x317C20u, 0x317C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317C28u;
label_317c28:
    // 0x317c28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x317c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_317c2c:
    // 0x317c2c: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x317c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_317c30:
    // 0x317c30: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x317c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_317c34:
    // 0x317c34: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x317c34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_317c38:
    // 0x317c38: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_317c3c:
    if (ctx->pc == 0x317C3Cu) {
        ctx->pc = 0x317C40u;
        goto label_317c40;
    }
    ctx->pc = 0x317C38u;
    {
        const bool branch_taken_0x317c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x317c38) {
            ctx->pc = 0x317C48u;
            goto label_317c48;
        }
    }
    ctx->pc = 0x317C40u;
label_317c40:
    // 0x317c40: 0x100000f0  b           . + 4 + (0xF0 << 2)
label_317c44:
    if (ctx->pc == 0x317C44u) {
        ctx->pc = 0x317C48u;
        goto label_317c48;
    }
    ctx->pc = 0x317C40u;
    {
        const bool branch_taken_0x317c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x317c40) {
            ctx->pc = 0x318004u;
            goto label_318004;
        }
    }
    ctx->pc = 0x317C48u;
label_317c48:
    // 0x317c48: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x317c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_317c4c:
    // 0x317c4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x317c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_317c50:
    // 0x317c50: 0x244243b0  addiu       $v0, $v0, 0x43B0
    ctx->pc = 0x317c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17328));
label_317c54:
    // 0x317c54: 0x8fc40048  lw          $a0, 0x48($fp)
    ctx->pc = 0x317c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_317c58:
    // 0x317c58: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x317c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_317c5c:
    // 0x317c5c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x317c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_317c60:
    // 0x317c60: 0x1440005a  bnez        $v0, . + 4 + (0x5A << 2)
label_317c64:
    if (ctx->pc == 0x317C64u) {
        ctx->pc = 0x317C68u;
        goto label_317c68;
    }
    ctx->pc = 0x317C60u;
    {
        const bool branch_taken_0x317c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x317c60) {
            ctx->pc = 0x317DCCu;
            goto label_317dcc;
        }
    }
    ctx->pc = 0x317C68u;
label_317c68:
    // 0x317c68: 0x8fc60048  lw          $a2, 0x48($fp)
    ctx->pc = 0x317c68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_317c6c:
    // 0x317c6c: 0x8cc44188  lw          $a0, 0x4188($a2)
    ctx->pc = 0x317c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16776)));
label_317c70:
    // 0x317c70: 0xc043cf8  jal         func_10F3E0
label_317c74:
    if (ctx->pc == 0x317C74u) {
        ctx->pc = 0x317C78u;
        goto label_317c78;
    }
    ctx->pc = 0x317C70u;
    SET_GPR_U32(ctx, 31, 0x317C78u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x317C70u, 0x317C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317C78u;
label_317c78:
    // 0x317c78: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x317c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_317c7c:
    // 0x317c7c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x317c7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_317c80:
    // 0x317c80: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x317c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_317c84:
    // 0x317c84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x317c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_317c88:
    // 0x317c88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x317c88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_317c8c:
    // 0x317c8c: 0x8fc30048  lw          $v1, 0x48($fp)
    ctx->pc = 0x317c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_317c90:
    // 0x317c90: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x317c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_317c94:
    // 0x317c94: 0x244240f8  addiu       $v0, $v0, 0x40F8
    ctx->pc = 0x317c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16632));
label_317c98:
    // 0x317c98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x317c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_317c9c:
    // 0x317c9c: 0xc0dcdf1  jal         func_3737C4
label_317ca0:
    if (ctx->pc == 0x317CA0u) {
        ctx->pc = 0x317CA4u;
        goto label_317ca4;
    }
    ctx->pc = 0x317C9Cu;
    SET_GPR_U32(ctx, 31, 0x317CA4u);
    ctx->pc = 0x3737C4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3737C4u, 0x317C9Cu, 0x317CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317CA4u;
label_317ca4:
    // 0x317ca4: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
label_317ca8:
    if (ctx->pc == 0x317CA8u) {
        ctx->pc = 0x317CACu;
        goto label_317cac;
    }
    ctx->pc = 0x317CA4u;
    {
        const bool branch_taken_0x317ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x317ca4) {
            ctx->pc = 0x317DB4u;
            goto label_317db4;
        }
    }
    ctx->pc = 0x317CACu;
label_317cac:
    // 0x317cac: 0x27c40010  addiu       $a0, $fp, 0x10
    ctx->pc = 0x317cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
label_317cb0:
    // 0x317cb0: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x317cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_317cb4:
    // 0x317cb4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x317cb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_317cb8:
    // 0x317cb8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x317cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_317cbc:
    // 0x317cbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x317cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_317cc0:
    // 0x317cc0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x317cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_317cc4:
    // 0x317cc4: 0x8fc60048  lw          $a2, 0x48($fp)
    ctx->pc = 0x317cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_317cc8:
    // 0x317cc8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x317cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_317ccc:
    // 0x317ccc: 0x244240f8  addiu       $v0, $v0, 0x40F8
    ctx->pc = 0x317cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16632));
label_317cd0:
    // 0x317cd0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x317cd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_317cd4:
    // 0x317cd4: 0xc0dce01  jal         func_373804
label_317cd8:
    if (ctx->pc == 0x317CD8u) {
        ctx->pc = 0x317CDCu;
        goto label_317cdc;
    }
    ctx->pc = 0x317CD4u;
    SET_GPR_U32(ctx, 31, 0x317CDCu);
    ctx->pc = 0x373804u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373804u, 0x317CD4u, 0x317CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317CDCu;
label_317cdc:
    // 0x317cdc: 0x27c40020  addiu       $a0, $fp, 0x20
    ctx->pc = 0x317cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
label_317ce0:
    // 0x317ce0: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x317ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_317ce4:
    // 0x317ce4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x317ce4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_317ce8:
    // 0x317ce8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x317ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_317cec:
    // 0x317cec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x317cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_317cf0:
    // 0x317cf0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x317cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_317cf4:
    // 0x317cf4: 0x8fc30048  lw          $v1, 0x48($fp)
    ctx->pc = 0x317cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_317cf8:
    // 0x317cf8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x317cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_317cfc:
    // 0x317cfc: 0x244240f8  addiu       $v0, $v0, 0x40F8
    ctx->pc = 0x317cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16632));
label_317d00:
    // 0x317d00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x317d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_317d04:
    // 0x317d04: 0xc0dce14  jal         func_373850
label_317d08:
    if (ctx->pc == 0x317D08u) {
        ctx->pc = 0x317D0Cu;
        goto label_317d0c;
    }
    ctx->pc = 0x317D04u;
    SET_GPR_U32(ctx, 31, 0x317D0Cu);
    ctx->pc = 0x373850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373850u, 0x317D04u, 0x317D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317D0Cu;
label_317d0c:
    // 0x317d0c: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x317d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
label_317d10:
    // 0x317d10: 0x27c30020  addiu       $v1, $fp, 0x20
    ctx->pc = 0x317d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
label_317d14:
    // 0x317d14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x317d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_317d18:
    // 0x317d18: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x317d18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_317d1c:
    // 0x317d1c: 0xc0dce28  jal         func_3738A0
label_317d20:
    if (ctx->pc == 0x317D20u) {
        ctx->pc = 0x317D24u;
        goto label_317d24;
    }
    ctx->pc = 0x317D1Cu;
    SET_GPR_U32(ctx, 31, 0x317D24u);
    ctx->pc = 0x3738A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3738A0u, 0x317D1Cu, 0x317D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317D24u;
label_317d24:
    // 0x317d24: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_317d28:
    if (ctx->pc == 0x317D28u) {
        ctx->pc = 0x317D2Cu;
        goto label_317d2c;
    }
    ctx->pc = 0x317D24u;
    {
        const bool branch_taken_0x317d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x317d24) {
            ctx->pc = 0x317D34u;
            goto label_317d34;
        }
    }
    ctx->pc = 0x317D2Cu;
label_317d2c:
    // 0x317d2c: 0x10000016  b           . + 4 + (0x16 << 2)
label_317d30:
    if (ctx->pc == 0x317D30u) {
        ctx->pc = 0x317D34u;
        goto label_317d34;
    }
    ctx->pc = 0x317D2Cu;
    {
        const bool branch_taken_0x317d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x317d2c) {
            ctx->pc = 0x317D88u;
            goto label_317d88;
        }
    }
    ctx->pc = 0x317D34u;
label_317d34:
    // 0x317d34: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x317d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
label_317d38:
    // 0x317d38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x317d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_317d3c:
    // 0x317d3c: 0xc0dce42  jal         func_373908
label_317d40:
    if (ctx->pc == 0x317D40u) {
        ctx->pc = 0x317D44u;
        goto label_317d44;
    }
    ctx->pc = 0x317D3Cu;
    SET_GPR_U32(ctx, 31, 0x317D44u);
    ctx->pc = 0x373908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373908u, 0x317D3Cu, 0x317D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317D44u;
label_317d44:
    // 0x317d44: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x317d44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_317d48:
    // 0x317d48: 0x8fc40048  lw          $a0, 0x48($fp)
    ctx->pc = 0x317d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_317d4c:
    // 0x317d4c: 0x248240d4  addiu       $v0, $a0, 0x40D4
    ctx->pc = 0x317d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16596));
label_317d50:
    // 0x317d50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x317d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_317d54:
    // 0x317d54: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x317d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_317d58:
    // 0x317d58: 0xc0dcdd5  jal         func_373754
label_317d5c:
    if (ctx->pc == 0x317D5Cu) {
        ctx->pc = 0x317D60u;
        goto label_317d60;
    }
    ctx->pc = 0x317D58u;
    SET_GPR_U32(ctx, 31, 0x317D60u);
    ctx->pc = 0x373754u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373754u, 0x317D58u, 0x317D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317D60u;
label_317d60:
    // 0x317d60: 0x8fc60048  lw          $a2, 0x48($fp)
    ctx->pc = 0x317d60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_317d64:
    // 0x317d64: 0x8cc4418c  lw          $a0, 0x418C($a2)
    ctx->pc = 0x317d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16780)));
label_317d68:
    // 0x317d68: 0xc043cf0  jal         func_10F3C0
label_317d6c:
    if (ctx->pc == 0x317D6Cu) {
        ctx->pc = 0x317D70u;
        goto label_317d70;
    }
    ctx->pc = 0x317D68u;
    SET_GPR_U32(ctx, 31, 0x317D70u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x317D68u, 0x317D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317D70u;
label_317d70:
    // 0x317d70: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x317d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
label_317d74:
    // 0x317d74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x317d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_317d78:
    // 0x317d78: 0xc0dce36  jal         func_3738D8
label_317d7c:
    if (ctx->pc == 0x317D7Cu) {
        ctx->pc = 0x317D80u;
        goto label_317d80;
    }
    ctx->pc = 0x317D78u;
    SET_GPR_U32(ctx, 31, 0x317D80u);
    ctx->pc = 0x3738D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3738D8u, 0x317D78u, 0x317D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317D80u;
label_317d80:
    // 0x317d80: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
label_317d84:
    if (ctx->pc == 0x317D84u) {
        ctx->pc = 0x317D88u;
        goto label_317d88;
    }
    ctx->pc = 0x317D80u;
    {
        const bool branch_taken_0x317d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x317d80) {
            ctx->pc = 0x317D0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317d0c;
        }
    }
    ctx->pc = 0x317D88u;
label_317d88:
    // 0x317d88: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x317d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_317d8c:
    // 0x317d8c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x317d8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_317d90:
    // 0x317d90: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x317d90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_317d94:
    // 0x317d94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x317d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_317d98:
    // 0x317d98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x317d98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_317d9c:
    // 0x317d9c: 0x8fc30048  lw          $v1, 0x48($fp)
    ctx->pc = 0x317d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_317da0:
    // 0x317da0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x317da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_317da4:
    // 0x317da4: 0x244240f8  addiu       $v0, $v0, 0x40F8
    ctx->pc = 0x317da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16632));
label_317da8:
    // 0x317da8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x317da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_317dac:
    // 0x317dac: 0xc0dce4d  jal         func_373934
label_317db0:
    if (ctx->pc == 0x317DB0u) {
        ctx->pc = 0x317DB4u;
        goto label_317db4;
    }
    ctx->pc = 0x317DACu;
    SET_GPR_U32(ctx, 31, 0x317DB4u);
    ctx->pc = 0x373934u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373934u, 0x317DACu, 0x317DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317DB4u;
label_317db4:
    // 0x317db4: 0x8fc60048  lw          $a2, 0x48($fp)
    ctx->pc = 0x317db4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_317db8:
    // 0x317db8: 0x8cc44188  lw          $a0, 0x4188($a2)
    ctx->pc = 0x317db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16776)));
label_317dbc:
    // 0x317dbc: 0xc043cf0  jal         func_10F3C0
label_317dc0:
    if (ctx->pc == 0x317DC0u) {
        ctx->pc = 0x317DC4u;
        goto label_317dc4;
    }
    ctx->pc = 0x317DBCu;
    SET_GPR_U32(ctx, 31, 0x317DC4u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x317DBCu, 0x317DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317DC4u;
label_317dc4:
    // 0x317dc4: 0x1000008a  b           . + 4 + (0x8A << 2)
label_317dc8:
    if (ctx->pc == 0x317DC8u) {
        ctx->pc = 0x317DCCu;
        goto label_317dcc;
    }
    ctx->pc = 0x317DC4u;
    {
        const bool branch_taken_0x317dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x317dc4) {
            ctx->pc = 0x317FF0u;
            goto label_317ff0;
        }
    }
    ctx->pc = 0x317DCCu;
label_317dcc:
    // 0x317dcc: 0x8fc20048  lw          $v0, 0x48($fp)
    ctx->pc = 0x317dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_317dd0:
    // 0x317dd0: 0x8c444188  lw          $a0, 0x4188($v0)
    ctx->pc = 0x317dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16776)));
label_317dd4:
    // 0x317dd4: 0xc043cf8  jal         func_10F3E0
label_317dd8:
    if (ctx->pc == 0x317DD8u) {
        ctx->pc = 0x317DDCu;
        goto label_317ddc;
    }
    ctx->pc = 0x317DD4u;
    SET_GPR_U32(ctx, 31, 0x317DDCu);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x317DD4u, 0x317DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317DDCu;
label_317ddc:
    // 0x317ddc: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x317ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_317de0:
    // 0x317de0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x317de0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_317de4:
    // 0x317de4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x317de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_317de8:
    // 0x317de8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x317de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_317dec:
    // 0x317dec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x317decu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_317df0:
    // 0x317df0: 0x8fc30048  lw          $v1, 0x48($fp)
    ctx->pc = 0x317df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_317df4:
    // 0x317df4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x317df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_317df8:
    // 0x317df8: 0x244240f8  addiu       $v0, $v0, 0x40F8
    ctx->pc = 0x317df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16632));
label_317dfc:
    // 0x317dfc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x317dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_317e00:
    // 0x317e00: 0xc0dcdf1  jal         func_3737C4
label_317e04:
    if (ctx->pc == 0x317E04u) {
        ctx->pc = 0x317E08u;
        goto label_317e08;
    }
    ctx->pc = 0x317E00u;
    SET_GPR_U32(ctx, 31, 0x317E08u);
    ctx->pc = 0x3737C4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3737C4u, 0x317E00u, 0x317E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317E08u;
label_317e08:
    // 0x317e08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_317e0c:
    if (ctx->pc == 0x317E0Cu) {
        ctx->pc = 0x317E10u;
        goto label_317e10;
    }
    ctx->pc = 0x317E08u;
    {
        const bool branch_taken_0x317e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x317e08) {
            ctx->pc = 0x317E18u;
            goto label_317e18;
        }
    }
    ctx->pc = 0x317E10u;
label_317e10:
    // 0x317e10: 0x10000073  b           . + 4 + (0x73 << 2)
label_317e14:
    if (ctx->pc == 0x317E14u) {
        ctx->pc = 0x317E18u;
        goto label_317e18;
    }
    ctx->pc = 0x317E10u;
    {
        const bool branch_taken_0x317e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x317e10) {
            ctx->pc = 0x317FE0u;
            goto label_317fe0;
        }
    }
    ctx->pc = 0x317E18u;
label_317e18:
    // 0x317e18: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x317e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_317e1c:
    // 0x317e1c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x317e1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_317e20:
    // 0x317e20: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x317e20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_317e24:
    // 0x317e24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x317e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_317e28:
    // 0x317e28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x317e28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_317e2c:
    // 0x317e2c: 0x8fc40048  lw          $a0, 0x48($fp)
    ctx->pc = 0x317e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_317e30:
    // 0x317e30: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x317e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_317e34:
    // 0x317e34: 0x244240f8  addiu       $v0, $v0, 0x40F8
    ctx->pc = 0x317e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16632));
label_317e38:
    // 0x317e38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x317e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_317e3c:
    // 0x317e3c: 0xc0dce65  jal         func_373994
label_317e40:
    if (ctx->pc == 0x317E40u) {
        ctx->pc = 0x317E44u;
        goto label_317e44;
    }
    ctx->pc = 0x317E3Cu;
    SET_GPR_U32(ctx, 31, 0x317E44u);
    ctx->pc = 0x373994u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373994u, 0x317E3Cu, 0x317E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317E44u;
label_317e44:
    // 0x317e44: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x317e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_317e48:
    // 0x317e48: 0xafc20030  sw          $v0, 0x30($fp)
    ctx->pc = 0x317e48u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 2));
label_317e4c:
    // 0x317e4c: 0x8fc20030  lw          $v0, 0x30($fp)
    ctx->pc = 0x317e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 48)));
label_317e50:
    // 0x317e50: 0xafc20034  sw          $v0, 0x34($fp)
    ctx->pc = 0x317e50u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 52), GPR_U32(ctx, 2));
label_317e54:
    // 0x317e54: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x317e54u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 56), GPR_U32(ctx, 0));
label_317e58:
    // 0x317e58: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x317e58u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 60), GPR_U32(ctx, 0));
label_317e5c:
    // 0x317e5c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x317e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_317e60:
    // 0x317e60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x317e60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_317e64:
    // 0x317e64: 0x244243b0  addiu       $v0, $v0, 0x43B0
    ctx->pc = 0x317e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17328));
label_317e68:
    // 0x317e68: 0x8fc60048  lw          $a2, 0x48($fp)
    ctx->pc = 0x317e68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_317e6c:
    // 0x317e6c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x317e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_317e70:
    // 0x317e70: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x317e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_317e74:
    // 0x317e74: 0xafc20040  sw          $v0, 0x40($fp)
    ctx->pc = 0x317e74u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 64), GPR_U32(ctx, 2));
label_317e78:
    // 0x317e78: 0x8fc20040  lw          $v0, 0x40($fp)
    ctx->pc = 0x317e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
label_317e7c:
    // 0x317e7c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_317e80:
    if (ctx->pc == 0x317E80u) {
        ctx->pc = 0x317E84u;
        goto label_317e84;
    }
    ctx->pc = 0x317E7Cu;
    {
        const bool branch_taken_0x317e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x317e7c) {
            ctx->pc = 0x317E8Cu;
            goto label_317e8c;
        }
    }
    ctx->pc = 0x317E84u;
label_317e84:
    // 0x317e84: 0x1000003a  b           . + 4 + (0x3A << 2)
label_317e88:
    if (ctx->pc == 0x317E88u) {
        ctx->pc = 0x317E8Cu;
        goto label_317e8c;
    }
    ctx->pc = 0x317E84u;
    {
        const bool branch_taken_0x317e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x317e84) {
            ctx->pc = 0x317F70u;
            goto label_317f70;
        }
    }
    ctx->pc = 0x317E8Cu;
label_317e8c:
    // 0x317e8c: 0x8fc20040  lw          $v0, 0x40($fp)
    ctx->pc = 0x317e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
label_317e90:
    // 0x317e90: 0x8fc30034  lw          $v1, 0x34($fp)
    ctx->pc = 0x317e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 52)));
label_317e94:
    // 0x317e94: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x317e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_317e98:
    // 0x317e98: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x317e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_317e9c:
    // 0x317e9c: 0x1482002f  bne         $a0, $v0, . + 4 + (0x2F << 2)
label_317ea0:
    if (ctx->pc == 0x317EA0u) {
        ctx->pc = 0x317EA4u;
        goto label_317ea4;
    }
    ctx->pc = 0x317E9Cu;
    {
        const bool branch_taken_0x317e9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x317e9c) {
            ctx->pc = 0x317F5Cu;
            goto label_317f5c;
        }
    }
    ctx->pc = 0x317EA4u;
label_317ea4:
    // 0x317ea4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x317ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_317ea8:
    // 0x317ea8: 0xafc20038  sw          $v0, 0x38($fp)
    ctx->pc = 0x317ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 56), GPR_U32(ctx, 2));
label_317eac:
    // 0x317eac: 0x8fc30040  lw          $v1, 0x40($fp)
    ctx->pc = 0x317eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
label_317eb0:
    // 0x317eb0: 0x8fc20030  lw          $v0, 0x30($fp)
    ctx->pc = 0x317eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 48)));
label_317eb4:
    // 0x317eb4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x317eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_317eb8:
    // 0x317eb8: 0x8fc60034  lw          $a2, 0x34($fp)
    ctx->pc = 0x317eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 52)));
label_317ebc:
    // 0x317ebc: 0x8fc70040  lw          $a3, 0x40($fp)
    ctx->pc = 0x317ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
label_317ec0:
    // 0x317ec0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x317ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_317ec4:
    // 0x317ec4: 0x8fc40034  lw          $a0, 0x34($fp)
    ctx->pc = 0x317ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 52)));
label_317ec8:
    // 0x317ec8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x317ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_317ecc:
    // 0x317ecc: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x317eccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_317ed0:
    // 0x317ed0: 0x8ce70008  lw          $a3, 0x8($a3)
    ctx->pc = 0x317ed0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_317ed4:
    // 0x317ed4: 0x60f809  jalr        $v1
label_317ed8:
    if (ctx->pc == 0x317ED8u) {
        ctx->pc = 0x317EDCu;
        goto label_317edc;
    }
    ctx->pc = 0x317ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x317EDCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317ED4u, 0x317EDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x317EDCu;
label_317edc:
    // 0x317edc: 0xafc20044  sw          $v0, 0x44($fp)
    ctx->pc = 0x317edcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 2));
label_317ee0:
    // 0x317ee0: 0x8fc20044  lw          $v0, 0x44($fp)
    ctx->pc = 0x317ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
label_317ee4:
    // 0x317ee4: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_317ee8:
    if (ctx->pc == 0x317EE8u) {
        ctx->pc = 0x317EECu;
        goto label_317eec;
    }
    ctx->pc = 0x317EE4u;
    {
        const bool branch_taken_0x317ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x317ee4) {
            ctx->pc = 0x317F4Cu;
            goto label_317f4c;
        }
    }
    ctx->pc = 0x317EECu;
label_317eec:
    // 0x317eec: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x317eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_317ef0:
    // 0x317ef0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x317ef0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_317ef4:
    // 0x317ef4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x317ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_317ef8:
    // 0x317ef8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x317ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_317efc:
    // 0x317efc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x317efcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_317f00:
    // 0x317f00: 0x8fc30048  lw          $v1, 0x48($fp)
    ctx->pc = 0x317f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_317f04:
    // 0x317f04: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x317f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_317f08:
    // 0x317f08: 0x244240f8  addiu       $v0, $v0, 0x40F8
    ctx->pc = 0x317f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16632));
label_317f0c:
    // 0x317f0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x317f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_317f10:
    // 0x317f10: 0xc0dce70  jal         func_3739C0
label_317f14:
    if (ctx->pc == 0x317F14u) {
        ctx->pc = 0x317F18u;
        goto label_317f18;
    }
    ctx->pc = 0x317F10u;
    SET_GPR_U32(ctx, 31, 0x317F18u);
    ctx->pc = 0x3739C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3739C0u, 0x317F10u, 0x317F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317F18u;
label_317f18:
    // 0x317f18: 0x8fc40048  lw          $a0, 0x48($fp)
    ctx->pc = 0x317f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_317f1c:
    // 0x317f1c: 0x248240d4  addiu       $v0, $a0, 0x40D4
    ctx->pc = 0x317f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16596));
label_317f20:
    // 0x317f20: 0x27c30030  addiu       $v1, $fp, 0x30
    ctx->pc = 0x317f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 48));
label_317f24:
    // 0x317f24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x317f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_317f28:
    // 0x317f28: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x317f28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_317f2c:
    // 0x317f2c: 0xc0dcdd5  jal         func_373754
label_317f30:
    if (ctx->pc == 0x317F30u) {
        ctx->pc = 0x317F34u;
        goto label_317f34;
    }
    ctx->pc = 0x317F2Cu;
    SET_GPR_U32(ctx, 31, 0x317F34u);
    ctx->pc = 0x373754u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373754u, 0x317F2Cu, 0x317F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317F34u;
label_317f34:
    // 0x317f34: 0x8fc60048  lw          $a2, 0x48($fp)
    ctx->pc = 0x317f34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_317f38:
    // 0x317f38: 0x8cc4418c  lw          $a0, 0x418C($a2)
    ctx->pc = 0x317f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16780)));
label_317f3c:
    // 0x317f3c: 0xc043cf0  jal         func_10F3C0
label_317f40:
    if (ctx->pc == 0x317F40u) {
        ctx->pc = 0x317F44u;
        goto label_317f44;
    }
    ctx->pc = 0x317F3Cu;
    SET_GPR_U32(ctx, 31, 0x317F44u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x317F3Cu, 0x317F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317F44u;
label_317f44:
    // 0x317f44: 0x1000000a  b           . + 4 + (0xA << 2)
label_317f48:
    if (ctx->pc == 0x317F48u) {
        ctx->pc = 0x317F4Cu;
        goto label_317f4c;
    }
    ctx->pc = 0x317F44u;
    {
        const bool branch_taken_0x317f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x317f44) {
            ctx->pc = 0x317F70u;
            goto label_317f70;
        }
    }
    ctx->pc = 0x317F4Cu;
label_317f4c:
    // 0x317f4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x317f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_317f50:
    // 0x317f50: 0xafc2003c  sw          $v0, 0x3C($fp)
    ctx->pc = 0x317f50u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 60), GPR_U32(ctx, 2));
label_317f54:
    // 0x317f54: 0x10000006  b           . + 4 + (0x6 << 2)
label_317f58:
    if (ctx->pc == 0x317F58u) {
        ctx->pc = 0x317F5Cu;
        goto label_317f5c;
    }
    ctx->pc = 0x317F54u;
    {
        const bool branch_taken_0x317f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x317f54) {
            ctx->pc = 0x317F70u;
            goto label_317f70;
        }
    }
    ctx->pc = 0x317F5Cu;
label_317f5c:
    // 0x317f5c: 0x8fc20040  lw          $v0, 0x40($fp)
    ctx->pc = 0x317f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
label_317f60:
    // 0x317f60: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x317f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_317f64:
    // 0x317f64: 0xafc20040  sw          $v0, 0x40($fp)
    ctx->pc = 0x317f64u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 64), GPR_U32(ctx, 2));
label_317f68:
    // 0x317f68: 0x1000ffc3  b           . + 4 + (-0x3D << 2)
label_317f6c:
    if (ctx->pc == 0x317F6Cu) {
        ctx->pc = 0x317F70u;
        goto label_317f70;
    }
    ctx->pc = 0x317F68u;
    {
        const bool branch_taken_0x317f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x317f68) {
            ctx->pc = 0x317E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317e78;
        }
    }
    ctx->pc = 0x317F70u;
label_317f70:
    // 0x317f70: 0x8fc20038  lw          $v0, 0x38($fp)
    ctx->pc = 0x317f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 56)));
label_317f74:
    // 0x317f74: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_317f78:
    if (ctx->pc == 0x317F78u) {
        ctx->pc = 0x317F7Cu;
        goto label_317f7c;
    }
    ctx->pc = 0x317F74u;
    {
        const bool branch_taken_0x317f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x317f74) {
            ctx->pc = 0x317FD4u;
            goto label_317fd4;
        }
    }
    ctx->pc = 0x317F7Cu;
label_317f7c:
    // 0x317f7c: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x317f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_317f80:
    // 0x317f80: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x317f80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_317f84:
    // 0x317f84: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x317f84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_317f88:
    // 0x317f88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x317f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_317f8c:
    // 0x317f8c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x317f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_317f90:
    // 0x317f90: 0x8fc30048  lw          $v1, 0x48($fp)
    ctx->pc = 0x317f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_317f94:
    // 0x317f94: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x317f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_317f98:
    // 0x317f98: 0x244240f8  addiu       $v0, $v0, 0x40F8
    ctx->pc = 0x317f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16632));
label_317f9c:
    // 0x317f9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x317f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_317fa0:
    // 0x317fa0: 0xc0dce70  jal         func_3739C0
label_317fa4:
    if (ctx->pc == 0x317FA4u) {
        ctx->pc = 0x317FA8u;
        goto label_317fa8;
    }
    ctx->pc = 0x317FA0u;
    SET_GPR_U32(ctx, 31, 0x317FA8u);
    ctx->pc = 0x3739C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3739C0u, 0x317FA0u, 0x317FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317FA8u;
label_317fa8:
    // 0x317fa8: 0x8fc40048  lw          $a0, 0x48($fp)
    ctx->pc = 0x317fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_317fac:
    // 0x317fac: 0x248240d4  addiu       $v0, $a0, 0x40D4
    ctx->pc = 0x317facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16596));
label_317fb0:
    // 0x317fb0: 0x27c30030  addiu       $v1, $fp, 0x30
    ctx->pc = 0x317fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 48));
label_317fb4:
    // 0x317fb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x317fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_317fb8:
    // 0x317fb8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x317fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_317fbc:
    // 0x317fbc: 0xc0dcdd5  jal         func_373754
label_317fc0:
    if (ctx->pc == 0x317FC0u) {
        ctx->pc = 0x317FC4u;
        goto label_317fc4;
    }
    ctx->pc = 0x317FBCu;
    SET_GPR_U32(ctx, 31, 0x317FC4u);
    ctx->pc = 0x373754u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373754u, 0x317FBCu, 0x317FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317FC4u;
label_317fc4:
    // 0x317fc4: 0x8fc60048  lw          $a2, 0x48($fp)
    ctx->pc = 0x317fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_317fc8:
    // 0x317fc8: 0x8cc4418c  lw          $a0, 0x418C($a2)
    ctx->pc = 0x317fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16780)));
label_317fcc:
    // 0x317fcc: 0xc043cf0  jal         func_10F3C0
label_317fd0:
    if (ctx->pc == 0x317FD0u) {
        ctx->pc = 0x317FD4u;
        goto label_317fd4;
    }
    ctx->pc = 0x317FCCu;
    SET_GPR_U32(ctx, 31, 0x317FD4u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x317FCCu, 0x317FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317FD4u;
label_317fd4:
    // 0x317fd4: 0x8fc2003c  lw          $v0, 0x3C($fp)
    ctx->pc = 0x317fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
label_317fd8:
    // 0x317fd8: 0x1040ff80  beqz        $v0, . + 4 + (-0x80 << 2)
label_317fdc:
    if (ctx->pc == 0x317FDCu) {
        ctx->pc = 0x317FE0u;
        goto label_317fe0;
    }
    ctx->pc = 0x317FD8u;
    {
        const bool branch_taken_0x317fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x317fd8) {
            ctx->pc = 0x317DDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317ddc;
        }
    }
    ctx->pc = 0x317FE0u;
label_317fe0:
    // 0x317fe0: 0x8fc20048  lw          $v0, 0x48($fp)
    ctx->pc = 0x317fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_317fe4:
    // 0x317fe4: 0x8c444188  lw          $a0, 0x4188($v0)
    ctx->pc = 0x317fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16776)));
label_317fe8:
    // 0x317fe8: 0xc043cf0  jal         func_10F3C0
label_317fec:
    if (ctx->pc == 0x317FECu) {
        ctx->pc = 0x317FF0u;
        goto label_317ff0;
    }
    ctx->pc = 0x317FE8u;
    SET_GPR_U32(ctx, 31, 0x317FF0u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x317FE8u, 0x317FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317FF0u;
label_317ff0:
    // 0x317ff0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x317ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_317ff4:
    // 0x317ff4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x317ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_317ff8:
    // 0x317ff8: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x317ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_317ffc:
    // 0x317ffc: 0x1000ff0c  b           . + 4 + (-0xF4 << 2)
label_318000:
    if (ctx->pc == 0x318000u) {
        ctx->pc = 0x318004u;
        goto label_318004;
    }
    ctx->pc = 0x317FFCu;
    {
        const bool branch_taken_0x317ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x317ffc) {
            ctx->pc = 0x317C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317c30;
        }
    }
    ctx->pc = 0x318004u;
label_318004:
    // 0x318004: 0x8fc30048  lw          $v1, 0x48($fp)
    ctx->pc = 0x318004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_318008:
    // 0x318008: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x318008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_31800c:
    // 0x31800c: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
label_318010:
    if (ctx->pc == 0x318010u) {
        ctx->pc = 0x318014u;
        goto label_318014;
    }
    ctx->pc = 0x31800Cu;
    {
        const bool branch_taken_0x31800c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31800c) {
            ctx->pc = 0x3180A0u;
            goto label_3180a0;
        }
    }
    ctx->pc = 0x318014u;
label_318014:
    // 0x318014: 0x8fc40048  lw          $a0, 0x48($fp)
    ctx->pc = 0x318014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_318018:
    // 0x318018: 0x8c820078  lw          $v0, 0x78($a0)
    ctx->pc = 0x318018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
label_31801c:
    // 0x31801c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_318020:
    if (ctx->pc == 0x318020u) {
        ctx->pc = 0x318024u;
        goto label_318024;
    }
    ctx->pc = 0x31801Cu;
    {
        const bool branch_taken_0x31801c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31801c) {
            ctx->pc = 0x3180A0u;
            goto label_3180a0;
        }
    }
    ctx->pc = 0x318024u;
label_318024:
    // 0x318024: 0x8fc60048  lw          $a2, 0x48($fp)
    ctx->pc = 0x318024u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_318028:
    // 0x318028: 0x8cc44188  lw          $a0, 0x4188($a2)
    ctx->pc = 0x318028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16776)));
label_31802c:
    // 0x31802c: 0xc043cf8  jal         func_10F3E0
label_318030:
    if (ctx->pc == 0x318030u) {
        ctx->pc = 0x318034u;
        goto label_318034;
    }
    ctx->pc = 0x31802Cu;
    SET_GPR_U32(ctx, 31, 0x318034u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x31802Cu, 0x318034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318034u;
label_318034:
    // 0x318034: 0x8fc20048  lw          $v0, 0x48($fp)
    ctx->pc = 0x318034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_318038:
    // 0x318038: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x318038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_31803c:
    // 0x31803c: 0x8fc40048  lw          $a0, 0x48($fp)
    ctx->pc = 0x31803cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_318040:
    // 0x318040: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x318040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_318044:
    // 0x318044: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x318044u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_318048:
    // 0x318048: 0xafc20044  sw          $v0, 0x44($fp)
    ctx->pc = 0x318048u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 2));
label_31804c:
    // 0x31804c: 0x8fc60048  lw          $a2, 0x48($fp)
    ctx->pc = 0x31804cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_318050:
    // 0x318050: 0x8cc44188  lw          $a0, 0x4188($a2)
    ctx->pc = 0x318050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16776)));
label_318054:
    // 0x318054: 0xc043cf0  jal         func_10F3C0
label_318058:
    if (ctx->pc == 0x318058u) {
        ctx->pc = 0x31805Cu;
        goto label_31805c;
    }
    ctx->pc = 0x318054u;
    SET_GPR_U32(ctx, 31, 0x31805Cu);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x318054u, 0x31805Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31805Cu;
label_31805c:
    // 0x31805c: 0xc0cc55a  jal         func_331568
label_318060:
    if (ctx->pc == 0x318060u) {
        ctx->pc = 0x318064u;
        goto label_318064;
    }
    ctx->pc = 0x31805Cu;
    SET_GPR_U32(ctx, 31, 0x318064u);
    ctx->pc = 0x331568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331568u, 0x31805Cu, 0x318064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318064u;
label_318064:
    // 0x318064: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x318064u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_318068:
    // 0x318068: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x318068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
label_31806c:
    // 0x31806c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31806cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318070:
    // 0x318070: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x318070u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318074:
    // 0x318074: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_318078:
    if (ctx->pc == 0x318078u) {
        ctx->pc = 0x31807Cu;
        goto label_31807c;
    }
    ctx->pc = 0x318074u;
    {
        const bool branch_taken_0x318074 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x318074) {
            ctx->pc = 0x318094u;
            goto label_318094;
        }
    }
    ctx->pc = 0x31807Cu;
label_31807c:
    // 0x31807c: 0x8fc20044  lw          $v0, 0x44($fp)
    ctx->pc = 0x31807cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
label_318080:
    // 0x318080: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x318080u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_318084:
    // 0x318084: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_318088:
    if (ctx->pc == 0x318088u) {
        ctx->pc = 0x31808Cu;
        goto label_31808c;
    }
    ctx->pc = 0x318084u;
    {
        const bool branch_taken_0x318084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318084) {
            ctx->pc = 0x318094u;
            goto label_318094;
        }
    }
    ctx->pc = 0x31808Cu;
label_31808c:
    // 0x31808c: 0x10000004  b           . + 4 + (0x4 << 2)
label_318090:
    if (ctx->pc == 0x318090u) {
        ctx->pc = 0x318094u;
        goto label_318094;
    }
    ctx->pc = 0x31808Cu;
    {
        const bool branch_taken_0x31808c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31808c) {
            ctx->pc = 0x3180A0u;
            goto label_3180a0;
        }
    }
    ctx->pc = 0x318094u;
label_318094:
    // 0x318094: 0x8fc40048  lw          $a0, 0x48($fp)
    ctx->pc = 0x318094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_318098:
    // 0x318098: 0xc0c6470  jal         func_3191C0
label_31809c:
    if (ctx->pc == 0x31809Cu) {
        ctx->pc = 0x3180A0u;
        goto label_3180a0;
    }
    ctx->pc = 0x318098u;
    SET_GPR_U32(ctx, 31, 0x3180A0u);
    ctx->pc = 0x3191C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3191C0u, 0x318098u, 0x3180A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3180A0u;
label_3180a0:
    // 0x3180a0: 0x8fc20048  lw          $v0, 0x48($fp)
    ctx->pc = 0x3180a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_3180a4:
    // 0x3180a4: 0x8c444188  lw          $a0, 0x4188($v0)
    ctx->pc = 0x3180a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16776)));
label_3180a8:
    // 0x3180a8: 0xc043cf8  jal         func_10F3E0
label_3180ac:
    if (ctx->pc == 0x3180ACu) {
        ctx->pc = 0x3180B0u;
        goto label_3180b0;
    }
    ctx->pc = 0x3180A8u;
    SET_GPR_U32(ctx, 31, 0x3180B0u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x3180A8u, 0x3180B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3180B0u;
label_3180b0:
    // 0x3180b0: 0x8fc30048  lw          $v1, 0x48($fp)
    ctx->pc = 0x3180b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_3180b4:
    // 0x3180b4: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x3180b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_3180b8:
    // 0x3180b8: 0x18400065  blez        $v0, . + 4 + (0x65 << 2)
label_3180bc:
    if (ctx->pc == 0x3180BCu) {
        ctx->pc = 0x3180C0u;
        goto label_3180c0;
    }
    ctx->pc = 0x3180B8u;
    {
        const bool branch_taken_0x3180b8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3180b8) {
            ctx->pc = 0x318250u;
            goto label_318250;
        }
    }
    ctx->pc = 0x3180C0u;
label_3180c0:
    // 0x3180c0: 0x8fc40048  lw          $a0, 0x48($fp)
    ctx->pc = 0x3180c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_3180c4:
    // 0x3180c4: 0x8c8200ac  lw          $v0, 0xAC($a0)
    ctx->pc = 0x3180c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
label_3180c8:
    // 0x3180c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3180c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3180cc:
    // 0x3180cc: 0xafc20044  sw          $v0, 0x44($fp)
    ctx->pc = 0x3180ccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 2));
label_3180d0:
    // 0x3180d0: 0x8fc30044  lw          $v1, 0x44($fp)
    ctx->pc = 0x3180d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
label_3180d4:
    // 0x3180d4: 0x8fc60048  lw          $a2, 0x48($fp)
    ctx->pc = 0x3180d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_3180d8:
    // 0x3180d8: 0x8cc20058  lw          $v0, 0x58($a2)
    ctx->pc = 0x3180d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
label_3180dc:
    // 0x3180dc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x3180dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3180e0:
    // 0x3180e0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3180e4:
    if (ctx->pc == 0x3180E4u) {
        ctx->pc = 0x3180E8u;
        goto label_3180e8;
    }
    ctx->pc = 0x3180E0u;
    {
        const bool branch_taken_0x3180e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3180e0) {
            ctx->pc = 0x3180ECu;
            goto label_3180ec;
        }
    }
    ctx->pc = 0x3180E8u;
label_3180e8:
    // 0x3180e8: 0xafc00044  sw          $zero, 0x44($fp)
    ctx->pc = 0x3180e8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 0));
label_3180ec:
    // 0x3180ec: 0x8fc20044  lw          $v0, 0x44($fp)
    ctx->pc = 0x3180ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
label_3180f0:
    // 0x3180f0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3180f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3180f4:
    // 0x3180f4: 0x8fc40048  lw          $a0, 0x48($fp)
    ctx->pc = 0x3180f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_3180f8:
    // 0x3180f8: 0x8c8200b0  lw          $v0, 0xB0($a0)
    ctx->pc = 0x3180f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
label_3180fc:
    // 0x3180fc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3180fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_318100:
    // 0x318100: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x318100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_318104:
    // 0x318104: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
label_318108:
    if (ctx->pc == 0x318108u) {
        ctx->pc = 0x31810Cu;
        goto label_31810c;
    }
    ctx->pc = 0x318104u;
    {
        const bool branch_taken_0x318104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318104) {
            ctx->pc = 0x31823Cu;
            goto label_31823c;
        }
    }
    ctx->pc = 0x31810Cu;
label_31810c:
    // 0x31810c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31810cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_318110:
    // 0x318110: 0x8fc60048  lw          $a2, 0x48($fp)
    ctx->pc = 0x318110u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_318114:
    // 0x318114: 0xacc2007c  sw          $v0, 0x7C($a2)
    ctx->pc = 0x318114u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 124), GPR_U32(ctx, 2));
label_318118:
    // 0x318118: 0x8fc30048  lw          $v1, 0x48($fp)
    ctx->pc = 0x318118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_31811c:
    // 0x31811c: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x31811cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_318120:
    // 0x318120: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x318120u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_318124:
    // 0x318124: 0x8fc40048  lw          $a0, 0x48($fp)
    ctx->pc = 0x318124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_318128:
    // 0x318128: 0x8c8200b0  lw          $v0, 0xB0($a0)
    ctx->pc = 0x318128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
label_31812c:
    // 0x31812c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x31812cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_318130:
    // 0x318130: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x318130u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_318134:
    // 0x318134: 0x8fc60048  lw          $a2, 0x48($fp)
    ctx->pc = 0x318134u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_318138:
    // 0x318138: 0x8cc200ac  lw          $v0, 0xAC($a2)
    ctx->pc = 0x318138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 172)));
label_31813c:
    // 0x31813c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x31813cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_318140:
    // 0x318140: 0x8fc40048  lw          $a0, 0x48($fp)
    ctx->pc = 0x318140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_318144:
    // 0x318144: 0x8c8200b0  lw          $v0, 0xB0($a0)
    ctx->pc = 0x318144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
label_318148:
    // 0x318148: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x318148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_31814c:
    // 0x31814c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31814cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_318150:
    // 0x318150: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x318150u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_318154:
    // 0x318154: 0x8fc20044  lw          $v0, 0x44($fp)
    ctx->pc = 0x318154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
label_318158:
    // 0x318158: 0x8fc60048  lw          $a2, 0x48($fp)
    ctx->pc = 0x318158u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_31815c:
    // 0x31815c: 0xacc200ac  sw          $v0, 0xAC($a2)
    ctx->pc = 0x31815cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 172), GPR_U32(ctx, 2));
label_318160:
    // 0x318160: 0xafc00040  sw          $zero, 0x40($fp)
    ctx->pc = 0x318160u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 64), GPR_U32(ctx, 0));
label_318164:
    // 0x318164: 0x8fc20040  lw          $v0, 0x40($fp)
    ctx->pc = 0x318164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
label_318168:
    // 0x318168: 0x8fc40048  lw          $a0, 0x48($fp)
    ctx->pc = 0x318168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_31816c:
    // 0x31816c: 0x8c8300b4  lw          $v1, 0xB4($a0)
    ctx->pc = 0x31816cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
label_318170:
    // 0x318170: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x318170u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_318174:
    // 0x318174: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_318178:
    if (ctx->pc == 0x318178u) {
        ctx->pc = 0x31817Cu;
        goto label_31817c;
    }
    ctx->pc = 0x318174u;
    {
        const bool branch_taken_0x318174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x318174) {
            ctx->pc = 0x3181C4u;
            goto label_3181c4;
        }
    }
    ctx->pc = 0x31817Cu;
label_31817c:
    // 0x31817c: 0x8fc60048  lw          $a2, 0x48($fp)
    ctx->pc = 0x31817cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_318180:
    // 0x318180: 0x8cc20090  lw          $v0, 0x90($a2)
    ctx->pc = 0x318180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 144)));
label_318184:
    // 0x318184: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x318184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_318188:
    // 0x318188: 0x8fc30048  lw          $v1, 0x48($fp)
    ctx->pc = 0x318188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_31818c:
    // 0x31818c: 0xac620090  sw          $v0, 0x90($v1)
    ctx->pc = 0x31818cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 2));
label_318190:
    // 0x318190: 0x8fc40048  lw          $a0, 0x48($fp)
    ctx->pc = 0x318190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_318194:
    // 0x318194: 0x8c82009c  lw          $v0, 0x9C($a0)
    ctx->pc = 0x318194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_318198:
    // 0x318198: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x318198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_31819c:
    // 0x31819c: 0x8fc60048  lw          $a2, 0x48($fp)
    ctx->pc = 0x31819cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_3181a0:
    // 0x3181a0: 0xacc2009c  sw          $v0, 0x9C($a2)
    ctx->pc = 0x3181a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 156), GPR_U32(ctx, 2));
label_3181a4:
    // 0x3181a4: 0x8fc30048  lw          $v1, 0x48($fp)
    ctx->pc = 0x3181a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_3181a8:
    // 0x3181a8: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x3181a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_3181ac:
    // 0x3181ac: 0x8fc40048  lw          $a0, 0x48($fp)
    ctx->pc = 0x3181acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_3181b0:
    // 0x3181b0: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x3181b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
label_3181b4:
    // 0x3181b4: 0x8fc60048  lw          $a2, 0x48($fp)
    ctx->pc = 0x3181b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_3181b8:
    // 0x3181b8: 0xacc00094  sw          $zero, 0x94($a2)
    ctx->pc = 0x3181b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 148), GPR_U32(ctx, 0));
label_3181bc:
    // 0x3181bc: 0x10000024  b           . + 4 + (0x24 << 2)
label_3181c0:
    if (ctx->pc == 0x3181C0u) {
        ctx->pc = 0x3181C4u;
        goto label_3181c4;
    }
    ctx->pc = 0x3181BCu;
    {
        const bool branch_taken_0x3181bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3181bc) {
            ctx->pc = 0x318250u;
            goto label_318250;
        }
    }
    ctx->pc = 0x3181C4u;
label_3181c4:
    // 0x3181c4: 0x8fc20048  lw          $v0, 0x48($fp)
    ctx->pc = 0x3181c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_3181c8:
    // 0x3181c8: 0x8c430068  lw          $v1, 0x68($v0)
    ctx->pc = 0x3181c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
label_3181cc:
    // 0x3181cc: 0x8fc20040  lw          $v0, 0x40($fp)
    ctx->pc = 0x3181ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
label_3181d0:
    // 0x3181d0: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x3181d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3181d4:
    // 0x3181d4: 0x8fc30048  lw          $v1, 0x48($fp)
    ctx->pc = 0x3181d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_3181d8:
    // 0x3181d8: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x3181d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_3181dc:
    // 0x3181dc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3181dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3181e0:
    // 0x3181e0: 0x8fc40048  lw          $a0, 0x48($fp)
    ctx->pc = 0x3181e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_3181e4:
    // 0x3181e4: 0x8c8200b0  lw          $v0, 0xB0($a0)
    ctx->pc = 0x3181e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
label_3181e8:
    // 0x3181e8: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x3181e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3181ec:
    // 0x3181ec: 0x8fc60048  lw          $a2, 0x48($fp)
    ctx->pc = 0x3181ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_3181f0:
    // 0x3181f0: 0x8cc200ac  lw          $v0, 0xAC($a2)
    ctx->pc = 0x3181f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 172)));
label_3181f4:
    // 0x3181f4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3181f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3181f8:
    // 0x3181f8: 0x8fc60048  lw          $a2, 0x48($fp)
    ctx->pc = 0x3181f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_3181fc:
    // 0x3181fc: 0x8cc200b0  lw          $v0, 0xB0($a2)
    ctx->pc = 0x3181fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 176)));
label_318200:
    // 0x318200: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x318200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_318204:
    // 0x318204: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x318204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_318208:
    // 0x318208: 0x8fc20040  lw          $v0, 0x40($fp)
    ctx->pc = 0x318208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
label_31820c:
    // 0x31820c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x31820cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_318210:
    // 0x318210: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x318210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_318214:
    // 0x318214: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x318214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_318218:
    // 0x318218: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x318218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_31821c:
    // 0x31821c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31821cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_318220:
    // 0x318220: 0xc0c8378  jal         func_320DE0
label_318224:
    if (ctx->pc == 0x318224u) {
        ctx->pc = 0x318228u;
        goto label_318228;
    }
    ctx->pc = 0x318220u;
    SET_GPR_U32(ctx, 31, 0x318228u);
    ctx->pc = 0x320DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320DE0u, 0x318220u, 0x318228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318228u;
label_318228:
    // 0x318228: 0x8fc20040  lw          $v0, 0x40($fp)
    ctx->pc = 0x318228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
label_31822c:
    // 0x31822c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31822cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_318230:
    // 0x318230: 0xafc20040  sw          $v0, 0x40($fp)
    ctx->pc = 0x318230u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 64), GPR_U32(ctx, 2));
label_318234:
    // 0x318234: 0x1000ffcb  b           . + 4 + (-0x35 << 2)
label_318238:
    if (ctx->pc == 0x318238u) {
        ctx->pc = 0x31823Cu;
        goto label_31823c;
    }
    ctx->pc = 0x318234u;
    {
        const bool branch_taken_0x318234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x318234) {
            ctx->pc = 0x318164u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_318164;
        }
    }
    ctx->pc = 0x31823Cu;
label_31823c:
    // 0x31823c: 0x8fc30048  lw          $v1, 0x48($fp)
    ctx->pc = 0x31823cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_318240:
    // 0x318240: 0x8c6200a0  lw          $v0, 0xA0($v1)
    ctx->pc = 0x318240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
label_318244:
    // 0x318244: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x318244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_318248:
    // 0x318248: 0x8fc40048  lw          $a0, 0x48($fp)
    ctx->pc = 0x318248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_31824c:
    // 0x31824c: 0xac8200a0  sw          $v0, 0xA0($a0)
    ctx->pc = 0x31824cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 2));
label_318250:
    // 0x318250: 0x8fc60048  lw          $a2, 0x48($fp)
    ctx->pc = 0x318250u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_318254:
    // 0x318254: 0x8cc44188  lw          $a0, 0x4188($a2)
    ctx->pc = 0x318254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16776)));
label_318258:
    // 0x318258: 0xc043cf0  jal         func_10F3C0
label_31825c:
    if (ctx->pc == 0x31825Cu) {
        ctx->pc = 0x318260u;
        goto label_318260;
    }
    ctx->pc = 0x318258u;
    SET_GPR_U32(ctx, 31, 0x318260u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x318258u, 0x318260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318260u;
label_318260:
    // 0x318260: 0x8fc40048  lw          $a0, 0x48($fp)
    ctx->pc = 0x318260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
label_318264:
    // 0x318264: 0xc0c668f  jal         func_319A3C
label_318268:
    if (ctx->pc == 0x318268u) {
        ctx->pc = 0x31826Cu;
        goto label_31826c;
    }
    ctx->pc = 0x318264u;
    SET_GPR_U32(ctx, 31, 0x31826Cu);
    ctx->pc = 0x319A3Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319A3Cu, 0x318264u, 0x31826Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31826Cu;
label_31826c:
    // 0x31826c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x31826cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_318270:
    // 0x318270: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x318270u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_318274:
    // 0x318274: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x318274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_318278:
    // 0x318278: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x318278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_31827c:
    // 0x31827c: 0x3e00008  jr          $ra
label_318280:
    if (ctx->pc == 0x318280u) {
        ctx->pc = 0x318284u;
        goto label_fallthrough_0x31827c;
    }
    ctx->pc = 0x31827Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31827Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31827c:
    ctx->pc = 0x318284u;
}
