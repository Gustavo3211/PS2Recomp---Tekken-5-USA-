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

// Function: sub_0033ECA0
// Address: 0x33eca0 - 0x33f158
void sub_0033ECA0_0x33eca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033ECA0_0x33eca0");
#endif

    switch (ctx->pc) {
        case 0x33eca0u: goto label_33eca0;
        case 0x33eca4u: goto label_33eca4;
        case 0x33eca8u: goto label_33eca8;
        case 0x33ecacu: goto label_33ecac;
        case 0x33ecb0u: goto label_33ecb0;
        case 0x33ecb4u: goto label_33ecb4;
        case 0x33ecb8u: goto label_33ecb8;
        case 0x33ecbcu: goto label_33ecbc;
        case 0x33ecc0u: goto label_33ecc0;
        case 0x33ecc4u: goto label_33ecc4;
        case 0x33ecc8u: goto label_33ecc8;
        case 0x33ecccu: goto label_33eccc;
        case 0x33ecd0u: goto label_33ecd0;
        case 0x33ecd4u: goto label_33ecd4;
        case 0x33ecd8u: goto label_33ecd8;
        case 0x33ecdcu: goto label_33ecdc;
        case 0x33ece0u: goto label_33ece0;
        case 0x33ece4u: goto label_33ece4;
        case 0x33ece8u: goto label_33ece8;
        case 0x33ececu: goto label_33ecec;
        case 0x33ecf0u: goto label_33ecf0;
        case 0x33ecf4u: goto label_33ecf4;
        case 0x33ecf8u: goto label_33ecf8;
        case 0x33ecfcu: goto label_33ecfc;
        case 0x33ed00u: goto label_33ed00;
        case 0x33ed04u: goto label_33ed04;
        case 0x33ed08u: goto label_33ed08;
        case 0x33ed0cu: goto label_33ed0c;
        case 0x33ed10u: goto label_33ed10;
        case 0x33ed14u: goto label_33ed14;
        case 0x33ed18u: goto label_33ed18;
        case 0x33ed1cu: goto label_33ed1c;
        case 0x33ed20u: goto label_33ed20;
        case 0x33ed24u: goto label_33ed24;
        case 0x33ed28u: goto label_33ed28;
        case 0x33ed2cu: goto label_33ed2c;
        case 0x33ed30u: goto label_33ed30;
        case 0x33ed34u: goto label_33ed34;
        case 0x33ed38u: goto label_33ed38;
        case 0x33ed3cu: goto label_33ed3c;
        case 0x33ed40u: goto label_33ed40;
        case 0x33ed44u: goto label_33ed44;
        case 0x33ed48u: goto label_33ed48;
        case 0x33ed4cu: goto label_33ed4c;
        case 0x33ed50u: goto label_33ed50;
        case 0x33ed54u: goto label_33ed54;
        case 0x33ed58u: goto label_33ed58;
        case 0x33ed5cu: goto label_33ed5c;
        case 0x33ed60u: goto label_33ed60;
        case 0x33ed64u: goto label_33ed64;
        case 0x33ed68u: goto label_33ed68;
        case 0x33ed6cu: goto label_33ed6c;
        case 0x33ed70u: goto label_33ed70;
        case 0x33ed74u: goto label_33ed74;
        case 0x33ed78u: goto label_33ed78;
        case 0x33ed7cu: goto label_33ed7c;
        case 0x33ed80u: goto label_33ed80;
        case 0x33ed84u: goto label_33ed84;
        case 0x33ed88u: goto label_33ed88;
        case 0x33ed8cu: goto label_33ed8c;
        case 0x33ed90u: goto label_33ed90;
        case 0x33ed94u: goto label_33ed94;
        case 0x33ed98u: goto label_33ed98;
        case 0x33ed9cu: goto label_33ed9c;
        case 0x33eda0u: goto label_33eda0;
        case 0x33eda4u: goto label_33eda4;
        case 0x33eda8u: goto label_33eda8;
        case 0x33edacu: goto label_33edac;
        case 0x33edb0u: goto label_33edb0;
        case 0x33edb4u: goto label_33edb4;
        case 0x33edb8u: goto label_33edb8;
        case 0x33edbcu: goto label_33edbc;
        case 0x33edc0u: goto label_33edc0;
        case 0x33edc4u: goto label_33edc4;
        case 0x33edc8u: goto label_33edc8;
        case 0x33edccu: goto label_33edcc;
        case 0x33edd0u: goto label_33edd0;
        case 0x33edd4u: goto label_33edd4;
        case 0x33edd8u: goto label_33edd8;
        case 0x33eddcu: goto label_33eddc;
        case 0x33ede0u: goto label_33ede0;
        case 0x33ede4u: goto label_33ede4;
        case 0x33ede8u: goto label_33ede8;
        case 0x33edecu: goto label_33edec;
        case 0x33edf0u: goto label_33edf0;
        case 0x33edf4u: goto label_33edf4;
        case 0x33edf8u: goto label_33edf8;
        case 0x33edfcu: goto label_33edfc;
        case 0x33ee00u: goto label_33ee00;
        case 0x33ee04u: goto label_33ee04;
        case 0x33ee08u: goto label_33ee08;
        case 0x33ee0cu: goto label_33ee0c;
        case 0x33ee10u: goto label_33ee10;
        case 0x33ee14u: goto label_33ee14;
        case 0x33ee18u: goto label_33ee18;
        case 0x33ee1cu: goto label_33ee1c;
        case 0x33ee20u: goto label_33ee20;
        case 0x33ee24u: goto label_33ee24;
        case 0x33ee28u: goto label_33ee28;
        case 0x33ee2cu: goto label_33ee2c;
        case 0x33ee30u: goto label_33ee30;
        case 0x33ee34u: goto label_33ee34;
        case 0x33ee38u: goto label_33ee38;
        case 0x33ee3cu: goto label_33ee3c;
        case 0x33ee40u: goto label_33ee40;
        case 0x33ee44u: goto label_33ee44;
        case 0x33ee48u: goto label_33ee48;
        case 0x33ee4cu: goto label_33ee4c;
        case 0x33ee50u: goto label_33ee50;
        case 0x33ee54u: goto label_33ee54;
        case 0x33ee58u: goto label_33ee58;
        case 0x33ee5cu: goto label_33ee5c;
        case 0x33ee60u: goto label_33ee60;
        case 0x33ee64u: goto label_33ee64;
        case 0x33ee68u: goto label_33ee68;
        case 0x33ee6cu: goto label_33ee6c;
        case 0x33ee70u: goto label_33ee70;
        case 0x33ee74u: goto label_33ee74;
        case 0x33ee78u: goto label_33ee78;
        case 0x33ee7cu: goto label_33ee7c;
        case 0x33ee80u: goto label_33ee80;
        case 0x33ee84u: goto label_33ee84;
        case 0x33ee88u: goto label_33ee88;
        case 0x33ee8cu: goto label_33ee8c;
        case 0x33ee90u: goto label_33ee90;
        case 0x33ee94u: goto label_33ee94;
        case 0x33ee98u: goto label_33ee98;
        case 0x33ee9cu: goto label_33ee9c;
        case 0x33eea0u: goto label_33eea0;
        case 0x33eea4u: goto label_33eea4;
        case 0x33eea8u: goto label_33eea8;
        case 0x33eeacu: goto label_33eeac;
        case 0x33eeb0u: goto label_33eeb0;
        case 0x33eeb4u: goto label_33eeb4;
        case 0x33eeb8u: goto label_33eeb8;
        case 0x33eebcu: goto label_33eebc;
        case 0x33eec0u: goto label_33eec0;
        case 0x33eec4u: goto label_33eec4;
        case 0x33eec8u: goto label_33eec8;
        case 0x33eeccu: goto label_33eecc;
        case 0x33eed0u: goto label_33eed0;
        case 0x33eed4u: goto label_33eed4;
        case 0x33eed8u: goto label_33eed8;
        case 0x33eedcu: goto label_33eedc;
        case 0x33eee0u: goto label_33eee0;
        case 0x33eee4u: goto label_33eee4;
        case 0x33eee8u: goto label_33eee8;
        case 0x33eeecu: goto label_33eeec;
        case 0x33eef0u: goto label_33eef0;
        case 0x33eef4u: goto label_33eef4;
        case 0x33eef8u: goto label_33eef8;
        case 0x33eefcu: goto label_33eefc;
        case 0x33ef00u: goto label_33ef00;
        case 0x33ef04u: goto label_33ef04;
        case 0x33ef08u: goto label_33ef08;
        case 0x33ef0cu: goto label_33ef0c;
        case 0x33ef10u: goto label_33ef10;
        case 0x33ef14u: goto label_33ef14;
        case 0x33ef18u: goto label_33ef18;
        case 0x33ef1cu: goto label_33ef1c;
        case 0x33ef20u: goto label_33ef20;
        case 0x33ef24u: goto label_33ef24;
        case 0x33ef28u: goto label_33ef28;
        case 0x33ef2cu: goto label_33ef2c;
        case 0x33ef30u: goto label_33ef30;
        case 0x33ef34u: goto label_33ef34;
        case 0x33ef38u: goto label_33ef38;
        case 0x33ef3cu: goto label_33ef3c;
        case 0x33ef40u: goto label_33ef40;
        case 0x33ef44u: goto label_33ef44;
        case 0x33ef48u: goto label_33ef48;
        case 0x33ef4cu: goto label_33ef4c;
        case 0x33ef50u: goto label_33ef50;
        case 0x33ef54u: goto label_33ef54;
        case 0x33ef58u: goto label_33ef58;
        case 0x33ef5cu: goto label_33ef5c;
        case 0x33ef60u: goto label_33ef60;
        case 0x33ef64u: goto label_33ef64;
        case 0x33ef68u: goto label_33ef68;
        case 0x33ef6cu: goto label_33ef6c;
        case 0x33ef70u: goto label_33ef70;
        case 0x33ef74u: goto label_33ef74;
        case 0x33ef78u: goto label_33ef78;
        case 0x33ef7cu: goto label_33ef7c;
        case 0x33ef80u: goto label_33ef80;
        case 0x33ef84u: goto label_33ef84;
        case 0x33ef88u: goto label_33ef88;
        case 0x33ef8cu: goto label_33ef8c;
        case 0x33ef90u: goto label_33ef90;
        case 0x33ef94u: goto label_33ef94;
        case 0x33ef98u: goto label_33ef98;
        case 0x33ef9cu: goto label_33ef9c;
        case 0x33efa0u: goto label_33efa0;
        case 0x33efa4u: goto label_33efa4;
        case 0x33efa8u: goto label_33efa8;
        case 0x33efacu: goto label_33efac;
        case 0x33efb0u: goto label_33efb0;
        case 0x33efb4u: goto label_33efb4;
        case 0x33efb8u: goto label_33efb8;
        case 0x33efbcu: goto label_33efbc;
        case 0x33efc0u: goto label_33efc0;
        case 0x33efc4u: goto label_33efc4;
        case 0x33efc8u: goto label_33efc8;
        case 0x33efccu: goto label_33efcc;
        case 0x33efd0u: goto label_33efd0;
        case 0x33efd4u: goto label_33efd4;
        case 0x33efd8u: goto label_33efd8;
        case 0x33efdcu: goto label_33efdc;
        case 0x33efe0u: goto label_33efe0;
        case 0x33efe4u: goto label_33efe4;
        case 0x33efe8u: goto label_33efe8;
        case 0x33efecu: goto label_33efec;
        case 0x33eff0u: goto label_33eff0;
        case 0x33eff4u: goto label_33eff4;
        case 0x33eff8u: goto label_33eff8;
        case 0x33effcu: goto label_33effc;
        case 0x33f000u: goto label_33f000;
        case 0x33f004u: goto label_33f004;
        case 0x33f008u: goto label_33f008;
        case 0x33f00cu: goto label_33f00c;
        case 0x33f010u: goto label_33f010;
        case 0x33f014u: goto label_33f014;
        case 0x33f018u: goto label_33f018;
        case 0x33f01cu: goto label_33f01c;
        case 0x33f020u: goto label_33f020;
        case 0x33f024u: goto label_33f024;
        case 0x33f028u: goto label_33f028;
        case 0x33f02cu: goto label_33f02c;
        case 0x33f030u: goto label_33f030;
        case 0x33f034u: goto label_33f034;
        case 0x33f038u: goto label_33f038;
        case 0x33f03cu: goto label_33f03c;
        case 0x33f040u: goto label_33f040;
        case 0x33f044u: goto label_33f044;
        case 0x33f048u: goto label_33f048;
        case 0x33f04cu: goto label_33f04c;
        case 0x33f050u: goto label_33f050;
        case 0x33f054u: goto label_33f054;
        case 0x33f058u: goto label_33f058;
        case 0x33f05cu: goto label_33f05c;
        case 0x33f060u: goto label_33f060;
        case 0x33f064u: goto label_33f064;
        case 0x33f068u: goto label_33f068;
        case 0x33f06cu: goto label_33f06c;
        case 0x33f070u: goto label_33f070;
        case 0x33f074u: goto label_33f074;
        case 0x33f078u: goto label_33f078;
        case 0x33f07cu: goto label_33f07c;
        case 0x33f080u: goto label_33f080;
        case 0x33f084u: goto label_33f084;
        case 0x33f088u: goto label_33f088;
        case 0x33f08cu: goto label_33f08c;
        case 0x33f090u: goto label_33f090;
        case 0x33f094u: goto label_33f094;
        case 0x33f098u: goto label_33f098;
        case 0x33f09cu: goto label_33f09c;
        case 0x33f0a0u: goto label_33f0a0;
        case 0x33f0a4u: goto label_33f0a4;
        case 0x33f0a8u: goto label_33f0a8;
        case 0x33f0acu: goto label_33f0ac;
        case 0x33f0b0u: goto label_33f0b0;
        case 0x33f0b4u: goto label_33f0b4;
        case 0x33f0b8u: goto label_33f0b8;
        case 0x33f0bcu: goto label_33f0bc;
        case 0x33f0c0u: goto label_33f0c0;
        case 0x33f0c4u: goto label_33f0c4;
        case 0x33f0c8u: goto label_33f0c8;
        case 0x33f0ccu: goto label_33f0cc;
        case 0x33f0d0u: goto label_33f0d0;
        case 0x33f0d4u: goto label_33f0d4;
        case 0x33f0d8u: goto label_33f0d8;
        case 0x33f0dcu: goto label_33f0dc;
        case 0x33f0e0u: goto label_33f0e0;
        case 0x33f0e4u: goto label_33f0e4;
        case 0x33f0e8u: goto label_33f0e8;
        case 0x33f0ecu: goto label_33f0ec;
        case 0x33f0f0u: goto label_33f0f0;
        case 0x33f0f4u: goto label_33f0f4;
        case 0x33f0f8u: goto label_33f0f8;
        case 0x33f0fcu: goto label_33f0fc;
        case 0x33f100u: goto label_33f100;
        case 0x33f104u: goto label_33f104;
        case 0x33f108u: goto label_33f108;
        case 0x33f10cu: goto label_33f10c;
        case 0x33f110u: goto label_33f110;
        case 0x33f114u: goto label_33f114;
        case 0x33f118u: goto label_33f118;
        case 0x33f11cu: goto label_33f11c;
        case 0x33f120u: goto label_33f120;
        case 0x33f124u: goto label_33f124;
        case 0x33f128u: goto label_33f128;
        case 0x33f12cu: goto label_33f12c;
        case 0x33f130u: goto label_33f130;
        case 0x33f134u: goto label_33f134;
        case 0x33f138u: goto label_33f138;
        case 0x33f13cu: goto label_33f13c;
        case 0x33f140u: goto label_33f140;
        case 0x33f144u: goto label_33f144;
        case 0x33f148u: goto label_33f148;
        case 0x33f14cu: goto label_33f14c;
        case 0x33f150u: goto label_33f150;
        case 0x33f154u: goto label_33f154;
        default: break;
    }

    ctx->pc = 0x33eca0u;

