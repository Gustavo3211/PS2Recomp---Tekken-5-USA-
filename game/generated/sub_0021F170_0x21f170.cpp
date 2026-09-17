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

// Function: sub_0021F170
// Address: 0x21f170 - 0x21f1b0
void sub_0021F170_0x21f170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F170_0x21f170");
#endif

    ctx->pc = 0x21f170u;

    // 0x21f170: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21f170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21f174: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x21f174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x21f178: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21F178u;
    {
        const bool branch_taken_0x21f178 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x21F17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F178u;
        // 0x21f17c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f178) {
            ctx->pc = 0x21F198u;
            goto label_21f198;
        }
    }
    ctx->pc = 0x21F180u;
    // 0x21f180: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x21f180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x21f184: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21F184u;
    {
        const bool branch_taken_0x21f184 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x21F188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F184u;
        // 0x21f188: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f184) {
            ctx->pc = 0x21F1A8u;
            goto label_21f1a8;
        }
    }
    ctx->pc = 0x21F18Cu;
    // 0x21f18c: 0x3e00008  jr          $ra
    ctx->pc = 0x21F18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F18Cu;
        // 0x21f190: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F18Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F194u;
    // 0x21f194: 0x0  nop
    ctx->pc = 0x21f194u;
    // NOP
label_21f198:
    // 0x21f198: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21f198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f19c: 0x8087d1c  j           func_21F470
    ctx->pc = 0x21F19Cu;
    ctx->pc = 0x21F1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F19Cu;
    // 0x21f1a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F470u;
    sub_0021F470_0x21f470(rdram, ctx, runtime); return;
    ctx->pc = 0x21F1A4u;
    // 0x21f1a4: 0x0  nop
    ctx->pc = 0x21f1a4u;
    // NOP
label_21f1a8:
    // 0x21f1a8: 0x8087d88  j           func_21F620
    ctx->pc = 0x21F1A8u;
    ctx->pc = 0x21F1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F1A8u;
    // 0x21f1ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F620u;
    sub_0021F620_0x21f620(rdram, ctx, runtime); return;
    ctx->pc = 0x21F1B0u;
}
