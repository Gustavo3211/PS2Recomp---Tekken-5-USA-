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

// Function: sub_002E0890
// Address: 0x2e0890 - 0x2e0910
void sub_002E0890_0x2e0890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0890_0x2e0890");
#endif

    switch (ctx->pc) {
        case 0x2e08d8u: goto label_2e08d8;
        case 0x2e08e4u: goto label_2e08e4;
        case 0x2e08f0u: goto label_2e08f0;
        default: break;
    }

    ctx->pc = 0x2e0890u;

    // 0x2e0890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e0890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e0894: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e0894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e0898: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e0898u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e089c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e089cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e08a0: 0x2611008c  addiu       $s1, $s0, 0x8C
    ctx->pc = 0x2e08a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 140));
    // 0x2e08a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e08a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e08a8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e08a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e08ac: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E08ACu;
    {
        const bool branch_taken_0x2e08ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e08ac) {
            ctx->pc = 0x2E08B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E08ACu;
            // 0x2e08b0: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E08C8u;
            goto label_2e08c8;
        }
    }
    ctx->pc = 0x2E08B4u;
    // 0x2e08b4: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2e08b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2e08b8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2e08b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e08bc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E08BCu;
    {
        const bool branch_taken_0x2e08bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e08bc) {
            ctx->pc = 0x2E08D0u;
            goto label_2e08d0;
        }
    }
    ctx->pc = 0x2E08C4u;
    // 0x2e08c4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2e08c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2e08c8:
    // 0x2e08c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e08c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e08cc: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2e08ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2e08d0:
    // 0x2e08d0: 0xc0b7aaa  jal         func_2DEAA8
    ctx->pc = 0x2E08D0u;
    SET_GPR_U32(ctx, 31, 0x2E08D8u);
    ctx->pc = 0x2DEAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEAA8u, 0x2E08D0u, 0x2E08D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E08D8u;
label_2e08d8:
    // 0x2e08d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e08d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e08dc: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E08DCu;
    SET_GPR_U32(ctx, 31, 0x2E08E4u);
    ctx->pc = 0x2E08E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E08DCu;
    // 0x2e08e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E08DCu, 0x2E08E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E08E4u;
label_2e08e4:
    // 0x2e08e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e08e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e08e8: 0xc08efc6  jal         func_23BF18
    ctx->pc = 0x2E08E8u;
    SET_GPR_U32(ctx, 31, 0x2E08F0u);
    ctx->pc = 0x2E08ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E08E8u;
    // 0x2e08ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BF18u, 0x2E08E8u, 0x2E08F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E08F0u;
label_2e08f0:
    // 0x2e08f0: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2e08f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x2e08f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e08f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e08f8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e08f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e08fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e08fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0900: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2e0900u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2e0904: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e0904u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e0908: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E090Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0908u;
        // 0x2e090c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0910u;
}