label_33eca0:
    // 0x33eca0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x33eca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_33eca4:
    // 0x33eca4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x33eca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_33eca8:
    // 0x33eca8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33eca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33ecac:
    // 0x33ecac: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x33ecacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_33ecb0:
    // 0x33ecb0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x33ecb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_33ecb4:
    // 0x33ecb4: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x33ecb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
label_33ecb8:
    // 0x33ecb8: 0x3c150001  lui         $s5, 0x1
    ctx->pc = 0x33ecb8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)1 << 16));
label_33ecbc:
    // 0x33ecbc: 0x2b0a821  addu        $s5, $s5, $s0
    ctx->pc = 0x33ecbcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_33ecc0:
    // 0x33ecc0: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x33ecc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_33ecc4:
    // 0x33ecc4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x33ecc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_33ecc8:
    // 0x33ecc8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x33ecc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_33eccc:
    // 0x33eccc: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x33ecccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
label_33ecd0:
    // 0x33ecd0: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x33ecd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
label_33ecd4:
    // 0x33ecd4: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x33ecd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
label_33ecd8:
    // 0x33ecd8: 0xc0c9604  jal         func_325810
label_33ecdc:
    if (ctx->pc == 0x33ECDCu) {
        ctx->pc = 0x33ECDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ECD8u;
        // 0x33ecdc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33ECE0u;
        goto label_33ece0;
    }
    ctx->pc = 0x33ECD8u;
    SET_GPR_U32(ctx, 31, 0x33ECE0u);
    ctx->pc = 0x33ECDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33ECD8u;
    // 0x33ecdc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325810u, 0x33ECD8u, 0x33ECE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33ECE0u;
