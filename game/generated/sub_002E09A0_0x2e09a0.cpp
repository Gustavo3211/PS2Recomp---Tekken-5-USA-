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

// Function: sub_002E09A0
// Address: 0x2e09a0 - 0x2e0a30
void sub_002E09A0_0x2e09a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E09A0_0x2e09a0");
#endif

    switch (ctx->pc) {
        case 0x2e09f0u: goto label_2e09f0;
        case 0x2e09fcu: goto label_2e09fc;
        case 0x2e0a0cu: goto label_2e0a0c;
        default: break;
    }

    ctx->pc = 0x2e09a0u;

    // 0x2e09a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e09a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e09a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e09a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e09a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e09a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e09ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e09acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e09b0: 0x2611009c  addiu       $s1, $s0, 0x9C
    ctx->pc = 0x2e09b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
    // 0x2e09b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e09b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e09b8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e09b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e09bc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2e09bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2e09c0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e09c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e09c4: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E09C4u;
    {
        const bool branch_taken_0x2e09c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e09c4) {
            ctx->pc = 0x2E09C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E09C4u;
            // 0x2e09c8: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E09E0u;
            goto label_2e09e0;
        }
    }
    ctx->pc = 0x2E09CCu;
    // 0x2e09cc: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2e09ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2e09d0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2e09d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e09d4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E09D4u;
    {
        const bool branch_taken_0x2e09d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e09d4) {
            ctx->pc = 0x2E09E8u;
            goto label_2e09e8;
        }
    }
    ctx->pc = 0x2E09DCu;
    // 0x2e09dc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2e09dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2e09e0:
    // 0x2e09e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e09e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e09e4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2e09e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2e09e8:
    // 0x2e09e8: 0xc0b7aaa  jal         func_2DEAA8
    ctx->pc = 0x2E09E8u;
    SET_GPR_U32(ctx, 31, 0x2E09F0u);
    ctx->pc = 0x2DEAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEAA8u, 0x2E09E8u, 0x2E09F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E09F0u;
label_2e09f0:
    // 0x2e09f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e09f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e09f4: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E09F4u;
    SET_GPR_U32(ctx, 31, 0x2E09FCu);
    ctx->pc = 0x2E09F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E09F4u;
    // 0x2e09f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E09F4u, 0x2E09FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E09FCu;
label_2e09fc:
    // 0x2e09fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e09fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0a00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e0a00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0a04: 0xc0b5046  jal         func_2D4118
    ctx->pc = 0x2E0A04u;
    SET_GPR_U32(ctx, 31, 0x2E0A0Cu);
    ctx->pc = 0x2E0A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0A04u;
    // 0x2e0a08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4118u, 0x2E0A04u, 0x2E0A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0A0Cu;
label_2e0a0c:
    // 0x2e0a0c: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2e0a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x2e0a10: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e0a10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0a14: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e0a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e0a18: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2e0a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e0a1c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2e0a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2e0a20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e0a20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0a24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e0a24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e0a28: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0A28u;
        // 0x2e0a2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0A30u;
}
