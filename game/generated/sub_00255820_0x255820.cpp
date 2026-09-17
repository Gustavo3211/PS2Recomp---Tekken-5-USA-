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

// Function: sub_00255820
// Address: 0x255820 - 0x2558d8
void sub_00255820_0x255820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255820_0x255820");
#endif

    switch (ctx->pc) {
        case 0x255840u: goto label_255840;
        case 0x255858u: goto label_255858;
        case 0x255884u: goto label_255884;
        default: break;
    }

    ctx->pc = 0x255820u;

    // 0x255820: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x255820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x255824: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x255824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x255828: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x255828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x25582c: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x25582cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x255830: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x255830u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x255834: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x255834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x255838: 0xc09536c  jal         func_254DB0
    ctx->pc = 0x255838u;
    SET_GPR_U32(ctx, 31, 0x255840u);
    ctx->pc = 0x25583Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255838u;
    // 0x25583c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254DB0u, 0x255838u, 0x255840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255840u;
label_255840:
    // 0x255840: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x255840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x255844: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x255844u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x255848: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x255848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x25584c: 0xc7948a34  lwc1        $f20, -0x75CC($gp)
    ctx->pc = 0x25584cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x255850: 0x2451cb50  addiu       $s1, $v0, -0x34B0
    ctx->pc = 0x255850u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953808));
    // 0x255854: 0x0  nop
    ctx->pc = 0x255854u;
    // NOP
label_255858:
    // 0x255858: 0x101400  sll         $v0, $s0, 16
    ctx->pc = 0x255858u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x25585c: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x25585cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x255860: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x255860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x255864: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x255864u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x255868: 0x0  nop
    ctx->pc = 0x255868u;
    // NOP
    // 0x25586c: 0x0  nop
    ctx->pc = 0x25586cu;
    // NOP
    // 0x255870: 0x46150003  div.s       $f0, $f0, $f21
    ctx->pc = 0x255870u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[21];
    // 0x255874: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x255874u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x255878: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x255878u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x25587c: 0xc0b73fc  jal         func_2DCFF0
    ctx->pc = 0x25587Cu;
    SET_GPR_U32(ctx, 31, 0x255884u);
    ctx->pc = 0x255880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25587Cu;
    // 0x255880: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCFF0u, 0x25587Cu, 0x255884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255884u;
label_255884:
    // 0x255884: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x255884u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x255888: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x255888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25588c: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x25588cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x255890: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x255890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x255894: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x255894u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255898: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x255898u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x25589c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x25589cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2558a0: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2558a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2558a4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2558a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2558a8: 0x2a040005  slti        $a0, $s0, 0x5
    ctx->pc = 0x2558a8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2558ac: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2558acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2558b0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2558b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2558b4: 0x1480ffe8  bnez        $a0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2558B4u;
    {
        const bool branch_taken_0x2558b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2558B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2558B4u;
        // 0x2558b8: 0xe4a10008  swc1        $f1, 0x8($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2558b4) {
            ctx->pc = 0x255858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_255858;
        }
    }
    ctx->pc = 0x2558BCu;
    // 0x2558bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2558bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2558c0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2558c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2558c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2558c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2558c8: 0xc7b50030  lwc1        $f21, 0x30($sp)
    ctx->pc = 0x2558c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2558cc: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x2558ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2558d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2558D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2558D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2558D0u;
        // 0x2558d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2558D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2558D8u;
}
