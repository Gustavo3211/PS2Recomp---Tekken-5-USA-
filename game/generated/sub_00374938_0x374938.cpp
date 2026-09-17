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

// Function: sub_00374938
// Address: 0x374938 - 0x374990
void sub_00374938_0x374938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374938_0x374938");
#endif

    ctx->pc = 0x374938u;

    // 0x374938: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x374938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37493c: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x37493cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x374940: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x374940u;
    {
        const bool branch_taken_0x374940 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x374944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374940u;
        // 0x374944: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374940) {
            ctx->pc = 0x374958u;
            goto label_374958;
        }
    }
    ctx->pc = 0x374948u;
    // 0x374948: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37494c: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x37494Cu;
    ctx->pc = 0x374950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37494Cu;
    // 0x374950: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x374954u;
    // 0x374954: 0x0  nop
    ctx->pc = 0x374954u;
    // NOP
label_374958:
    // 0x374958: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37495c: 0x3e00008  jr          $ra
    ctx->pc = 0x37495Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37495Cu;
        // 0x374960: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37495Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374964u;
    // 0x374964: 0x0  nop
    ctx->pc = 0x374964u;
    // NOP
    // 0x374968: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x374968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37496c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x37496cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374970: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x374970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x374974: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x374974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x374978: 0x24421d88  addiu       $v0, $v0, 0x1D88
    ctx->pc = 0x374978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7560));
    // 0x37497c: 0x24640048  addiu       $a0, $v1, 0x48
    ctx->pc = 0x37497cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
    // 0x374980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374984: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x374984u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x374988: 0x80cfcfc  j           func_33F3F0
    ctx->pc = 0x374988u;
    ctx->pc = 0x37498Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374988u;
    // 0x37498c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F3F0u;
    sub_0033F3F0_0x33f3f0(rdram, ctx, runtime); return;
    ctx->pc = 0x374990u;
}
