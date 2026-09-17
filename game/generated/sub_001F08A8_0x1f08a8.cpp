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

// Function: sub_001F08A8
// Address: 0x1f08a8 - 0x1f0930
void sub_001F08A8_0x1f08a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F08A8_0x1f08a8");
#endif

    switch (ctx->pc) {
        case 0x1f08c8u: goto label_1f08c8;
        case 0x1f08d4u: goto label_1f08d4;
        case 0x1f08e4u: goto label_1f08e4;
        case 0x1f091cu: goto label_1f091c;
        default: break;
    }

    ctx->pc = 0x1f08a8u;

    // 0x1f08a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f08a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f08ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f08acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f08b0: 0x3c10003e  lui         $s0, 0x3E
    ctx->pc = 0x1f08b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)62 << 16));
    // 0x1f08b4: 0x261037e0  addiu       $s0, $s0, 0x37E0
    ctx->pc = 0x1f08b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 14304));
    // 0x1f08b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f08b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f08bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f08bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f08c0: 0xc084e9a  jal         func_213A68
    ctx->pc = 0x1F08C0u;
    SET_GPR_U32(ctx, 31, 0x1F08C8u);
    ctx->pc = 0x1F08C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F08C0u;
    // 0x1f08c4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213A68u, 0x1F08C0u, 0x1F08C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F08C8u;
label_1f08c8:
    // 0x1f08c8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f08c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f08cc: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x1F08CCu;
    SET_GPR_U32(ctx, 31, 0x1F08D4u);
    ctx->pc = 0x1F08D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F08CCu;
    // 0x1f08d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x1F08CCu, 0x1F08D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F08D4u;
label_1f08d4:
    // 0x1f08d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f08d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f08d8: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x1f08d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x1f08dc: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x1F08DCu;
    SET_GPR_U32(ctx, 31, 0x1F08E4u);
    ctx->pc = 0x1F08E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F08DCu;
    // 0x1f08e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x1F08DCu, 0x1F08E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F08E4u;
label_1f08e4:
    // 0x1f08e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f08e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f08e8: 0x24470060  addiu       $a3, $v0, 0x60
    ctx->pc = 0x1f08e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1f08ec: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1f08ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1f08f0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F08F0u;
    {
        const bool branch_taken_0x1f08f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F08F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F08F0u;
        // 0x1f08f4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f08f0) {
            ctx->pc = 0x1F0908u;
            goto label_1f0908;
        }
    }
    ctx->pc = 0x1F08F8u;
    // 0x1f08f8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1f08f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1f08fc: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1f08fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1f0900: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F0900u;
    {
        const bool branch_taken_0x1f0900 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f0900) {
            ctx->pc = 0x1F0914u;
            goto label_1f0914;
        }
    }
    ctx->pc = 0x1F0908u;
label_1f0908:
    // 0x1f0908: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x1f0908u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x1f090c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f090cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0910: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1f0910u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_1f0914:
    // 0x1f0914: 0xc0b7e34  jal         func_2DF8D0
    ctx->pc = 0x1F0914u;
    SET_GPR_U32(ctx, 31, 0x1F091Cu);
    ctx->pc = 0x2DF8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF8D0u, 0x1F0914u, 0x1F091Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F091Cu;
label_1f091c:
    // 0x1f091c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f091cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0920: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f0920u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f0924: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f0924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0928: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F092Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0928u;
        // 0x1f092c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0930u;
}