label_33ece0:
    // 0x33ece0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x33ece0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_33ece4:
    // 0x33ece4: 0x3c130001  lui         $s3, 0x1
    ctx->pc = 0x33ece4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)1 << 16));
label_33ece8:
    // 0x33ece8: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x33ece8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_33ecec:
    // 0x33ecec: 0x8e734000  lw          $s3, 0x4000($s3)
    ctx->pc = 0x33ececu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16384)));
label_33ecf0:
    // 0x33ecf0: 0x24430400  addiu       $v1, $v0, 0x400
    ctx->pc = 0x33ecf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
label_33ecf4:
    // 0x33ecf4: 0x8c740014  lw          $s4, 0x14($v1)
    ctx->pc = 0x33ecf4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_33ecf8:
    // 0x33ecf8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x33ecf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_33ecfc:
    // 0x33ecfc: 0x12600109  beqz        $s3, . + 4 + (0x109 << 2)
label_33ed00:
    if (ctx->pc == 0x33ED00u) {
        ctx->pc = 0x33ED00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ECFCu;
        // 0x33ed00: 0xafb40020  sw          $s4, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33ED04u;
        goto label_33ed04;
    }
    ctx->pc = 0x33ECFCu;
    {
        const bool branch_taken_0x33ecfc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x33ED00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ECFCu;
        // 0x33ed00: 0xafb40020  sw          $s4, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ecfc) {
            ctx->pc = 0x33F124u;
            goto label_33f124;
        }
    }
    ctx->pc = 0x33ED04u;
label_33ed04:
    // 0x33ed04: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x33ed04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_33ed08:
    // 0x33ed08: 0x3c1e0fff  lui         $fp, 0xFFF
    ctx->pc = 0x33ed08u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)4095 << 16));
label_33ed0c:
    // 0x33ed0c: 0x3463d010  ori         $v1, $v1, 0xD010
    ctx->pc = 0x33ed0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53264);
label_33ed10:
    // 0x33ed10: 0x37deffff  ori         $fp, $fp, 0xFFFF
    ctx->pc = 0x33ed10u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)65535);
label_33ed14:
    // 0x33ed14: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x33ed14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_33ed18:
    // 0x33ed18: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x33ed18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_33ed1c:
    // 0x33ed1c: 0x24a503cc  addiu       $a1, $a1, 0x3CC
    ctx->pc = 0x33ed1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 972));
label_33ed20:
    // 0x33ed20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33ed20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33ed24:
    // 0x33ed24: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x33ed24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33ed28:
    // 0x33ed28: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33ed28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_33ed2c:
    // 0x33ed2c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x33ed2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_33ed30:
    // 0x33ed30: 0x104000ad  beqz        $v0, . + 4 + (0xAD << 2)
label_33ed34:
    if (ctx->pc == 0x33ED34u) {
        ctx->pc = 0x33ED34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ED30u;
        // 0x33ed34: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33ED38u;
        goto label_33ed38;
    }
    ctx->pc = 0x33ED30u;
    {
        const bool branch_taken_0x33ed30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33ED34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ED30u;
        // 0x33ed34: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ed30) {
            ctx->pc = 0x33EFE8u;
            goto label_33efe8;
        }
    }
    ctx->pc = 0x33ED38u;
label_33ed38:
    // 0x33ed38: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x33ed38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_33ed3c:
    // 0x33ed3c: 0x2cc20004  sltiu       $v0, $a2, 0x4
    ctx->pc = 0x33ed3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_33ed40:
    // 0x33ed40: 0x0  nop
    ctx->pc = 0x33ed40u;
    // NOP
label_33ed44:
    // 0x33ed44: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_33ed48:
    if (ctx->pc == 0x33ED48u) {
        ctx->pc = 0x33ED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ED44u;
        // 0x33ed48: 0x24850004  addiu       $a1, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33ED4Cu;
        goto label_33ed4c;
    }
    ctx->pc = 0x33ED44u;
    {
        const bool branch_taken_0x33ed44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33ED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ED44u;
        // 0x33ed48: 0x24850004  addiu       $a1, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ed44) {
            ctx->pc = 0x33ED28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33ed28;
        }
    }
    ctx->pc = 0x33ED4Cu;
label_33ed4c:
    // 0x33ed4c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x33ed4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33ed50:
    // 0x33ed50: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x33ed50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_33ed54:
    // 0x33ed54: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x33ed54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_33ed58:
    // 0x33ed58: 0x248403c0  addiu       $a0, $a0, 0x3C0
    ctx->pc = 0x33ed58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 960));
