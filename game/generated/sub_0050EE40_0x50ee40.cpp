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

// Function: sub_0050EE40
// Address: 0x50ee40 - 0x50ef68
void sub_0050EE40_0x50ee40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050EE40_0x50ee40");
#endif

    switch (ctx->pc) {
        case 0x50ee40u: goto label_50ee40;
        case 0x50ee44u: goto label_50ee44;
        case 0x50ee48u: goto label_50ee48;
        case 0x50ee4cu: goto label_50ee4c;
        case 0x50ee50u: goto label_50ee50;
        case 0x50ee54u: goto label_50ee54;
        case 0x50ee58u: goto label_50ee58;
        case 0x50ee5cu: goto label_50ee5c;
        case 0x50ee60u: goto label_50ee60;
        case 0x50ee64u: goto label_50ee64;
        case 0x50ee68u: goto label_50ee68;
        case 0x50ee6cu: goto label_50ee6c;
        case 0x50ee70u: goto label_50ee70;
        case 0x50ee74u: goto label_50ee74;
        case 0x50ee78u: goto label_50ee78;
        case 0x50ee7cu: goto label_50ee7c;
        case 0x50ee80u: goto label_50ee80;
        case 0x50ee84u: goto label_50ee84;
        case 0x50ee88u: goto label_50ee88;
        case 0x50ee8cu: goto label_50ee8c;
        case 0x50ee90u: goto label_50ee90;
        case 0x50ee94u: goto label_50ee94;
        case 0x50ee98u: goto label_50ee98;
        case 0x50ee9cu: goto label_50ee9c;
        case 0x50eea0u: goto label_50eea0;
        case 0x50eea4u: goto label_50eea4;
        case 0x50eea8u: goto label_50eea8;
        case 0x50eeacu: goto label_50eeac;
        case 0x50eeb0u: goto label_50eeb0;
        case 0x50eeb4u: goto label_50eeb4;
        case 0x50eeb8u: goto label_50eeb8;
        case 0x50eebcu: goto label_50eebc;
        case 0x50eec0u: goto label_50eec0;
        case 0x50eec4u: goto label_50eec4;
        case 0x50eec8u: goto label_50eec8;
        case 0x50eeccu: goto label_50eecc;
        case 0x50eed0u: goto label_50eed0;
        case 0x50eed4u: goto label_50eed4;
        case 0x50eed8u: goto label_50eed8;
        case 0x50eedcu: goto label_50eedc;
        case 0x50eee0u: goto label_50eee0;
        case 0x50eee4u: goto label_50eee4;
        case 0x50eee8u: goto label_50eee8;
        case 0x50eeecu: goto label_50eeec;
        case 0x50eef0u: goto label_50eef0;
        case 0x50eef4u: goto label_50eef4;
        case 0x50eef8u: goto label_50eef8;
        case 0x50eefcu: goto label_50eefc;
        case 0x50ef00u: goto label_50ef00;
        case 0x50ef04u: goto label_50ef04;
        case 0x50ef08u: goto label_50ef08;
        case 0x50ef0cu: goto label_50ef0c;
        case 0x50ef10u: goto label_50ef10;
        case 0x50ef14u: goto label_50ef14;
        case 0x50ef18u: goto label_50ef18;
        case 0x50ef1cu: goto label_50ef1c;
        case 0x50ef20u: goto label_50ef20;
        case 0x50ef24u: goto label_50ef24;
        case 0x50ef28u: goto label_50ef28;
        case 0x50ef2cu: goto label_50ef2c;
        case 0x50ef30u: goto label_50ef30;
        case 0x50ef34u: goto label_50ef34;
        case 0x50ef38u: goto label_50ef38;
        case 0x50ef3cu: goto label_50ef3c;
        case 0x50ef40u: goto label_50ef40;
        case 0x50ef44u: goto label_50ef44;
        case 0x50ef48u: goto label_50ef48;
        case 0x50ef4cu: goto label_50ef4c;
        case 0x50ef50u: goto label_50ef50;
        case 0x50ef54u: goto label_50ef54;
        case 0x50ef58u: goto label_50ef58;
        case 0x50ef5cu: goto label_50ef5c;
        case 0x50ef60u: goto label_50ef60;
        case 0x50ef64u: goto label_50ef64;
        default: break;
    }

    ctx->pc = 0x50ee40u;

