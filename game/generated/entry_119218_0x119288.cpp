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

// Function: entry_119218
// Address: 0x119218 - 0x119288
void entry_119218_0x119288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_119218_0x119288");
#endif

    switch (ctx->pc) {
        case 0x119230u: goto label_119230;
        default: break;
    }

    ctx->pc = 0x119218u;

    // 0x119218: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x119218u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x11921c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x11921cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x119220: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x119220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x119224: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x119224u;
    {
        const bool branch_taken_0x119224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x119228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119224u;
        // 0x119228: 0x3c060001  lui         $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119224) {
            ctx->pc = 0x119254u;
            goto label_119254;
        }
    }
    ctx->pc = 0x11922Cu;
    // 0x11922c: 0x0  nop
    ctx->pc = 0x11922cu;
    // NOP
label_119230:
    // 0x119230: 0x42000039  di
    ctx->pc = 0x119230u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x119234: 0x40f  sync.p
    ctx->pc = 0x119234u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x119238: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x119238u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x11923c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x11923cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x119240: 0x0  nop
    ctx->pc = 0x119240u;
    // NOP
    // 0x119244: 0x0  nop
    ctx->pc = 0x119244u;
    // NOP
    // 0x119248: 0x0  nop
    ctx->pc = 0x119248u;
    // NOP
    // 0x11924c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11924Cu;
    {
        const bool branch_taken_0x11924c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11924c) {
            ctx->pc = 0x119230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119230;
        }
    }
    ctx->pc = 0x119254u;
label_119254:
    // 0x119254: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x119254u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x119258: 0x40f  sync.p
    ctx->pc = 0x119258u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x11925c: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x11925cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x119260: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x119260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x119264: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x119264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x119268: 0x40826000  mtc0        $v0, Status
    ctx->pc = 0x119268u;
    ctx->cop0_status = GPR_U32(ctx, 2) & 0xFF57FFFF;
    // 0x11926c: 0x40f  sync.p
    ctx->pc = 0x11926cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x119270: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x119270u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x119274: 0x409ff000  mtc0        $ra, ErrorEPC
    ctx->pc = 0x119274u;
    ctx->cop0_errorepc = GPR_U32(ctx, 31);
    // 0x119278: 0x40f  sync.p
    ctx->pc = 0x119278u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x11927c: 0x42000018  eret
    ctx->pc = 0x11927cu;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
    // 0x119280: 0x3e00008  jr          $ra
    ctx->pc = 0x119280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119288u;
}
