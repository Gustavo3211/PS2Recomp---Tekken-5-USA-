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

// Function: sub_002FA0D0
// Address: 0x2fa0d0 - 0x2fa1f8
void sub_002FA0D0_0x2fa0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA0D0_0x2fa0d0");
#endif

    switch (ctx->pc) {
        case 0x2fa0d0u: goto label_2fa0d0;
        case 0x2fa0d4u: goto label_2fa0d4;
        case 0x2fa0d8u: goto label_2fa0d8;
        case 0x2fa0dcu: goto label_2fa0dc;
        case 0x2fa0e0u: goto label_2fa0e0;
        case 0x2fa0e4u: goto label_2fa0e4;
        case 0x2fa0e8u: goto label_2fa0e8;
        case 0x2fa0ecu: goto label_2fa0ec;
        case 0x2fa0f0u: goto label_2fa0f0;
        case 0x2fa0f4u: goto label_2fa0f4;
        case 0x2fa0f8u: goto label_2fa0f8;
        case 0x2fa0fcu: goto label_2fa0fc;
        case 0x2fa100u: goto label_2fa100;
        case 0x2fa104u: goto label_2fa104;
        case 0x2fa108u: goto label_2fa108;
        case 0x2fa10cu: goto label_2fa10c;
        case 0x2fa110u: goto label_2fa110;
        case 0x2fa114u: goto label_2fa114;
        case 0x2fa118u: goto label_2fa118;
        case 0x2fa11cu: goto label_2fa11c;
        case 0x2fa120u: goto label_2fa120;
        case 0x2fa124u: goto label_2fa124;
        case 0x2fa128u: goto label_2fa128;
        case 0x2fa12cu: goto label_2fa12c;
        case 0x2fa130u: goto label_2fa130;
        case 0x2fa134u: goto label_2fa134;
        case 0x2fa138u: goto label_2fa138;
        case 0x2fa13cu: goto label_2fa13c;
        case 0x2fa140u: goto label_2fa140;
        case 0x2fa144u: goto label_2fa144;
        case 0x2fa148u: goto label_2fa148;
        case 0x2fa14cu: goto label_2fa14c;
        case 0x2fa150u: goto label_2fa150;
        case 0x2fa154u: goto label_2fa154;
        case 0x2fa158u: goto label_2fa158;
        case 0x2fa15cu: goto label_2fa15c;
        case 0x2fa160u: goto label_2fa160;
        case 0x2fa164u: goto label_2fa164;
        case 0x2fa168u: goto label_2fa168;
        case 0x2fa16cu: goto label_2fa16c;
        case 0x2fa170u: goto label_2fa170;
        case 0x2fa174u: goto label_2fa174;
        case 0x2fa178u: goto label_2fa178;
        case 0x2fa17cu: goto label_2fa17c;
        case 0x2fa180u: goto label_2fa180;
        case 0x2fa184u: goto label_2fa184;
        case 0x2fa188u: goto label_2fa188;
        case 0x2fa18cu: goto label_2fa18c;
        case 0x2fa190u: goto label_2fa190;
        case 0x2fa194u: goto label_2fa194;
        case 0x2fa198u: goto label_2fa198;
        case 0x2fa19cu: goto label_2fa19c;
        case 0x2fa1a0u: goto label_2fa1a0;
        case 0x2fa1a4u: goto label_2fa1a4;
        case 0x2fa1a8u: goto label_2fa1a8;
        case 0x2fa1acu: goto label_2fa1ac;
        case 0x2fa1b0u: goto label_2fa1b0;
        case 0x2fa1b4u: goto label_2fa1b4;
        case 0x2fa1b8u: goto label_2fa1b8;
        case 0x2fa1bcu: goto label_2fa1bc;
        case 0x2fa1c0u: goto label_2fa1c0;
        case 0x2fa1c4u: goto label_2fa1c4;
        case 0x2fa1c8u: goto label_2fa1c8;
        case 0x2fa1ccu: goto label_2fa1cc;
        case 0x2fa1d0u: goto label_2fa1d0;
        case 0x2fa1d4u: goto label_2fa1d4;
        case 0x2fa1d8u: goto label_2fa1d8;
        case 0x2fa1dcu: goto label_2fa1dc;
        case 0x2fa1e0u: goto label_2fa1e0;
        case 0x2fa1e4u: goto label_2fa1e4;
        case 0x2fa1e8u: goto label_2fa1e8;
        case 0x2fa1ecu: goto label_2fa1ec;
        case 0x2fa1f0u: goto label_2fa1f0;
        case 0x2fa1f4u: goto label_2fa1f4;
        default: break;
    }

    ctx->pc = 0x2fa0d0u;

