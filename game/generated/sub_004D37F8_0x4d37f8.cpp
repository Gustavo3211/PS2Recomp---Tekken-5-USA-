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

// Function: sub_004D37F8
// Address: 0x4d37f8 - 0x4d3d50
void sub_004D37F8_0x4d37f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D37F8_0x4d37f8");
#endif

    switch (ctx->pc) {
        case 0x4d37f8u: goto label_4d37f8;
        case 0x4d37fcu: goto label_4d37fc;
        case 0x4d3800u: goto label_4d3800;
        case 0x4d3804u: goto label_4d3804;
        case 0x4d3808u: goto label_4d3808;
        case 0x4d380cu: goto label_4d380c;
        case 0x4d3810u: goto label_4d3810;
        case 0x4d3814u: goto label_4d3814;
        case 0x4d3818u: goto label_4d3818;
        case 0x4d381cu: goto label_4d381c;
        case 0x4d3820u: goto label_4d3820;
        case 0x4d3824u: goto label_4d3824;
        case 0x4d3828u: goto label_4d3828;
        case 0x4d382cu: goto label_4d382c;
        case 0x4d3830u: goto label_4d3830;
        case 0x4d3834u: goto label_4d3834;
        case 0x4d3838u: goto label_4d3838;
        case 0x4d383cu: goto label_4d383c;
        case 0x4d3840u: goto label_4d3840;
        case 0x4d3844u: goto label_4d3844;
        case 0x4d3848u: goto label_4d3848;
        case 0x4d384cu: goto label_4d384c;
        case 0x4d3850u: goto label_4d3850;
        case 0x4d3854u: goto label_4d3854;
        case 0x4d3858u: goto label_4d3858;
        case 0x4d385cu: goto label_4d385c;
        case 0x4d3860u: goto label_4d3860;
        case 0x4d3864u: goto label_4d3864;
        case 0x4d3868u: goto label_4d3868;
        case 0x4d386cu: goto label_4d386c;
        case 0x4d3870u: goto label_4d3870;
        case 0x4d3874u: goto label_4d3874;
        case 0x4d3878u: goto label_4d3878;
        case 0x4d387cu: goto label_4d387c;
        case 0x4d3880u: goto label_4d3880;
        case 0x4d3884u: goto label_4d3884;
        case 0x4d3888u: goto label_4d3888;
        case 0x4d388cu: goto label_4d388c;
        case 0x4d3890u: goto label_4d3890;
        case 0x4d3894u: goto label_4d3894;
        case 0x4d3898u: goto label_4d3898;
        case 0x4d389cu: goto label_4d389c;
        case 0x4d38a0u: goto label_4d38a0;
        case 0x4d38a4u: goto label_4d38a4;
        case 0x4d38a8u: goto label_4d38a8;
        case 0x4d38acu: goto label_4d38ac;
        case 0x4d38b0u: goto label_4d38b0;
        case 0x4d38b4u: goto label_4d38b4;
        case 0x4d38b8u: goto label_4d38b8;
        case 0x4d38bcu: goto label_4d38bc;
        case 0x4d38c0u: goto label_4d38c0;
        case 0x4d38c4u: goto label_4d38c4;
        case 0x4d38c8u: goto label_4d38c8;
        case 0x4d38ccu: goto label_4d38cc;
        case 0x4d38d0u: goto label_4d38d0;
        case 0x4d38d4u: goto label_4d38d4;
        case 0x4d38d8u: goto label_4d38d8;
        case 0x4d38dcu: goto label_4d38dc;
        case 0x4d38e0u: goto label_4d38e0;
        case 0x4d38e4u: goto label_4d38e4;
        case 0x4d38e8u: goto label_4d38e8;
        case 0x4d38ecu: goto label_4d38ec;
        case 0x4d38f0u: goto label_4d38f0;
        case 0x4d38f4u: goto label_4d38f4;
        case 0x4d38f8u: goto label_4d38f8;
        case 0x4d38fcu: goto label_4d38fc;
        case 0x4d3900u: goto label_4d3900;
        case 0x4d3904u: goto label_4d3904;
        case 0x4d3908u: goto label_4d3908;
        case 0x4d390cu: goto label_4d390c;
        case 0x4d3910u: goto label_4d3910;
        case 0x4d3914u: goto label_4d3914;
        case 0x4d3918u: goto label_4d3918;
        case 0x4d391cu: goto label_4d391c;
        case 0x4d3920u: goto label_4d3920;
        case 0x4d3924u: goto label_4d3924;
        case 0x4d3928u: goto label_4d3928;
        case 0x4d392cu: goto label_4d392c;
        case 0x4d3930u: goto label_4d3930;
        case 0x4d3934u: goto label_4d3934;
        case 0x4d3938u: goto label_4d3938;
        case 0x4d393cu: goto label_4d393c;
        case 0x4d3940u: goto label_4d3940;
        case 0x4d3944u: goto label_4d3944;
        case 0x4d3948u: goto label_4d3948;
        case 0x4d394cu: goto label_4d394c;
        case 0x4d3950u: goto label_4d3950;
        case 0x4d3954u: goto label_4d3954;
        case 0x4d3958u: goto label_4d3958;
        case 0x4d395cu: goto label_4d395c;
        case 0x4d3960u: goto label_4d3960;
        case 0x4d3964u: goto label_4d3964;
        case 0x4d3968u: goto label_4d3968;
        case 0x4d396cu: goto label_4d396c;
        case 0x4d3970u: goto label_4d3970;
        case 0x4d3974u: goto label_4d3974;
        case 0x4d3978u: goto label_4d3978;
        case 0x4d397cu: goto label_4d397c;
        case 0x4d3980u: goto label_4d3980;
        case 0x4d3984u: goto label_4d3984;
        case 0x4d3988u: goto label_4d3988;
        case 0x4d398cu: goto label_4d398c;
        case 0x4d3990u: goto label_4d3990;
        case 0x4d3994u: goto label_4d3994;
        case 0x4d3998u: goto label_4d3998;
        case 0x4d399cu: goto label_4d399c;
        case 0x4d39a0u: goto label_4d39a0;
        case 0x4d39a4u: goto label_4d39a4;
        case 0x4d39a8u: goto label_4d39a8;
        case 0x4d39acu: goto label_4d39ac;
        case 0x4d39b0u: goto label_4d39b0;
        case 0x4d39b4u: goto label_4d39b4;
        case 0x4d39b8u: goto label_4d39b8;
        case 0x4d39bcu: goto label_4d39bc;
        case 0x4d39c0u: goto label_4d39c0;
        case 0x4d39c4u: goto label_4d39c4;
        case 0x4d39c8u: goto label_4d39c8;
        case 0x4d39ccu: goto label_4d39cc;
        case 0x4d39d0u: goto label_4d39d0;
        case 0x4d39d4u: goto label_4d39d4;
        case 0x4d39d8u: goto label_4d39d8;
        case 0x4d39dcu: goto label_4d39dc;
        case 0x4d39e0u: goto label_4d39e0;
        case 0x4d39e4u: goto label_4d39e4;
        case 0x4d39e8u: goto label_4d39e8;
        case 0x4d39ecu: goto label_4d39ec;
        case 0x4d39f0u: goto label_4d39f0;
        case 0x4d39f4u: goto label_4d39f4;
        case 0x4d39f8u: goto label_4d39f8;
        case 0x4d39fcu: goto label_4d39fc;
        case 0x4d3a00u: goto label_4d3a00;
        case 0x4d3a04u: goto label_4d3a04;
        case 0x4d3a08u: goto label_4d3a08;
        case 0x4d3a0cu: goto label_4d3a0c;
        case 0x4d3a10u: goto label_4d3a10;
        case 0x4d3a14u: goto label_4d3a14;
        case 0x4d3a18u: goto label_4d3a18;
        case 0x4d3a1cu: goto label_4d3a1c;
        case 0x4d3a20u: goto label_4d3a20;
        case 0x4d3a24u: goto label_4d3a24;
        case 0x4d3a28u: goto label_4d3a28;
        case 0x4d3a2cu: goto label_4d3a2c;
        case 0x4d3a30u: goto label_4d3a30;
        case 0x4d3a34u: goto label_4d3a34;
        case 0x4d3a38u: goto label_4d3a38;
        case 0x4d3a3cu: goto label_4d3a3c;
        case 0x4d3a40u: goto label_4d3a40;
        case 0x4d3a44u: goto label_4d3a44;
        case 0x4d3a48u: goto label_4d3a48;
        case 0x4d3a4cu: goto label_4d3a4c;
        case 0x4d3a50u: goto label_4d3a50;
        case 0x4d3a54u: goto label_4d3a54;
        case 0x4d3a58u: goto label_4d3a58;
        case 0x4d3a5cu: goto label_4d3a5c;
        case 0x4d3a60u: goto label_4d3a60;
        case 0x4d3a64u: goto label_4d3a64;
        case 0x4d3a68u: goto label_4d3a68;
        case 0x4d3a6cu: goto label_4d3a6c;
        case 0x4d3a70u: goto label_4d3a70;
        case 0x4d3a74u: goto label_4d3a74;
        case 0x4d3a78u: goto label_4d3a78;
        case 0x4d3a7cu: goto label_4d3a7c;
        case 0x4d3a80u: goto label_4d3a80;
        case 0x4d3a84u: goto label_4d3a84;
        case 0x4d3a88u: goto label_4d3a88;
        case 0x4d3a8cu: goto label_4d3a8c;
        case 0x4d3a90u: goto label_4d3a90;
        case 0x4d3a94u: goto label_4d3a94;
        case 0x4d3a98u: goto label_4d3a98;
        case 0x4d3a9cu: goto label_4d3a9c;
        case 0x4d3aa0u: goto label_4d3aa0;
        case 0x4d3aa4u: goto label_4d3aa4;
        case 0x4d3aa8u: goto label_4d3aa8;
        case 0x4d3aacu: goto label_4d3aac;
        case 0x4d3ab0u: goto label_4d3ab0;
        case 0x4d3ab4u: goto label_4d3ab4;
        case 0x4d3ab8u: goto label_4d3ab8;
        case 0x4d3abcu: goto label_4d3abc;
        case 0x4d3ac0u: goto label_4d3ac0;
        case 0x4d3ac4u: goto label_4d3ac4;
        case 0x4d3ac8u: goto label_4d3ac8;
        case 0x4d3accu: goto label_4d3acc;
        case 0x4d3ad0u: goto label_4d3ad0;
        case 0x4d3ad4u: goto label_4d3ad4;
        case 0x4d3ad8u: goto label_4d3ad8;
        case 0x4d3adcu: goto label_4d3adc;
        case 0x4d3ae0u: goto label_4d3ae0;
        case 0x4d3ae4u: goto label_4d3ae4;
        case 0x4d3ae8u: goto label_4d3ae8;
        case 0x4d3aecu: goto label_4d3aec;
        case 0x4d3af0u: goto label_4d3af0;
        case 0x4d3af4u: goto label_4d3af4;
        case 0x4d3af8u: goto label_4d3af8;
        case 0x4d3afcu: goto label_4d3afc;
        case 0x4d3b00u: goto label_4d3b00;
        case 0x4d3b04u: goto label_4d3b04;
        case 0x4d3b08u: goto label_4d3b08;
        case 0x4d3b0cu: goto label_4d3b0c;
        case 0x4d3b10u: goto label_4d3b10;
        case 0x4d3b14u: goto label_4d3b14;
        case 0x4d3b18u: goto label_4d3b18;
        case 0x4d3b1cu: goto label_4d3b1c;
        case 0x4d3b20u: goto label_4d3b20;
        case 0x4d3b24u: goto label_4d3b24;
        case 0x4d3b28u: goto label_4d3b28;
        case 0x4d3b2cu: goto label_4d3b2c;
        case 0x4d3b30u: goto label_4d3b30;
        case 0x4d3b34u: goto label_4d3b34;
        case 0x4d3b38u: goto label_4d3b38;
        case 0x4d3b3cu: goto label_4d3b3c;
        case 0x4d3b40u: goto label_4d3b40;
        case 0x4d3b44u: goto label_4d3b44;
        case 0x4d3b48u: goto label_4d3b48;
        case 0x4d3b4cu: goto label_4d3b4c;
        case 0x4d3b50u: goto label_4d3b50;
        case 0x4d3b54u: goto label_4d3b54;
        case 0x4d3b58u: goto label_4d3b58;
        case 0x4d3b5cu: goto label_4d3b5c;
        case 0x4d3b60u: goto label_4d3b60;
        case 0x4d3b64u: goto label_4d3b64;
        case 0x4d3b68u: goto label_4d3b68;
        case 0x4d3b6cu: goto label_4d3b6c;
        case 0x4d3b70u: goto label_4d3b70;
        case 0x4d3b74u: goto label_4d3b74;
        case 0x4d3b78u: goto label_4d3b78;
        case 0x4d3b7cu: goto label_4d3b7c;
        case 0x4d3b80u: goto label_4d3b80;
        case 0x4d3b84u: goto label_4d3b84;
        case 0x4d3b88u: goto label_4d3b88;
        case 0x4d3b8cu: goto label_4d3b8c;
        case 0x4d3b90u: goto label_4d3b90;
        case 0x4d3b94u: goto label_4d3b94;
        case 0x4d3b98u: goto label_4d3b98;
        case 0x4d3b9cu: goto label_4d3b9c;
        case 0x4d3ba0u: goto label_4d3ba0;
        case 0x4d3ba4u: goto label_4d3ba4;
        case 0x4d3ba8u: goto label_4d3ba8;
        case 0x4d3bacu: goto label_4d3bac;
        case 0x4d3bb0u: goto label_4d3bb0;
        case 0x4d3bb4u: goto label_4d3bb4;
        case 0x4d3bb8u: goto label_4d3bb8;
        case 0x4d3bbcu: goto label_4d3bbc;
        case 0x4d3bc0u: goto label_4d3bc0;
        case 0x4d3bc4u: goto label_4d3bc4;
        case 0x4d3bc8u: goto label_4d3bc8;
        case 0x4d3bccu: goto label_4d3bcc;
        case 0x4d3bd0u: goto label_4d3bd0;
        case 0x4d3bd4u: goto label_4d3bd4;
        case 0x4d3bd8u: goto label_4d3bd8;
        case 0x4d3bdcu: goto label_4d3bdc;
        case 0x4d3be0u: goto label_4d3be0;
        case 0x4d3be4u: goto label_4d3be4;
        case 0x4d3be8u: goto label_4d3be8;
        case 0x4d3becu: goto label_4d3bec;
        case 0x4d3bf0u: goto label_4d3bf0;
        case 0x4d3bf4u: goto label_4d3bf4;
        case 0x4d3bf8u: goto label_4d3bf8;
        case 0x4d3bfcu: goto label_4d3bfc;
        case 0x4d3c00u: goto label_4d3c00;
        case 0x4d3c04u: goto label_4d3c04;
        case 0x4d3c08u: goto label_4d3c08;
        case 0x4d3c0cu: goto label_4d3c0c;
        case 0x4d3c10u: goto label_4d3c10;
        case 0x4d3c14u: goto label_4d3c14;
        case 0x4d3c18u: goto label_4d3c18;
        case 0x4d3c1cu: goto label_4d3c1c;
        case 0x4d3c20u: goto label_4d3c20;
        case 0x4d3c24u: goto label_4d3c24;
        case 0x4d3c28u: goto label_4d3c28;
        case 0x4d3c2cu: goto label_4d3c2c;
        case 0x4d3c30u: goto label_4d3c30;
        case 0x4d3c34u: goto label_4d3c34;
        case 0x4d3c38u: goto label_4d3c38;
        case 0x4d3c3cu: goto label_4d3c3c;
        case 0x4d3c40u: goto label_4d3c40;
        case 0x4d3c44u: goto label_4d3c44;
        case 0x4d3c48u: goto label_4d3c48;
        case 0x4d3c4cu: goto label_4d3c4c;
        case 0x4d3c50u: goto label_4d3c50;
        case 0x4d3c54u: goto label_4d3c54;
        case 0x4d3c58u: goto label_4d3c58;
        case 0x4d3c5cu: goto label_4d3c5c;
        case 0x4d3c60u: goto label_4d3c60;
        case 0x4d3c64u: goto label_4d3c64;
        case 0x4d3c68u: goto label_4d3c68;
        case 0x4d3c6cu: goto label_4d3c6c;
        case 0x4d3c70u: goto label_4d3c70;
        case 0x4d3c74u: goto label_4d3c74;
        case 0x4d3c78u: goto label_4d3c78;
        case 0x4d3c7cu: goto label_4d3c7c;
        case 0x4d3c80u: goto label_4d3c80;
        case 0x4d3c84u: goto label_4d3c84;
        case 0x4d3c88u: goto label_4d3c88;
        case 0x4d3c8cu: goto label_4d3c8c;
        case 0x4d3c90u: goto label_4d3c90;
        case 0x4d3c94u: goto label_4d3c94;
        case 0x4d3c98u: goto label_4d3c98;
        case 0x4d3c9cu: goto label_4d3c9c;
        case 0x4d3ca0u: goto label_4d3ca0;
        case 0x4d3ca4u: goto label_4d3ca4;
        case 0x4d3ca8u: goto label_4d3ca8;
        case 0x4d3cacu: goto label_4d3cac;
        case 0x4d3cb0u: goto label_4d3cb0;
        case 0x4d3cb4u: goto label_4d3cb4;
        case 0x4d3cb8u: goto label_4d3cb8;
        case 0x4d3cbcu: goto label_4d3cbc;
        case 0x4d3cc0u: goto label_4d3cc0;
        case 0x4d3cc4u: goto label_4d3cc4;
        case 0x4d3cc8u: goto label_4d3cc8;
        case 0x4d3cccu: goto label_4d3ccc;
        case 0x4d3cd0u: goto label_4d3cd0;
        case 0x4d3cd4u: goto label_4d3cd4;
        case 0x4d3cd8u: goto label_4d3cd8;
        case 0x4d3cdcu: goto label_4d3cdc;
        case 0x4d3ce0u: goto label_4d3ce0;
        case 0x4d3ce4u: goto label_4d3ce4;
        case 0x4d3ce8u: goto label_4d3ce8;
        case 0x4d3cecu: goto label_4d3cec;
        case 0x4d3cf0u: goto label_4d3cf0;
        case 0x4d3cf4u: goto label_4d3cf4;
        case 0x4d3cf8u: goto label_4d3cf8;
        case 0x4d3cfcu: goto label_4d3cfc;
        case 0x4d3d00u: goto label_4d3d00;
        case 0x4d3d04u: goto label_4d3d04;
        case 0x4d3d08u: goto label_4d3d08;
        case 0x4d3d0cu: goto label_4d3d0c;
        case 0x4d3d10u: goto label_4d3d10;
        case 0x4d3d14u: goto label_4d3d14;
        case 0x4d3d18u: goto label_4d3d18;
        case 0x4d3d1cu: goto label_4d3d1c;
        case 0x4d3d20u: goto label_4d3d20;
        case 0x4d3d24u: goto label_4d3d24;
        case 0x4d3d28u: goto label_4d3d28;
        case 0x4d3d2cu: goto label_4d3d2c;
        case 0x4d3d30u: goto label_4d3d30;
        case 0x4d3d34u: goto label_4d3d34;
        case 0x4d3d38u: goto label_4d3d38;
        case 0x4d3d3cu: goto label_4d3d3c;
        case 0x4d3d40u: goto label_4d3d40;
        case 0x4d3d44u: goto label_4d3d44;
        case 0x4d3d48u: goto label_4d3d48;
        case 0x4d3d4cu: goto label_4d3d4c;
        default: break;
    }

    ctx->pc = 0x4d37f8u;

