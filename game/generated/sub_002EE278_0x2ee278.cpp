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

// Function: sub_002EE278
// Address: 0x2ee278 - 0x2ee2c0
void sub_002EE278_0x2ee278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE278_0x2ee278");
#endif

    ctx->pc = 0x2ee278u;

    // 0x2ee278: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ee278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ee27c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ee27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ee280: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ee280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ee284: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2ee284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ee288: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EE288u;
    {
        const bool branch_taken_0x2ee288 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EE28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE288u;
        // 0x2ee28c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee288) {
            ctx->pc = 0x2EE2B0u;
            goto label_2ee2b0;
        }
    }
    ctx->pc = 0x2EE290u;
    // 0x2ee290: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ee290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ee294: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE294u;
    {
        const bool branch_taken_0x2ee294 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ee294) {
            ctx->pc = 0x2EE298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE294u;
            // 0x2ee298: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE2A8u;
            goto label_2ee2a8;
        }
    }
    ctx->pc = 0x2EE29Cu;
    // 0x2ee29c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ee29cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ee2a0: 0x808e6d0  j           func_239B40
    ctx->pc = 0x2EE2A0u;
    ctx->pc = 0x2EE2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE2A0u;
    // 0x2ee2a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239B40u;
    sub_00239B40_0x239b40(rdram, ctx, runtime); return;
    ctx->pc = 0x2EE2A8u;
label_2ee2a8:
    // 0x2ee2a8: 0x7c1021  addu        $v0, $v1, $gp
    ctx->pc = 0x2ee2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 28)));
    // 0x2ee2ac: 0x8c42a848  lw          $v0, -0x57B8($v0)
    ctx->pc = 0x2ee2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944840)));
label_2ee2b0:
    // 0x2ee2b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ee2b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ee2b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE2B4u;
        // 0x2ee2b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE2B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE2BCu;
    // 0x2ee2bc: 0x0  nop
    ctx->pc = 0x2ee2bcu;
    // NOP
    ctx->pc = 0x2ee2c0u;
}