label_33ed5c:
    // 0x33ed5c: 0x26360b00  addiu       $s6, $s1, 0xB00
    ctx->pc = 0x33ed5cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 2816));
label_33ed60:
    // 0x33ed60: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x33ed60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33ed64:
    // 0x33ed64: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x33ed64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_33ed68:
    // 0x33ed68: 0x236182b  sltu        $v1, $s1, $s6
    ctx->pc = 0x33ed68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_33ed6c:
    // 0x33ed6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33ed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_33ed70:
    // 0x33ed70: 0x10600077  beqz        $v1, . + 4 + (0x77 << 2)
label_33ed74:
    if (ctx->pc == 0x33ED74u) {
        ctx->pc = 0x33ED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ED70u;
        // 0x33ed74: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33ED78u;
        goto label_33ed78;
    }
    ctx->pc = 0x33ED70u;
    {
        const bool branch_taken_0x33ed70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33ED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ED70u;
        // 0x33ed74: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ed70) {
            ctx->pc = 0x33EF50u;
            goto label_33ef50;
        }
    }
    ctx->pc = 0x33ED78u;
label_33ed78:
    // 0x33ed78: 0x52600076  beql        $s3, $zero, . + 4 + (0x76 << 2)
label_33ed7c:
    if (ctx->pc == 0x33ED7Cu) {
        ctx->pc = 0x33ED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ED78u;
        // 0x33ed7c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33ED80u;
        goto label_33ed80;
    }
    ctx->pc = 0x33ED78u;
    {
        const bool branch_taken_0x33ed78 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ed78) {
            ctx->pc = 0x33ED7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33ED78u;
            // 0x33ed7c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33EF54u;
            goto label_33ef54;
        }
    }
    ctx->pc = 0x33ED80u;
label_33ed80:
    // 0x33ed80: 0x3c175000  lui         $s7, 0x5000
    ctx->pc = 0x33ed80u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)20480 << 16));
label_33ed84:
    // 0x33ed84: 0x8eb00004  lw          $s0, 0x4($s5)
    ctx->pc = 0x33ed84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_33ed88:
    // 0x33ed88: 0x3c070044  lui         $a3, 0x44
    ctx->pc = 0x33ed88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)68 << 16));
label_33ed8c:
    // 0x33ed8c: 0x24e4d280  addiu       $a0, $a3, -0x2D80
    ctx->pc = 0x33ed8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955648));
label_33ed90:
    // 0x33ed90: 0x27a90018  addiu       $t1, $sp, 0x18
    ctx->pc = 0x33ed90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_33ed94:
    // 0x33ed94: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x33ed94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33ed98:
    // 0x33ed98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33ed98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33ed9c:
    // 0x33ed9c: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x33ed9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_33eda0:
    // 0x33eda0: 0xc0c7b96  jal         func_31EE58
label_33eda4:
    if (ctx->pc == 0x33EDA4u) {
        ctx->pc = 0x33EDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EDA0u;
        // 0x33eda4: 0x120402d  daddu       $t0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EDA8u;
        goto label_33eda8;
    }
    ctx->pc = 0x33EDA0u;
    SET_GPR_U32(ctx, 31, 0x33EDA8u);
    ctx->pc = 0x33EDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EDA0u;
    // 0x33eda4: 0x120402d  daddu       $t0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EE58u, 0x33EDA0u, 0x33EDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EDA8u;
label_33eda8:
    // 0x33eda8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x33eda8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33edac:
    // 0x33edac: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x33edacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_33edb0:
    // 0x33edb0: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_33edb4:
    if (ctx->pc == 0x33EDB4u) {
        ctx->pc = 0x33EDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EDB0u;
        // 0x33edb4: 0x3a0c02d  daddu       $t8, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EDB8u;
        goto label_33edb8;
    }
    ctx->pc = 0x33EDB0u;
    {
        const bool branch_taken_0x33edb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EDB0u;
        // 0x33edb4: 0x3a0c02d  daddu       $t8, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33edb0) {
            ctx->pc = 0x33EE74u;
            goto label_33ee74;
        }
    }
    ctx->pc = 0x33EDB8u;
label_33edb8:
    // 0x33edb8: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x33edb8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
label_33edbc:
    // 0x33edbc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x33edbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_33edc0:
    // 0x33edc0: 0x2583c  dsll32      $t3, $v0, 0
    ctx->pc = 0x33edc0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) << (32 + 0));
label_33edc4:
    // 0x33edc4: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x33edc4u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
label_33edc8:
    // 0x33edc8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x33edc8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_33edcc:
    // 0x33edcc: 0x11630028  beq         $t3, $v1, . + 4 + (0x28 << 2)
label_33edd0:
    if (ctx->pc == 0x33EDD0u) {
        ctx->pc = 0x33EDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EDCCu;
        // 0x33edd0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EDD4u;
        goto label_33edd4;
    }
    ctx->pc = 0x33EDCCu;
    {
        const bool branch_taken_0x33edcc = (GPR_U64(ctx, 11) == GPR_U64(ctx, 3));
        ctx->pc = 0x33EDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EDCCu;
        // 0x33edd0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33edcc) {
            ctx->pc = 0x33EE70u;
            goto label_33ee70;
        }
    }
    ctx->pc = 0x33EDD4u;
label_33edd4:
    // 0x33edd4: 0x248c2  srl         $t1, $v0, 3
    ctx->pc = 0x33edd4u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_33edd8:
    // 0x33edd8: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x33edd8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_33eddc:
    // 0x33eddc: 0x11200023  beqz        $t1, . + 4 + (0x23 << 2)
label_33ede0:
    if (ctx->pc == 0x33EDE0u) {
        ctx->pc = 0x33EDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EDDCu;
        // 0x33ede0: 0x160502d  daddu       $t2, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EDE4u;
        goto label_33ede4;
    }
    ctx->pc = 0x33EDDCu;
    {
        const bool branch_taken_0x33eddc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EDDCu;
        // 0x33ede0: 0x160502d  daddu       $t2, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33eddc) {
            ctx->pc = 0x33EE6Cu;
            goto label_33ee6c;
        }
    }
    ctx->pc = 0x33EDE4u;
label_33ede4:
    // 0x33ede4: 0x3c0c0fff  lui         $t4, 0xFFF
    ctx->pc = 0x33ede4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4095 << 16));
label_33ede8:
    // 0x33ede8: 0x24120100  addiu       $s2, $zero, 0x100
    ctx->pc = 0x33ede8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_33edec:
    // 0x33edec: 0x3c113000  lui         $s1, 0x3000
    ctx->pc = 0x33edecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)12288 << 16));
label_33edf0:
    // 0x33edf0: 0x3c0d7000  lui         $t5, 0x7000
    ctx->pc = 0x33edf0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)28672 << 16));
label_33edf4:
    // 0x33edf4: 0x3c0ff000  lui         $t7, 0xF000
    ctx->pc = 0x33edf4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)61440 << 16));
label_33edf8:
    // 0x33edf8: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x33edf8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
label_33edfc:
    // 0x33edfc: 0x3c0e4a00  lui         $t6, 0x4A00
    ctx->pc = 0x33edfcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)18944 << 16));
label_33ee00:
    // 0x33ee00: 0x2d220101  sltiu       $v0, $t1, 0x101
    ctx->pc = 0x33ee00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)257) ? 1 : 0);
