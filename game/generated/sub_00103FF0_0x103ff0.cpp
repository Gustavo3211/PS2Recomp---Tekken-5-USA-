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

// Function: sub_00103FF0
// Address: 0x103ff0 - 0x104160
void sub_00103FF0_0x103ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103FF0_0x103ff0");
#endif

    switch (ctx->pc) {
        case 0x103ff0u: goto label_103ff0;
        case 0x103ff4u: goto label_103ff4;
        case 0x103ff8u: goto label_103ff8;
        case 0x103ffcu: goto label_103ffc;
        case 0x104000u: goto label_104000;
        case 0x104004u: goto label_104004;
        case 0x104008u: goto label_104008;
        case 0x10400cu: goto label_10400c;
        case 0x104010u: goto label_104010;
        case 0x104014u: goto label_104014;
        case 0x104018u: goto label_104018;
        case 0x10401cu: goto label_10401c;
        case 0x104020u: goto label_104020;
        case 0x104024u: goto label_104024;
        case 0x104028u: goto label_104028;
        case 0x10402cu: goto label_10402c;
        case 0x104030u: goto label_104030;
        case 0x104034u: goto label_104034;
        case 0x104038u: goto label_104038;
        case 0x10403cu: goto label_10403c;
        case 0x104040u: goto label_104040;
        case 0x104044u: goto label_104044;
        case 0x104048u: goto label_104048;
        case 0x10404cu: goto label_10404c;
        case 0x104050u: goto label_104050;
        case 0x104054u: goto label_104054;
        case 0x104058u: goto label_104058;
        case 0x10405cu: goto label_10405c;
        case 0x104060u: goto label_104060;
        case 0x104064u: goto label_104064;
        case 0x104068u: goto label_104068;
        case 0x10406cu: goto label_10406c;
        case 0x104070u: goto label_104070;
        case 0x104074u: goto label_104074;
        case 0x104078u: goto label_104078;
        case 0x10407cu: goto label_10407c;
        case 0x104080u: goto label_104080;
        case 0x104084u: goto label_104084;
        case 0x104088u: goto label_104088;
        case 0x10408cu: goto label_10408c;
        case 0x104090u: goto label_104090;
        case 0x104094u: goto label_104094;
        case 0x104098u: goto label_104098;
        case 0x10409cu: goto label_10409c;
        case 0x1040a0u: goto label_1040a0;
        case 0x1040a4u: goto label_1040a4;
        case 0x1040a8u: goto label_1040a8;
        case 0x1040acu: goto label_1040ac;
        case 0x1040b0u: goto label_1040b0;
        case 0x1040b4u: goto label_1040b4;
        case 0x1040b8u: goto label_1040b8;
        case 0x1040bcu: goto label_1040bc;
        case 0x1040c0u: goto label_1040c0;
        case 0x1040c4u: goto label_1040c4;
        case 0x1040c8u: goto label_1040c8;
        case 0x1040ccu: goto label_1040cc;
        case 0x1040d0u: goto label_1040d0;
        case 0x1040d4u: goto label_1040d4;
        case 0x1040d8u: goto label_1040d8;
        case 0x1040dcu: goto label_1040dc;
        case 0x1040e0u: goto label_1040e0;
        case 0x1040e4u: goto label_1040e4;
        case 0x1040e8u: goto label_1040e8;
        case 0x1040ecu: goto label_1040ec;
        case 0x1040f0u: goto label_1040f0;
        case 0x1040f4u: goto label_1040f4;
        case 0x1040f8u: goto label_1040f8;
        case 0x1040fcu: goto label_1040fc;
        case 0x104100u: goto label_104100;
        case 0x104104u: goto label_104104;
        case 0x104108u: goto label_104108;
        case 0x10410cu: goto label_10410c;
        case 0x104110u: goto label_104110;
        case 0x104114u: goto label_104114;
        case 0x104118u: goto label_104118;
        case 0x10411cu: goto label_10411c;
        case 0x104120u: goto label_104120;
        case 0x104124u: goto label_104124;
        case 0x104128u: goto label_104128;
        case 0x10412cu: goto label_10412c;
        case 0x104130u: goto label_104130;
        case 0x104134u: goto label_104134;
        case 0x104138u: goto label_104138;
        case 0x10413cu: goto label_10413c;
        case 0x104140u: goto label_104140;
        case 0x104144u: goto label_104144;
        case 0x104148u: goto label_104148;
        case 0x10414cu: goto label_10414c;
        case 0x104150u: goto label_104150;
        case 0x104154u: goto label_104154;
        case 0x104158u: goto label_104158;
        case 0x10415cu: goto label_10415c;
        default: break;
    }

    ctx->pc = 0x103ff0u;

