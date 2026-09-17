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

// Function: sub_00231760
// Address: 0x231760 - 0x231820
void sub_00231760_0x231760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231760_0x231760");
#endif

    switch (ctx->pc) {
        case 0x2317e4u: goto label_2317e4;
        default: break;
    }

    ctx->pc = 0x231760u;

    // 0x231760: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x231760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x231764: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x231764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x231768: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x231768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23176c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23176cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231770: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x231770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x231774: 0x3c110016  lui         $s1, 0x16
    ctx->pc = 0x231774u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)22 << 16));
    // 0x231778: 0xe7b60028  swc1        $f22, 0x28($sp)
    ctx->pc = 0x231778u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x23177c: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x23177cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x231780: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x231780u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x231784: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x231784u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x231788: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x231788u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x23178c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23178cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x231790: 0x2625d320  addiu       $a1, $s1, -0x2CE0
    ctx->pc = 0x231790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294955808));
    // 0x231794: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x231794u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x15D320u));
    // 0x231798: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x231798u;
    {
        const bool branch_taken_0x231798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23179Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231798u;
        // 0x23179c: 0x46007506  mov.s       $f20, $f14 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x231798) {
            ctx->pc = 0x2317DCu;
            goto label_2317dc;
        }
    }
    ctx->pc = 0x2317A0u;
    // 0x2317a0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x2317a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2317a4: 0x1450000d  bne         $v0, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x2317A4u;
    {
        const bool branch_taken_0x2317a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2317a4) {
            ctx->pc = 0x2317DCu;
            goto label_2317dc;
        }
    }
    ctx->pc = 0x2317ACu;
    // 0x2317ac: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x2317acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2317b0: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x2317b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2317b4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2317B4u;
    {
        const bool branch_taken_0x2317b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2317b4) {
            ctx->pc = 0x2317DCu;
            goto label_2317dc;
        }
    }
    ctx->pc = 0x2317BCu;
    // 0x2317bc: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2317bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2317c0: 0x46160032  c.eq.s      $f0, $f22
    ctx->pc = 0x2317c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2317c4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2317C4u;
    {
        const bool branch_taken_0x2317c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2317c4) {
            ctx->pc = 0x2317DCu;
            goto label_2317dc;
        }
    }
    ctx->pc = 0x2317CCu;
    // 0x2317cc: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2317ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2317d0: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x2317d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2317d4: 0x4503000b  bc1tl       . + 4 + (0xB << 2)
    ctx->pc = 0x2317D4u;
    {
        const bool branch_taken_0x2317d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2317d4) {
            ctx->pc = 0x2317D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2317D4u;
            // 0x2317d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231804u;
            goto label_231804;
        }
    }
    ctx->pc = 0x2317DCu;
label_2317dc:
    // 0x2317dc: 0xc0cace0  jal         func_32B380
    ctx->pc = 0x2317DCu;
    SET_GPR_U32(ctx, 31, 0x2317E4u);
    ctx->pc = 0x2317E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2317DCu;
    // 0x2317e0: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B380u, 0x2317DCu, 0x2317E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2317E4u;
label_2317e4:
    // 0x2317e4: 0x2622d320  addiu       $v0, $s1, -0x2CE0
    ctx->pc = 0x2317e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294955808));
    // 0x2317e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2317e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2317ec: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2317ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2317f0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2317f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2317f4: 0xac50000c  sw          $s0, 0xC($v0)
    ctx->pc = 0x2317f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 16));
    // 0x2317f8: 0xe4550010  swc1        $f21, 0x10($v0)
    ctx->pc = 0x2317f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2317fc: 0xe4560004  swc1        $f22, 0x4($v0)
    ctx->pc = 0x2317fcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x231800: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x231800u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_231804:
    // 0x231804: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x231804u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x231808: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x231808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23180c: 0xc7b60028  lwc1        $f22, 0x28($sp)
    ctx->pc = 0x23180cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x231810: 0xc7b50020  lwc1        $f21, 0x20($sp)
    ctx->pc = 0x231810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x231814: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x231814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x231818: 0x3e00008  jr          $ra
    ctx->pc = 0x231818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231818u;
        // 0x23181c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231820u;
}