label_4d37f8:
    // 0x4d37f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d37f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4d37fc:
    // 0x4d37fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d37fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4d3800:
    // 0x4d3800: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d3800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d3804:
    // 0x4d3804: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d3804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4d3808:
    // 0x4d3808: 0x261101b4  addiu       $s1, $s0, 0x1B4
    ctx->pc = 0x4d3808u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
label_4d380c:
    // 0x4d380c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d380cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4d3810:
    // 0x4d3810: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4d3810u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4d3814:
    // 0x4d3814: 0x4420010  bltzl       $v0, . + 4 + (0x10 << 2)
label_4d3818:
    if (ctx->pc == 0x4D3818u) {
        ctx->pc = 0x4D3818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3814u;
        // 0x4d3818: 0x860301bc  lh          $v1, 0x1BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D381Cu;
        goto label_4d381c;
    }
    ctx->pc = 0x4D3814u;
    {
        const bool branch_taken_0x4d3814 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4d3814) {
            ctx->pc = 0x4D3818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D3814u;
            // 0x4d3818: 0x860301bc  lh          $v1, 0x1BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D3858u;
            goto label_4d3858;
        }
    }
    ctx->pc = 0x4D381Cu;
label_4d381c:
    // 0x4d381c: 0xc12b642  jal         func_4AD908
