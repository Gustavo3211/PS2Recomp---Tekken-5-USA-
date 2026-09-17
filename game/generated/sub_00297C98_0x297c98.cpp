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

// Function: sub_00297C98
// Address: 0x297c98 - 0x297cf8
void sub_00297C98_0x297c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297C98_0x297c98");
#endif

    switch (ctx->pc) {
        case 0x297cccu: goto label_297ccc;
        case 0x297ce0u: goto label_297ce0;
        default: break;
    }

    ctx->pc = 0x297c98u;

    // 0x297c98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x297c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x297c9c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x297c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x297ca0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x297ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x297ca4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x297ca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297ca8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x297ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x297cac: 0x14a2000c  bne         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x297CACu;
    {
        const bool branch_taken_0x297cac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x297CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297CACu;
        // 0x297cb0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297cac) {
            ctx->pc = 0x297CE0u;
            goto label_297ce0;
        }
    }
    ctx->pc = 0x297CB4u;
    // 0x297cb4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x297cb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297cb8: 0x5611000a  bnel        $s0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x297CB8u;
    {
        const bool branch_taken_0x297cb8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x297cb8) {
            ctx->pc = 0x297CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297CB8u;
            // 0x297cbc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x297CE4u;
            goto label_297ce4;
        }
    }
    ctx->pc = 0x297CC0u;
    // 0x297cc0: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x297cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x297cc4: 0xc0a5e42  jal         func_297908
    ctx->pc = 0x297CC4u;
    SET_GPR_U32(ctx, 31, 0x297CCCu);
    ctx->pc = 0x297CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297CC4u;
    // 0x297cc8: 0x2484c450  addiu       $a0, $a0, -0x3BB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297908u, 0x297CC4u, 0x297CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297CCCu;
label_297ccc:
    // 0x297ccc: 0x16110005  bne         $s0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x297CCCu;
    {
        const bool branch_taken_0x297ccc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x297CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297CCCu;
        // 0x297cd0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297ccc) {
            ctx->pc = 0x297CE4u;
            goto label_297ce4;
        }
    }
    ctx->pc = 0x297CD4u;
    // 0x297cd4: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x297cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x297cd8: 0xc0a5e42  jal         func_297908
    ctx->pc = 0x297CD8u;
    SET_GPR_U32(ctx, 31, 0x297CE0u);
    ctx->pc = 0x297CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297CD8u;
    // 0x297cdc: 0x2484c480  addiu       $a0, $a0, -0x3B80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297908u, 0x297CD8u, 0x297CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297CE0u;
label_297ce0:
    // 0x297ce0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x297ce0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_297ce4:
    // 0x297ce4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x297ce4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x297ce8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x297ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297cec: 0x3e00008  jr          $ra
    ctx->pc = 0x297CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297CECu;
        // 0x297cf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297CF4u;
    // 0x297cf4: 0x0  nop
    ctx->pc = 0x297cf4u;
    // NOP
    ctx->pc = 0x297cf8u;
}