label_33ee04:
    // 0x33ee04: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x33ee04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33ee08:
    // 0x33ee08: 0x122300b  movn        $a2, $t1, $v0
    ctx->pc = 0x33ee08u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 9));
label_33ee0c:
    // 0x33ee0c: 0x14d2024  and         $a0, $t2, $t5
    ctx->pc = 0x33ee0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & GPR_U64(ctx, 13));
label_33ee10:
    // 0x33ee10: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x33ee10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_33ee14:
    // 0x33ee14: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x33ee14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_33ee18:
    // 0x33ee18: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x33ee18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_33ee1c:
    // 0x33ee1c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x33ee1cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_33ee20:
    // 0x33ee20: 0x1021025  or          $v0, $t0, $v0
    ctx->pc = 0x33ee20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_33ee24:
    // 0x33ee24: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x33ee24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
label_33ee28:
    // 0x33ee28: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x33ee28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
label_33ee2c:
    // 0x33ee2c: 0x148d0004  bne         $a0, $t5, . + 4 + (0x4 << 2)
label_33ee30:
    if (ctx->pc == 0x33EE30u) {
        ctx->pc = 0x33EE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EE2Cu;
        // 0x33ee30: 0x2383c  dsll32      $a3, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EE34u;
        goto label_33ee34;
    }
    ctx->pc = 0x33EE2Cu;
    {
        const bool branch_taken_0x33ee2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 13));
        ctx->pc = 0x33EE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EE2Cu;
        // 0x33ee30: 0x2383c  dsll32      $a3, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ee2c) {
            ctx->pc = 0x33EE40u;
            goto label_33ee40;
        }
    }
    ctx->pc = 0x33EE34u;
label_33ee34:
    // 0x33ee34: 0x10000003  b           . + 4 + (0x3 << 2)
label_33ee38:
    if (ctx->pc == 0x33EE38u) {
        ctx->pc = 0x33EE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EE34u;
        // 0x33ee38: 0x14f1025  or          $v0, $t2, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EE3Cu;
        goto label_33ee3c;
    }
    ctx->pc = 0x33EE34u;
    {
        const bool branch_taken_0x33ee34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EE34u;
        // 0x33ee38: 0x14f1025  or          $v0, $t2, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ee34) {
            ctx->pc = 0x33EE44u;
            goto label_33ee44;
        }
    }
    ctx->pc = 0x33EE3Cu;
label_33ee3c:
    // 0x33ee3c: 0x0  nop
    ctx->pc = 0x33ee3cu;
    // NOP
label_33ee40:
    // 0x33ee40: 0x14c1024  and         $v0, $t2, $t4
    ctx->pc = 0x33ee40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 12));
label_33ee44:
    // 0x33ee44: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x33ee44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_33ee48:
    // 0x33ee48: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33ee48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_33ee4c:
    // 0x33ee4c: 0x70e31b89  pcpyld      $v1, $a3, $v1
    ctx->pc = 0x33ee4cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 3)));
label_33ee50:
    // 0x33ee50: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x33ee50u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
label_33ee54:
    // 0x33ee54: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x33ee54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_33ee58:
    // 0x33ee58: 0x1264823  subu        $t1, $t1, $a2
    ctx->pc = 0x33ee58u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_33ee5c:
    // 0x33ee5c: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x33ee5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_33ee60:
    // 0x33ee60: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x33ee60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_33ee64:
    // 0x33ee64: 0x1520ffe6  bnez        $t1, . + 4 + (-0x1A << 2)
label_33ee68:
    if (ctx->pc == 0x33EE68u) {
        ctx->pc = 0x33EE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EE64u;
        // 0x33ee68: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EE6Cu;
        goto label_33ee6c;
    }
    ctx->pc = 0x33EE64u;
    {
        const bool branch_taken_0x33ee64 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x33EE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EE64u;
        // 0x33ee68: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ee64) {
            ctx->pc = 0x33EE00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33ee00;
        }
    }
    ctx->pc = 0x33EE6Cu;
label_33ee6c:
    // 0x33ee6c: 0xaf0b0000  sw          $t3, 0x0($t8)
    ctx->pc = 0x33ee6cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 11));
label_33ee70:
    // 0x33ee70: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x33ee70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33ee74:
    // 0x33ee74: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x33ee74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_33ee78:
    // 0x33ee78: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x33ee78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_33ee7c:
    // 0x33ee7c: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x33ee7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_33ee80:
    // 0x33ee80: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
label_33ee84:
    if (ctx->pc == 0x33EE84u) {
        ctx->pc = 0x33EE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EE80u;
        // 0x33ee84: 0x9e1024  and         $v0, $a0, $fp (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EE88u;
        goto label_33ee88;
    }
    ctx->pc = 0x33EE80u;
    {
        const bool branch_taken_0x33ee80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33ee80) {
            ctx->pc = 0x33EE84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33EE80u;
            // 0x33ee84: 0x9e1024  and         $v0, $a0, $fp (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 30));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33EE90u;
            goto label_33ee90;
        }
    }
    ctx->pc = 0x33EE88u;
label_33ee88:
    // 0x33ee88: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x33ee88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
label_33ee8c:
    // 0x33ee8c: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x33ee8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_33ee90:
    // 0x33ee90: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x33ee90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_33ee94:
    // 0x33ee94: 0x571825  or          $v1, $v0, $s7
    ctx->pc = 0x33ee94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
label_33ee98:
    // 0x33ee98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33ee98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33ee9c:
    // 0x33ee9c: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x33ee9cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_33eea0:
    // 0x33eea0: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x33eea0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
label_33eea4:
    // 0x33eea4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x33eea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_33eea8:
    // 0x33eea8: 0x10a00023  beqz        $a1, . + 4 + (0x23 << 2)
label_33eeac:
    if (ctx->pc == 0x33EEACu) {
        ctx->pc = 0x33EEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EEA8u;
        // 0x33eeac: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EEB0u;
        goto label_33eeb0;
    }
    ctx->pc = 0x33EEA8u;
    {
        const bool branch_taken_0x33eea8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EEA8u;
        // 0x33eeac: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33eea8) {
            ctx->pc = 0x33EF38u;
            goto label_33ef38;
        }
    }
    ctx->pc = 0x33EEB0u;
label_33eeb0:
    // 0x33eeb0: 0x92020018  lbu         $v0, 0x18($s0)
    ctx->pc = 0x33eeb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
label_33eeb4:
    // 0x33eeb4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_33eeb8:
    if (ctx->pc == 0x33EEB8u) {
        ctx->pc = 0x33EEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EEB4u;
        // 0x33eeb8: 0xdfa20018  ld          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EEBCu;
        goto label_33eebc;
    }
    ctx->pc = 0x33EEB4u;
    {
        const bool branch_taken_0x33eeb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EEB4u;
        // 0x33eeb8: 0xdfa20018  ld          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33eeb4) {
            ctx->pc = 0x33EF28u;
            goto label_33ef28;
        }
    }
    ctx->pc = 0x33EEBCu;
label_33eebc:
    // 0x33eebc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x33eebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33eec0:
    // 0x33eec0: 0xdc830038  ld          $v1, 0x38($a0)
    ctx->pc = 0x33eec0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 56)));
label_33eec4:
    // 0x33eec4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33eec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_33eec8:
    // 0x33eec8: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x33eec8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
label_33eecc:
    // 0x33eecc: 0x92030019  lbu         $v1, 0x19($s0)
    ctx->pc = 0x33eeccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
