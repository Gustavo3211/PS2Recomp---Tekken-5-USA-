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

// Function: sub_002EC7F8
// Address: 0x2ec7f8 - 0x2ec880
void sub_002EC7F8_0x2ec7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EC7F8_0x2ec7f8");
#endif

    switch (ctx->pc) {
        case 0x2ec858u: goto label_2ec858;
        case 0x2ec860u: goto label_2ec860;
        default: break;
    }

    ctx->pc = 0x2ec7f8u;

    // 0x2ec7f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ec7f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ec7fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ec7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ec800: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ec800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec804: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ec804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ec808: 0x92020130  lbu         $v0, 0x130($s0)
    ctx->pc = 0x2ec808u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x2ec80c: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x2EC80Cu;
    {
        const bool branch_taken_0x2ec80c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec80c) {
            ctx->pc = 0x2EC810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC80Cu;
            // 0x2ec810: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC870u;
            goto label_2ec870;
        }
    }
    ctx->pc = 0x2EC814u;
    // 0x2ec814: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x2ec814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2ec818: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ec818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ec81c: 0x54620014  bnel        $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2EC81Cu;
    {
        const bool branch_taken_0x2ec81c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ec81c) {
            ctx->pc = 0x2EC820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC81Cu;
            // 0x2ec820: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC870u;
            goto label_2ec870;
        }
    }
    ctx->pc = 0x2EC824u;
    // 0x2ec824: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x2ec824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2ec828: 0x28420709  slti        $v0, $v0, 0x709
    ctx->pc = 0x2ec828u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1801) ? 1 : 0);
    // 0x2ec82c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2EC82Cu;
    {
        const bool branch_taken_0x2ec82c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec82c) {
            ctx->pc = 0x2EC830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC82Cu;
            // 0x2ec830: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC870u;
            goto label_2ec870;
        }
    }
    ctx->pc = 0x2EC834u;
    // 0x2ec834: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x2ec834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x2ec838: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ec838u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ec83c: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2ec83cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2ec840: 0x2484c450  addiu       $a0, $a0, -0x3BB0
    ctx->pc = 0x2ec840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    // 0x2ec844: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x2ec844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2ec848: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ec848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec84c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ec84cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec850: 0xc0a5ea4  jal         func_297A90
    ctx->pc = 0x2EC850u;
    SET_GPR_U32(ctx, 31, 0x2EC858u);
    ctx->pc = 0x2EC854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC850u;
    // 0x2ec854: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297A90u, 0x2EC850u, 0x2EC858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC858u;
label_2ec858:
    // 0x2ec858: 0xc092486  jal         func_249218
    ctx->pc = 0x2EC858u;
    SET_GPR_U32(ctx, 31, 0x2EC860u);
    ctx->pc = 0x2EC85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC858u;
    // 0x2ec85c: 0x240401f4  addiu       $a0, $zero, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249218u, 0x2EC858u, 0x2EC860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC860u;
label_2ec860:
    // 0x2ec860: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x2ec860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x2ec864: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ec864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ec868: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x2ec868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x2ec86c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ec86cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ec870:
    // 0x2ec870: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ec870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ec874: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC874u;
        // 0x2ec878: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC87Cu;
    // 0x2ec87c: 0x0  nop
    ctx->pc = 0x2ec87cu;
    // NOP
    ctx->pc = 0x2ec880u;
}
