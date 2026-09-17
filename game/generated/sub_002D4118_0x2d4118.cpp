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

// Function: sub_002D4118
// Address: 0x2d4118 - 0x2d41f0
void sub_002D4118_0x2d4118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4118_0x2d4118");
#endif

    switch (ctx->pc) {
        case 0x2d4150u: goto label_2d4150;
        case 0x2d4190u: goto label_2d4190;
        case 0x2d41a0u: goto label_2d41a0;
        case 0x2d41b0u: goto label_2d41b0;
        case 0x2d41c0u: goto label_2d41c0;
        case 0x2d41e0u: goto label_2d41e0;
        default: break;
    }

    ctx->pc = 0x2d4118u;

    // 0x2d4118: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d4118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d411c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d411cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d4120: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d4120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4124: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d4124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2d4128: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2d4128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2d412c: 0x2442e990  addiu       $v0, $v0, -0x1670
    ctx->pc = 0x2d412cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961552));
    // 0x2d4130: 0xae050050  sw          $a1, 0x50($s0)
    ctx->pc = 0x2d4130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 5));
    // 0x2d4134: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2d4134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2d4138: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d4138u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d413c: 0x3c01c448  lui         $at, 0xC448
    ctx->pc = 0x2d413cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50248 << 16));
    // 0x2d4140: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d4140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d4144: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d4144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4148: 0xc0b79f8  jal         func_2DE7E0
    ctx->pc = 0x2D4148u;
    SET_GPR_U32(ctx, 31, 0x2D4150u);
    ctx->pc = 0x2D414Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4148u;
    // 0x2d414c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE7E0u, 0x2D4148u, 0x2D4150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4150u;
label_2d4150:
    // 0x2d4150: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x2d4150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2d4154: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2d4154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2d4158: 0x2442ed48  addiu       $v0, $v0, -0x12B8
    ctx->pc = 0x2d4158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962504));
    // 0x2d415c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2d415cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2d4160: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d4160u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d4164: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2d4164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2d4168: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2d4168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x2d416c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d416cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4170: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x2d4170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x2d4174: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2d4174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2d4178: 0x2604009c  addiu       $a0, $s0, 0x9C
    ctx->pc = 0x2d4178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
    // 0x2d417c: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x2d417cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
    // 0x2d4180: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d4180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4184: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x2d4184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x2d4188: 0xc04a151  jal         func_128544
    ctx->pc = 0x2D4188u;
    SET_GPR_U32(ctx, 31, 0x2D4190u);
    ctx->pc = 0x2D418Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4188u;
    // 0x2d418c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x2D4188u, 0x2D4190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4190u;
label_2d4190:
    // 0x2d4190: 0x260400a4  addiu       $a0, $s0, 0xA4
    ctx->pc = 0x2d4190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 164));
    // 0x2d4194: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d4194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4198: 0xc04a151  jal         func_128544
    ctx->pc = 0x2D4198u;
    SET_GPR_U32(ctx, 31, 0x2D41A0u);
    ctx->pc = 0x2D419Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4198u;
    // 0x2d419c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x2D4198u, 0x2D41A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D41A0u;
label_2d41a0:
    // 0x2d41a0: 0x260400ac  addiu       $a0, $s0, 0xAC
    ctx->pc = 0x2d41a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 172));
    // 0x2d41a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d41a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d41a8: 0xc04a151  jal         func_128544
    ctx->pc = 0x2D41A8u;
    SET_GPR_U32(ctx, 31, 0x2D41B0u);
    ctx->pc = 0x2D41ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D41A8u;
    // 0x2d41ac: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x2D41A8u, 0x2D41B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D41B0u;
label_2d41b0:
    // 0x2d41b0: 0x260400b4  addiu       $a0, $s0, 0xB4
    ctx->pc = 0x2d41b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 180));
    // 0x2d41b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d41b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d41b8: 0xc04a151  jal         func_128544
    ctx->pc = 0x2D41B8u;
    SET_GPR_U32(ctx, 31, 0x2D41C0u);
    ctx->pc = 0x2D41BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D41B8u;
    // 0x2d41bc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x2D41B8u, 0x2D41C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D41C0u;
label_2d41c0:
    // 0x2d41c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D41C0u;
    {
        const bool branch_taken_0x2d41c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D41C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D41C0u;
        // 0x2d41c4: 0xae0000bc  sw          $zero, 0xBC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d41c0) {
            ctx->pc = 0x2D41E0u;
            goto label_2d41e0;
        }
    }
    ctx->pc = 0x2D41C8u;
    // 0x2d41c8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2d41c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2d41cc: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2d41ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2d41d0: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2d41d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2d41d4: 0x24840248  addiu       $a0, $a0, 0x248
    ctx->pc = 0x2d41d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 584));
    // 0x2d41d8: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2D41D8u;
    SET_GPR_U32(ctx, 31, 0x2D41E0u);
    ctx->pc = 0x2D41DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D41D8u;
    // 0x2d41dc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2D41D8u, 0x2D41E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D41E0u;
label_2d41e0:
    // 0x2d41e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d41e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d41e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d41e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d41e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D41E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D41ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D41E8u;
        // 0x2d41ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D41E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D41F0u;
}
