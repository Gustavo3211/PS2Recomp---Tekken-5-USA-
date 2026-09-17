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

// Function: sub_0024DB88
// Address: 0x24db88 - 0x24dbd8
void sub_0024DB88_0x24db88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024DB88_0x24db88");
#endif

    switch (ctx->pc) {
        case 0x24db90u: goto label_24db90;
        default: break;
    }

    ctx->pc = 0x24db88u;

    // 0x24db88: 0x30843ff0  andi        $a0, $a0, 0x3FF0
    ctx->pc = 0x24db88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16368);
    // 0x24db8c: 0x0  nop
    ctx->pc = 0x24db8cu;
    // NOP
label_24db90:
    // 0x24db90: 0x3c021001  lui         $v0, 0x1001
    ctx->pc = 0x24db90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4097 << 16));
    // 0x24db94: 0x8c42d400  lw          $v0, -0x2C00($v0)
    ctx->pc = 0x24db94u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000D400u)); // MMIO: 0x1000d400
    // 0x24db98: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x24db98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x24db9c: 0x0  nop
    ctx->pc = 0x24db9cu;
    // NOP
    // 0x24dba0: 0x0  nop
    ctx->pc = 0x24dba0u;
    // NOP
    // 0x24dba4: 0x0  nop
    ctx->pc = 0x24dba4u;
    // NOP
    // 0x24dba8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x24DBA8u;
    {
        const bool branch_taken_0x24dba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24DBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DBA8u;
        // 0x24dbac: 0x24020141  addiu       $v0, $zero, 0x141 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 321));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dba8) {
            ctx->pc = 0x24DB90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24db90;
        }
    }
    ctx->pc = 0x24DBB0u;
    // 0x24dbb0: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x24dbb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x24dbb4: 0xac25d410  sw          $a1, -0x2BF0($at)
    ctx->pc = 0x24dbb4u;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 5)); // MMIO: 0x1000d410
    // 0x24dbb8: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x24dbb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x24dbbc: 0xac24d480  sw          $a0, -0x2B80($at)
    ctx->pc = 0x24dbbcu;
    runtime->Store32(rdram, ctx, 0x1000D480u, GPR_U32(ctx, 4)); // MMIO: 0x1000d480
    // 0x24dbc0: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x24dbc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x24dbc4: 0xac26d420  sw          $a2, -0x2BE0($at)
    ctx->pc = 0x24dbc4u;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 6)); // MMIO: 0x1000d420
    // 0x24dbc8: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x24dbc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x24dbcc: 0x3e00008  jr          $ra
    ctx->pc = 0x24DBCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24DBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DBCCu;
        // 0x24dbd0: 0xac22d400  sw          $v0, -0x2C00($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956032), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DBCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24DBD4u;
    // 0x24dbd4: 0x0  nop
    ctx->pc = 0x24dbd4u;
    // NOP
    ctx->pc = 0x24dbd8u;
}
