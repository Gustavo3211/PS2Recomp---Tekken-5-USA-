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

// Function: sub_00225938
// Address: 0x225938 - 0x225988
void sub_00225938_0x225938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225938_0x225938");
#endif

    ctx->pc = 0x225938u;

    // 0x225938: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x225938u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x22593c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22593cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x225940: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x225940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x225944: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x225948: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x225948u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x22594c: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x22594cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x225950: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x225950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x225954: 0x846361b4  lh          $v1, 0x61B4($v1)
    ctx->pc = 0x225954u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 25012)));
    // 0x225958: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x225958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22595c: 0x2c6300a9  sltiu       $v1, $v1, 0xA9
    ctx->pc = 0x22595cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)169) ? 1 : 0);
    // 0x225960: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x225960u;
    {
        const bool branch_taken_0x225960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x225964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225960u;
        // 0x225964: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225960) {
            ctx->pc = 0x225978u;
            goto label_225978;
        }
    }
    ctx->pc = 0x225968u;
    // 0x225968: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22596c: 0x80404b8  j           func_1012E0
    ctx->pc = 0x22596Cu;
    ctx->pc = 0x225970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22596Cu;
    // 0x225970: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    sub_001012E0_0x1012e0(rdram, ctx, runtime); return;
    ctx->pc = 0x225974u;
    // 0x225974: 0x0  nop
    ctx->pc = 0x225974u;
    // NOP
label_225978:
    // 0x225978: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22597c: 0x3e00008  jr          $ra
    ctx->pc = 0x22597Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22597Cu;
        // 0x225980: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22597Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225984u;
    // 0x225984: 0x0  nop
    ctx->pc = 0x225984u;
    // NOP
    ctx->pc = 0x225988u;
}
