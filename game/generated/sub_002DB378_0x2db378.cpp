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

// Function: sub_002DB378
// Address: 0x2db378 - 0x2db3d0
void sub_002DB378_0x2db378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB378_0x2db378");
#endif

    switch (ctx->pc) {
        case 0x2db390u: goto label_2db390;
        default: break;
    }

    ctx->pc = 0x2db378u;

    // 0x2db378: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x2db378u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2db37c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2db37cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db380: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2DB380u;
    {
        const bool branch_taken_0x2db380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB380u;
        // 0x2db384: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db380) {
            ctx->pc = 0x2DB3B4u;
            goto label_2db3b4;
        }
    }
    ctx->pc = 0x2DB388u;
    // 0x2db388: 0x2406007c  addiu       $a2, $zero, 0x7C
    ctx->pc = 0x2db388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x2db38c: 0x0  nop
    ctx->pc = 0x2db38cu;
    // NOP
label_2db390:
    // 0x2db390: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x2db390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2db394: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2db394u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2db398: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x2db398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x2db39c: 0xa2200a  movz        $a0, $a1, $v0
    ctx->pc = 0x2db39cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x2db3a0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2db3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2db3a4: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2db3a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2db3a8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2DB3A8u;
    {
        const bool branch_taken_0x2db3a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB3A8u;
        // 0x2db3ac: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db3a8) {
            ctx->pc = 0x2DB390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db390;
        }
    }
    ctx->pc = 0x2DB3B0u;
    // 0x2db3b0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2db3b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2db3b4:
    // 0x2db3b4: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x2db3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2db3b8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2db3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2db3bc: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x2db3bcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x2db3c0: 0x3863007c  xori        $v1, $v1, 0x7C
    ctx->pc = 0x2db3c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)124);
    // 0x2db3c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB3C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB3C4u;
        // 0x2db3c8: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB3C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB3CCu;
    // 0x2db3cc: 0x0  nop
    ctx->pc = 0x2db3ccu;
    // NOP
    ctx->pc = 0x2db3d0u;
}
