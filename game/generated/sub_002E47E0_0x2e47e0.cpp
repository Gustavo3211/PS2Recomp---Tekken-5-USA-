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

// Function: sub_002E47E0
// Address: 0x2e47e0 - 0x2e4880
void sub_002E47E0_0x2e47e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E47E0_0x2e47e0");
#endif

    switch (ctx->pc) {
        case 0x2e483cu: goto label_2e483c;
        case 0x2e4844u: goto label_2e4844;
        case 0x2e4870u: goto label_2e4870;
        default: break;
    }

    ctx->pc = 0x2e47e0u;

    // 0x2e47e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e47e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e47e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e47e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e47e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e47e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e47ec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e47ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2e47f0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e47f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e47f4: 0x2442ede0  addiu       $v0, $v0, -0x1220
    ctx->pc = 0x2e47f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962656));
    // 0x2e47f8: 0xae050050  sw          $a1, 0x50($s0)
    ctx->pc = 0x2e47f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 5));
    // 0x2e47fc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2e47fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2e4800: 0xae060054  sw          $a2, 0x54($s0)
    ctx->pc = 0x2e4800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 6));
    // 0x2e4804: 0xae070058  sw          $a3, 0x58($s0)
    ctx->pc = 0x2e4804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 7));
    // 0x2e4808: 0xae08005c  sw          $t0, 0x5C($s0)
    ctx->pc = 0x2e4808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 8));
    // 0x2e480c: 0x8d0208a0  lw          $v0, 0x8A0($t0)
    ctx->pc = 0x2e480cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 2208)));
    // 0x2e4810: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E4810u;
    {
        const bool branch_taken_0x2e4810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4810u;
        // 0x2e4814: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4810) {
            ctx->pc = 0x2E4828u;
            goto label_2e4828;
        }
    }
    ctx->pc = 0x2E4818u;
    // 0x2e4818: 0x3c01c2dc  lui         $at, 0xC2DC
    ctx->pc = 0x2e4818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49884 << 16));
    // 0x2e481c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e481cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e4820: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E4820u;
    {
        const bool branch_taken_0x2e4820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4820u;
        // 0x2e4824: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4820) {
            ctx->pc = 0x2E4834u;
            goto label_2e4834;
        }
    }
    ctx->pc = 0x2E4828u;
label_2e4828:
    // 0x2e4828: 0x3c01c39b  lui         $at, 0xC39B
    ctx->pc = 0x2e4828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50075 << 16));
    // 0x2e482c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e482cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e4830: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e4830u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e4834:
    // 0x2e4834: 0xc0b79f8  jal         func_2DE7E0
    ctx->pc = 0x2E4834u;
    SET_GPR_U32(ctx, 31, 0x2E483Cu);
    ctx->pc = 0x2E4838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4834u;
    // 0x2e4838: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE7E0u, 0x2E4834u, 0x2E483Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E483Cu;
label_2e483c:
    // 0x2e483c: 0xc0b9220  jal         func_2E4880
    ctx->pc = 0x2E483Cu;
    SET_GPR_U32(ctx, 31, 0x2E4844u);
    ctx->pc = 0x2E4840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E483Cu;
    // 0x2e4840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4880u, 0x2E483Cu, 0x2E4844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4844u;
label_2e4844:
    // 0x2e4844: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x2e4844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x2e4848: 0x24634a38  addiu       $v1, $v1, 0x4A38
    ctx->pc = 0x2e4848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19000));
    // 0x2e484c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E484Cu;
    {
        const bool branch_taken_0x2e484c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E484Cu;
        // 0x2e4850: 0xae030038  sw          $v1, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e484c) {
            ctx->pc = 0x2E4870u;
            goto label_2e4870;
        }
    }
    ctx->pc = 0x2E4854u;
    // 0x2e4854: 0x0  nop
    ctx->pc = 0x2e4854u;
    // NOP
    // 0x2e4858: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e4858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e485c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2e485cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2e4860: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2e4860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2e4864: 0x248404c4  addiu       $a0, $a0, 0x4C4
    ctx->pc = 0x2e4864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1220));
    // 0x2e4868: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2E4868u;
    SET_GPR_U32(ctx, 31, 0x2E4870u);
    ctx->pc = 0x2E486Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4868u;
    // 0x2e486c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2E4868u, 0x2E4870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4870u;
label_2e4870:
    // 0x2e4870: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e4870u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4874: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e4874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e4878: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E487Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4878u;
        // 0x2e487c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4880u;
}
