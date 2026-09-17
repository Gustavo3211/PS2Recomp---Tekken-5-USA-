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

// Function: sub_0028A088
// Address: 0x28a088 - 0x28a0e0
void sub_0028A088_0x28a088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A088_0x28a088");
#endif

    switch (ctx->pc) {
        case 0x28a0acu: goto label_28a0ac;
        case 0x28a0d0u: goto label_28a0d0;
        default: break;
    }

    ctx->pc = 0x28a088u;

    // 0x28a088: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28a088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28a08c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28a08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28a090: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28a090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a094: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x28a094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x28a098: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x28a098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x28a09c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x28A09Cu;
    {
        const bool branch_taken_0x28a09c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A09Cu;
        // 0x28a0a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a09c) {
            ctx->pc = 0x28A0D0u;
            goto label_28a0d0;
        }
    }
    ctx->pc = 0x28A0A4u;
    // 0x28a0a4: 0xc0a1d7a  jal         func_2875E8
    ctx->pc = 0x28A0A4u;
    SET_GPR_U32(ctx, 31, 0x28A0ACu);
    ctx->pc = 0x28A0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A0A4u;
    // 0x28a0a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2875E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2875E8u, 0x28A0A4u, 0x28A0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A0ACu;
label_28a0ac:
    // 0x28a0ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x28a0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28a0b0: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x28a0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28a0b4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x28a0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x28a0b8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x28a0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x28a0bc: 0x3c01003c  lui         $at, 0x3C
    ctx->pc = 0x28a0bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)60 << 16));
    // 0x28a0c0: 0x2421b080  addiu       $at, $at, -0x4F80
    ctx->pc = 0x28a0c0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294946944));
    // 0x28a0c4: 0x252821  addu        $a1, $at, $a1
    ctx->pc = 0x28a0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x28a0c8: 0xc0a1c7a  jal         func_2871E8
    ctx->pc = 0x28A0C8u;
    SET_GPR_U32(ctx, 31, 0x28A0D0u);
    ctx->pc = 0x28A0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A0C8u;
    // 0x28a0cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2871E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2871E8u, 0x28A0C8u, 0x28A0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A0D0u;
label_28a0d0:
    // 0x28a0d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28a0d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a0d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x28a0d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28a0d8: 0x3e00008  jr          $ra
    ctx->pc = 0x28A0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A0D8u;
        // 0x28a0dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A0D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A0E0u;
}
