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

// Function: sub_00119060
// Address: 0x119060 - 0x1190d8
void sub_00119060_0x119060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119060_0x119060");
#endif

    switch (ctx->pc) {
        case 0x119074u: goto label_119074;
        case 0x119088u: goto label_119088;
        case 0x1190acu: goto label_1190ac;
        case 0x1190b4u: goto label_1190b4;
        default: break;
    }

    ctx->pc = 0x119060u;

    // 0x119060: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x119060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x119064: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119068: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x119068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11906c: 0xc0463e8  jal         func_118FA0
    ctx->pc = 0x11906Cu;
    SET_GPR_U32(ctx, 31, 0x119074u);
    ctx->pc = 0x119070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11906Cu;
    // 0x119070: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FA0u, 0x11906Cu, 0x119074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119074u;
label_119074:
    // 0x119074: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x119074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119078: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x119078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11907c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11907cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119080: 0x8043bf0  j           func_10EFC0
    ctx->pc = 0x119080u;
    ctx->pc = 0x119084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119080u;
    // 0x119084: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EFC0u, 0x119080u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x119088u;
label_119088:
    // 0x119088: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x119088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11908c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x11908cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119090: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119094: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x119094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119098: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x119098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11909c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x11909cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x1190a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1190a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1190a4: 0xc0463a2  jal         func_118E88
    ctx->pc = 0x1190A4u;
    SET_GPR_U32(ctx, 31, 0x1190ACu);
    ctx->pc = 0x1190A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1190A4u;
    // 0x1190a8: 0x2484e4c0  addiu       $a0, $a0, -0x1B40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118E88u, 0x1190A4u, 0x1190ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1190ACu;
label_1190ac:
    // 0x1190ac: 0xc0463e8  jal         func_118FA0
    ctx->pc = 0x1190ACu;
    SET_GPR_U32(ctx, 31, 0x1190B4u);
    ctx->pc = 0x118FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FA0u, 0x1190ACu, 0x1190B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1190B4u;
label_1190b4:
    // 0x1190b4: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x1190b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x1190b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1190b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1190bc: 0x8c4524e8  lw          $a1, 0x24E8($v0)
    ctx->pc = 0x1190bcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x1324E8u));
    // 0x1190c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1190c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1190c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1190c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1190c8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1190c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1190cc: 0x8043df0  j           func_10F7C0
    ctx->pc = 0x1190CCu;
    ctx->pc = 0x1190D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1190CCu;
    // 0x1190d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7C0u, 0x1190CCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1190D4u;
    // 0x1190d4: 0x0  nop
    ctx->pc = 0x1190d4u;
    // NOP
    ctx->pc = 0x1190d8u;
}
