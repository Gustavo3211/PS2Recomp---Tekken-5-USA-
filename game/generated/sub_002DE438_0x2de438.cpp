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

// Function: sub_002DE438
// Address: 0x2de438 - 0x2de500
void sub_002DE438_0x2de438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE438_0x2de438");
#endif

    switch (ctx->pc) {
        case 0x2de468u: goto label_2de468;
        case 0x2de478u: goto label_2de478;
        case 0x2de490u: goto label_2de490;
        case 0x2de4c8u: goto label_2de4c8;
        case 0x2de4e0u: goto label_2de4e0;
        default: break;
    }

    ctx->pc = 0x2de438u;

    // 0x2de438: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2de438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2de43c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2de43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2de440: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2de440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de444: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2de444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2de448: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2de448u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de44c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2de44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2de450: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2de450u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de454: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2de454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2de458: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2de458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2de45c: 0x1a400009  blez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DE45Cu;
    {
        const bool branch_taken_0x2de45c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2DE460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE45Cu;
        // 0x2de460: 0x8c910008  lw          $s1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de45c) {
            ctx->pc = 0x2DE484u;
            goto label_2de484;
        }
    }
    ctx->pc = 0x2DE464u;
    // 0x2de464: 0x0  nop
    ctx->pc = 0x2de464u;
    // NOP
label_2de468:
    // 0x2de468: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2de468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de46c: 0x2405007c  addiu       $a1, $zero, 0x7C
    ctx->pc = 0x2de46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x2de470: 0xc04a3d7  jal         func_128F5C
    ctx->pc = 0x2DE470u;
    SET_GPR_U32(ctx, 31, 0x2DE478u);
    ctx->pc = 0x2DE474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE470u;
    // 0x2de474: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128F5Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128F5Cu, 0x2DE470u, 0x2DE478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE478u;
label_2de478:
    // 0x2de478: 0x212182a  slt         $v1, $s0, $s2
    ctx->pc = 0x2de478u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2de47c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DE47Cu;
    {
        const bool branch_taken_0x2de47c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE47Cu;
        // 0x2de480: 0x24510001  addiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de47c) {
            ctx->pc = 0x2DE468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2de468;
        }
    }
    ctx->pc = 0x2DE484u;
label_2de484:
    // 0x2de484: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2de484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de488: 0xc04a3d7  jal         func_128F5C
    ctx->pc = 0x2DE488u;
    SET_GPR_U32(ctx, 31, 0x2DE490u);
    ctx->pc = 0x2DE48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE488u;
    // 0x2de48c: 0x2405007c  addiu       $a1, $zero, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128F5Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128F5Cu, 0x2DE488u, 0x2DE490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE490u;
label_2de490:
    // 0x2de490: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2DE490u;
    {
        const bool branch_taken_0x2de490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE490u;
        // 0x2de494: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de490) {
            ctx->pc = 0x2DE4C0u;
            goto label_2de4c0;
        }
    }
    ctx->pc = 0x2DE498u;
    // 0x2de498: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2de498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de49c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2de49cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2de4a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2de4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de4a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2de4a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2de4a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2de4a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de4ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2de4acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de4b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2de4b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de4b4: 0x804a48c  j           func_129230
    ctx->pc = 0x2DE4B4u;
    ctx->pc = 0x2DE4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE4B4u;
    // 0x2de4b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129230u;
    sub_00129230_0x129230(rdram, ctx, runtime); return;
    ctx->pc = 0x2DE4BCu;
    // 0x2de4bc: 0x0  nop
    ctx->pc = 0x2de4bcu;
    // NOP
label_2de4c0:
    // 0x2de4c0: 0xc04a3d7  jal         func_128F5C
    ctx->pc = 0x2DE4C0u;
    SET_GPR_U32(ctx, 31, 0x2DE4C8u);
    ctx->pc = 0x2DE4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE4C0u;
    // 0x2de4c4: 0x2405007c  addiu       $a1, $zero, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128F5Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128F5Cu, 0x2DE4C0u, 0x2DE4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE4C8u;
label_2de4c8:
    // 0x2de4c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2de4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de4cc: 0x518023  subu        $s0, $v0, $s1
    ctx->pc = 0x2de4ccu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2de4d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2de4d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de4d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2de4d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de4d8: 0xc04a58e  jal         func_129638
    ctx->pc = 0x2DE4D8u;
    SET_GPR_U32(ctx, 31, 0x2DE4E0u);
    ctx->pc = 0x2DE4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE4D8u;
    // 0x2de4dc: 0x2708021  addu        $s0, $s3, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129638u, 0x2DE4D8u, 0x2DE4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE4E0u;
label_2de4e0:
    // 0x2de4e0: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x2de4e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2de4e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2de4e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2de4e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2de4e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de4ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2de4ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de4f0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2de4f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2de4f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2de4f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de4f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE4F8u;
        // 0x2de4fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE4F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE500u;
}
