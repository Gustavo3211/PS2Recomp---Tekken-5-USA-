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

// Function: sub_00285650
// Address: 0x285650 - 0x2856d0
void sub_00285650_0x285650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285650_0x285650");
#endif

    switch (ctx->pc) {
        case 0x285680u: goto label_285680;
        case 0x2856c0u: goto label_2856c0;
        default: break;
    }

    ctx->pc = 0x285650u;

    // 0x285650: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x285650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x285654: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x285654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x285658: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x285658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28565c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x28565cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x285660: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x285660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x285664: 0x2442db08  addiu       $v0, $v0, -0x24F8
    ctx->pc = 0x285664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957832));
    // 0x285668: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x285668u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28566c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x28566cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x285670: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x285670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x285674: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x285674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285678: 0xc0b79f8  jal         func_2DE7E0
    ctx->pc = 0x285678u;
    SET_GPR_U32(ctx, 31, 0x285680u);
    ctx->pc = 0x28567Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285678u;
    // 0x28567c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE7E0u, 0x285678u, 0x285680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285680u;
label_285680:
    // 0x285680: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x285680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x285684: 0x3c0257ff  lui         $v0, 0x57FF
    ctx->pc = 0x285684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22527 << 16));
    // 0x285688: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x285688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x28568c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x28568cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x285690: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x285690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x285694: 0x24849630  addiu       $a0, $a0, -0x69D0
    ctx->pc = 0x285694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940208));
    // 0x285698: 0xae040038  sw          $a0, 0x38($s0)
    ctx->pc = 0x285698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 4));
    // 0x28569c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28569Cu;
    {
        const bool branch_taken_0x28569c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2856A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28569Cu;
        // 0x2856a0: 0xae030040  sw          $v1, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28569c) {
            ctx->pc = 0x2856C0u;
            goto label_2856c0;
        }
    }
    ctx->pc = 0x2856A4u;
    // 0x2856a4: 0x0  nop
    ctx->pc = 0x2856a4u;
    // NOP
    // 0x2856a8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2856a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2856ac: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2856acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2856b0: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2856b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2856b4: 0x2484fca4  addiu       $a0, $a0, -0x35C
    ctx->pc = 0x2856b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966436));
    // 0x2856b8: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2856B8u;
    SET_GPR_U32(ctx, 31, 0x2856C0u);
    ctx->pc = 0x2856BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2856B8u;
    // 0x2856bc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2856B8u, 0x2856C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2856C0u;
label_2856c0:
    // 0x2856c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2856c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2856c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2856c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2856c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2856C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2856CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2856C8u;
        // 0x2856cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2856C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2856D0u;
}
