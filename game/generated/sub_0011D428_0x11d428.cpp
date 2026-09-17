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

// Function: sub_0011D428
// Address: 0x11d428 - 0x11d4a0
void sub_0011D428_0x11d428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D428_0x11d428");
#endif

    switch (ctx->pc) {
        case 0x11d468u: goto label_11d468;
        case 0x11d478u: goto label_11d478;
        case 0x11d494u: goto label_11d494;
        default: break;
    }

    ctx->pc = 0x11d428u;

    // 0x11d428: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11d428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11d42c: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x11d42cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x11d430: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11d430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11d434: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x11d434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x11d438: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x11d438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x11d43c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x11d43cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x11d440: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x11d440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d444: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x11d444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x11d448: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x11d448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x11d44c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x11d44cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x11d450: 0x34420fda  ori         $v0, $v0, 0xFDA
    ctx->pc = 0x11d450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4058);
    // 0x11d454: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x11d454u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11d458: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11D458u;
    {
        const bool branch_taken_0x11d458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D458u;
        // 0x11d45c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d458) {
            ctx->pc = 0x11D470u;
            goto label_11d470;
        }
    }
    ctx->pc = 0x11D460u;
    // 0x11d460: 0xc047eb0  jal         func_11FAC0
    ctx->pc = 0x11D460u;
    SET_GPR_U32(ctx, 31, 0x11D468u);
    ctx->pc = 0x11D464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D460u;
    // 0x11d464: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAC0u, 0x11D460u, 0x11D468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D468u;
label_11d468:
    // 0x11d468: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x11D468u;
    {
        const bool branch_taken_0x11d468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D468u;
        // 0x11d46c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d468) {
            ctx->pc = 0x11D498u;
            goto label_11d498;
        }
    }
    ctx->pc = 0x11D470u;
label_11d470:
    // 0x11d470: 0xc047ae0  jal         func_11EB80
    ctx->pc = 0x11D470u;
    SET_GPR_U32(ctx, 31, 0x11D478u);
    ctx->pc = 0x11EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB80u, 0x11D470u, 0x11D478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D478u;
label_11d478:
    // 0x11d478: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11d478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d47c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11d47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x11d480: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x11d480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11d484: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11d484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x11d488: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x11d488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x11d48c: 0xc047eb0  jal         func_11FAC0
    ctx->pc = 0x11D48Cu;
    SET_GPR_U32(ctx, 31, 0x11D494u);
    ctx->pc = 0x11D490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D48Cu;
    // 0x11d490: 0x822023  subu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAC0u, 0x11D48Cu, 0x11D494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D494u;
label_11d494:
    // 0x11d494: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11d494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_11d498:
    // 0x11d498: 0x3e00008  jr          $ra
    ctx->pc = 0x11D498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D498u;
        // 0x11d49c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D4A0u;
}