label_4d3820:
    if (ctx->pc == 0x4D3820u) {
        ctx->pc = 0x4D3824u;
        goto label_4d3824;
    }
    ctx->pc = 0x4D381Cu;
    SET_GPR_U32(ctx, 31, 0x4D3824u);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4D381Cu, 0x4D3824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D3824u;
label_4d3824:
    // 0x4d3824: 0xa6000118  sh          $zero, 0x118($s0)
    ctx->pc = 0x4d3824u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 0));
label_4d3828:
    // 0x4d3828: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x4d3828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_4d382c:
    // 0x4d382c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4d382cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4d3830:
    // 0x4d3830: 0xa602015e  sh          $v0, 0x15E($s0)
    ctx->pc = 0x4d3830u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 2));
label_4d3834:
    // 0x4d3834: 0xa603000e  sh          $v1, 0xE($s0)
    ctx->pc = 0x4d3834u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
label_4d3838:
    // 0x4d3838: 0xa600011c  sh          $zero, 0x11C($s0)
    ctx->pc = 0x4d3838u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 284), (uint16_t)GPR_U32(ctx, 0));
label_4d383c:
    // 0x4d383c: 0xa6000120  sh          $zero, 0x120($s0)
    ctx->pc = 0x4d383cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 288), (uint16_t)GPR_U32(ctx, 0));
label_4d3840:
    // 0x4d3840: 0xa6000160  sh          $zero, 0x160($s0)
    ctx->pc = 0x4d3840u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 352), (uint16_t)GPR_U32(ctx, 0));
label_4d3844:
    // 0x4d3844: 0xa60001b6  sh          $zero, 0x1B6($s0)
    ctx->pc = 0x4d3844u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 0));
label_4d3848:
    // 0x4d3848: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4d3848u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4d384c:
    // 0x4d384c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4d384cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_4d3850:
    // 0x4d3850: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4d3850u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d3854:
    // 0x4d3854: 0x860301bc  lh          $v1, 0x1BC($s0)
    ctx->pc = 0x4d3854u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
label_4d3858:
    // 0x4d3858: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4d3858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4d385c:
    // 0x4d385c: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_4d3860:
    if (ctx->pc == 0x4D3860u) {
        ctx->pc = 0x4D3860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D385Cu;
        // 0x4d3860: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D3864u;
        goto label_4d3864;
    }
    ctx->pc = 0x4D385Cu;
    {
        const bool branch_taken_0x4d385c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4D3860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D385Cu;
        // 0x4d3860: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d385c) {
            ctx->pc = 0x4D38B0u;
            goto label_4d38b0;
        }
    }
    ctx->pc = 0x4D3864u;
