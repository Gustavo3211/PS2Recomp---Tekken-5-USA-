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

// Function: sub_00322018
// Address: 0x322018 - 0x322090
void sub_00322018_0x322018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322018_0x322018");
#endif

    switch (ctx->pc) {
        case 0x322018u: goto label_322018;
        case 0x32201cu: goto label_32201c;
        case 0x322020u: goto label_322020;
        case 0x322024u: goto label_322024;
        case 0x322028u: goto label_322028;
        case 0x32202cu: goto label_32202c;
        case 0x322030u: goto label_322030;
        case 0x322034u: goto label_322034;
        case 0x322038u: goto label_322038;
        case 0x32203cu: goto label_32203c;
        case 0x322040u: goto label_322040;
        case 0x322044u: goto label_322044;
        case 0x322048u: goto label_322048;
        case 0x32204cu: goto label_32204c;
        case 0x322050u: goto label_322050;
        case 0x322054u: goto label_322054;
        case 0x322058u: goto label_322058;
        case 0x32205cu: goto label_32205c;
        case 0x322060u: goto label_322060;
        case 0x322064u: goto label_322064;
        case 0x322068u: goto label_322068;
        case 0x32206cu: goto label_32206c;
        case 0x322070u: goto label_322070;
        case 0x322074u: goto label_322074;
        case 0x322078u: goto label_322078;
        case 0x32207cu: goto label_32207c;
        case 0x322080u: goto label_322080;
        case 0x322084u: goto label_322084;
        case 0x322088u: goto label_322088;
        case 0x32208cu: goto label_32208c;
        default: break;
    }

    ctx->pc = 0x322018u;

label_322018:
    // 0x322018: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x322018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_32201c:
    // 0x32201c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x32201cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_322020:
    // 0x322020: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x322020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_322024:
    // 0x322024: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x322024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_322028:
    // 0x322028: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x322028u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_32202c:
    // 0x32202c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x32202cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_322030:
    // 0x322030: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x322030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_322034:
    // 0x322034: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x322034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_322038:
    // 0x322038: 0x84670000  lh          $a3, 0x0($v1)
    ctx->pc = 0x322038u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_32203c:
    // 0x32203c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32203cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_322040:
    // 0x322040: 0x40f809  jalr        $v0
label_322044:
    if (ctx->pc == 0x322044u) {
        ctx->pc = 0x322044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322040u;
        // 0x322044: 0x872021  addu        $a0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322048u;
        goto label_322048;
    }
    ctx->pc = 0x322040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x322048u);
        ctx->pc = 0x322044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322040u;
        // 0x322044: 0x872021  addu        $a0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322040u, 0x322048u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x322048u;
label_322048:
    // 0x322048: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x322048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_32204c:
    // 0x32204c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_322050:
    if (ctx->pc == 0x322050u) {
        ctx->pc = 0x322050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32204Cu;
        // 0x322050: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322054u;
        goto label_322054;
    }
    ctx->pc = 0x32204Cu;
    {
        const bool branch_taken_0x32204c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x322050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32204Cu;
        // 0x322050: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32204c) {
            ctx->pc = 0x322060u;
            goto label_322060;
        }
    }
    ctx->pc = 0x322054u;
label_322054:
    // 0x322054: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x322054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_322058:
    // 0x322058: 0x10000009  b           . + 4 + (0x9 << 2)
label_32205c:
    if (ctx->pc == 0x32205Cu) {
        ctx->pc = 0x32205Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322058u;
        // 0x32205c: 0x34424005  ori         $v0, $v0, 0x4005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16389);
        ctx->in_delay_slot = false;
        ctx->pc = 0x322060u;
        goto label_322060;
    }
    ctx->pc = 0x322058u;
    {
        const bool branch_taken_0x322058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32205Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322058u;
        // 0x32205c: 0x34424005  ori         $v0, $v0, 0x4005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16389);
        ctx->in_delay_slot = false;
        if (branch_taken_0x322058) {
            ctx->pc = 0x322080u;
            goto label_322080;
        }
    }
    ctx->pc = 0x322060u;
label_322060:
    // 0x322060: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x322060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_322064:
    // 0x322064: 0xc0cf25c  jal         func_33C970
label_322068:
    if (ctx->pc == 0x322068u) {
        ctx->pc = 0x322068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322064u;
        // 0x322068: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32206Cu;
        goto label_32206c;
    }
    ctx->pc = 0x322064u;
    SET_GPR_U32(ctx, 31, 0x32206Cu);
    ctx->pc = 0x322068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322064u;
    // 0x322068: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C970u, 0x322064u, 0x32206Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32206Cu;
label_32206c:
    // 0x32206c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_322070:
    if (ctx->pc == 0x322070u) {
        ctx->pc = 0x322070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32206Cu;
        // 0x322070: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322074u;
        goto label_322074;
    }
    ctx->pc = 0x32206Cu;
    {
        const bool branch_taken_0x32206c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32206Cu;
        // 0x322070: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32206c) {
            ctx->pc = 0x32207Cu;
            goto label_32207c;
        }
    }
    ctx->pc = 0x322074u;
label_322074:
    // 0x322074: 0xc0cf7c0  jal         func_33DF00
label_322078:
    if (ctx->pc == 0x322078u) {
        ctx->pc = 0x322078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322074u;
        // 0x322078: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32207Cu;
        goto label_32207c;
    }
    ctx->pc = 0x322074u;
    SET_GPR_U32(ctx, 31, 0x32207Cu);
    ctx->pc = 0x322078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322074u;
    // 0x322078: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33DF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33DF00u, 0x322074u, 0x32207Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32207Cu;
label_32207c:
    // 0x32207c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32207cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_322080:
    // 0x322080: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x322080u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_322084:
    // 0x322084: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x322084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_322088:
    // 0x322088: 0x3e00008  jr          $ra
label_32208c:
    if (ctx->pc == 0x32208Cu) {
        ctx->pc = 0x32208Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322088u;
        // 0x32208c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322090u;
        goto label_fallthrough_0x322088;
    }
    ctx->pc = 0x322088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32208Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322088u;
        // 0x32208c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x322088:
    ctx->pc = 0x322090u;
}
