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

// Function: sub_00289FC8
// Address: 0x289fc8 - 0x28a020
void sub_00289FC8_0x289fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289FC8_0x289fc8");
#endif

    switch (ctx->pc) {
        case 0x289fecu: goto label_289fec;
        case 0x28a010u: goto label_28a010;
        default: break;
    }

    ctx->pc = 0x289fc8u;

    // 0x289fc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x289fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x289fcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x289fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x289fd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x289fd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289fd4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x289fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x289fd8: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x289fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x289fdc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x289FDCu;
    {
        const bool branch_taken_0x289fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289FDCu;
        // 0x289fe0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289fdc) {
            ctx->pc = 0x28A010u;
            goto label_28a010;
        }
    }
    ctx->pc = 0x289FE4u;
    // 0x289fe4: 0xc0a1d7a  jal         func_2875E8
    ctx->pc = 0x289FE4u;
    SET_GPR_U32(ctx, 31, 0x289FECu);
    ctx->pc = 0x289FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289FE4u;
    // 0x289fe8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2875E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2875E8u, 0x289FE4u, 0x289FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289FECu;
label_289fec:
    // 0x289fec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x289fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x289ff0: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x289ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x289ff4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x289ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x289ff8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x289ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x289ffc: 0x3c01003c  lui         $at, 0x3C
    ctx->pc = 0x289ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)60 << 16));
    // 0x28a000: 0x2421ae40  addiu       $at, $at, -0x51C0
    ctx->pc = 0x28a000u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294946368));
    // 0x28a004: 0x252821  addu        $a1, $at, $a1
    ctx->pc = 0x28a004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x28a008: 0xc0a1c7a  jal         func_2871E8
    ctx->pc = 0x28A008u;
    SET_GPR_U32(ctx, 31, 0x28A010u);
    ctx->pc = 0x28A00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A008u;
    // 0x28a00c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2871E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2871E8u, 0x28A008u, 0x28A010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A010u;
label_28a010:
    // 0x28a010: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28a010u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a014: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x28a014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28a018: 0x3e00008  jr          $ra
    ctx->pc = 0x28A018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A018u;
        // 0x28a01c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A020u;
}
