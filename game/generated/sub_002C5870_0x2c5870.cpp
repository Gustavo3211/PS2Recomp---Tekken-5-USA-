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

// Function: sub_002C5870
// Address: 0x2c5870 - 0x2c5940
void sub_002C5870_0x2c5870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5870_0x2c5870");
#endif

    switch (ctx->pc) {
        case 0x2c58acu: goto label_2c58ac;
        case 0x2c58d8u: goto label_2c58d8;
        case 0x2c5908u: goto label_2c5908;
        default: break;
    }

    ctx->pc = 0x2c5870u;

    // 0x2c5870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c5870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c5874: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x2c5874u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2c5878: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2c5878u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2c587c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c587cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c5880: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c5880u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5884: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c5884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c5888: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c5888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c588c: 0xe61407e8  swc1        $f20, 0x7E8($s0)
    ctx->pc = 0x2c588cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2024), bits); }
    // 0x2c5890: 0xe61407e4  swc1        $f20, 0x7E4($s0)
    ctx->pc = 0x2c5890u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2020), bits); }
    // 0x2c5894: 0xe61407e0  swc1        $f20, 0x7E0($s0)
    ctx->pc = 0x2c5894u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2016), bits); }
    // 0x2c5898: 0xe6140038  swc1        $f20, 0x38($s0)
    ctx->pc = 0x2c5898u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2c589c: 0xe6140034  swc1        $f20, 0x34($s0)
    ctx->pc = 0x2c589cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x2c58a0: 0xe6140030  swc1        $f20, 0x30($s0)
    ctx->pc = 0x2c58a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2c58a4: 0xc096efc  jal         func_25BBF0
    ctx->pc = 0x2C58A4u;
    SET_GPR_U32(ctx, 31, 0x2C58ACu);
    ctx->pc = 0x2C58A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C58A4u;
    // 0x2c58a8: 0x8e110898  lw          $s1, 0x898($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2200)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BBF0u, 0x2C58A4u, 0x2C58ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C58ACu;
label_2c58ac:
    // 0x2c58ac: 0xae0006d0  sw          $zero, 0x6D0($s0)
    ctx->pc = 0x2c58acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1744), GPR_U32(ctx, 0));
    // 0x2c58b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c58b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c58b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c58b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c58b8: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x2c58b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2c58bc: 0xe6340060  swc1        $f20, 0x60($s1)
    ctx->pc = 0x2c58bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
    // 0x2c58c0: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x2c58c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
    // 0x2c58c4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2c58c4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2c58c8: 0xe634005c  swc1        $f20, 0x5C($s1)
    ctx->pc = 0x2c58c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
    // 0x2c58cc: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x2c58ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
    // 0x2c58d0: 0xe6200064  swc1        $f0, 0x64($s1)
    ctx->pc = 0x2c58d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
    // 0x2c58d4: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x2c58d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_2c58d8:
    // 0x2c58d8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2c58d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c58dc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2c58dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2c58e0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2c58e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2c58e4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2c58e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2c58e8: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x2c58e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2c58ec: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C58ECu;
    {
        const bool branch_taken_0x2c58ec = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2C58F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C58ECu;
        // 0x2c58f0: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c58ec) {
            ctx->pc = 0x2C58D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c58d8;
        }
    }
    ctx->pc = 0x2C58F4u;
    // 0x2c58f4: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x2c58f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x2c58f8: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x2c58f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2c58fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c58fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c5900: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c5900u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5904: 0x0  nop
    ctx->pc = 0x2c5904u;
    // NOP
label_2c5908:
    // 0x2c5908: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2c5908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c590c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2c590cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2c5910: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2c5910u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2c5914: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2c5914u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2c5918: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2c5918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2c591c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C591Cu;
    {
        const bool branch_taken_0x2c591c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2C5920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C591Cu;
        // 0x2c5920: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c591c) {
            ctx->pc = 0x2C5908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c5908;
        }
    }
    ctx->pc = 0x2C5924u;
    // 0x2c5924: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c5924u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5928: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c5928u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c592c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c592cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c5930: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x2c5930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c5934: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5934u;
        // 0x2c5938: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C593Cu;
    // 0x2c593c: 0x0  nop
    ctx->pc = 0x2c593cu;
    // NOP
    ctx->pc = 0x2c5940u;
}