label_4d3864:
    // 0x4d3864: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_4d3868:
    if (ctx->pc == 0x4D3868u) {
        ctx->pc = 0x4D3868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3864u;
        // 0x4d3868: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D386Cu;
        goto label_4d386c;
    }
    ctx->pc = 0x4D3864u;
    {
        const bool branch_taken_0x4d3864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d3864) {
            ctx->pc = 0x4D3868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D3864u;
            // 0x4d3868: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D3880u;
            goto label_4d3880;
        }
    }
    ctx->pc = 0x4D386Cu;
label_4d386c:
    // 0x4d386c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_4d3870:
    if (ctx->pc == 0x4D3870u) {
        ctx->pc = 0x4D3870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D386Cu;
        // 0x4d3870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D3874u;
        goto label_4d3874;
    }
    ctx->pc = 0x4D386Cu;
    {
        const bool branch_taken_0x4d386c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D3870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D386Cu;
        // 0x4d3870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d386c) {
            ctx->pc = 0x4D3898u;
            goto label_4d3898;
        }
    }
    ctx->pc = 0x4D3874u;
label_4d3874:
    // 0x4d3874: 0x10000020  b           . + 4 + (0x20 << 2)
label_4d3878:
    if (ctx->pc == 0x4D3878u) {
        ctx->pc = 0x4D3878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3874u;
        // 0x4d3878: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D387Cu;
        goto label_4d387c;
    }
    ctx->pc = 0x4D3874u;
    {
        const bool branch_taken_0x4d3874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D3878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3874u;
        // 0x4d3878: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3874) {
            ctx->pc = 0x4D38F8u;
            goto label_4d38f8;
        }
    }
    ctx->pc = 0x4D387Cu;
label_4d387c:
    // 0x4d387c: 0x0  nop
    ctx->pc = 0x4d387cu;
    // NOP
label_4d3880:
    // 0x4d3880: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_4d3884:
    if (ctx->pc == 0x4D3884u) {
        ctx->pc = 0x4D3884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3880u;
        // 0x4d3884: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D3888u;
        goto label_4d3888;
    }
    ctx->pc = 0x4D3880u;
    {
        const bool branch_taken_0x4d3880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4D3884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3880u;
        // 0x4d3884: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3880) {
            ctx->pc = 0x4D38C8u;
            goto label_4d38c8;
        }
    }
    ctx->pc = 0x4D3888u;
label_4d3888:
    // 0x4d3888: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
label_4d388c:
    if (ctx->pc == 0x4D388Cu) {
        ctx->pc = 0x4D388Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3888u;
        // 0x4d388c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D3890u;
        goto label_4d3890;
    }
    ctx->pc = 0x4D3888u;
    {
        const bool branch_taken_0x4d3888 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4D388Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3888u;
        // 0x4d388c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3888) {
            ctx->pc = 0x4D38E0u;
            goto label_4d38e0;
        }
    }
    ctx->pc = 0x4D3890u;
label_4d3890:
    // 0x4d3890: 0x10000019  b           . + 4 + (0x19 << 2)
label_4d3894:
    if (ctx->pc == 0x4D3894u) {
        ctx->pc = 0x4D3894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3890u;
        // 0x4d3894: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D3898u;
        goto label_4d3898;
    }
    ctx->pc = 0x4D3890u;
    {
        const bool branch_taken_0x4d3890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D3894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3890u;
        // 0x4d3894: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3890) {
            ctx->pc = 0x4D38F8u;
            goto label_4d38f8;
        }
    }
    ctx->pc = 0x4D3898u;
label_4d3898:
    // 0x4d3898: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d3898u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d389c:
    // 0x4d389c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d389cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d38a0:
    // 0x4d38a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d38a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d38a4:
    // 0x4d38a4: 0x8134e42  j           func_4D3908
label_4d38a8:
    if (ctx->pc == 0x4D38A8u) {
        ctx->pc = 0x4D38A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D38A4u;
        // 0x4d38a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D38ACu;
        goto label_4d38ac;
    }
    ctx->pc = 0x4D38A4u;
    ctx->pc = 0x4D38A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D38A4u;
    // 0x4d38a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D3908u;
    goto label_4d3908;
    ctx->pc = 0x4D38ACu;
label_4d38ac:
    // 0x4d38ac: 0x0  nop
    ctx->pc = 0x4d38acu;
    // NOP
label_4d38b0:
    // 0x4d38b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d38b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d38b4:
    // 0x4d38b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d38b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d38b8:
    // 0x4d38b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d38b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d38bc:
    // 0x4d38bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d38bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d38c0:
    // 0x4d38c0: 0x8134e60  j           func_4D3980
label_4d38c4:
    if (ctx->pc == 0x4D38C4u) {
        ctx->pc = 0x4D38C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D38C0u;
        // 0x4d38c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D38C8u;
        goto label_4d38c8;
    }
    ctx->pc = 0x4D38C0u;
    ctx->pc = 0x4D38C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D38C0u;
    // 0x4d38c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D3980u;
    goto label_4d3980;
    ctx->pc = 0x4D38C8u;
label_4d38c8:
    // 0x4d38c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d38c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d38cc:
    // 0x4d38cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d38ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d38d0:
    // 0x4d38d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d38d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d38d4:
    // 0x4d38d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d38d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d38d8:
    // 0x4d38d8: 0x8134eee  j           func_4D3BB8
label_4d38dc:
    if (ctx->pc == 0x4D38DCu) {
        ctx->pc = 0x4D38DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D38D8u;
        // 0x4d38dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D38E0u;
        goto label_4d38e0;
    }
    ctx->pc = 0x4D38D8u;
    ctx->pc = 0x4D38DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D38D8u;
    // 0x4d38dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D3BB8u;
    goto label_4d3bb8;
    ctx->pc = 0x4D38E0u;
label_4d38e0:
    // 0x4d38e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d38e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d38e4:
    // 0x4d38e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d38e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d38e8:
    // 0x4d38e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d38e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d38ec:
    // 0x4d38ec: 0x8134f0a  j           func_4D3C28
label_4d38f0:
    if (ctx->pc == 0x4D38F0u) {
        ctx->pc = 0x4D38F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D38ECu;
        // 0x4d38f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D38F4u;
        goto label_4d38f4;
    }
    ctx->pc = 0x4D38ECu;
    ctx->pc = 0x4D38F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D38ECu;
    // 0x4d38f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D3C28u;
    goto label_4d3c28;
    ctx->pc = 0x4D38F4u;
label_4d38f4:
    // 0x4d38f4: 0x0  nop
    ctx->pc = 0x4d38f4u;
    // NOP
label_4d38f8:
    // 0x4d38f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d38f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d38fc:
    // 0x4d38fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d38fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d3900:
    // 0x4d3900: 0x3e00008  jr          $ra
label_4d3904:
    if (ctx->pc == 0x4D3904u) {
        ctx->pc = 0x4D3904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3900u;
        // 0x4d3904: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D3908u;
        goto label_4d3908;
    }
    ctx->pc = 0x4D3900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D3904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3900u;
        // 0x4d3904: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D3900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D3908u;
label_4d3908:
    // 0x4d3908: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d3908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4d390c:
    // 0x4d390c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d390cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4d3910:
    // 0x4d3910: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4d3910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_4d3914:
    // 0x4d3914: 0xc12b5dc  jal         func_4AD770
label_4d3918:
    if (ctx->pc == 0x4D3918u) {
        ctx->pc = 0x4D3918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3914u;
        // 0x4d3918: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D391Cu;
        goto label_4d391c;
    }
    ctx->pc = 0x4D3914u;
    SET_GPR_U32(ctx, 31, 0x4D391Cu);
    ctx->pc = 0x4D3918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D3914u;
    // 0x4d3918: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4D3914u, 0x4D391Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D391Cu;
label_4d391c:
    // 0x4d391c: 0x24030058  addiu       $v1, $zero, 0x58
    ctx->pc = 0x4d391cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_4d3920:
    // 0x4d3920: 0xac500140  sw          $s0, 0x140($v0)
    ctx->pc = 0x4d3920u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 16));
