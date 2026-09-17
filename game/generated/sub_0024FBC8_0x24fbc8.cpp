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

// Function: sub_0024FBC8
// Address: 0x24fbc8 - 0x24fc78
void sub_0024FBC8_0x24fbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024FBC8_0x24fbc8");
#endif

    switch (ctx->pc) {
        case 0x24fbf4u: goto label_24fbf4;
        case 0x24fc34u: goto label_24fc34;
        case 0x24fc64u: goto label_24fc64;
        default: break;
    }

    ctx->pc = 0x24fbc8u;

    // 0x24fbc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24fbc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24fbcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24fbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24fbd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24fbd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fbd4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24fbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24fbd8: 0x260700c0  addiu       $a3, $s0, 0xC0
    ctx->pc = 0x24fbd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x24fbdc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24fbdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fbe0: 0x8602011c  lh          $v0, 0x11C($s0)
    ctx->pc = 0x24fbe0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x24fbe4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24FBE4u;
    {
        const bool branch_taken_0x24fbe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24FBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FBE4u;
        // 0x24fbe8: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fbe4) {
            ctx->pc = 0x24FC00u;
            goto label_24fc00;
        }
    }
    ctx->pc = 0x24FBECu;
    // 0x24fbec: 0xc093c66  jal         func_24F198
    ctx->pc = 0x24FBECu;
    SET_GPR_U32(ctx, 31, 0x24FBF4u);
    ctx->pc = 0x24FBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FBECu;
    // 0x24fbf0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F198u, 0x24FBECu, 0x24FBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FBF4u;
label_24fbf4:
    // 0x24fbf4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x24FBF4u;
    {
        const bool branch_taken_0x24fbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FBF4u;
        // 0x24fbf8: 0x86020064  lh          $v0, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fbf4) {
            ctx->pc = 0x24FC40u;
            goto label_24fc40;
        }
    }
    ctx->pc = 0x24FBFCu;
    // 0x24fbfc: 0x0  nop
    ctx->pc = 0x24fbfcu;
    // NOP
label_24fc00:
    // 0x24fc00: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x24fc00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x24fc04: 0x8c6288ac  lw          $v0, -0x7754($v1)
    ctx->pc = 0x24fc04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A88ACu));
    // 0x24fc08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24FC08u;
    {
        const bool branch_taken_0x24fc08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FC08u;
        // 0x24fc0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fc08) {
            ctx->pc = 0x24FC20u;
            goto label_24fc20;
        }
    }
    ctx->pc = 0x24FC10u;
    // 0x24fc10: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x24fc10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x24fc14: 0x8c4323b4  lw          $v1, 0x23B4($v0)
    ctx->pc = 0x24fc14u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B23B4u));
    // 0x24fc18: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x24fc18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x24fc1c: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x24fc1cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_24fc20:
    // 0x24fc20: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x24FC20u;
    {
        const bool branch_taken_0x24fc20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FC20u;
        // 0x24fc24: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fc20) {
            ctx->pc = 0x24FC3Cu;
            goto label_24fc3c;
        }
    }
    ctx->pc = 0x24FC28u;
    // 0x24fc28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24fc28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fc2c: 0xc093e68  jal         func_24F9A0
    ctx->pc = 0x24FC2Cu;
    SET_GPR_U32(ctx, 31, 0x24FC34u);
    ctx->pc = 0x24FC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FC2Cu;
    // 0x24fc30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F9A0u, 0x24FC2Cu, 0x24FC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FC34u;
label_24fc34:
    // 0x24fc34: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x24FC34u;
    {
        const bool branch_taken_0x24fc34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24fc34) {
            ctx->pc = 0x24FC38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FC34u;
            // 0x24fc38: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FC68u;
            goto label_24fc68;
        }
    }
    ctx->pc = 0x24FC3Cu;
label_24fc3c:
    // 0x24fc3c: 0x86020064  lh          $v0, 0x64($s0)
    ctx->pc = 0x24fc3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
label_24fc40:
    // 0x24fc40: 0x86030066  lh          $v1, 0x66($s0)
    ctx->pc = 0x24fc40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
    // 0x24fc44: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x24fc44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x24fc48: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24FC48u;
    {
        const bool branch_taken_0x24fc48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24FC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FC48u;
        // 0x24fc4c: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fc48) {
            ctx->pc = 0x24FC5Cu;
            goto label_24fc5c;
        }
    }
    ctx->pc = 0x24FC50u;
    // 0x24fc50: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x24fc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x24fc54: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24fc54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24fc58: 0xae020118  sw          $v0, 0x118($s0)
    ctx->pc = 0x24fc58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
label_24fc5c:
    // 0x24fc5c: 0xc0947f6  jal         func_251FD8
    ctx->pc = 0x24FC5Cu;
    SET_GPR_U32(ctx, 31, 0x24FC64u);
    ctx->pc = 0x24FC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FC5Cu;
    // 0x24fc60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251FD8u, 0x24FC5Cu, 0x24FC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FC64u;
label_24fc64:
    // 0x24fc64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24fc64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24fc68:
    // 0x24fc68: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24fc68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24fc6c: 0x3e00008  jr          $ra
    ctx->pc = 0x24FC6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24FC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FC6Cu;
        // 0x24fc70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FC6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24FC74u;
    // 0x24fc74: 0x0  nop
    ctx->pc = 0x24fc74u;
    // NOP
    ctx->pc = 0x24fc78u;
}