label_2fa0d0:
    // 0x2fa0d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fa0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2fa0d4:
    // 0x2fa0d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fa0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2fa0d8:
    // 0x2fa0d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fa0d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fa0dc:
    // 0x2fa0dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fa0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2fa0e0:
    // 0x2fa0e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fa0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2fa0e4:
    // 0x2fa0e4: 0xc0bb8b0  jal         func_2EE2C0
label_2fa0e8:
    if (ctx->pc == 0x2FA0E8u) {
        ctx->pc = 0x2FA0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA0E4u;
        // 0x2fa0e8: 0x26040110  addiu       $a0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA0ECu;
        goto label_2fa0ec;
    }
    ctx->pc = 0x2FA0E4u;
    SET_GPR_U32(ctx, 31, 0x2FA0ECu);
    ctx->pc = 0x2FA0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA0E4u;
    // 0x2fa0e8: 0x26040110  addiu       $a0, $s0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE2C0u, 0x2FA0E4u, 0x2FA0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA0ECu;
label_2fa0ec:
    // 0x2fa0ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2fa0ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fa0f0:
    // 0x2fa0f0: 0x10000027  b           . + 4 + (0x27 << 2)
label_2fa0f4:
    if (ctx->pc == 0x2FA0F4u) {
        ctx->pc = 0x2FA0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA0F0u;
        // 0x2fa0f4: 0x26050158  addiu       $a1, $s0, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA0F8u;
        goto label_2fa0f8;
    }
    ctx->pc = 0x2FA0F0u;
    {
        const bool branch_taken_0x2fa0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA0F0u;
        // 0x2fa0f4: 0x26050158  addiu       $a1, $s0, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa0f0) {
            ctx->pc = 0x2FA190u;
            goto label_2fa190;
        }
    }
    ctx->pc = 0x2FA0F8u;
label_2fa0f8:
    // 0x2fa0f8: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x2fa0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2fa0fc:
    // 0x2fa0fc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2fa0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2fa100:
    // 0x2fa100: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2fa104:
    if (ctx->pc == 0x2FA104u) {
        ctx->pc = 0x2FA104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA100u;
        // 0x2fa104: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA108u;
        goto label_2fa108;
    }
    ctx->pc = 0x2FA100u;
    {
        const bool branch_taken_0x2fa100 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa100) {
            ctx->pc = 0x2FA104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA100u;
            // 0x2fa104: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA11Cu;
            goto label_2fa11c;
        }
    }
    ctx->pc = 0x2FA108u;
label_2fa108:
    // 0x2fa108: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2fa108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2fa10c:
    // 0x2fa10c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2fa10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2fa110:
    // 0x2fa110: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2fa114:
    if (ctx->pc == 0x2FA114u) {
        ctx->pc = 0x2FA118u;
        goto label_2fa118;
    }
    ctx->pc = 0x2FA110u;
    {
        const bool branch_taken_0x2fa110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fa110) {
            ctx->pc = 0x2FA124u;
            goto label_2fa124;
        }
    }
    ctx->pc = 0x2FA118u;
label_2fa118:
    // 0x2fa118: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2fa118u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2fa11c:
    // 0x2fa11c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fa11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fa120:
    // 0x2fa120: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2fa120u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2fa124:
    // 0x2fa124: 0xc0bde3a  jal         func_2F78E8
label_2fa128:
    if (ctx->pc == 0x2FA128u) {
        ctx->pc = 0x2FA128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA124u;
        // 0x2fa128: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA12Cu;
        goto label_2fa12c;
    }
    ctx->pc = 0x2FA124u;
    SET_GPR_U32(ctx, 31, 0x2FA12Cu);
    ctx->pc = 0x2FA128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA124u;
    // 0x2fa128: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F78E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F78E8u, 0x2FA124u, 0x2FA12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA12Cu;
label_2fa12c:
    // 0x2fa12c: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_2fa130:
    if (ctx->pc == 0x2FA130u) {
        ctx->pc = 0x2FA130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA12Cu;
        // 0x2fa130: 0x26040130  addiu       $a0, $s0, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA134u;
        goto label_2fa134;
    }
    ctx->pc = 0x2FA12Cu;
    {
        const bool branch_taken_0x2fa12c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA12Cu;
        // 0x2fa130: 0x26040130  addiu       $a0, $s0, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa12c) {
            ctx->pc = 0x2FA1C8u;
            goto label_2fa1c8;
        }
    }
    ctx->pc = 0x2FA134u;