label_4d3924:
    // 0x4d3924: 0xa44001be  sh          $zero, 0x1BE($v0)
    ctx->pc = 0x4d3924u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 446), (uint16_t)GPR_U32(ctx, 0));
label_4d3928:
    // 0x4d3928: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x4d3928u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_4d392c:
    // 0x4d392c: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4d392cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
label_4d3930:
    // 0x4d3930: 0x24c67758  addiu       $a2, $a2, 0x7758
    ctx->pc = 0x4d3930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30552));
label_4d3934:
    // 0x4d3934: 0xa440015e  sh          $zero, 0x15E($v0)
    ctx->pc = 0x4d3934u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 350), (uint16_t)GPR_U32(ctx, 0));
label_4d3938:
    // 0x4d3938: 0x260701bc  addiu       $a3, $s0, 0x1BC
    ctx->pc = 0x4d3938u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
label_4d393c:
    // 0x4d393c: 0xa4400160  sh          $zero, 0x160($v0)
    ctx->pc = 0x4d393cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 352), (uint16_t)GPR_U32(ctx, 0));
label_4d3940:
    // 0x4d3940: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d3940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d3944:
    // 0x4d3944: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4d3944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d3948:
    // 0x4d3948: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x4d3948u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_4d394c:
    // 0x4d394c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d394cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d3950:
    // 0x4d3950: 0xa4430162  sh          $v1, 0x162($v0)
    ctx->pc = 0x4d3950u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 354), (uint16_t)GPR_U32(ctx, 3));
label_4d3954:
    // 0x4d3954: 0x94c50002  lhu         $a1, 0x2($a2)
    ctx->pc = 0x4d3954u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_4d3958:
    // 0x4d3958: 0xa4450164  sh          $a1, 0x164($v0)
    ctx->pc = 0x4d3958u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 356), (uint16_t)GPR_U32(ctx, 5));
label_4d395c:
    // 0x4d395c: 0x94c30004  lhu         $v1, 0x4($a2)
    ctx->pc = 0x4d395cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
label_4d3960:
    // 0x4d3960: 0xa4430166  sh          $v1, 0x166($v0)
    ctx->pc = 0x4d3960u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 358), (uint16_t)GPR_U32(ctx, 3));
label_4d3964:
    // 0x4d3964: 0x94c50006  lhu         $a1, 0x6($a2)
    ctx->pc = 0x4d3964u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_4d3968:
    // 0x4d3968: 0xa4450168  sh          $a1, 0x168($v0)
    ctx->pc = 0x4d3968u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 360), (uint16_t)GPR_U32(ctx, 5));
label_4d396c:
    // 0x4d396c: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4d396cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_4d3970:
    // 0x4d3970: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d3970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_4d3974:
    // 0x4d3974: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x4d3974u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d3978:
    // 0x4d3978: 0x8134e60  j           func_4D3980
label_4d397c:
    if (ctx->pc == 0x4D397Cu) {
        ctx->pc = 0x4D397Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3978u;
        // 0x4d397c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D3980u;
        goto label_4d3980;
    }
    ctx->pc = 0x4D3978u;
    ctx->pc = 0x4D397Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D3978u;
    // 0x4d397c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D3980u;
    goto label_4d3980;
    ctx->pc = 0x4D3980u;
label_4d3980:
    // 0x4d3980: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4d3980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4d3984:
    // 0x4d3984: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d3984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4d3988:
    // 0x4d3988: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d3988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4d398c:
    // 0x4d398c: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4d398cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
label_4d3990:
    // 0x4d3990: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d3990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_4d3994:
    // 0x4d3994: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4d3994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_4d3998:
    // 0x4d3998: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4d3998u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d399c:
    // 0x4d399c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4d399cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_4d39a0:
    // 0x4d39a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4d39a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_4d39a4:
    // 0x4d39a4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4d39a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_4d39a8:
    // 0x4d39a8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x4d39a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_4d39ac:
    // 0x4d39ac: 0xc13e3f4  jal         func_4F8FD0
label_4d39b0:
    if (ctx->pc == 0x4D39B0u) {
        ctx->pc = 0x4D39B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D39ACu;
        // 0x4d39b0: 0x3c16007f  lui         $s6, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D39B4u;
        goto label_4d39b4;
    }
    ctx->pc = 0x4D39ACu;
    SET_GPR_U32(ctx, 31, 0x4D39B4u);
    ctx->pc = 0x4D39B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D39ACu;
    // 0x4d39b0: 0x3c16007f  lui         $s6, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F8FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F8FD0u, 0x4D39ACu, 0x4D39B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D39B4u;
label_4d39b4:
    // 0x4d39b4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4d39b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d39b8:
    // 0x4d39b8: 0x26c51058  addiu       $a1, $s6, 0x1058
    ctx->pc = 0x4d39b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4184));
label_4d39bc:
    // 0x4d39bc: 0x86440000  lh          $a0, 0x0($s2)
    ctx->pc = 0x4d39bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4d39c0:
    // 0x4d39c0: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4d39c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
label_4d39c4:
    // 0x4d39c4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4d39c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4d39c8:
    // 0x4d39c8: 0x24701048  addiu       $s0, $v1, 0x1048
    ctx->pc = 0x4d39c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4168));
label_4d39cc:
    // 0x4d39cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4d39ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4d39d0:
    // 0x4d39d0: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x4d39d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
label_4d39d4:
    // 0x4d39d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d39d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4d39d8:
    // 0x4d39d8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4d39d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_4d39dc:
    // 0x4d39dc: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4d39dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
label_4d39e0:
    // 0x4d39e0: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x4d39e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_4d39e4:
    // 0x4d39e4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4d39e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_4d39e8:
    // 0x4d39e8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4d39e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_4d39ec:
    // 0x4d39ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d39ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4d39f0:
    // 0x4d39f0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d39f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d39f4:
    // 0x4d39f4: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4d39f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4d39f8:
    // 0x4d39f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4d39f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4d39fc:
    // 0x4d39fc: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d39fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_4d3a00:
    // 0x4d3a00: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d3a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d3a04:
    // 0x4d3a04: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d3a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4d3a08:
    // 0x4d3a08: 0xc12b638  jal         func_4AD8E0
label_4d3a0c:
    if (ctx->pc == 0x4D3A0Cu) {
        ctx->pc = 0x4D3A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3A08u;
        // 0x4d3a0c: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D3A10u;
        goto label_4d3a10;
    }
    ctx->pc = 0x4D3A08u;
    SET_GPR_U32(ctx, 31, 0x4D3A10u);
    ctx->pc = 0x4D3A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D3A08u;
    // 0x4d3a0c: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8E0u, 0x4D3A08u, 0x4D3A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D3A10u;
label_4d3a10:
    // 0x4d3a10: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
label_4d3a14:
    if (ctx->pc == 0x4D3A14u) {
        ctx->pc = 0x4D3A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3A10u;
        // 0x4d3a14: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D3A18u;
        goto label_4d3a18;
    }
    ctx->pc = 0x4D3A10u;
    {
        const bool branch_taken_0x4d3a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D3A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3A10u;
        // 0x4d3a14: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3a10) {
            ctx->pc = 0x4D3B90u;
            goto label_4d3b90;
        }
    }
    ctx->pc = 0x4D3A18u;
label_4d3a18:
    // 0x4d3a18: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4d3a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4d3a1c:
    // 0x4d3a1c: 0x868201be  lh          $v0, 0x1BE($s4)
    ctx->pc = 0x4d3a1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 446)));
label_4d3a20:
    // 0x4d3a20: 0x3c15ffff  lui         $s5, 0xFFFF
    ctx->pc = 0x4d3a20u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65535 << 16));
