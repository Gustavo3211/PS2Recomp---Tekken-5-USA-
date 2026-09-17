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

// Function: sub_002058E8
// Address: 0x2058e8 - 0x2059b0
void sub_002058E8_0x2058e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002058E8_0x2058e8");
#endif

    switch (ctx->pc) {
        case 0x20591cu: goto label_20591c;
        case 0x20592cu: goto label_20592c;
        case 0x20593cu: goto label_20593c;
        case 0x20598cu: goto label_20598c;
        default: break;
    }

    ctx->pc = 0x2058e8u;

    // 0x2058e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2058e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2058ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2058ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2058f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2058f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2058f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2058f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2058f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2058f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2058fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2058fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x205900: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x205900u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205904: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x205904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x205908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20590c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x20590cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x205910: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x205910u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x205914: 0xc084814  jal         func_212050
    ctx->pc = 0x205914u;
    SET_GPR_U32(ctx, 31, 0x20591Cu);
    ctx->pc = 0x205918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205914u;
    // 0x205918: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x212050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212050u, 0x205914u, 0x20591Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20591Cu;
label_20591c:
    // 0x20591c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20591cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205920: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x205920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205924: 0xc084814  jal         func_212050
    ctx->pc = 0x205924u;
    SET_GPR_U32(ctx, 31, 0x20592Cu);
    ctx->pc = 0x205928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205924u;
    // 0x205928: 0x46000547  neg.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_NEG_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x212050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212050u, 0x205924u, 0x20592Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20592Cu;
label_20592c:
    // 0x20592c: 0x46000507  neg.s       $f20, $f0
    ctx->pc = 0x20592cu;
    ctx->f[20] = FPU_NEG_S(ctx->f[0]);
    // 0x205930: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x205930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205934: 0xc084814  jal         func_212050
    ctx->pc = 0x205934u;
    SET_GPR_U32(ctx, 31, 0x20593Cu);
    ctx->pc = 0x205938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205934u;
    // 0x205938: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212050u, 0x205934u, 0x20593Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20593Cu;
label_20593c:
    // 0x20593c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x20593cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x205940: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x205940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x205944: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x205944u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x205948: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x205948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20594c: 0x4615a501  sub.s       $f20, $f20, $f21
    ctx->pc = 0x20594cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x205950: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x205950u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205954: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x205954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205958: 0x0  nop
    ctx->pc = 0x205958u;
    // NOP
    // 0x20595c: 0x0  nop
    ctx->pc = 0x20595cu;
    // NOP
    // 0x205960: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x205960u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[0];
    // 0x205964: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x205964u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x205968: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x205968u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x20596c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x20596cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x205970: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x205970u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x205974: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x205974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x205978: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x205978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20597c: 0xe622000c  swc1        $f2, 0xC($s1)
    ctx->pc = 0x20597cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x205980: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x205980u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x205984: 0xc08477c  jal         func_211DF0
    ctx->pc = 0x205984u;
    SET_GPR_U32(ctx, 31, 0x20598Cu);
    ctx->pc = 0x205988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205984u;
    // 0x205988: 0xe6210008  swc1        $f1, 0x8($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DF0u, 0x205984u, 0x20598Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20598Cu;
label_20598c:
    // 0x20598c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20598cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205990: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x205990u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x205994: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x205994u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x205998: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x205998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20599c: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x20599cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2059a0: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2059a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2059a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2059A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2059A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2059A4u;
        // 0x2059a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2059A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2059ACu;
    // 0x2059ac: 0x0  nop
    ctx->pc = 0x2059acu;
    // NOP
    ctx->pc = 0x2059b0u;
}