label_50ee40:
    // 0x50ee40: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x50ee40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_50ee44:
    // 0x50ee44: 0x3e00008  jr          $ra
label_50ee48:
    if (ctx->pc == 0x50EE48u) {
        ctx->pc = 0x50EE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50EE44u;
        // 0x50ee48: 0x24429900  addiu       $v0, $v0, -0x6700 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940928));
        ctx->in_delay_slot = false;
        ctx->pc = 0x50EE4Cu;
        goto label_50ee4c;
    }
    ctx->pc = 0x50EE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50EE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50EE44u;
        // 0x50ee48: 0x24429900  addiu       $v0, $v0, -0x6700 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940928));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50EE44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50EE4Cu;
label_50ee4c:
    // 0x50ee4c: 0x0  nop
    ctx->pc = 0x50ee4cu;
    // NOP
label_50ee50:
    // 0x50ee50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x50ee50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_50ee54:
    // 0x50ee54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x50ee54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_50ee58:
    // 0x50ee58: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x50ee58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_50ee5c:
    // 0x50ee5c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x50ee5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_50ee60:
    // 0x50ee60: 0x3c130090  lui         $s3, 0x90
    ctx->pc = 0x50ee60u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)144 << 16));
label_50ee64:
    // 0x50ee64: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x50ee64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_50ee68:
    // 0x50ee68: 0x3c14008f  lui         $s4, 0x8F
    ctx->pc = 0x50ee68u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)143 << 16));
label_50ee6c:
    // 0x50ee6c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x50ee6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_50ee70:
    // 0x50ee70: 0x2691c68c  addiu       $s1, $s4, -0x3974
    ctx->pc = 0x50ee70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294952588));
label_50ee74:
    // 0x50ee74: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x50ee74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_50ee78:
    // 0x50ee78: 0x2663f080  addiu       $v1, $s3, -0xF80
    ctx->pc = 0x50ee78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963328));
label_50ee7c:
    // 0x50ee7c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x50ee7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_50ee80:
    // 0x50ee80: 0xc144aa4  jal         func_512A90
label_50ee84:
    if (ctx->pc == 0x50EE84u) {
        ctx->pc = 0x50EE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50EE80u;
        // 0x50ee84: 0xa4620096  sh          $v0, 0x96($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 150), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x50EE88u;
        goto label_50ee88;
    }
    ctx->pc = 0x50EE80u;
    SET_GPR_U32(ctx, 31, 0x50EE88u);
    ctx->pc = 0x50EE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50EE80u;
    // 0x50ee84: 0xa4620096  sh          $v0, 0x96($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 150), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512A90u, 0x50EE80u, 0x50EE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50EE88u;
label_50ee88:
    // 0x50ee88: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x50ee88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_50ee8c:
    // 0x50ee8c: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x50ee8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_50ee90:
    // 0x50ee90: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x50ee90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_50ee94:
    // 0x50ee94: 0x86020008  lh          $v0, 0x8($s0)
    ctx->pc = 0x50ee94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_50ee98:
    // 0x50ee98: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50ee98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_50ee9c:
    // 0x50ee9c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x50ee9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_50eea0:
    // 0x50eea0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50eea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_50eea4:
    // 0x50eea4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x50eea4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_50eea8:
    // 0x50eea8: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x50eea8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_50eeac:
    // 0x50eeac: 0x4400010  bltz        $v0, . + 4 + (0x10 << 2)
