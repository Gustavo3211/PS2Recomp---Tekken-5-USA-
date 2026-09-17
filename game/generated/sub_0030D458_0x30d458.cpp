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

// Function: sub_0030D458
// Address: 0x30d458 - 0x30d4d0
void sub_0030D458_0x30d458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D458_0x30d458");
#endif

    switch (ctx->pc) {
        case 0x30d470u: goto label_30d470;
        case 0x30d478u: goto label_30d478;
        default: break;
    }

    ctx->pc = 0x30d458u;

    // 0x30d458: 0x24840330  addiu       $a0, $a0, 0x330
    ctx->pc = 0x30d458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 816));
    // 0x30d45c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30d45cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d460: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x30d460u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d464: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x30d464u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x30d468: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x30d468u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x30d46c: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x30d46cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_30d470:
    // 0x30d470: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x30d470u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d474: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x30d474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_30d478:
    // 0x30d478: 0x246200a0  addiu       $v0, $v1, 0xA0
    ctx->pc = 0x30d478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x30d47c: 0xfc600098  sd          $zero, 0x98($v1)
    ctx->pc = 0x30d47cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 152), GPR_U64(ctx, 0));
    // 0x30d480: 0xfc600090  sd          $zero, 0x90($v1)
    ctx->pc = 0x30d480u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 144), GPR_U64(ctx, 0));
    // 0x30d484: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x30d484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x30d488: 0xfc480008  sd          $t0, 0x8($v0)
    ctx->pc = 0x30d488u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 8));
    // 0x30d48c: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x30d48cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x30d490: 0xac490004  sw          $t1, 0x4($v0)
    ctx->pc = 0x30d490u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 9));
    // 0x30d494: 0x246200b0  addiu       $v0, $v1, 0xB0
    ctx->pc = 0x30d494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x30d498: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x30d498u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x30d49c: 0xfc470008  sd          $a3, 0x8($v0)
    ctx->pc = 0x30d49cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 7));
    // 0x30d4a0: 0x246200c0  addiu       $v0, $v1, 0xC0
    ctx->pc = 0x30d4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x30d4a4: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x30d4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x30d4a8: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x30d4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x30d4ac: 0x4a1fff2  bgez        $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x30D4ACu;
    {
        const bool branch_taken_0x30d4ac = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x30D4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D4ACu;
        // 0x30d4b0: 0xfc400008  sd          $zero, 0x8($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d4ac) {
            ctx->pc = 0x30D478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d478;
        }
    }
    ctx->pc = 0x30D4B4u;
    // 0x30d4b4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x30d4b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x30d4b8: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x30d4b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x30d4bc: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x30D4BCu;
    {
        const bool branch_taken_0x30d4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D4BCu;
        // 0x30d4c0: 0x248422c0  addiu       $a0, $a0, 0x22C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d4bc) {
            ctx->pc = 0x30D470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d470;
        }
    }
    ctx->pc = 0x30D4C4u;
    // 0x30d4c4: 0x3e00008  jr          $ra
    ctx->pc = 0x30D4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D4C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D4CCu;
    // 0x30d4cc: 0x0  nop
    ctx->pc = 0x30d4ccu;
    // NOP
    ctx->pc = 0x30d4d0u;
}
