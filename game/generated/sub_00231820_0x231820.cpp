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

// Function: sub_00231820
// Address: 0x231820 - 0x2318e0
void sub_00231820_0x231820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231820_0x231820");
#endif

    switch (ctx->pc) {
        case 0x2318a4u: goto label_2318a4;
        default: break;
    }

    ctx->pc = 0x231820u;

    // 0x231820: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x231820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x231824: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x231824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x231828: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x231828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23182c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23182cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231830: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x231830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x231834: 0x3c110016  lui         $s1, 0x16
    ctx->pc = 0x231834u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)22 << 16));
    // 0x231838: 0xe7b60028  swc1        $f22, 0x28($sp)
    ctx->pc = 0x231838u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x23183c: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x23183cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x231840: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x231840u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x231844: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x231844u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x231848: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x231848u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x23184c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23184cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x231850: 0x2625d320  addiu       $a1, $s1, -0x2CE0
    ctx->pc = 0x231850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294955808));
    // 0x231854: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x231854u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x15D320u));
    // 0x231858: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x231858u;
    {
        const bool branch_taken_0x231858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231858u;
        // 0x23185c: 0x46007506  mov.s       $f20, $f14 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x231858) {
            ctx->pc = 0x23189Cu;
            goto label_23189c;
        }
    }
    ctx->pc = 0x231860u;
    // 0x231860: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x231860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x231864: 0x1450000d  bne         $v0, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x231864u;
    {
        const bool branch_taken_0x231864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x231864) {
            ctx->pc = 0x23189Cu;
            goto label_23189c;
        }
    }
    ctx->pc = 0x23186Cu;
    // 0x23186c: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x23186cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231870: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x231870u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231874: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x231874u;
    {
        const bool branch_taken_0x231874 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x231874) {
            ctx->pc = 0x23189Cu;
            goto label_23189c;
        }
    }
    ctx->pc = 0x23187Cu;
    // 0x23187c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x23187cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231880: 0x46160032  c.eq.s      $f0, $f22
    ctx->pc = 0x231880u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231884: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x231884u;
    {
        const bool branch_taken_0x231884 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x231884) {
            ctx->pc = 0x23189Cu;
            goto label_23189c;
        }
    }
    ctx->pc = 0x23188Cu;
    // 0x23188c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x23188cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231890: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x231890u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231894: 0x4503000b  bc1tl       . + 4 + (0xB << 2)
    ctx->pc = 0x231894u;
    {
        const bool branch_taken_0x231894 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x231894) {
            ctx->pc = 0x231898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231894u;
            // 0x231898: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2318C4u;
            goto label_2318c4;
        }
    }
    ctx->pc = 0x23189Cu;
label_23189c:
    // 0x23189c: 0xc0cac86  jal         func_32B218
    ctx->pc = 0x23189Cu;
    SET_GPR_U32(ctx, 31, 0x2318A4u);
    ctx->pc = 0x2318A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23189Cu;
    // 0x2318a0: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B218u, 0x23189Cu, 0x2318A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2318A4u;
label_2318a4:
    // 0x2318a4: 0x2622d320  addiu       $v0, $s1, -0x2CE0
    ctx->pc = 0x2318a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294955808));
    // 0x2318a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2318a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2318ac: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2318acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2318b0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2318b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2318b4: 0xac50000c  sw          $s0, 0xC($v0)
    ctx->pc = 0x2318b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 16));
    // 0x2318b8: 0xe4550010  swc1        $f21, 0x10($v0)
    ctx->pc = 0x2318b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2318bc: 0xe4560004  swc1        $f22, 0x4($v0)
    ctx->pc = 0x2318bcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2318c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2318c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2318c4:
    // 0x2318c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2318c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2318c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2318c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2318cc: 0xc7b60028  lwc1        $f22, 0x28($sp)
    ctx->pc = 0x2318ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2318d0: 0xc7b50020  lwc1        $f21, 0x20($sp)
    ctx->pc = 0x2318d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2318d4: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x2318d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2318d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2318D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2318DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2318D8u;
        // 0x2318dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2318D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2318E0u;
}
