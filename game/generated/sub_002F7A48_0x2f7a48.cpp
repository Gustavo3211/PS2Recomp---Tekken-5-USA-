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

// Function: sub_002F7A48
// Address: 0x2f7a48 - 0x2f7ac0
void sub_002F7A48_0x2f7a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7A48_0x2f7a48");
#endif

    switch (ctx->pc) {
        case 0x2f7aa0u: goto label_2f7aa0;
        default: break;
    }

    ctx->pc = 0x2f7a48u;

    // 0x2f7a48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f7a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f7a4c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2f7a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2f7a50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f7a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f7a54: 0x8c8300ec  lw          $v1, 0xEC($a0)
    ctx->pc = 0x2f7a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x2f7a58: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2F7A58u;
    {
        const bool branch_taken_0x2f7a58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F7A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7A58u;
        // 0x2f7a5c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7a58) {
            ctx->pc = 0x2F7AACu;
            goto label_2f7aac;
        }
    }
    ctx->pc = 0x2F7A60u;
    // 0x2f7a60: 0x2862001f  slti        $v0, $v1, 0x1F
    ctx->pc = 0x2f7a60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x2f7a64: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F7A64u;
    {
        const bool branch_taken_0x2f7a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7A64u;
        // 0x2f7a68: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7a64) {
            ctx->pc = 0x2F7A80u;
            goto label_2f7a80;
        }
    }
    ctx->pc = 0x2F7A6Cu;
    // 0x2f7a6c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x2f7a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2f7a70: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2F7A70u;
    {
        const bool branch_taken_0x2f7a70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F7A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7A70u;
        // 0x2f7a74: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7a70) {
            ctx->pc = 0x2F7AB0u;
            goto label_2f7ab0;
        }
    }
    ctx->pc = 0x2F7A78u;
    // 0x2f7a78: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2F7A78u;
    {
        const bool branch_taken_0x2f7a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7A78u;
        // 0x2f7a7c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7a78) {
            ctx->pc = 0x2F7AB0u;
            goto label_2f7ab0;
        }
    }
    ctx->pc = 0x2F7A80u;
label_2f7a80:
    // 0x2f7a80: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F7A80u;
    {
        const bool branch_taken_0x2f7a80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F7A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7A80u;
        // 0x2f7a84: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7a80) {
            ctx->pc = 0x2F7A98u;
            goto label_2f7a98;
        }
    }
    ctx->pc = 0x2F7A88u;
    // 0x2f7a88: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F7A88u;
    {
        const bool branch_taken_0x2f7a88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f7a88) {
            ctx->pc = 0x2F7A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7A88u;
            // 0x2f7a8c: 0x8c850158  lw          $a1, 0x158($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7AACu;
            goto label_2f7aac;
        }
    }
    ctx->pc = 0x2F7A90u;
    // 0x2f7a90: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F7A90u;
    {
        const bool branch_taken_0x2f7a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7A90u;
        // 0x2f7a94: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7a90) {
            ctx->pc = 0x2F7AACu;
            goto label_2f7aac;
        }
    }
    ctx->pc = 0x2F7A98u;
label_2f7a98:
    // 0x2f7a98: 0xc0b45d8  jal         func_2D1760
    ctx->pc = 0x2F7A98u;
    SET_GPR_U32(ctx, 31, 0x2F7AA0u);
    ctx->pc = 0x2D1760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1760u, 0x2F7A98u, 0x2F7AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7AA0u;
label_2f7aa0:
    // 0x2f7aa0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f7aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f7aa4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2f7aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f7aa8: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x2f7aa8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_2f7aac:
    // 0x2f7aac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f7aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f7ab0:
    // 0x2f7ab0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2f7ab0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7AB4u;
        // 0x2f7ab8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7ABCu;
    // 0x2f7abc: 0x0  nop
    ctx->pc = 0x2f7abcu;
    // NOP
    ctx->pc = 0x2f7ac0u;
}
