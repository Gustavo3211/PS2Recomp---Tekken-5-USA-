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

// Function: sub_00339D30
// Address: 0x339d30 - 0x339da0
void sub_00339D30_0x339d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339D30_0x339d30");
#endif

    switch (ctx->pc) {
        case 0x339d30u: goto label_339d30;
        case 0x339d34u: goto label_339d34;
        case 0x339d38u: goto label_339d38;
        case 0x339d3cu: goto label_339d3c;
        case 0x339d40u: goto label_339d40;
        case 0x339d44u: goto label_339d44;
        case 0x339d48u: goto label_339d48;
        case 0x339d4cu: goto label_339d4c;
        case 0x339d50u: goto label_339d50;
        case 0x339d54u: goto label_339d54;
        case 0x339d58u: goto label_339d58;
        case 0x339d5cu: goto label_339d5c;
        case 0x339d60u: goto label_339d60;
        case 0x339d64u: goto label_339d64;
        case 0x339d68u: goto label_339d68;
        case 0x339d6cu: goto label_339d6c;
        case 0x339d70u: goto label_339d70;
        case 0x339d74u: goto label_339d74;
        case 0x339d78u: goto label_339d78;
        case 0x339d7cu: goto label_339d7c;
        case 0x339d80u: goto label_339d80;
        case 0x339d84u: goto label_339d84;
        case 0x339d88u: goto label_339d88;
        case 0x339d8cu: goto label_339d8c;
        case 0x339d90u: goto label_339d90;
        case 0x339d94u: goto label_339d94;
        case 0x339d98u: goto label_339d98;
        case 0x339d9cu: goto label_339d9c;
        default: break;
    }

    ctx->pc = 0x339d30u;

label_339d30:
    // 0x339d30: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x339d30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_339d34:
    // 0x339d34: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x339d34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_339d38:
    // 0x339d38: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x339d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_339d3c:
    // 0x339d3c: 0x2cc3003b  sltiu       $v1, $a2, 0x3B
    ctx->pc = 0x339d3cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
label_339d40:
    // 0x339d40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x339d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_339d44:
    // 0x339d44: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_339d48:
    if (ctx->pc == 0x339D48u) {
        ctx->pc = 0x339D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D44u;
        // 0x339d48: 0x2444ec80  addiu       $a0, $v0, -0x1380 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339D4Cu;
        goto label_339d4c;
    }
    ctx->pc = 0x339D44u;
    {
        const bool branch_taken_0x339d44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x339D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D44u;
        // 0x339d48: 0x2444ec80  addiu       $a0, $v0, -0x1380 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339d44) {
            ctx->pc = 0x339D78u;
            goto label_339d78;
        }
    }
    ctx->pc = 0x339D4Cu;
label_339d4c:
    // 0x339d4c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x339d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_339d50:
    // 0x339d50: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x339d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_339d54:
    // 0x339d54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x339d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_339d58:
    // 0x339d58: 0x8c633490  lw          $v1, 0x3490($v1)
    ctx->pc = 0x339d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13456)));
label_339d5c:
    // 0x339d5c: 0x600008  jr          $v1
label_339d60:
    if (ctx->pc == 0x339D60u) {
        ctx->pc = 0x339D64u;
        goto label_339d64;
    }
    ctx->pc = 0x339D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x339D68u: goto label_339d68;
            case 0x339D70u: goto label_339d70;
            case 0x339D78u: goto label_339d78;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339D5Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x339D64u;
label_339d64:
    // 0x339d64: 0x0  nop
    ctx->pc = 0x339d64u;
    // NOP
label_339d68:
    // 0x339d68: 0x10000004  b           . + 4 + (0x4 << 2)
label_339d6c:
    if (ctx->pc == 0x339D6Cu) {
        ctx->pc = 0x339D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D68u;
        // 0x339d6c: 0x248601bc  addiu       $a2, $a0, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 444));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339D70u;
        goto label_339d70;
    }
    ctx->pc = 0x339D68u;
    {
        const bool branch_taken_0x339d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D68u;
        // 0x339d6c: 0x248601bc  addiu       $a2, $a0, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339d68) {
            ctx->pc = 0x339D7Cu;
            goto label_339d7c;
        }
    }
    ctx->pc = 0x339D70u;
label_339d70:
    // 0x339d70: 0x10000002  b           . + 4 + (0x2 << 2)
label_339d74:
    if (ctx->pc == 0x339D74u) {
        ctx->pc = 0x339D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D70u;
        // 0x339d74: 0x248601c8  addiu       $a2, $a0, 0x1C8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339D78u;
        goto label_339d78;
    }
    ctx->pc = 0x339D70u;
    {
        const bool branch_taken_0x339d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D70u;
        // 0x339d74: 0x248601c8  addiu       $a2, $a0, 0x1C8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339d70) {
            ctx->pc = 0x339D7Cu;
            goto label_339d7c;
        }
    }
    ctx->pc = 0x339D78u;
label_339d78:
    // 0x339d78: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x339d78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_339d7c:
    // 0x339d7c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x339d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_339d80:
    // 0x339d80: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x339d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_339d84:
    // 0x339d84: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x339d84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_339d88:
    // 0x339d88: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x339d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_339d8c:
    // 0x339d8c: 0x60f809  jalr        $v1
label_339d90:
    if (ctx->pc == 0x339D90u) {
        ctx->pc = 0x339D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D8Cu;
        // 0x339d90: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339D94u;
        goto label_339d94;
    }
    ctx->pc = 0x339D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x339D94u);
        ctx->pc = 0x339D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D8Cu;
        // 0x339d90: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339D8Cu, 0x339D94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x339D94u;
label_339d94:
    // 0x339d94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x339d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_339d98:
    // 0x339d98: 0x3e00008  jr          $ra
label_339d9c:
    if (ctx->pc == 0x339D9Cu) {
        ctx->pc = 0x339D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D98u;
        // 0x339d9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339DA0u;
        goto label_fallthrough_0x339d98;
    }
    ctx->pc = 0x339D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D98u;
        // 0x339d9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x339d98:
    ctx->pc = 0x339DA0u;
}