label_50eeb0:
    if (ctx->pc == 0x50EEB0u) {
        ctx->pc = 0x50EEB4u;
        goto label_50eeb4;
    }
    ctx->pc = 0x50EEACu;
    {
        const bool branch_taken_0x50eeac = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x50eeac) {
            ctx->pc = 0x50EEF0u;
            goto label_50eef0;
        }
    }
    ctx->pc = 0x50EEB4u;
label_50eeb4:
    // 0x50eeb4: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x50eeb4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
label_50eeb8:
    // 0x50eeb8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_50eebc:
    if (ctx->pc == 0x50EEBCu) {
        ctx->pc = 0x50EEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50EEB8u;
        // 0x50eebc: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x50EEC0u;
        goto label_50eec0;
    }
    ctx->pc = 0x50EEB8u;
    {
        const bool branch_taken_0x50eeb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x50eeb8) {
            ctx->pc = 0x50EEBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x50EEB8u;
            // 0x50eebc: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x50EECCu;
            goto label_50eecc;
        }
    }
    ctx->pc = 0x50EEC0u;
label_50eec0:
    // 0x50eec0: 0xc144af2  jal         func_512BC8
label_50eec4:
    if (ctx->pc == 0x50EEC4u) {
        ctx->pc = 0x50EEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50EEC0u;
        // 0x50eec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x50EEC8u;
        goto label_50eec8;
    }
    ctx->pc = 0x50EEC0u;
    SET_GPR_U32(ctx, 31, 0x50EEC8u);
    ctx->pc = 0x50EEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50EEC0u;
    // 0x50eec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512BC8u, 0x50EEC0u, 0x50EEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50EEC8u;
label_50eec8:
    // 0x50eec8: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x50eec8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_50eecc:
    // 0x50eecc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x50eeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_50eed0:
    // 0x50eed0: 0x86030008  lh          $v1, 0x8($s0)
    ctx->pc = 0x50eed0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_50eed4:
    // 0x50eed4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x50eed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_50eed8:
    // 0x50eed8: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x50eed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
label_50eedc:
    // 0x50eedc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x50eedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_50eee0:
    // 0x50eee0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x50eee0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_50eee4:
    // 0x50eee4: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x50eee4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_50eee8:
    // 0x50eee8: 0x463fff3  bgezl       $v1, . + 4 + (-0xD << 2)
label_50eeec:
    if (ctx->pc == 0x50EEECu) {
        ctx->pc = 0x50EEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50EEE8u;
        // 0x50eeec: 0x86220000  lh          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x50EEF0u;
        goto label_50eef0;
    }
    ctx->pc = 0x50EEE8u;
    {
        const bool branch_taken_0x50eee8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x50eee8) {
            ctx->pc = 0x50EEECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x50EEE8u;
            // 0x50eeec: 0x86220000  lh          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x50EEB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_50eeb8;
        }
    }
    ctx->pc = 0x50EEF0u;
label_50eef0:
    // 0x50eef0: 0xc144ab4  jal         func_512AD0
label_50eef4:
    if (ctx->pc == 0x50EEF4u) {
        ctx->pc = 0x50EEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50EEF0u;
        // 0x50eef4: 0x2670f080  addiu       $s0, $s3, -0xF80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x50EEF8u;
        goto label_50eef8;
    }
    ctx->pc = 0x50EEF0u;
    SET_GPR_U32(ctx, 31, 0x50EEF8u);
    ctx->pc = 0x50EEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50EEF0u;
    // 0x50eef4: 0x2670f080  addiu       $s0, $s3, -0xF80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512AD0u, 0x50EEF0u, 0x50EEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50EEF8u;
label_50eef8:
    // 0x50eef8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x50eef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_50eefc:
    // 0x50eefc: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x50eefcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_50ef00:
    // 0x50ef00: 0xa60320c0  sh          $v1, 0x20C0($s0)
    ctx->pc = 0x50ef00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8384), (uint16_t)GPR_U32(ctx, 3));
label_50ef04:
    // 0x50ef04: 0xc142518  jal         func_509460
