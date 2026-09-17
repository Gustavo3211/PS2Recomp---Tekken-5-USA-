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

// Function: sub_00118FA0
// Address: 0x118fa0 - 0x119018
void sub_00118FA0_0x118fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118FA0_0x118fa0");
#endif

    switch (ctx->pc) {
        case 0x118fa8u: goto label_118fa8;
        case 0x118fdcu: goto label_118fdc;
        case 0x118fe4u: goto label_118fe4;
        case 0x119000u: goto label_119000;
        default: break;
    }

    ctx->pc = 0x118fa0u;

label_118fa0:
    // 0x118fa0: 0x8046c3a  j           func_11B0E8
    ctx->pc = 0x118FA0u;
    ctx->pc = 0x11B0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B0E8u, 0x118FA0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x118FA8u;
label_118fa8:
    // 0x118fa8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x118fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x118fac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x118facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x118fb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x118fb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118fb4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x118fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x118fb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x118fbc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x118fbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118fc0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x118fc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118fc4: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x118fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x118fc8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x118fc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118fcc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x118fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x118fd0: 0x2484e4c0  addiu       $a0, $a0, -0x1B40
    ctx->pc = 0x118fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960320));
    // 0x118fd4: 0xc0463a2  jal         func_118E88
    ctx->pc = 0x118FD4u;
    SET_GPR_U32(ctx, 31, 0x118FDCu);
    ctx->pc = 0x118FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118FD4u;
    // 0x118fd8: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118E88u, 0x118FD4u, 0x118FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118FDCu;
label_118fdc:
    // 0x118fdc: 0xc0463e8  jal         func_118FA0
    ctx->pc = 0x118FDCu;
    SET_GPR_U32(ctx, 31, 0x118FE4u);
    ctx->pc = 0x118FA0u;
    goto label_118fa0;
    ctx->pc = 0x118FE4u;
label_118fe4:
    // 0x118fe4: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x118fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x118fe8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x118fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118fec: 0x8c4724e8  lw          $a3, 0x24E8($v0)
    ctx->pc = 0x118fecu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x1324E8u));
    // 0x118ff0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x118ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118ff4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x118ff4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118ff8: 0xc043bfc  jal         func_10EFF0
    ctx->pc = 0x118FF8u;
    SET_GPR_U32(ctx, 31, 0x119000u);
    ctx->pc = 0x118FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118FF8u;
    // 0x118ffc: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EFF0u, 0x118FF8u, 0x119000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119000u;
label_119000:
    // 0x119000: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x119000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x119004: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x119004u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119008: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x119008u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11900c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11900cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119010: 0x3e00008  jr          $ra
    ctx->pc = 0x119010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119010u;
        // 0x119014: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119018u;
}
