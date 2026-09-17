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

// Function: sub_0031DB80
// Address: 0x31db80 - 0x31dba8
void sub_0031DB80_0x31db80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031DB80_0x31db80");
#endif

    switch (ctx->pc) {
        case 0x31db90u: goto label_31db90;
        case 0x31db98u: goto label_31db98;
        default: break;
    }

    ctx->pc = 0x31db80u;

    // 0x31db80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31db80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31db84: 0x3e00008  jr          $ra
    ctx->pc = 0x31DB84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31DB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DB84u;
        // 0x31db88: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DB84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31DB8Cu;
    // 0x31db8c: 0x0  nop
    ctx->pc = 0x31db8cu;
    // NOP
label_31db90:
    // 0x31db90: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x31DB90u;
    {
        const bool branch_taken_0x31db90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DB90u;
        // 0x31db94: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31db90) {
            ctx->pc = 0x31DBC0u;
            return;
        }
    }
    ctx->pc = 0x31DB98u;
label_31db98:
    // 0x31db98: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x31db98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x31db9c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31DB9Cu;
    {
        const bool branch_taken_0x31db9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DB9Cu;
        // 0x31dba0: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31db9c) {
            ctx->pc = 0x31DBC0u;
            return;
        }
    }
    ctx->pc = 0x31DBA4u;
    // 0x31dba4: 0x0  nop
    ctx->pc = 0x31dba4u;
    // NOP
    ctx->pc = 0x31dba8u;
}