label_50ef08:
    if (ctx->pc == 0x50EF08u) {
        ctx->pc = 0x50EF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50EF04u;
        // 0x50ef08: 0xa6004dfc  sh          $zero, 0x4DFC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 19964), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x50EF0Cu;
        goto label_50ef0c;
    }
    ctx->pc = 0x50EF04u;
    SET_GPR_U32(ctx, 31, 0x50EF0Cu);
    ctx->pc = 0x50EF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50EF04u;
    // 0x50ef08: 0xa6004dfc  sh          $zero, 0x4DFC($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 19964), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x509460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x509460u, 0x50EF04u, 0x50EF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50EF0Cu;
label_50ef0c:
    // 0x50ef0c: 0xc1436a4  jal         func_50DA90
label_50ef10:
    if (ctx->pc == 0x50EF10u) {
        ctx->pc = 0x50EF14u;
        goto label_50ef14;
    }
    ctx->pc = 0x50EF0Cu;
    SET_GPR_U32(ctx, 31, 0x50EF14u);
    ctx->pc = 0x50DA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50DA90u, 0x50EF0Cu, 0x50EF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50EF14u;
label_50ef14:
    // 0x50ef14: 0xc143c66  jal         func_50F198
label_50ef18:
    if (ctx->pc == 0x50EF18u) {
        ctx->pc = 0x50EF1Cu;
        goto label_50ef1c;
    }
    ctx->pc = 0x50EF14u;
    SET_GPR_U32(ctx, 31, 0x50EF1Cu);
    ctx->pc = 0x50F198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50F198u, 0x50EF14u, 0x50EF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50EF1Cu;
label_50ef1c:
    // 0x50ef1c: 0x2685c68c  addiu       $a1, $s4, -0x3974
    ctx->pc = 0x50ef1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294952588));
label_50ef20:
    // 0x50ef20: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x50ef20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_50ef24:
    // 0x50ef24: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x50ef24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_50ef28:
    // 0x50ef28: 0x86040096  lh          $a0, 0x96($s0)
    ctx->pc = 0x50ef28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
label_50ef2c:
    // 0x50ef2c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x50ef2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_50ef30:
    // 0x50ef30: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x50ef30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_50ef34:
    // 0x50ef34: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x50ef34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_50ef38:
    // 0x50ef38: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x50ef38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_50ef3c:
    // 0x50ef3c: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x50ef3cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_50ef40:
    // 0x50ef40: 0x2ca20005  sltiu       $v0, $a1, 0x5
    ctx->pc = 0x50ef40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_50ef44:
    // 0x50ef44: 0x50400030  beql        $v0, $zero, . + 4 + (0x30 << 2)
label_50ef48:
    if (ctx->pc == 0x50EF48u) {
        ctx->pc = 0x50EF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50EF44u;
        // 0x50ef48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x50EF4Cu;
        goto label_50ef4c;
    }
    ctx->pc = 0x50EF44u;
    {
        const bool branch_taken_0x50ef44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x50ef44) {
            ctx->pc = 0x50EF48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x50EF44u;
            // 0x50ef48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x50F008u;
            return;
        }
    }
    ctx->pc = 0x50EF4Cu;
label_50ef4c:
    // 0x50ef4c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x50ef4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_50ef50:
    // 0x50ef50: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x50ef50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_50ef54:
    // 0x50ef54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x50ef54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_50ef58:
    // 0x50ef58: 0x8c63d360  lw          $v1, -0x2CA0($v1)
    ctx->pc = 0x50ef58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955872)));
label_50ef5c:
    // 0x50ef5c: 0x600008  jr          $v1
label_50ef60:
    if (ctx->pc == 0x50EF60u) {
        ctx->pc = 0x50EF64u;
        goto label_50ef64;
    }
    ctx->pc = 0x50EF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50EF5Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x50EF64u;
label_50ef64:
    // 0x50ef64: 0x0  nop
    ctx->pc = 0x50ef64u;
    // NOP
    ctx->pc = 0x50ef68u;
}