label_33eed0:
    // 0x33eed0: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_33eed4:
    if (ctx->pc == 0x33EED4u) {
        ctx->pc = 0x33EED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EED0u;
        // 0x33eed4: 0x236102b  sltu        $v0, $s1, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EED8u;
        goto label_33eed8;
    }
    ctx->pc = 0x33EED0u;
    {
        const bool branch_taken_0x33eed0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EED0u;
        // 0x33eed4: 0x236102b  sltu        $v0, $s1, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33eed0) {
            ctx->pc = 0x33EF3Cu;
            goto label_33ef3c;
        }
    }
    ctx->pc = 0x33EED8u;
label_33eed8:
    // 0x33eed8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x33eed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33eedc:
    // 0x33eedc: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x33eedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_33eee0:
    // 0x33eee0: 0x24630088  addiu       $v1, $v1, 0x88
    ctx->pc = 0x33eee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 136));
label_33eee4:
    // 0x33eee4: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x33eee4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_33eee8:
    // 0x33eee8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33eee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33eeec:
    // 0x33eeec: 0x40f809  jalr        $v0
label_33eef0:
    if (ctx->pc == 0x33EEF0u) {
        ctx->pc = 0x33EEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EEECu;
        // 0x33eef0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EEF4u;
        goto label_33eef4;
    }
    ctx->pc = 0x33EEECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33EEF4u);
        ctx->pc = 0x33EEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EEECu;
        // 0x33eef0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33EEECu, 0x33EEF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33EEF4u;
label_33eef4:
    // 0x33eef4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x33eef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_33eef8:
    // 0x33eef8: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x33eef8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
label_33eefc:
    // 0x33eefc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x33eefcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33ef00:
    // 0x33ef00: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x33ef00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_33ef04:
    // 0x33ef04: 0x24630090  addiu       $v1, $v1, 0x90
    ctx->pc = 0x33ef04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
label_33ef08:
    // 0x33ef08: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x33ef08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_33ef0c:
    // 0x33ef0c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33ef0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33ef10:
    // 0x33ef10: 0x40f809  jalr        $v0
label_33ef14:
    if (ctx->pc == 0x33EF14u) {
        ctx->pc = 0x33EF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EF10u;
        // 0x33ef14: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EF18u;
        goto label_33ef18;
    }
    ctx->pc = 0x33EF10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33EF18u);
        ctx->pc = 0x33EF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EF10u;
        // 0x33ef14: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33EF10u, 0x33EF18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33EF18u;
label_33ef18:
    // 0x33ef18: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x33ef18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_33ef1c:
    // 0x33ef1c: 0x10000006  b           . + 4 + (0x6 << 2)
label_33ef20:
    if (ctx->pc == 0x33EF20u) {
        ctx->pc = 0x33EF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EF1Cu;
        // 0x33ef20: 0xfc620010  sd          $v0, 0x10($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EF24u;
        goto label_33ef24;
    }
    ctx->pc = 0x33EF1Cu;
    {
        const bool branch_taken_0x33ef1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EF1Cu;
        // 0x33ef20: 0xfc620010  sd          $v0, 0x10($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ef1c) {
            ctx->pc = 0x33EF38u;
            goto label_33ef38;
        }
    }
    ctx->pc = 0x33EF24u;
label_33ef24:
    // 0x33ef24: 0x0  nop
    ctx->pc = 0x33ef24u;
    // NOP
label_33ef28:
    // 0x33ef28: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x33ef28u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_33ef2c:
    // 0x33ef2c: 0xdfa30018  ld          $v1, 0x18($sp)
    ctx->pc = 0x33ef2cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_33ef30:
    // 0x33ef30: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x33ef30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
label_33ef34:
    // 0x33ef34: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x33ef34u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
label_33ef38:
    // 0x33ef38: 0x236102b  sltu        $v0, $s1, $s6
    ctx->pc = 0x33ef38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_33ef3c:
    // 0x33ef3c: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x33ef3cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_33ef40:
    // 0x33ef40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_33ef44:
    if (ctx->pc == 0x33EF44u) {
        ctx->pc = 0x33EF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EF40u;
        // 0x33ef44: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EF48u;
        goto label_33ef48;
    }
    ctx->pc = 0x33EF40u;
    {
        const bool branch_taken_0x33ef40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EF40u;
        // 0x33ef44: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ef40) {
            ctx->pc = 0x33EF50u;
            goto label_33ef50;
        }
    }
    ctx->pc = 0x33EF48u;
label_33ef48:
    // 0x33ef48: 0x5660ff8f  bnel        $s3, $zero, . + 4 + (-0x71 << 2)
label_33ef4c:
    if (ctx->pc == 0x33EF4Cu) {
        ctx->pc = 0x33EF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EF48u;
        // 0x33ef4c: 0x8eb00004  lw          $s0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EF50u;
        goto label_33ef50;
    }
    ctx->pc = 0x33EF48u;
    {
        const bool branch_taken_0x33ef48 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x33ef48) {
            ctx->pc = 0x33EF4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33EF48u;
            // 0x33ef4c: 0x8eb00004  lw          $s0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33ED88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33ed88;
        }
    }
    ctx->pc = 0x33EF50u;
label_33ef50:
    // 0x33ef50: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x33ef50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_33ef54:
    // 0x33ef54: 0x8fb00010  lw          $s0, 0x10($sp)
    ctx->pc = 0x33ef54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_33ef58:
    // 0x33ef58: 0x245203c0  addiu       $s2, $v0, 0x3C0
    ctx->pc = 0x33ef58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
label_33ef5c:
    // 0x33ef5c: 0xc0ce218  jal         func_338860
label_33ef60:
    if (ctx->pc == 0x33EF60u) {
        ctx->pc = 0x33EF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EF5Cu;
        // 0x33ef60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EF64u;
        goto label_33ef64;
    }
    ctx->pc = 0x33EF5Cu;
    SET_GPR_U32(ctx, 31, 0x33EF64u);
    ctx->pc = 0x33EF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EF5Cu;
    // 0x33ef60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338860u, 0x33EF5Cu, 0x33EF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EF64u;
label_33ef64:
    // 0x33ef64: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x33ef64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_33ef68:
    // 0x33ef68: 0x2304023  subu        $t0, $s1, $s0
    ctx->pc = 0x33ef68u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_33ef6c:
    // 0x33ef6c: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x33ef6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
label_33ef70:
    // 0x33ef70: 0x81102  srl         $v0, $t0, 4
    ctx->pc = 0x33ef70u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 4));
label_33ef74:
    // 0x33ef74: 0x29e3024  and         $a2, $s4, $fp
    ctx->pc = 0x33ef74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) & GPR_U64(ctx, 30));
label_33ef78:
    // 0x33ef78: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x33ef78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_33ef7c:
    // 0x33ef7c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x33ef7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_33ef80:
    // 0x33ef80: 0x34a5d080  ori         $a1, $a1, 0xD080
    ctx->pc = 0x33ef80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53376);
label_33ef84:
    // 0x33ef84: 0x32073fff  andi        $a3, $s0, 0x3FFF
    ctx->pc = 0x33ef84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16383);
label_33ef88:
    // 0x33ef88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33ef88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_33ef8c:
    // 0x33ef8c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x33ef8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_33ef90:
    // 0x33ef90: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x33ef90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_33ef94:
    // 0x33ef94: 0x3484e010  ori         $a0, $a0, 0xE010
    ctx->pc = 0x33ef94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)57360);
label_33ef98:
    // 0x33ef98: 0x288a021  addu        $s4, $s4, $t0
    ctx->pc = 0x33ef98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