label_103ff0:
    // 0x103ff0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x103ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_103ff4:
    // 0x103ff4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x103ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_103ff8:
    // 0x103ff8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x103ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_103ffc:
    // 0x103ffc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x103ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_104000:
    // 0x104000: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x104000u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_104004:
    // 0x104004: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x104004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_104008:
    // 0x104008: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x104008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10400c:
    // 0x10400c: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x10400cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_104010:
    // 0x104010: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x104010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_104014:
    // 0x104014: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
label_104018:
    if (ctx->pc == 0x104018u) {
        ctx->pc = 0x104018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104014u;
        // 0x104018: 0x8e510040  lw          $s1, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10401Cu;
        goto label_10401c;
    }
    ctx->pc = 0x104014u;
    {
        const bool branch_taken_0x104014 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x104018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104014u;
        // 0x104018: 0x8e510040  lw          $s1, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104014) {
            ctx->pc = 0x104028u;
            goto label_104028;
        }
    }
    ctx->pc = 0x10401Cu;
label_10401c:
    // 0x10401c: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x10401cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_104020:
    // 0x104020: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_104024:
    if (ctx->pc == 0x104024u) {
        ctx->pc = 0x104024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104020u;
        // 0x104024: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104028u;
        goto label_104028;
    }
    ctx->pc = 0x104020u;
    {
        const bool branch_taken_0x104020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104020u;
        // 0x104024: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104020) {
            ctx->pc = 0x104064u;
            goto label_104064;
        }
    }
    ctx->pc = 0x104028u;
label_104028:
    // 0x104028: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x104028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_10402c:
    // 0x10402c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_104030:
    if (ctx->pc == 0x104030u) {
        ctx->pc = 0x104030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10402Cu;
        // 0x104030: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104034u;
        goto label_104034;
    }
    ctx->pc = 0x10402Cu;
    {
        const bool branch_taken_0x10402c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10402Cu;
        // 0x104030: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10402c) {
            ctx->pc = 0x104040u;
            goto label_104040;
        }
    }
    ctx->pc = 0x104034u;
label_104034:
    // 0x104034: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x104034u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_104038:
    // 0x104038: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x104038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10403c:
    // 0x10403c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x10403cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_104040:
    // 0x104040: 0xc040f4e  jal         func_103D38
label_104044:
    if (ctx->pc == 0x104044u) {
        ctx->pc = 0x104044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104040u;
        // 0x104044: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104048u;
        goto label_104048;
    }
    ctx->pc = 0x104040u;
    SET_GPR_U32(ctx, 31, 0x104048u);
    ctx->pc = 0x104044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104040u;
    // 0x104044: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103D38u, 0x104040u, 0x104048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104048u;
label_104048:
    // 0x104048: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_10404c:
    if (ctx->pc == 0x10404Cu) {
        ctx->pc = 0x10404Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104048u;
        // 0x10404c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104050u;
        goto label_104050;
    }
    ctx->pc = 0x104048u;
    {
        const bool branch_taken_0x104048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10404Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104048u;
        // 0x10404c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104048) {
            ctx->pc = 0x10405Cu;
            goto label_10405c;
        }
    }
    ctx->pc = 0x104050u;
label_104050:
    // 0x104050: 0xc041228  jal         func_1048A0
label_104054:
    if (ctx->pc == 0x104054u) {
        ctx->pc = 0x104054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104050u;
        // 0x104054: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104058u;
        goto label_104058;
    }
    ctx->pc = 0x104050u;
    SET_GPR_U32(ctx, 31, 0x104058u);
    ctx->pc = 0x104054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104050u;
    // 0x104054: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1048A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1048A0u, 0x104050u, 0x104058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104058u;
label_104058:
    // 0x104058: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x104058u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_10405c:
    // 0x10405c: 0x1000001b  b           . + 4 + (0x1B << 2)
label_104060:
    if (ctx->pc == 0x104060u) {
        ctx->pc = 0x104060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10405Cu;
        // 0x104060: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104064u;
        goto label_104064;
    }
    ctx->pc = 0x10405Cu;
    {
        const bool branch_taken_0x10405c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10405Cu;
        // 0x104060: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10405c) {
            ctx->pc = 0x1040CCu;
            goto label_1040cc;
        }
    }
    ctx->pc = 0x104064u;
