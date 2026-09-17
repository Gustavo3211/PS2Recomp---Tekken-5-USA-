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

// Function: sub_00339CC0
// Address: 0x339cc0 - 0x339d30
void sub_00339CC0_0x339cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339CC0_0x339cc0");
#endif

    switch (ctx->pc) {
        case 0x339cc0u: goto label_339cc0;
        case 0x339cc4u: goto label_339cc4;
        case 0x339cc8u: goto label_339cc8;
        case 0x339cccu: goto label_339ccc;
        case 0x339cd0u: goto label_339cd0;
        case 0x339cd4u: goto label_339cd4;
        case 0x339cd8u: goto label_339cd8;
        case 0x339cdcu: goto label_339cdc;
        case 0x339ce0u: goto label_339ce0;
        case 0x339ce4u: goto label_339ce4;
        case 0x339ce8u: goto label_339ce8;
        case 0x339cecu: goto label_339cec;
        case 0x339cf0u: goto label_339cf0;
        case 0x339cf4u: goto label_339cf4;
        case 0x339cf8u: goto label_339cf8;
        case 0x339cfcu: goto label_339cfc;
        case 0x339d00u: goto label_339d00;
        case 0x339d04u: goto label_339d04;
        case 0x339d08u: goto label_339d08;
        case 0x339d0cu: goto label_339d0c;
        case 0x339d10u: goto label_339d10;
        case 0x339d14u: goto label_339d14;
        case 0x339d18u: goto label_339d18;
        case 0x339d1cu: goto label_339d1c;
        case 0x339d20u: goto label_339d20;
        case 0x339d24u: goto label_339d24;
        case 0x339d28u: goto label_339d28;
        case 0x339d2cu: goto label_339d2c;
        default: break;
    }

    ctx->pc = 0x339cc0u;

label_339cc0:
    // 0x339cc0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x339cc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_339cc4:
    // 0x339cc4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x339cc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_339cc8:
    // 0x339cc8: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x339cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_339ccc:
    // 0x339ccc: 0x2cc3003b  sltiu       $v1, $a2, 0x3B
    ctx->pc = 0x339cccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
label_339cd0:
    // 0x339cd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x339cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_339cd4:
    // 0x339cd4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_339cd8:
    if (ctx->pc == 0x339CD8u) {
        ctx->pc = 0x339CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339CD4u;
        // 0x339cd8: 0x2444ec80  addiu       $a0, $v0, -0x1380 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339CDCu;
        goto label_339cdc;
    }
    ctx->pc = 0x339CD4u;
    {
        const bool branch_taken_0x339cd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x339CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339CD4u;
        // 0x339cd8: 0x2444ec80  addiu       $a0, $v0, -0x1380 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339cd4) {
            ctx->pc = 0x339D08u;
            goto label_339d08;
        }
    }
    ctx->pc = 0x339CDCu;
label_339cdc:
    // 0x339cdc: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x339cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_339ce0:
    // 0x339ce0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x339ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_339ce4:
    // 0x339ce4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x339ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_339ce8:
    // 0x339ce8: 0x8c6333a0  lw          $v1, 0x33A0($v1)
    ctx->pc = 0x339ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13216)));
label_339cec:
    // 0x339cec: 0x600008  jr          $v1
label_339cf0:
    if (ctx->pc == 0x339CF0u) {
        ctx->pc = 0x339CF4u;
        goto label_339cf4;
    }
    ctx->pc = 0x339CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x339CF8u: goto label_339cf8;
            case 0x339D00u: goto label_339d00;
            case 0x339D08u: goto label_339d08;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339CECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x339CF4u;
label_339cf4:
    // 0x339cf4: 0x0  nop
    ctx->pc = 0x339cf4u;
    // NOP
label_339cf8:
    // 0x339cf8: 0x10000004  b           . + 4 + (0x4 << 2)
label_339cfc:
    if (ctx->pc == 0x339CFCu) {
        ctx->pc = 0x339CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339CF8u;
        // 0x339cfc: 0x248601bc  addiu       $a2, $a0, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 444));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339D00u;
        goto label_339d00;
    }
    ctx->pc = 0x339CF8u;
    {
        const bool branch_taken_0x339cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339CF8u;
        // 0x339cfc: 0x248601bc  addiu       $a2, $a0, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339cf8) {
            ctx->pc = 0x339D0Cu;
            goto label_339d0c;
        }
    }
    ctx->pc = 0x339D00u;
label_339d00:
    // 0x339d00: 0x10000002  b           . + 4 + (0x2 << 2)
label_339d04:
    if (ctx->pc == 0x339D04u) {
        ctx->pc = 0x339D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D00u;
        // 0x339d04: 0x248601c8  addiu       $a2, $a0, 0x1C8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339D08u;
        goto label_339d08;
    }
    ctx->pc = 0x339D00u;
    {
        const bool branch_taken_0x339d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D00u;
        // 0x339d04: 0x248601c8  addiu       $a2, $a0, 0x1C8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339d00) {
            ctx->pc = 0x339D0Cu;
            goto label_339d0c;
        }
    }
    ctx->pc = 0x339D08u;
label_339d08:
    // 0x339d08: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x339d08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_339d0c:
    // 0x339d0c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x339d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_339d10:
    // 0x339d10: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x339d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_339d14:
    // 0x339d14: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x339d14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_339d18:
    // 0x339d18: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x339d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_339d1c:
    // 0x339d1c: 0x40f809  jalr        $v0
label_339d20:
    if (ctx->pc == 0x339D20u) {
        ctx->pc = 0x339D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D1Cu;
        // 0x339d20: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339D24u;
        goto label_339d24;
    }
    ctx->pc = 0x339D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x339D24u);
        ctx->pc = 0x339D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D1Cu;
        // 0x339d20: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339D1Cu, 0x339D24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x339D24u;
label_339d24:
    // 0x339d24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x339d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_339d28:
    // 0x339d28: 0x3e00008  jr          $ra
label_339d2c:
    if (ctx->pc == 0x339D2Cu) {
        ctx->pc = 0x339D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D28u;
        // 0x339d2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339D30u;
        goto label_fallthrough_0x339d28;
    }
    ctx->pc = 0x339D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D28u;
        // 0x339d2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x339d28:
    ctx->pc = 0x339D30u;
}