label_4d3a24:
    // 0x4d3a24: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x4d3a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4d3a28:
    // 0x4d3a28: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d3a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d3a2c:
    // 0x4d3a2c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d3a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_4d3a30:
    // 0x4d3a30: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d3a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d3a34:
    // 0x4d3a34: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x4d3a34u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d3a38:
    // 0x4d3a38: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d3a38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4d3a3c:
    // 0x4d3a3c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d3a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d3a40:
    // 0x4d3a40: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x4d3a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_4d3a44:
    // 0x4d3a44: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4d3a44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4d3a48:
    // 0x4d3a48: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4d3a48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4d3a4c:
    // 0x4d3a4c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d3a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_4d3a50:
    // 0x4d3a50: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d3a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d3a54:
    // 0x4d3a54: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d3a54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4d3a58:
    // 0x4d3a58: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4d3a58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4d3a5c:
    // 0x4d3a5c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d3a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4d3a60:
    // 0x4d3a60: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4d3a60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_4d3a64:
    // 0x4d3a64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4d3a64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4d3a68:
    // 0x4d3a68: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4d3a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4d3a6c:
    // 0x4d3a6c: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x4d3a6cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d3a70:
    // 0x4d3a70: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x4d3a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_4d3a74:
    // 0x4d3a74: 0x0  nop
    ctx->pc = 0x4d3a74u;
    // NOP
label_4d3a78:
    // 0x4d3a78: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4d3a78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4d3a7c:
    // 0x4d3a7c: 0x4400027  bltz        $v0, . + 4 + (0x27 << 2)
label_4d3a80:
    if (ctx->pc == 0x4D3A80u) {
        ctx->pc = 0x4D3A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3A7Cu;
        // 0x4d3a80: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D3A84u;
        goto label_4d3a84;
    }
    ctx->pc = 0x4D3A7Cu;
    {
        const bool branch_taken_0x4d3a7c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4D3A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3A7Cu;
        // 0x4d3a80: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3a7c) {
            ctx->pc = 0x4D3B1Cu;
            goto label_4d3b1c;
        }
    }
    ctx->pc = 0x4D3A84u;
label_4d3a84:
    // 0x4d3a84: 0xc12b5f2  jal         func_4AD7C8
label_4d3a88:
    if (ctx->pc == 0x4D3A88u) {
        ctx->pc = 0x4D3A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3A84u;
        // 0x4d3a88: 0x86700000  lh          $s0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D3A8Cu;
        goto label_4d3a8c;
    }
    ctx->pc = 0x4D3A84u;
    SET_GPR_U32(ctx, 31, 0x4D3A8Cu);
    ctx->pc = 0x4D3A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D3A84u;
    // 0x4d3a88: 0x86700000  lh          $s0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD7C8u, 0x4D3A84u, 0x4D3A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D3A8Cu;
label_4d3a8c:
    // 0x4d3a8c: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4d3a8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4d3a90:
    // 0x4d3a90: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x4d3a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4d3a94:
    // 0x4d3a94: 0x24460014  addiu       $a2, $v0, 0x14
    ctx->pc = 0x4d3a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_4d3a98:
    // 0x4d3a98: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4d3a98u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
label_4d3a9c:
    // 0x4d3a9c: 0x24470018  addiu       $a3, $v0, 0x18
    ctx->pc = 0x4d3a9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_4d3aa0:
    // 0x4d3aa0: 0x2158025  or          $s0, $s0, $s5
    ctx->pc = 0x4d3aa0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 21));
label_4d3aa4:
    // 0x4d3aa4: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x4d3aa4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_4d3aa8:
    // 0x4d3aa8: 0xa44301be  sh          $v1, 0x1BE($v0)
    ctx->pc = 0x4d3aa8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 446), (uint16_t)GPR_U32(ctx, 3));
label_4d3aac:
    // 0x4d3aac: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x4d3aacu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4d3ab0:
    // 0x4d3ab0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4d3ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4d3ab4:
    // 0x4d3ab4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4d3ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_4d3ab8:
    // 0x4d3ab8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4d3ab8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4d3abc:
    // 0x4d3abc: 0x751825  or          $v1, $v1, $s5
    ctx->pc = 0x4d3abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
label_4d3ac0:
    // 0x4d3ac0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4d3ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_4d3ac4:
    // 0x4d3ac4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4d3ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4d3ac8:
    // 0x4d3ac8: 0x96440002  lhu         $a0, 0x2($s2)
    ctx->pc = 0x4d3ac8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_4d3acc:
    // 0x4d3acc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4d3accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4d3ad0:
    // 0x4d3ad0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4d3ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_4d3ad4:
    // 0x4d3ad4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4d3ad4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4d3ad8:
    // 0x4d3ad8: 0x751825  or          $v1, $v1, $s5
    ctx->pc = 0x4d3ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
label_4d3adc:
    // 0x4d3adc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4d3adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_4d3ae0:
    // 0x4d3ae0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4d3ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_4d3ae4:
    // 0x4d3ae4: 0x96440004  lhu         $a0, 0x4($s2)
    ctx->pc = 0x4d3ae4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_4d3ae8:
    // 0x4d3ae8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4d3ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4d3aec:
    // 0x4d3aec: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4d3aecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_4d3af0:
    // 0x4d3af0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4d3af0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4d3af4:
    // 0x4d3af4: 0x751825  or          $v1, $v1, $s5
    ctx->pc = 0x4d3af4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
label_4d3af8:
    // 0x4d3af8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4d3af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_4d3afc:
    // 0x4d3afc: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4d3afcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_4d3b00:
    // 0x4d3b00: 0xac540140  sw          $s4, 0x140($v0)
    ctx->pc = 0x4d3b00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 20));
label_4d3b04:
    // 0x4d3b04: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4d3b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4d3b08:
    // 0x4d3b08: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d3b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d3b0c:
    // 0x4d3b0c: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x4d3b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
label_4d3b10:
    // 0x4d3b10: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4d3b10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4d3b14:
    // 0x4d3b14: 0x96640000  lhu         $a0, 0x0($s3)
    ctx->pc = 0x4d3b14u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_4d3b18:
    // 0x4d3b18: 0xa44401b8  sh          $a0, 0x1B8($v0)
    ctx->pc = 0x4d3b18u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 440), (uint16_t)GPR_U32(ctx, 4));
label_4d3b1c:
    // 0x4d3b1c: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4d3b1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_4d3b20:
    // 0x4d3b20: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x4d3b20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_4d3b24:
    // 0x4d3b24: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4d3b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4d3b28:
    // 0x4d3b28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4d3b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4d3b2c:
    // 0x4d3b2c: 0x96c41058  lhu         $a0, 0x1058($s6)
    ctx->pc = 0x4d3b2cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 4184)));
label_4d3b30:
    // 0x4d3b30: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4d3b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
label_4d3b34:
    // 0x4d3b34: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d3b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d3b38:
    // 0x4d3b38: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d3b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d3b3c:
    // 0x4d3b3c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4d3b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4d3b40:
    // 0x4d3b40: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4d3b40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_4d3b44:
    // 0x4d3b44: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4d3b44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4d3b48:
    // 0x4d3b48: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
label_4d3b4c:
    if (ctx->pc == 0x4D3B4Cu) {
        ctx->pc = 0x4D3B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3B48u;
        // 0x4d3b4c: 0x26520006  addiu       $s2, $s2, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D3B50u;
        goto label_4d3b50;
    }
    ctx->pc = 0x4D3B48u;
    {
        const bool branch_taken_0x4d3b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D3B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3B48u;
        // 0x4d3b4c: 0x26520006  addiu       $s2, $s2, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3b48) {
            ctx->pc = 0x4D3A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d3a78;
        }
    }
    ctx->pc = 0x4D3B50u;
label_4d3b50:
    // 0x4d3b50: 0x268301bc  addiu       $v1, $s4, 0x1BC
    ctx->pc = 0x4d3b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 444));
