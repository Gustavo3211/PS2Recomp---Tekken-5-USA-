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

// Function: sub_002CF330
// Address: 0x2cf330 - 0x2cf400
void sub_002CF330_0x2cf330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF330_0x2cf330");
#endif

    switch (ctx->pc) {
        case 0x2cf36cu: goto label_2cf36c;
        case 0x2cf398u: goto label_2cf398;
        case 0x2cf3c8u: goto label_2cf3c8;
        default: break;
    }

    ctx->pc = 0x2cf330u;

    // 0x2cf330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cf330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cf334: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x2cf334u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2cf338: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2cf338u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2cf33c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cf33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cf340: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cf340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf344: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cf344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cf348: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cf348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cf34c: 0xe61407e8  swc1        $f20, 0x7E8($s0)
    ctx->pc = 0x2cf34cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2024), bits); }
    // 0x2cf350: 0xe61407e4  swc1        $f20, 0x7E4($s0)
    ctx->pc = 0x2cf350u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2020), bits); }
    // 0x2cf354: 0xe61407e0  swc1        $f20, 0x7E0($s0)
    ctx->pc = 0x2cf354u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2016), bits); }
    // 0x2cf358: 0xe6140038  swc1        $f20, 0x38($s0)
    ctx->pc = 0x2cf358u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2cf35c: 0xe6140034  swc1        $f20, 0x34($s0)
    ctx->pc = 0x2cf35cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x2cf360: 0xe6140030  swc1        $f20, 0x30($s0)
    ctx->pc = 0x2cf360u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2cf364: 0xc096efc  jal         func_25BBF0
    ctx->pc = 0x2CF364u;
    SET_GPR_U32(ctx, 31, 0x2CF36Cu);
    ctx->pc = 0x2CF368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF364u;
    // 0x2cf368: 0x8e110898  lw          $s1, 0x898($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2200)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BBF0u, 0x2CF364u, 0x2CF36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF36Cu;
label_2cf36c:
    // 0x2cf36c: 0xae0006d0  sw          $zero, 0x6D0($s0)
    ctx->pc = 0x2cf36cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1744), GPR_U32(ctx, 0));
    // 0x2cf370: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cf370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2cf374: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cf374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cf378: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x2cf378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2cf37c: 0xe6340060  swc1        $f20, 0x60($s1)
    ctx->pc = 0x2cf37cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
    // 0x2cf380: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x2cf380u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
    // 0x2cf384: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2cf384u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2cf388: 0xe634005c  swc1        $f20, 0x5C($s1)
    ctx->pc = 0x2cf388u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
    // 0x2cf38c: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x2cf38cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
    // 0x2cf390: 0xe6200064  swc1        $f0, 0x64($s1)
    ctx->pc = 0x2cf390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
    // 0x2cf394: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x2cf394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_2cf398:
    // 0x2cf398: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2cf398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2cf39c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2cf39cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2cf3a0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2cf3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2cf3a4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2cf3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2cf3a8: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x2cf3a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2cf3ac: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2CF3ACu;
    {
        const bool branch_taken_0x2cf3ac = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2CF3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF3ACu;
        // 0x2cf3b0: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf3ac) {
            ctx->pc = 0x2CF398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cf398;
        }
    }
    ctx->pc = 0x2CF3B4u;
    // 0x2cf3b4: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x2cf3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x2cf3b8: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x2cf3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2cf3bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cf3bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2cf3c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cf3c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cf3c4: 0x0  nop
    ctx->pc = 0x2cf3c4u;
    // NOP
label_2cf3c8:
    // 0x2cf3c8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2cf3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2cf3cc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2cf3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2cf3d0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2cf3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2cf3d4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2cf3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2cf3d8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2cf3d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2cf3dc: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2CF3DCu;
    {
        const bool branch_taken_0x2cf3dc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2CF3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF3DCu;
        // 0x2cf3e0: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf3dc) {
            ctx->pc = 0x2CF3C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cf3c8;
        }
    }
    ctx->pc = 0x2CF3E4u;
    // 0x2cf3e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cf3e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf3e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cf3e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cf3ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cf3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf3f0: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x2cf3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2cf3f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF3F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF3F4u;
        // 0x2cf3f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF3F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF3FCu;
    // 0x2cf3fc: 0x0  nop
    ctx->pc = 0x2cf3fcu;
    // NOP
    ctx->pc = 0x2cf400u;
}