label_104064:
    // 0x104064: 0xc040f4e  jal         func_103D38
label_104068:
    if (ctx->pc == 0x104068u) {
        ctx->pc = 0x104068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104064u;
        // 0x104068: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10406Cu;
        goto label_10406c;
    }
    ctx->pc = 0x104064u;
    SET_GPR_U32(ctx, 31, 0x10406Cu);
    ctx->pc = 0x104068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104064u;
    // 0x104068: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103D38u, 0x104064u, 0x10406Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10406Cu;
label_10406c:
    // 0x10406c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10406cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_104070:
    // 0x104070: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x104070u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104074:
    // 0x104074: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
label_104078:
    if (ctx->pc == 0x104078u) {
        ctx->pc = 0x104078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104074u;
        // 0x104078: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10407Cu;
        goto label_10407c;
    }
    ctx->pc = 0x104074u;
    {
        const bool branch_taken_0x104074 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x104078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104074u;
        // 0x104078: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104074) {
            ctx->pc = 0x1040C8u;
            goto label_1040c8;
        }
    }
    ctx->pc = 0x10407Cu;
label_10407c:
    // 0x10407c: 0x8e460040  lw          $a2, 0x40($s2)
    ctx->pc = 0x10407cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_104080:
    // 0x104080: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
label_104084:
    if (ctx->pc == 0x104084u) {
        ctx->pc = 0x104084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104080u;
        // 0x104084: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104088u;
        goto label_104088;
    }
    ctx->pc = 0x104080u;
    {
        const bool branch_taken_0x104080 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x104084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104080u;
        // 0x104084: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104080) {
            ctx->pc = 0x1040CCu;
            goto label_1040cc;
        }
    }
    ctx->pc = 0x104088u;
label_104088:
    // 0x104088: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x104088u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_10408c:
    // 0x10408c: 0x50e00010  beql        $a3, $zero, . + 4 + (0x10 << 2)
label_104090:
    if (ctx->pc == 0x104090u) {
        ctx->pc = 0x104090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10408Cu;
        // 0x104090: 0x8e220878  lw          $v0, 0x878($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104094u;
        goto label_104094;
    }
    ctx->pc = 0x10408Cu;
    {
        const bool branch_taken_0x10408c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x10408c) {
            ctx->pc = 0x104090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10408Cu;
            // 0x104090: 0x8e220878  lw          $v0, 0x878($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1040D0u;
            goto label_1040d0;
        }
    }
    ctx->pc = 0x104094u;
label_104094:
    // 0x104094: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x104094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_104098:
    // 0x104098: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x104098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_10409c:
    // 0x10409c: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x10409cu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1040a0:
    // 0x1040a0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1040a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1040a4:
    // 0x1040a4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1040a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1040a8:
    // 0x1040a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1040a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1040ac:
    // 0x1040ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1040acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1040b0:
    // 0x1040b0: 0x624018  mult        $t0, $v1, $v0
    ctx->pc = 0x1040b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_1040b4:
    // 0x1040b4: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x1040b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_1040b8:
    // 0x1040b8: 0xe0f809  jalr        $a3
label_1040bc:
    if (ctx->pc == 0x1040BCu) {
        ctx->pc = 0x1040BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1040B8u;
        // 0x1040bc: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1040C0u;
        goto label_1040c0;
    }
    ctx->pc = 0x1040B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x1040C0u);
        ctx->pc = 0x1040BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1040B8u;
        // 0x1040bc: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1040B8u, 0x1040C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1040C0u;
label_1040c0:
    // 0x1040c0: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x1040c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_1040c4:
    // 0x1040c4: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x1040c4u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1040c8:
    // 0x1040c8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1040c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1040cc:
    // 0x1040cc: 0x8e220878  lw          $v0, 0x878($s1)
    ctx->pc = 0x1040ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
label_1040d0:
    // 0x1040d0: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_1040d4:
    if (ctx->pc == 0x1040D4u) {
        ctx->pc = 0x1040D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1040D0u;
        // 0x1040d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1040D8u;
        goto label_1040d8;
    }
    ctx->pc = 0x1040D0u;
    {
        const bool branch_taken_0x1040d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1040D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1040D0u;
        // 0x1040d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1040d0) {
            ctx->pc = 0x104144u;
            goto label_104144;
        }
    }
    ctx->pc = 0x1040D8u;
