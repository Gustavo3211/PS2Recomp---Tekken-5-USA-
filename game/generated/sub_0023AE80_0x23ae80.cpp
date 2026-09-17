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

// Function: sub_0023AE80
// Address: 0x23ae80 - 0x23aee0
void sub_0023AE80_0x23ae80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AE80_0x23ae80");
#endif

    switch (ctx->pc) {
        case 0x23ae9cu: goto label_23ae9c;
        case 0x23aeb0u: goto label_23aeb0;
        default: break;
    }

    ctx->pc = 0x23ae80u;

    // 0x23ae80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23ae80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23ae84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23ae84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23ae88: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23ae88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ae8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23ae8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23ae90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23ae90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23ae94: 0xc08eb64  jal         func_23AD90
    ctx->pc = 0x23AE94u;
    SET_GPR_U32(ctx, 31, 0x23AE9Cu);
    ctx->pc = 0x23AE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AE94u;
    // 0x23ae98: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AD90u, 0x23AE94u, 0x23AE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AE9Cu;
label_23ae9c:
    // 0x23ae9c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x23ae9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x23aea0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23aea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23aea4: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x23aea4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x23aea8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x23aea8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x23aeac: 0xae201c30  sw          $zero, 0x1C30($s1)
    ctx->pc = 0x23aeacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7216), GPR_U32(ctx, 0));
label_23aeb0:
    // 0x23aeb0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x23aeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23aeb4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x23aeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x23aeb8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x23aeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x23aebc: 0x28830008  slti        $v1, $a0, 0x8
    ctx->pc = 0x23aebcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x23aec0: 0x0  nop
    ctx->pc = 0x23aec0u;
    // NOP
    // 0x23aec4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23AEC4u;
    {
        const bool branch_taken_0x23aec4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AEC4u;
        // 0x23aec8: 0xac400010  sw          $zero, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aec4) {
            ctx->pc = 0x23AEB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23aeb0;
        }
    }
    ctx->pc = 0x23AECCu;
    // 0x23aecc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23aeccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23aed0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23aed0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23aed4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23aed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23aed8: 0x3e00008  jr          $ra
    ctx->pc = 0x23AED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AED8u;
        // 0x23aedc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AEE0u;
}