label_4d3b54:
    // 0x4d3b54: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4d3b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4d3b58:
    // 0x4d3b58: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4d3b58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_4d3b5c:
    // 0x4d3b5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d3b5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d3b60:
    // 0x4d3b60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d3b60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d3b64:
    // 0x4d3b64: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d3b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_4d3b68:
    // 0x4d3b68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d3b68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d3b6c:
    // 0x4d3b6c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d3b6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4d3b70:
    // 0x4d3b70: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d3b70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d3b74:
    // 0x4d3b74: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d3b74u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_4d3b78:
    // 0x4d3b78: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4d3b78u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4d3b7c:
    // 0x4d3b7c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4d3b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_4d3b80:
    // 0x4d3b80: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4d3b80u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d3b84:
    // 0x4d3b84: 0x8134eee  j           func_4D3BB8
label_4d3b88:
    if (ctx->pc == 0x4D3B88u) {
        ctx->pc = 0x4D3B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3B84u;
        // 0x4d3b88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D3B8Cu;
        goto label_4d3b8c;
    }
    ctx->pc = 0x4D3B84u;
    ctx->pc = 0x4D3B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D3B84u;
    // 0x4d3b88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D3BB8u;
    goto label_4d3bb8;
    ctx->pc = 0x4D3B8Cu;
label_4d3b8c:
    // 0x4d3b8c: 0x0  nop
    ctx->pc = 0x4d3b8cu;
    // NOP
label_4d3b90:
    // 0x4d3b90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d3b90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d3b94:
    // 0x4d3b94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d3b94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d3b98:
    // 0x4d3b98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d3b98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d3b9c:
    // 0x4d3b9c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d3b9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4d3ba0:
    // 0x4d3ba0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d3ba0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d3ba4:
    // 0x4d3ba4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d3ba4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_4d3ba8:
    // 0x4d3ba8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4d3ba8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4d3bac:
    // 0x4d3bac: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4d3bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_4d3bb0:
    // 0x4d3bb0: 0x3e00008  jr          $ra
label_4d3bb4:
    if (ctx->pc == 0x4D3BB4u) {
        ctx->pc = 0x4D3BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3BB0u;
        // 0x4d3bb4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D3BB8u;
        goto label_4d3bb8;
    }
    ctx->pc = 0x4D3BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D3BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3BB0u;
        // 0x4d3bb4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D3BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D3BB8u;
label_4d3bb8:
    // 0x4d3bb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d3bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4d3bbc:
    // 0x4d3bbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d3bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4d3bc0:
    // 0x4d3bc0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4d3bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_4d3bc4:
    // 0x4d3bc4: 0xc122db4  jal         func_48B6D0
label_4d3bc8:
    if (ctx->pc == 0x4D3BC8u) {
        ctx->pc = 0x4D3BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3BC4u;
        // 0x4d3bc8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D3BCCu;
        goto label_4d3bcc;
    }
    ctx->pc = 0x4D3BC4u;
    SET_GPR_U32(ctx, 31, 0x4D3BCCu);
    ctx->pc = 0x4D3BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D3BC4u;
    // 0x4d3bc8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4D3BC4u, 0x4D3BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D3BCCu;
label_4d3bcc:
    // 0x4d3bcc: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_4d3bd0:
    if (ctx->pc == 0x4D3BD0u) {
        ctx->pc = 0x4D3BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3BCCu;
        // 0x4d3bd0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D3BD4u;
        goto label_4d3bd4;
    }
    ctx->pc = 0x4D3BCCu;
    {
        const bool branch_taken_0x4d3bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d3bcc) {
            ctx->pc = 0x4D3BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D3BCCu;
            // 0x4d3bd0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D3C18u;
            goto label_4d3c18;
        }
    }
    ctx->pc = 0x4D3BD4u;
label_4d3bd4:
    // 0x4d3bd4: 0x86020148  lh          $v0, 0x148($s0)
    ctx->pc = 0x4d3bd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 328)));
label_4d3bd8:
    // 0x4d3bd8: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_4d3bdc:
    if (ctx->pc == 0x4D3BDCu) {
        ctx->pc = 0x4D3BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3BD8u;
        // 0x4d3bdc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D3BE0u;
        goto label_4d3be0;
    }
    ctx->pc = 0x4D3BD8u;
    {
        const bool branch_taken_0x4d3bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d3bd8) {
            ctx->pc = 0x4D3BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D3BD8u;
            // 0x4d3bdc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D3C18u;
            goto label_4d3c18;
        }
    }
    ctx->pc = 0x4D3BE0u;
label_4d3be0:
    // 0x4d3be0: 0xc126d66  jal         func_49B598
label_4d3be4:
    if (ctx->pc == 0x4D3BE4u) {
        ctx->pc = 0x4D3BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3BE0u;
        // 0x4d3be4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D3BE8u;
        goto label_4d3be8;
    }
    ctx->pc = 0x4D3BE0u;
    SET_GPR_U32(ctx, 31, 0x4D3BE8u);
    ctx->pc = 0x4D3BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D3BE0u;
    // 0x4d3be4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49B598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49B598u, 0x4D3BE0u, 0x4D3BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D3BE8u;
label_4d3be8:
    // 0x4d3be8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4d3be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_4d3bec:
    // 0x4d3bec: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x4d3becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
label_4d3bf0:
    // 0x4d3bf0: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x4d3bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_4d3bf4:
    // 0x4d3bf4: 0xa44323c4  sh          $v1, 0x23C4($v0)
    ctx->pc = 0x4d3bf4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 9156), (uint16_t)GPR_U32(ctx, 3));
label_4d3bf8:
    // 0x4d3bf8: 0xc1297fa  jal         func_4A5FE8
label_4d3bfc:
    if (ctx->pc == 0x4D3BFCu) {
        ctx->pc = 0x4D3BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3BF8u;
        // 0x4d3bfc: 0xa44023c2  sh          $zero, 0x23C2($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 9154), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D3C00u;
        goto label_4d3c00;
    }
    ctx->pc = 0x4D3BF8u;
    SET_GPR_U32(ctx, 31, 0x4D3C00u);
    ctx->pc = 0x4D3BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D3BF8u;
    // 0x4d3bfc: 0xa44023c2  sh          $zero, 0x23C2($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 9154), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4D3BF8u, 0x4D3C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D3C00u;
label_4d3c00:
    // 0x4d3c00: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x4d3c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4d3c04:
    // 0x4d3c04: 0xa600015e  sh          $zero, 0x15E($s0)
    ctx->pc = 0x4d3c04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 0));
label_4d3c08:
    // 0x4d3c08: 0xa60201bc  sh          $v0, 0x1BC($s0)
    ctx->pc = 0x4d3c08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 444), (uint16_t)GPR_U32(ctx, 2));
label_4d3c0c:
    // 0x4d3c0c: 0xa6000166  sh          $zero, 0x166($s0)
    ctx->pc = 0x4d3c0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 358), (uint16_t)GPR_U32(ctx, 0));
label_4d3c10:
    // 0x4d3c10: 0xa6000168  sh          $zero, 0x168($s0)
    ctx->pc = 0x4d3c10u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 360), (uint16_t)GPR_U32(ctx, 0));
label_4d3c14:
    // 0x4d3c14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d3c14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d3c18:
    // 0x4d3c18: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4d3c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d3c1c:
    // 0x4d3c1c: 0x3e00008  jr          $ra
label_4d3c20:
    if (ctx->pc == 0x4D3C20u) {
        ctx->pc = 0x4D3C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3C1Cu;
        // 0x4d3c20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D3C24u;
        goto label_4d3c24;
    }
    ctx->pc = 0x4D3C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D3C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3C1Cu;
        // 0x4d3c20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D3C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D3C24u;
label_4d3c24:
    // 0x4d3c24: 0x0  nop
    ctx->pc = 0x4d3c24u;
    // NOP
label_4d3c28:
    // 0x4d3c28: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4d3c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4d3c2c:
    // 0x4d3c2c: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4d3c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
label_4d3c30:
    // 0x4d3c30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d3c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4d3c34:
    // 0x4d3c34: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4d3c34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
label_4d3c38:
    // 0x4d3c38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d3c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4d3c3c:
    // 0x4d3c3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4d3c3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d3c40:
    // 0x4d3c40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d3c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_4d3c44:
    // 0x4d3c44: 0x24b21048  addiu       $s2, $a1, 0x1048
    ctx->pc = 0x4d3c44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 4168));