label_33ef9c:
    // 0x33ef9c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x33ef9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_33efa0:
    // 0x33efa0: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x33efa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_33efa4:
    // 0x33efa4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x33efa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_33efa8:
    // 0x33efa8: 0x8fa90024  lw          $t1, 0x24($sp)
    ctx->pc = 0x33efa8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_33efac:
    // 0x33efac: 0x3463d000  ori         $v1, $v1, 0xD000
    ctx->pc = 0x33efacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53248);
label_33efb0:
    // 0x33efb0: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x33efb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_33efb4:
    // 0x33efb4: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x33efb4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7)); // MMIO: 0x1000d080
label_33efb8:
    // 0x33efb8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x33efb8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0))); // MMIO: 0x1000d080
label_33efbc:
    // 0x33efbc: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x33efbcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6)); // MMIO: 0x1000e010
label_33efc0:
    // 0x33efc0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x33efc0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0))); // MMIO: 0x1000e010
label_33efc4:
    // 0x33efc4: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x33efc4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6)); // MMIO: 0x1000d000
label_33efc8:
    // 0x33efc8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x33efc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_33efcc:
    // 0x33efcc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33efccu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d000
label_33efd0:
    // 0x33efd0: 0x14b0000f  bne         $a1, $s0, . + 4 + (0xF << 2)
label_33efd4:
    if (ctx->pc == 0x33EFD4u) {
        ctx->pc = 0x33EFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EFD0u;
        // 0x33efd4: 0xae500008  sw          $s0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EFD8u;
        goto label_33efd8;
    }
    ctx->pc = 0x33EFD0u;
    {
        const bool branch_taken_0x33efd0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 16));
        ctx->pc = 0x33EFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EFD0u;
        // 0x33efd4: 0xae500008  sw          $s0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33efd0) {
            ctx->pc = 0x33F010u;
            goto label_33f010;
        }
    }
    ctx->pc = 0x33EFD8u;
label_33efd8:
    // 0x33efd8: 0xae450004  sw          $a1, 0x4($s2)
    ctx->pc = 0x33efd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 5));
label_33efdc:
    // 0x33efdc: 0x1000001b  b           . + 4 + (0x1B << 2)
label_33efe0:
    if (ctx->pc == 0x33EFE0u) {
        ctx->pc = 0x33EFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EFDCu;
        // 0x33efe0: 0xae400008  sw          $zero, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EFE4u;
        goto label_33efe4;
    }
    ctx->pc = 0x33EFDCu;
    {
        const bool branch_taken_0x33efdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EFDCu;
        // 0x33efe0: 0xae400008  sw          $zero, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33efdc) {
            ctx->pc = 0x33F04Cu;
            goto label_33f04c;
        }
    }
    ctx->pc = 0x33EFE4u;
label_33efe4:
    // 0x33efe4: 0x0  nop
    ctx->pc = 0x33efe4u;
    // NOP
label_33efe8:
    // 0x33efe8: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x33efe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_33efec:
    // 0x33efec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33efecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33eff0:
    // 0x33eff0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x33eff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_33eff4:
    // 0x33eff4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x33eff4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_33eff8:
    // 0x33eff8: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x33eff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
label_33effc:
    // 0x33effc: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x33effcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_33f000:
    // 0x33f000: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x33f000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_33f004:
    // 0x33f004: 0x1000ff53  b           . + 4 + (-0xAD << 2)
label_33f008:
    if (ctx->pc == 0x33F008u) {
        ctx->pc = 0x33F008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F004u;
        // 0x33f008: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F00Cu;
        goto label_33f00c;
    }
    ctx->pc = 0x33F004u;
    {
        const bool branch_taken_0x33f004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F004u;
        // 0x33f008: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f004) {
            ctx->pc = 0x33ED54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33ed54;
        }
    }
    ctx->pc = 0x33F00Cu;
label_33f00c:
    // 0x33f00c: 0x0  nop
    ctx->pc = 0x33f00cu;
    // NOP
label_33f010:
    // 0x33f010: 0x2644000c  addiu       $a0, $s2, 0xC
    ctx->pc = 0x33f010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_33f014:
    // 0x33f014: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x33f014u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
label_33f018:
    // 0x33f018: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33f018u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33f01c:
    // 0x33f01c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x33f01cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33f020:
    // 0x33f020: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33f020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_33f024:
    // 0x33f024: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_33f028:
    if (ctx->pc == 0x33F028u) {
        ctx->pc = 0x33F028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F024u;
        // 0x33f028: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F02Cu;
        goto label_33f02c;
    }
    ctx->pc = 0x33F024u;
    {
        const bool branch_taken_0x33f024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F024u;
        // 0x33f028: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f024) {
            ctx->pc = 0x33F034u;
            goto label_33f034;
        }
    }
    ctx->pc = 0x33F02Cu;
label_33f02c:
    // 0x33f02c: 0x50e50007  beql        $a3, $a1, . + 4 + (0x7 << 2)
label_33f030:
    if (ctx->pc == 0x33F030u) {
        ctx->pc = 0x33F030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F02Cu;
        // 0x33f030: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F034u;
        goto label_33f034;
    }
    ctx->pc = 0x33F02Cu;
    {
        const bool branch_taken_0x33f02c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x33f02c) {
            ctx->pc = 0x33F030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33F02Cu;
            // 0x33f030: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33F04Cu;
            goto label_33f04c;
        }
    }
    ctx->pc = 0x33F034u;
label_33f034:
    // 0x33f034: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x33f034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_33f038:
    // 0x33f038: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x33f038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_33f03c:
    // 0x33f03c: 0x2cc20004  sltiu       $v0, $a2, 0x4
    ctx->pc = 0x33f03cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_33f040:
    // 0x33f040: 0x0  nop
    ctx->pc = 0x33f040u;
    // NOP
label_33f044:
    // 0x33f044: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_33f048:
    if (ctx->pc == 0x33F048u) {
        ctx->pc = 0x33F048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F044u;
        // 0x33f048: 0x24e70c00  addiu       $a3, $a3, 0xC00 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F04Cu;
        goto label_33f04c;
    }
    ctx->pc = 0x33F044u;
    {
        const bool branch_taken_0x33f044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33F048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F044u;
        // 0x33f048: 0x24e70c00  addiu       $a3, $a3, 0xC00 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f044) {
            ctx->pc = 0x33F020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33f020;
        }
    }
    ctx->pc = 0x33F04Cu;
label_33f04c:
    // 0x33f04c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x33f04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_33f050:
    // 0x33f050: 0x244403c0  addiu       $a0, $v0, 0x3C0
    ctx->pc = 0x33f050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
label_33f054:
    // 0x33f054: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x33f054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33f058:
    // 0x33f058: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33f058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_33f05c:
    // 0x33f05c: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
label_33f060:
    if (ctx->pc == 0x33F060u) {
        ctx->pc = 0x33F060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F05Cu;
        // 0x33f060: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F064u;
        goto label_33f064;
    }
    ctx->pc = 0x33F05Cu;
    {
        const bool branch_taken_0x33f05c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x33F060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F05Cu;
        // 0x33f060: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f05c) {
            ctx->pc = 0x33F06Cu;
            goto label_33f06c;
        }
    }
    ctx->pc = 0x33F064u;
label_33f064:
    // 0x33f064: 0xc0ce218  jal         func_338860
