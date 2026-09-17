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

// Function: sub_002FD1F0
// Address: 0x2fd1f0 - 0x2fd260
void sub_002FD1F0_0x2fd1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FD1F0_0x2fd1f0");
#endif

    switch (ctx->pc) {
        case 0x2fd220u: goto label_2fd220;
        case 0x2fd230u: goto label_2fd230;
        case 0x2fd248u: goto label_2fd248;
        default: break;
    }

    ctx->pc = 0x2fd1f0u;

    // 0x2fd1f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fd1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fd1f4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2fd1f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd1f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fd1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fd1fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2fd1fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd200: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2fd200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2fd204: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2FD204u;
    {
        const bool branch_taken_0x2fd204 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD204u;
        // 0x2fd208: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd204) {
            ctx->pc = 0x2FD24Cu;
            goto label_2fd24c;
        }
    }
    ctx->pc = 0x2FD20Cu;
    // 0x2fd20c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2fd20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2fd210: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FD210u;
    {
        const bool branch_taken_0x2fd210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fd210) {
            ctx->pc = 0x2FD228u;
            goto label_2fd228;
        }
    }
    ctx->pc = 0x2FD218u;
    // 0x2fd218: 0xc0bf598  jal         func_2FD660
    ctx->pc = 0x2FD218u;
    SET_GPR_U32(ctx, 31, 0x2FD220u);
    ctx->pc = 0x2FD660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD660u, 0x2FD218u, 0x2FD220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD220u;
label_2fd220:
    // 0x2fd220: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2FD220u;
    {
        const bool branch_taken_0x2fd220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD220u;
        // 0x2fd224: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd220) {
            ctx->pc = 0x2FD24Cu;
            goto label_2fd24c;
        }
    }
    ctx->pc = 0x2FD228u;
label_2fd228:
    // 0x2fd228: 0xc0bf584  jal         func_2FD610
    ctx->pc = 0x2FD228u;
    SET_GPR_U32(ctx, 31, 0x2FD230u);
    ctx->pc = 0x2FD22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD228u;
    // 0x2fd22c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD610u, 0x2FD228u, 0x2FD230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD230u;
label_2fd230:
    // 0x2fd230: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fd230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd234: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2fd234u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd238: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FD238u;
    {
        const bool branch_taken_0x2fd238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD238u;
        // 0x2fd23c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd238) {
            ctx->pc = 0x2FD24Cu;
            goto label_2fd24c;
        }
    }
    ctx->pc = 0x2FD240u;
    // 0x2fd240: 0xc0bf58c  jal         func_2FD630
    ctx->pc = 0x2FD240u;
    SET_GPR_U32(ctx, 31, 0x2FD248u);
    ctx->pc = 0x2FD630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD630u, 0x2FD240u, 0x2FD248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD248u;
label_2fd248:
    // 0x2fd248: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fd248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fd24c:
    // 0x2fd24c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fd24cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fd250: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2fd250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fd254: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD254u;
        // 0x2fd258: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD25Cu;
    // 0x2fd25c: 0x0  nop
    ctx->pc = 0x2fd25cu;
    // NOP
    ctx->pc = 0x2fd260u;
}
