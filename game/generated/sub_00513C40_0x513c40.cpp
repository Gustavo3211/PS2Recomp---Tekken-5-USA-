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

// Function: sub_00513C40
// Address: 0x513c40 - 0x513cb8
void sub_00513C40_0x513c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00513C40_0x513c40");
#endif

    switch (ctx->pc) {
        case 0x513c7cu: goto label_513c7c;
        case 0x513c90u: goto label_513c90;
        default: break;
    }

    ctx->pc = 0x513c40u;

    // 0x513c40: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x513c40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x513c44: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x513c44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x513c48: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x513c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x513c4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x513c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x513c50: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x513c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x513c54: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x513c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x513c58: 0x3c100090  lui         $s0, 0x90
    ctx->pc = 0x513c58u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)144 << 16));
    // 0x513c5c: 0x26104100  addiu       $s0, $s0, 0x4100
    ctx->pc = 0x513c5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16640));
    // 0x513c60: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x513c60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x513c64: 0x2603010c  addiu       $v1, $s0, 0x10C
    ctx->pc = 0x513c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 268));
    // 0x513c68: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x513c68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x513c6c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x513c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x513c70: 0xae050110  sw          $a1, 0x110($s0)
    ctx->pc = 0x513c70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 5));
    // 0x513c74: 0xc042f56  jal         func_10BD58
    ctx->pc = 0x513C74u;
    SET_GPR_U32(ctx, 31, 0x513C7Cu);
    ctx->pc = 0x513C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x513C74u;
    // 0x513c78: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BD58u, 0x513C74u, 0x513C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x513C7Cu;
label_513c7c:
    // 0x513c7c: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x513c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x513c80: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x513C80u;
    {
        const bool branch_taken_0x513c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x513C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513C80u;
        // 0x513c84: 0x2484d570  addiu       $a0, $a0, -0x2A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513c80) {
            ctx->pc = 0x513C98u;
            goto label_513c98;
        }
    }
    ctx->pc = 0x513C88u;
    // 0x513c88: 0xc044794  jal         func_111E50
    ctx->pc = 0x513C88u;
    SET_GPR_U32(ctx, 31, 0x513C90u);
    ctx->pc = 0x111E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111E50u, 0x513C88u, 0x513C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x513C90u;
label_513c90:
    // 0x513c90: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x513C90u;
    {
        const bool branch_taken_0x513c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x513C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513C90u;
        // 0x513c94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513c90) {
            ctx->pc = 0x513CA4u;
            goto label_513ca4;
        }
    }
    ctx->pc = 0x513C98u;
label_513c98:
    // 0x513c98: 0xa6000128  sh          $zero, 0x128($s0)
    ctx->pc = 0x513c98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 296), (uint16_t)GPR_U32(ctx, 0));
    // 0x513c9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x513c9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x513ca0: 0xa600012a  sh          $zero, 0x12A($s0)
    ctx->pc = 0x513ca0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 298), (uint16_t)GPR_U32(ctx, 0));
label_513ca4:
    // 0x513ca4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x513ca4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x513ca8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x513ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x513cac: 0x3e00008  jr          $ra
    ctx->pc = 0x513CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x513CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513CACu;
        // 0x513cb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x513CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x513CB4u;
    // 0x513cb4: 0x0  nop
    ctx->pc = 0x513cb4u;
    // NOP
    ctx->pc = 0x513cb8u;
}