label_2fa134:
    // 0x2fa134: 0x26050148  addiu       $a1, $s0, 0x148
    ctx->pc = 0x2fa134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
label_2fa138:
    // 0x2fa138: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2fa138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2fa13c:
    // 0x2fa13c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2fa140:
    if (ctx->pc == 0x2FA140u) {
        ctx->pc = 0x2FA140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA13Cu;
        // 0x2fa140: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA144u;
        goto label_2fa144;
    }
    ctx->pc = 0x2FA13Cu;
    {
        const bool branch_taken_0x2fa13c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa13c) {
            ctx->pc = 0x2FA140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA13Cu;
            // 0x2fa140: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA158u;
            goto label_2fa158;
        }
    }
    ctx->pc = 0x2FA144u;
label_2fa144:
    // 0x2fa144: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2fa144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2fa148:
    // 0x2fa148: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2fa148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2fa14c:
    // 0x2fa14c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2fa150:
    if (ctx->pc == 0x2FA150u) {
        ctx->pc = 0x2FA154u;
        goto label_2fa154;
    }
    ctx->pc = 0x2FA14Cu;
    {
        const bool branch_taken_0x2fa14c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fa14c) {
            ctx->pc = 0x2FA160u;
            goto label_2fa160;
        }
    }
    ctx->pc = 0x2FA154u;
label_2fa154:
    // 0x2fa154: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2fa154u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2fa158:
    // 0x2fa158: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fa158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fa15c:
    // 0x2fa15c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2fa15cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2fa160:
    // 0x2fa160: 0xc0bda58  jal         func_2F6960
label_2fa164:
    if (ctx->pc == 0x2FA164u) {
        ctx->pc = 0x2FA164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA160u;
        // 0x2fa164: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA168u;
        goto label_2fa168;
    }
    ctx->pc = 0x2FA160u;
    SET_GPR_U32(ctx, 31, 0x2FA168u);
    ctx->pc = 0x2FA164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA160u;
    // 0x2fa164: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6960u, 0x2FA160u, 0x2FA168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA168u;
label_2fa168:
    // 0x2fa168: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_2fa16c:
    if (ctx->pc == 0x2FA16Cu) {
        ctx->pc = 0x2FA16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA168u;
        // 0x2fa16c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA170u;
        goto label_2fa170;
    }
    ctx->pc = 0x2FA168u;
    {
        const bool branch_taken_0x2fa168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA168u;
        // 0x2fa16c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa168) {
            ctx->pc = 0x2FA1E0u;
            goto label_2fa1e0;
        }
    }
    ctx->pc = 0x2FA170u;
label_2fa170:
    // 0x2fa170: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2fa170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2fa174:
    // 0x2fa174: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x2fa174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_2fa178:
    // 0x2fa178: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2fa178u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2fa17c:
    // 0x2fa17c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2fa17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2fa180:
    // 0x2fa180: 0x60f809  jalr        $v1
label_2fa184:
    if (ctx->pc == 0x2FA184u) {
        ctx->pc = 0x2FA184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA180u;
        // 0x2fa184: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA188u;
        goto label_2fa188;
    }
    ctx->pc = 0x2FA180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2FA188u);
        ctx->pc = 0x2FA184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA180u;
        // 0x2fa184: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA180u, 0x2FA188u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FA188u;
label_2fa188:
    // 0x2fa188: 0x1000000f  b           . + 4 + (0xF << 2)
label_2fa18c:
    if (ctx->pc == 0x2FA18Cu) {
        ctx->pc = 0x2FA18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA188u;
        // 0x2fa18c: 0x26040130  addiu       $a0, $s0, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA190u;
        goto label_2fa190;
    }
    ctx->pc = 0x2FA188u;
    {
        const bool branch_taken_0x2fa188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA188u;
        // 0x2fa18c: 0x26040130  addiu       $a0, $s0, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa188) {
            ctx->pc = 0x2FA1C8u;
            goto label_2fa1c8;
        }
    }
    ctx->pc = 0x2FA190u;
label_2fa190:
    // 0x2fa190: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2fa190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2fa194:
    // 0x2fa194: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2fa198:
    if (ctx->pc == 0x2FA198u) {
        ctx->pc = 0x2FA198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA194u;
        // 0x2fa198: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA19Cu;
        goto label_2fa19c;
    }
    ctx->pc = 0x2FA194u;
    {
        const bool branch_taken_0x2fa194 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa194) {
            ctx->pc = 0x2FA198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA194u;
            // 0x2fa198: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA1B0u;
            goto label_2fa1b0;
        }
    }
    ctx->pc = 0x2FA19Cu;