label_1040d8:
    // 0x1040d8: 0x8e250128  lw          $a1, 0x128($s1)
    ctx->pc = 0x1040d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_1040dc:
    // 0x1040dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1040dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1040e0:
    // 0x1040e0: 0xc04152c  jal         func_1054B0
label_1040e4:
    if (ctx->pc == 0x1040E4u) {
        ctx->pc = 0x1040E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1040E0u;
        // 0x1040e4: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1040E8u;
        goto label_1040e8;
    }
    ctx->pc = 0x1040E0u;
    SET_GPR_U32(ctx, 31, 0x1040E8u);
    ctx->pc = 0x1040E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1040E0u;
    // 0x1040e4: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054B0u, 0x1040E0u, 0x1040E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1040E8u;
label_1040e8:
    // 0x1040e8: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x1040e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
label_1040ec:
    // 0x1040ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1040ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1040f0:
    // 0x1040f0: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
label_1040f4:
    if (ctx->pc == 0x1040F4u) {
        ctx->pc = 0x1040F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1040F0u;
        // 0x1040f4: 0x8e2300c0  lw          $v1, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1040F8u;
        goto label_1040f8;
    }
    ctx->pc = 0x1040F0u;
    {
        const bool branch_taken_0x1040f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1040f0) {
            ctx->pc = 0x1040F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1040F0u;
            // 0x1040f4: 0x8e2300c0  lw          $v1, 0xC0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104110u;
            goto label_104110;
        }
    }
    ctx->pc = 0x1040F8u;
label_1040f8:
    // 0x1040f8: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
label_1040fc:
    if (ctx->pc == 0x1040FCu) {
        ctx->pc = 0x1040FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1040F8u;
        // 0x1040fc: 0x8e2300c0  lw          $v1, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104100u;
        goto label_104100;
    }
    ctx->pc = 0x1040F8u;
    {
        const bool branch_taken_0x1040f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1040f8) {
            ctx->pc = 0x1040FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1040F8u;
            // 0x1040fc: 0x8e2300c0  lw          $v1, 0xC0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104110u;
            goto label_104110;
        }
    }
    ctx->pc = 0x104100u;
label_104100:
    // 0x104100: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x104100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
label_104104:
    // 0x104104: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x104104u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_104108:
    // 0x104108: 0xae220130  sw          $v0, 0x130($s1)
    ctx->pc = 0x104108u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 2));
label_10410c:
    // 0x10410c: 0x8e2300c0  lw          $v1, 0xC0($s1)
    ctx->pc = 0x10410cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_104110:
    // 0x104110: 0x8e220128  lw          $v0, 0x128($s1)
    ctx->pc = 0x104110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_104114:
    // 0x104114: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x104114u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_104118:
    // 0x104118: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x104118u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_10411c:
    // 0x10411c: 0x8e230130  lw          $v1, 0x130($s1)
    ctx->pc = 0x10411cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
label_104120:
    // 0x104120: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_104124:
    if (ctx->pc == 0x104124u) {
        ctx->pc = 0x104124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104120u;
        // 0x104124: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104128u;
        goto label_104128;
    }
    ctx->pc = 0x104120u;
    {
        const bool branch_taken_0x104120 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x104124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104120u;
        // 0x104124: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104120) {
            ctx->pc = 0x104144u;
            goto label_104144;
        }
    }
    ctx->pc = 0x104128u;
label_104128:
    // 0x104128: 0x8e220128  lw          $v0, 0x128($s1)
    ctx->pc = 0x104128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_10412c:
    // 0x10412c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x10412cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_104130:
    // 0x104130: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x104130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_104134:
    // 0x104134: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x104134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_104138:
    // 0x104138: 0xae220128  sw          $v0, 0x128($s1)
    ctx->pc = 0x104138u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 2));
label_10413c:
    // 0x10413c: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x10413cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_104140:
    // 0x104140: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x104140u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_104144:
    // 0x104144: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x104144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_104148:
    // 0x104148: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x104148u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_10414c:
    // 0x10414c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x10414cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_104150:
    // 0x104150: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x104150u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_104154:
    // 0x104154: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x104154u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_104158:
    // 0x104158: 0x3e00008  jr          $ra
label_10415c:
    if (ctx->pc == 0x10415Cu) {
        ctx->pc = 0x10415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104158u;
        // 0x10415c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104160u;
        goto label_fallthrough_0x104158;
    }
    ctx->pc = 0x104158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104158u;
        // 0x10415c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x104158:
    ctx->pc = 0x104160u;
}