label_4d3c48:
    // 0x4d3c48: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4d3c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_4d3c4c:
    // 0x4d3c4c: 0x24d3105c  addiu       $s3, $a2, 0x105C
    ctx->pc = 0x4d3c4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), 4188));
label_4d3c50:
    // 0x4d3c50: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4d3c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_4d3c54:
    // 0x4d3c54: 0x24140006  addiu       $s4, $zero, 0x6
    ctx->pc = 0x4d3c54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4d3c58:
    // 0x4d3c58: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4d3c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_4d3c5c:
    // 0x4d3c5c: 0x26230166  addiu       $v1, $s1, 0x166
    ctx->pc = 0x4d3c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 358));
label_4d3c60:
    // 0x4d3c60: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4d3c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_4d3c64:
    // 0x4d3c64: 0x26300168  addiu       $s0, $s1, 0x168
    ctx->pc = 0x4d3c64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 360));
label_4d3c68:
    // 0x4d3c68: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4d3c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_4d3c6c:
    // 0x4d3c6c: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x4d3c6cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4d3c70:
    // 0x4d3c70: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4d3c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_4d3c74:
    // 0x4d3c74: 0x3c1effff  lui         $fp, 0xFFFF
    ctx->pc = 0x4d3c74u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65535 << 16));
label_4d3c78:
    // 0x4d3c78: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4d3c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_4d3c7c:
    // 0x4d3c7c: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x4d3c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
label_4d3c80:
    // 0x4d3c80: 0x249577d0  addiu       $s5, $a0, 0x77D0
    ctx->pc = 0x4d3c80u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 30672));
label_4d3c84:
    // 0x4d3c84: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x4d3c84u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d3c88:
    // 0x4d3c88: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4d3c88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_4d3c8c:
    // 0x4d3c8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4d3c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4d3c90:
    // 0x4d3c90: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4d3c90u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d3c94:
    // 0x4d3c94: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x4d3c94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
label_4d3c98:
    // 0x4d3c98: 0x86c30000  lh          $v1, 0x0($s6)
    ctx->pc = 0x4d3c98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
label_4d3c9c:
    // 0x4d3c9c: 0x74001a  div         $zero, $v1, $s4
    ctx->pc = 0x4d3c9cu;
    { int32_t divisor = GPR_S32(ctx, 20);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_4d3ca0:
    // 0x4d3ca0: 0x1812  mflo        $v1
    ctx->pc = 0x4d3ca0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_4d3ca4:
    // 0x4d3ca4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x4d3ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_4d3ca8:
    // 0x4d3ca8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4d3ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4d3cac:
    // 0x4d3cac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4d3cacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4d3cb0:
    // 0x4d3cb0: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x4d3cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_4d3cb4:
    // 0x4d3cb4: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x4d3cb4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_4d3cb8:
    // 0x4d3cb8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4d3cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4d3cbc:
    // 0x4d3cbc: 0x4600016  bltz        $v1, . + 4 + (0x16 << 2)
label_4d3cc0:
    if (ctx->pc == 0x4D3CC0u) {
        ctx->pc = 0x4D3CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3CBCu;
        // 0x4d3cc0: 0x94420000  lhu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D3CC4u;
        goto label_4d3cc4;
    }
    ctx->pc = 0x4D3CBCu;
    {
        const bool branch_taken_0x4d3cbc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4D3CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3CBCu;
        // 0x4d3cc0: 0x94420000  lhu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3cbc) {
            ctx->pc = 0x4D3D18u;
            goto label_4d3d18;
        }
    }
    ctx->pc = 0x4D3CC4u;
label_4d3cc4:
    // 0x4d3cc4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4d3cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4d3cc8:
    // 0x4d3cc8: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x4d3cc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_4d3ccc:
    // 0x4d3ccc: 0x86e20000  lh          $v0, 0x0($s7)
    ctx->pc = 0x4d3cccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
label_4d3cd0:
    // 0x4d3cd0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d3cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d3cd4:
    // 0x4d3cd4: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x4d3cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
label_4d3cd8:
    // 0x4d3cd8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d3cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d3cdc:
    // 0x4d3cdc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4d3cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_4d3ce0:
    // 0x4d3ce0: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4d3ce0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4d3ce4:
    // 0x4d3ce4: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4d3ce4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4d3ce8:
    // 0x4d3ce8: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_4d3cec:
    if (ctx->pc == 0x4D3CECu) {
        ctx->pc = 0x4D3CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3CE8u;
        // 0x4d3cec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D3CF0u;
        goto label_4d3cf0;
    }
    ctx->pc = 0x4D3CE8u;
    {
        const bool branch_taken_0x4d3ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d3ce8) {
            ctx->pc = 0x4D3CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D3CE8u;
            // 0x4d3cec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D3D1Cu;
            goto label_4d3d1c;
        }
    }
    ctx->pc = 0x4D3CF0u;
label_4d3cf0:
    // 0x4d3cf0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4d3cf0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4d3cf4:
    // 0x4d3cf4: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x4d3cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
label_4d3cf8:
    // 0x4d3cf8: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4d3cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d3cfc:
    // 0x4d3cfc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4d3cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4d3d00:
    // 0x4d3d00: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4d3d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4d3d04:
    // 0x4d3d04: 0x40f809  jalr        $v0
label_4d3d08:
    if (ctx->pc == 0x4D3D08u) {
        ctx->pc = 0x4D3D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3D04u;
        // 0x4d3d08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D3D0Cu;
        goto label_4d3d0c;
    }
    ctx->pc = 0x4D3D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4D3D0Cu);
        ctx->pc = 0x4D3D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3D04u;
        // 0x4d3d08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D3D04u, 0x4D3D0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4D3D0Cu;
label_4d3d0c:
    // 0x4d3d0c: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
label_4d3d10:
    if (ctx->pc == 0x4D3D10u) {
        ctx->pc = 0x4D3D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3D0Cu;
        // 0x4d3d10: 0xae750000  sw          $s5, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D3D14u;
        goto label_4d3d14;
    }
    ctx->pc = 0x4D3D0Cu;
    {
        const bool branch_taken_0x4d3d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D3D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3D0Cu;
        // 0x4d3d10: 0xae750000  sw          $s5, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3d0c) {
            ctx->pc = 0x4D3C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d3c98;
        }
    }
    ctx->pc = 0x4D3D14u;
label_4d3d14:
    // 0x4d3d14: 0x0  nop
    ctx->pc = 0x4d3d14u;
    // NOP
label_4d3d18:
    // 0x4d3d18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d3d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d3d1c:
    // 0x4d3d1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d3d1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d3d20:
    // 0x4d3d20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d3d20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d3d24:
    // 0x4d3d24: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d3d24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d3d28:
    // 0x4d3d28: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d3d28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4d3d2c:
    // 0x4d3d2c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d3d2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d3d30:
    // 0x4d3d30: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d3d30u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_4d3d34:
    // 0x4d3d34: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4d3d34u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4d3d38:
    // 0x4d3d38: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4d3d38u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_4d3d3c:
    // 0x4d3d3c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4d3d3cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4d3d40:
    // 0x4d3d40: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4d3d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_4d3d44:
    // 0x4d3d44: 0x8122db4  j           func_48B6D0
label_4d3d48:
    if (ctx->pc == 0x4D3D48u) {
        ctx->pc = 0x4D3D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3D44u;
        // 0x4d3d48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D3D4Cu;
        goto label_4d3d4c;
    }
    ctx->pc = 0x4D3D44u;
    ctx->pc = 0x4D3D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D3D44u;
    // 0x4d3d48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    sub_0048B6D0_0x48b6d0(rdram, ctx, runtime); return;
    ctx->pc = 0x4D3D4Cu;
label_4d3d4c:
    // 0x4d3d4c: 0x0  nop
    ctx->pc = 0x4d3d4cu;
    // NOP
    ctx->pc = 0x4d3d50u;
}