label_2fa19c:
    // 0x2fa19c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2fa19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2fa1a0:
    // 0x2fa1a0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2fa1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2fa1a4:
    // 0x2fa1a4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2fa1a8:
    if (ctx->pc == 0x2FA1A8u) {
        ctx->pc = 0x2FA1ACu;
        goto label_2fa1ac;
    }
    ctx->pc = 0x2FA1A4u;
    {
        const bool branch_taken_0x2fa1a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fa1a4) {
            ctx->pc = 0x2FA1B8u;
            goto label_2fa1b8;
        }
    }
    ctx->pc = 0x2FA1ACu;
label_2fa1ac:
    // 0x2fa1ac: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2fa1acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2fa1b0:
    // 0x2fa1b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fa1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fa1b4:
    // 0x2fa1b4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2fa1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2fa1b8:
    // 0x2fa1b8: 0xc0be06c  jal         func_2F81B0
label_2fa1bc:
    if (ctx->pc == 0x2FA1BCu) {
        ctx->pc = 0x2FA1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA1B8u;
        // 0x2fa1bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA1C0u;
        goto label_2fa1c0;
    }
    ctx->pc = 0x2FA1B8u;
    SET_GPR_U32(ctx, 31, 0x2FA1C0u);
    ctx->pc = 0x2FA1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA1B8u;
    // 0x2fa1bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F81B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F81B0u, 0x2FA1B8u, 0x2FA1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA1C0u;
label_2fa1c0:
    // 0x2fa1c0: 0x1040ffcd  beqz        $v0, . + 4 + (-0x33 << 2)
label_2fa1c4:
    if (ctx->pc == 0x2FA1C4u) {
        ctx->pc = 0x2FA1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA1C0u;
        // 0x2fa1c4: 0x26040130  addiu       $a0, $s0, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA1C8u;
        goto label_2fa1c8;
    }
    ctx->pc = 0x2FA1C0u;
    {
        const bool branch_taken_0x2fa1c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA1C0u;
        // 0x2fa1c4: 0x26040130  addiu       $a0, $s0, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa1c0) {
            ctx->pc = 0x2FA0F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fa0f8;
        }
    }
    ctx->pc = 0x2FA1C8u;
label_2fa1c8:
    // 0x2fa1c8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2fa1c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2fa1cc:
    // 0x2fa1cc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2fa1d0:
    if (ctx->pc == 0x2FA1D0u) {
        ctx->pc = 0x2FA1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA1CCu;
        // 0x2fa1d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA1D4u;
        goto label_2fa1d4;
    }
    ctx->pc = 0x2FA1CCu;
    {
        const bool branch_taken_0x2fa1cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA1CCu;
        // 0x2fa1d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa1cc) {
            ctx->pc = 0x2FA1D8u;
            goto label_2fa1d8;
        }
    }
    ctx->pc = 0x2FA1D4u;
label_2fa1d4:
    // 0x2fa1d4: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x2fa1d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_2fa1d8:
    // 0x2fa1d8: 0xc092940  jal         func_24A500
label_2fa1dc:
    if (ctx->pc == 0x2FA1DCu) {
        ctx->pc = 0x2FA1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA1D8u;
        // 0x2fa1dc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA1E0u;
        goto label_2fa1e0;
    }
    ctx->pc = 0x2FA1D8u;
    SET_GPR_U32(ctx, 31, 0x2FA1E0u);
    ctx->pc = 0x2FA1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA1D8u;
    // 0x2fa1dc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x2FA1D8u, 0x2FA1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA1E0u;
label_2fa1e0:
    // 0x2fa1e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fa1e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fa1e4:
    // 0x2fa1e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fa1e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2fa1e8:
    // 0x2fa1e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fa1e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2fa1ec:
    // 0x2fa1ec: 0x3e00008  jr          $ra
label_2fa1f0:
    if (ctx->pc == 0x2FA1F0u) {
        ctx->pc = 0x2FA1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA1ECu;
        // 0x2fa1f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA1F4u;
        goto label_2fa1f4;
    }
    ctx->pc = 0x2FA1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA1ECu;
        // 0x2fa1f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA1ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA1F4u;
label_2fa1f4:
    // 0x2fa1f4: 0x0  nop
    ctx->pc = 0x2fa1f4u;
    // NOP
    ctx->pc = 0x2fa1f8u;
}
