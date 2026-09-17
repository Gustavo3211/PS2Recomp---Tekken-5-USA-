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

// Function: sub_0049B768
// Address: 0x49b768 - 0x49b7c0
void sub_0049B768_0x49b768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049B768_0x49b768");
#endif

    ctx->pc = 0x49b768u;

    // 0x49b768: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49b768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49b76c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x49b76cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49b770: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49b770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49b774: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x49b774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x49b778: 0xa46201c2  sh          $v0, 0x1C2($v1)
    ctx->pc = 0x49b778u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 450), (uint16_t)GPR_U32(ctx, 2));
    // 0x49b77c: 0x246601b4  addiu       $a2, $v1, 0x1B4
    ctx->pc = 0x49b77cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 436));
    // 0x49b780: 0x24630148  addiu       $v1, $v1, 0x148
    ctx->pc = 0x49b780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 328));
    // 0x49b784: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x49b784u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49b788: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49b788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49b78c: 0x22c00  sll         $a1, $v0, 16
    ctx->pc = 0x49b78cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49b790: 0x1ca00007  bgtz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x49B790u;
    {
        const bool branch_taken_0x49b790 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x49B794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B790u;
        // 0x49b794: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b790) {
            ctx->pc = 0x49B7B0u;
            goto label_49b7b0;
        }
    }
    ctx->pc = 0x49B798u;
    // 0x49b798: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x49b798u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49b79c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49b79cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49b7a0: 0x3042f9ff  andi        $v0, $v0, 0xF9FF
    ctx->pc = 0x49b7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63999);
    // 0x49b7a4: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x49b7a4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49b7a8: 0x8126d66  j           func_49B598
    ctx->pc = 0x49B7A8u;
    ctx->pc = 0x49B7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49B7A8u;
    // 0x49b7ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49B598u;
    sub_0049B598_0x49b598(rdram, ctx, runtime); return;
    ctx->pc = 0x49B7B0u;
label_49b7b0:
    // 0x49b7b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49b7b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49b7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x49B7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49B7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B7B4u;
        // 0x49b7b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49B7B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49B7BCu;
    // 0x49b7bc: 0x0  nop
    ctx->pc = 0x49b7bcu;
    // NOP
    ctx->pc = 0x49b7c0u;
}
