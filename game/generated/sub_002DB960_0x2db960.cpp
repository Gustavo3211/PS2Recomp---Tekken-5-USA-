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

// Function: sub_002DB960
// Address: 0x2db960 - 0x2db9c8
void sub_002DB960_0x2db960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB960_0x2db960");
#endif

    switch (ctx->pc) {
        case 0x2db988u: goto label_2db988;
        default: break;
    }

    ctx->pc = 0x2db960u;

    // 0x2db960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2db960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2db964: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2db964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2db968: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2db968u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db96c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2db96cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2db970: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2db970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2db974: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2db974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2db978: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2db978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2db97c: 0x8c6388d0  lw          $v1, -0x7730($v1)
    ctx->pc = 0x2db97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936784)));
    // 0x2db980: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x2DB980u;
    SET_GPR_U32(ctx, 31, 0x2DB988u);
    ctx->pc = 0x2DB984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB980u;
    // 0x2db984: 0x84640042  lh          $a0, 0x42($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 66)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x2DB980u, 0x2DB988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB988u;
label_2db988:
    // 0x2db988: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x2db988u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2db98c: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x2db98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2db990: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DB990u;
    {
        const bool branch_taken_0x2db990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2DB994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB990u;
        // 0x2db994: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db990) {
            ctx->pc = 0x2DB9B0u;
            goto label_2db9b0;
        }
    }
    ctx->pc = 0x2DB998u;
    // 0x2db998: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x2db998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2db99c: 0x21c0821  addu        $at, $s0, $gp
    ctx->pc = 0x2db99cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 28)));
    // 0x2db9a0: 0xa422cb60  sh          $v0, -0x34A0($at)
    ctx->pc = 0x2db9a0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294953824), (uint16_t)GPR_U32(ctx, 2));
    // 0x2db9a4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2DB9A4u;
    {
        const bool branch_taken_0x2db9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB9A4u;
        // 0x2db9a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db9a4) {
            ctx->pc = 0x2DB9BCu;
            goto label_2db9bc;
        }
    }
    ctx->pc = 0x2DB9ACu;
    // 0x2db9ac: 0x0  nop
    ctx->pc = 0x2db9acu;
    // NOP
label_2db9b0:
    // 0x2db9b0: 0x9c0821  addu        $at, $a0, $gp
    ctx->pc = 0x2db9b0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 28)));
    // 0x2db9b4: 0xa420cb60  sh          $zero, -0x34A0($at)
    ctx->pc = 0x2db9b4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294953824), (uint16_t)GPR_U32(ctx, 0));
    // 0x2db9b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2db9b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2db9bc:
    // 0x2db9bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2db9bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2db9c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB9C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB9C0u;
        // 0x2db9c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB9C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB9C8u;
}
