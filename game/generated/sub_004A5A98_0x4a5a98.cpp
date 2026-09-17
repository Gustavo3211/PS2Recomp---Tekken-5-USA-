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

// Function: sub_004A5A98
// Address: 0x4a5a98 - 0x4a5af8
void sub_004A5A98_0x4a5a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A5A98_0x4a5a98");
#endif

    switch (ctx->pc) {
        case 0x4a5ac0u: goto label_4a5ac0;
        default: break;
    }

    ctx->pc = 0x4a5a98u;

    // 0x4a5a98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a5a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a5a9c: 0x2482014a  addiu       $v0, $a0, 0x14A
    ctx->pc = 0x4a5a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 330));
    // 0x4a5aa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a5aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a5aa4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4a5aa4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a5aa8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4a5aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4a5aac: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x4a5aacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4a5ab0: 0x4a1000d  bgez        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x4A5AB0u;
    {
        const bool branch_taken_0x4a5ab0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x4A5AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5AB0u;
        // 0x4a5ab4: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5ab0) {
            ctx->pc = 0x4A5AE8u;
            goto label_4a5ae8;
        }
    }
    ctx->pc = 0x4A5AB8u;
    // 0x4a5ab8: 0xc123392  jal         func_48CE48
    ctx->pc = 0x4A5AB8u;
    SET_GPR_U32(ctx, 31, 0x4A5AC0u);
    ctx->pc = 0x48CE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CE48u, 0x4A5AB8u, 0x4A5AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5AC0u;
label_4a5ac0:
    // 0x4a5ac0: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4a5ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4a5ac4: 0x2445d680  addiu       $a1, $v0, -0x2980
    ctx->pc = 0x4a5ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x4a5ac8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a5ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4a5acc: 0x84a30008  lh          $v1, 0x8($a1)
    ctx->pc = 0x4a5accu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x72D688u));
    // 0x4a5ad0: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A5AD0u;
    {
        const bool branch_taken_0x4a5ad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x4A5AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5AD0u;
        // 0x4a5ad4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5ad0) {
            ctx->pc = 0x4A5AE0u;
            goto label_4a5ae0;
        }
    }
    ctx->pc = 0x4A5AD8u;
    // 0x4a5ad8: 0x8122f56  j           func_48BD58
    ctx->pc = 0x4A5AD8u;
    ctx->pc = 0x4A5ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5AD8u;
    // 0x4a5adc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BD58u, 0x4A5AD8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4A5AE0u;
label_4a5ae0:
    // 0x4a5ae0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4a5ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4a5ae4: 0xa4a2000a  sh          $v0, 0xA($a1)
    ctx->pc = 0x4a5ae4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 2));
label_4a5ae8:
    // 0x4a5ae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a5ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a5aec: 0x3e00008  jr          $ra
    ctx->pc = 0x4A5AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A5AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5AECu;
        // 0x4a5af0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A5AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A5AF4u;
    // 0x4a5af4: 0x0  nop
    ctx->pc = 0x4a5af4u;
    // NOP
    ctx->pc = 0x4a5af8u;
}
