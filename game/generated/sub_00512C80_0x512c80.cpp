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

// Function: sub_00512C80
// Address: 0x512c80 - 0x512ce0
void sub_00512C80_0x512c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00512C80_0x512c80");
#endif

    switch (ctx->pc) {
        case 0x512ca8u: goto label_512ca8;
        case 0x512cb8u: goto label_512cb8;
        default: break;
    }

    ctx->pc = 0x512c80u;

    // 0x512c80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x512c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x512c84: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x512c84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x512c88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x512c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x512c8c: 0x3c100090  lui         $s0, 0x90
    ctx->pc = 0x512c8cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)144 << 16));
    // 0x512c90: 0x8e10e444  lw          $s0, -0x1BBC($s0)
    ctx->pc = 0x512c90u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x8FE444u));
    // 0x512c94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x512c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x512c98: 0x48c03  sra         $s1, $a0, 16
    ctx->pc = 0x512c98u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 4), 16));
    // 0x512c9c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x512C9Cu;
    {
        const bool branch_taken_0x512c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x512CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512C9Cu;
        // 0x512ca0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x512c9c) {
            ctx->pc = 0x512CBCu;
            goto label_512cbc;
        }
    }
    ctx->pc = 0x512CA4u;
    // 0x512ca4: 0x0  nop
    ctx->pc = 0x512ca4u;
    // NOP
label_512ca8:
    // 0x512ca8: 0x56220004  bnel        $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x512CA8u;
    {
        const bool branch_taken_0x512ca8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x512ca8) {
            ctx->pc = 0x512CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x512CA8u;
            // 0x512cac: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x512CBCu;
            goto label_512cbc;
        }
    }
    ctx->pc = 0x512CB0u;
    // 0x512cb0: 0xc144af2  jal         func_512BC8
    ctx->pc = 0x512CB0u;
    SET_GPR_U32(ctx, 31, 0x512CB8u);
    ctx->pc = 0x512CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x512CB0u;
    // 0x512cb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512BC8u, 0x512CB0u, 0x512CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x512CB8u;
label_512cb8:
    // 0x512cb8: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x512cb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_512cbc:
    // 0x512cbc: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x512cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x512cc0: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x512cc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x512cc4: 0x441fff8  bgez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x512CC4u;
    {
        const bool branch_taken_0x512cc4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x512CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512CC4u;
        // 0x512cc8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x512cc4) {
            ctx->pc = 0x512CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_512ca8;
        }
    }
    ctx->pc = 0x512CCCu;
    // 0x512ccc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x512cccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x512cd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x512cd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x512cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x512CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x512CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512CD4u;
        // 0x512cd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x512CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x512CDCu;
    // 0x512cdc: 0x0  nop
    ctx->pc = 0x512cdcu;
    // NOP
    ctx->pc = 0x512ce0u;
}