label_33f068:
    if (ctx->pc == 0x33F068u) {
        ctx->pc = 0x33F06Cu;
        goto label_33f06c;
    }
    ctx->pc = 0x33F064u;
    SET_GPR_U32(ctx, 31, 0x33F06Cu);
    ctx->pc = 0x338860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338860u, 0x33F064u, 0x33F06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F06Cu;
label_33f06c:
    // 0x33f06c: 0x1660ff2a  bnez        $s3, . + 4 + (-0xD6 << 2)
label_33f070:
    if (ctx->pc == 0x33F070u) {
        ctx->pc = 0x33F070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F06Cu;
        // 0x33f070: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F074u;
        goto label_33f074;
    }
    ctx->pc = 0x33F06Cu;
    {
        const bool branch_taken_0x33f06c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x33F070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F06Cu;
        // 0x33f070: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f06c) {
            ctx->pc = 0x33ED18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33ed18;
        }
    }
    ctx->pc = 0x33F074u;
label_33f074:
    // 0x33f074: 0x8fa70020  lw          $a3, 0x20($sp)
    ctx->pc = 0x33f074u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_33f078:
    // 0x33f078: 0x24620400  addiu       $v0, $v1, 0x400
    ctx->pc = 0x33f078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
label_33f07c:
    // 0x33f07c: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x33f07cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
label_33f080:
    // 0x33f080: 0x2446002c  addiu       $a2, $v0, 0x2C
    ctx->pc = 0x33f080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
label_33f084:
    // 0x33f084: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x33f084u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
label_33f088:
    // 0x33f088: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x33f088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_33f08c:
    // 0x33f08c: 0xe51824  and         $v1, $a3, $a1
    ctx->pc = 0x33f08cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
label_33f090:
    // 0x33f090: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
label_33f094:
    if (ctx->pc == 0x33F094u) {
        ctx->pc = 0x33F094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F090u;
        // 0x33f094: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F098u;
        goto label_33f098;
    }
    ctx->pc = 0x33F090u;
    {
        const bool branch_taken_0x33f090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x33F094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F090u;
        // 0x33f094: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f090) {
            ctx->pc = 0x33F0A8u;
            goto label_33f0a8;
        }
    }
    ctx->pc = 0x33F098u;
label_33f098:
    // 0x33f098: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x33f098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
label_33f09c:
    // 0x33f09c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x33f09cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_33f0a0:
    // 0x33f0a0: 0x10000006  b           . + 4 + (0x6 << 2)
label_33f0a4:
    if (ctx->pc == 0x33F0A4u) {
        ctx->pc = 0x33F0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F0A0u;
        // 0x33f0a4: 0xe21025  or          $v0, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F0A8u;
        goto label_33f0a8;
    }
    ctx->pc = 0x33F0A0u;
    {
        const bool branch_taken_0x33f0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F0A0u;
        // 0x33f0a4: 0xe21025  or          $v0, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f0a0) {
            ctx->pc = 0x33F0BCu;
            goto label_33f0bc;
        }
    }
    ctx->pc = 0x33F0A8u;
label_33f0a8:
    // 0x33f0a8: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x33f0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_33f0ac:
    // 0x33f0ac: 0x8fa90020  lw          $t1, 0x20($sp)
    ctx->pc = 0x33f0acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_33f0b0:
    // 0x33f0b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x33f0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_33f0b4:
    // 0x33f0b4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x33f0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_33f0b8:
    // 0x33f0b8: 0x1221024  and         $v0, $t1, $v0
    ctx->pc = 0x33f0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
label_33f0bc:
    // 0x33f0bc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x33f0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_33f0c0:
    // 0x33f0c0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33f0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_33f0c4:
    // 0x33f0c4: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x33f0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_33f0c8:
    // 0x33f0c8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x33f0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_33f0cc:
    // 0x33f0cc: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x33f0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_33f0d0:
    // 0x33f0d0: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x33f0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_33f0d4:
    // 0x33f0d4: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
label_33f0d8:
    if (ctx->pc == 0x33F0D8u) {
        ctx->pc = 0x33F0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F0D4u;
        // 0x33f0d8: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F0DCu;
        goto label_33f0dc;
    }
    ctx->pc = 0x33F0D4u;
    {
        const bool branch_taken_0x33f0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x33f0d4) {
            ctx->pc = 0x33F0D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33F0D4u;
            // 0x33f0d8: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33F0F0u;
            goto label_33f0f0;
        }
    }
    ctx->pc = 0x33F0DCu;
label_33f0dc:
    // 0x33f0dc: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x33f0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
label_33f0e0:
    // 0x33f0e0: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x33f0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_33f0e4:
    // 0x33f0e4: 0x10000005  b           . + 4 + (0x5 << 2)
label_33f0e8:
    if (ctx->pc == 0x33F0E8u) {
        ctx->pc = 0x33F0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F0E4u;
        // 0x33f0e8: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F0ECu;
        goto label_33f0ec;
    }
    ctx->pc = 0x33F0E4u;
    {
        const bool branch_taken_0x33f0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F0E4u;
        // 0x33f0e8: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f0e4) {
            ctx->pc = 0x33F0FCu;
            goto label_33f0fc;
        }
    }
    ctx->pc = 0x33F0ECu;
label_33f0ec:
    // 0x33f0ec: 0x0  nop
    ctx->pc = 0x33f0ecu;
    // NOP
label_33f0f0:
    // 0x33f0f0: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x33f0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_33f0f4:
    // 0x33f0f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x33f0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_33f0f8:
    // 0x33f0f8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x33f0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_33f0fc:
    // 0x33f0fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x33f0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_33f100:
    // 0x33f100: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x33f100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_33f104:
    // 0x33f104: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33f104u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33f108:
    // 0x33f108: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x33f108u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_33f10c:
    // 0x33f10c: 0x7e830000  sq          $v1, 0x0($s4)
    ctx->pc = 0x33f10cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 3));
label_33f110:
    // 0x33f110: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x33f110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_33f114:
    // 0x33f114: 0xacd40000  sw          $s4, 0x0($a2)
    ctx->pc = 0x33f114u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 20));
label_33f118:
    // 0x33f118: 0x24620400  addiu       $v0, $v1, 0x400
    ctx->pc = 0x33f118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
label_33f11c:
    // 0x33f11c: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x33f11cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_33f120:
    // 0x33f120: 0xac540014  sw          $s4, 0x14($v0)
    ctx->pc = 0x33f120u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 20));
label_33f124:
    // 0x33f124: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x33f124u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_33f128:
    // 0x33f128: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x33f128u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_33f12c:
    // 0x33f12c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x33f12cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_33f130:
    // 0x33f130: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x33f130u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_33f134:
    // 0x33f134: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x33f134u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_33f138:
    // 0x33f138: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x33f138u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_33f13c:
    // 0x33f13c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x33f13cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_33f140:
    // 0x33f140: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x33f140u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_33f144:
    // 0x33f144: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x33f144u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_33f148:
    // 0x33f148: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x33f148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_33f14c:
    // 0x33f14c: 0x3e00008  jr          $ra
label_33f150:
    if (ctx->pc == 0x33F150u) {
        ctx->pc = 0x33F150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F14Cu;
        // 0x33f150: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F154u;
        goto label_33f154;
    }
    ctx->pc = 0x33F14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F14Cu;
        // 0x33f150: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F154u;
label_33f154:
    // 0x33f154: 0x0  nop
    ctx->pc = 0x33f154u;
    // NOP
    ctx->pc = 0x33f158u;
}
