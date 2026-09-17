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

// Function: sub_00220F10
// Address: 0x220f10 - 0x220ff0
void sub_00220F10_0x220f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220F10_0x220f10");
#endif

    switch (ctx->pc) {
        case 0x220f38u: goto label_220f38;
        case 0x220f50u: goto label_220f50;
        case 0x220f58u: goto label_220f58;
        case 0x220f84u: goto label_220f84;
        case 0x220f90u: goto label_220f90;
        default: break;
    }

    ctx->pc = 0x220f10u;

    // 0x220f10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x220f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x220f14: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x220f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x220f18: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x220f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x220f1c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x220f1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220f20: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x220f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x220f24: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x220f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x220f28: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x220f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x220f2c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x220f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x220f30: 0xc0881b8  jal         func_2206E0
    ctx->pc = 0x220F30u;
    SET_GPR_U32(ctx, 31, 0x220F38u);
    ctx->pc = 0x220F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220F30u;
    // 0x220f34: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2206E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2206E0u, 0x220F30u, 0x220F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220F38u;
label_220f38:
    // 0x220f38: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x220f38u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220f3c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x220f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220f40: 0x6400022  bltz        $s2, . + 4 + (0x22 << 2)
    ctx->pc = 0x220F40u;
    {
        const bool branch_taken_0x220f40 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x220F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220F40u;
        // 0x220f44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220f40) {
            ctx->pc = 0x220FCCu;
            goto label_220fcc;
        }
    }
    ctx->pc = 0x220F48u;
    // 0x220f48: 0xc08c1da  jal         func_230768
    ctx->pc = 0x220F48u;
    SET_GPR_U32(ctx, 31, 0x220F50u);
    ctx->pc = 0x230768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230768u, 0x220F48u, 0x220F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220F50u;
label_220f50:
    // 0x220f50: 0xc0881d6  jal         func_220758
    ctx->pc = 0x220F50u;
    SET_GPR_U32(ctx, 31, 0x220F58u);
    ctx->pc = 0x220F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220F50u;
    // 0x220f54: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220758u, 0x220F50u, 0x220F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220F58u;
label_220f58:
    // 0x220f58: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x220f58u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220f5c: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x220f5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x220f60: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x220f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220f64: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x220f64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220f68: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x220f68u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x220f6c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x220f6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220f70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220f74: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x220f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220f78: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x220f78u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x220f7c: 0xc088220  jal         func_220880
    ctx->pc = 0x220F7Cu;
    SET_GPR_U32(ctx, 31, 0x220F84u);
    ctx->pc = 0x220F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220F7Cu;
    // 0x220f80: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x220880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220880u, 0x220F7Cu, 0x220F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220F84u;
label_220f84:
    // 0x220f84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220f88: 0xc0847da  jal         func_211F68
    ctx->pc = 0x220F88u;
    SET_GPR_U32(ctx, 31, 0x220F90u);
    ctx->pc = 0x220F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220F88u;
    // 0x220f8c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211F68u, 0x220F88u, 0x220F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220F90u;
label_220f90:
    // 0x220f90: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x220f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x220f94: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x220f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x220f98: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x220f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x220f9c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x220f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x220fa0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x220fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x220fa4: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x220fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220fa8: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x220fa8u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x220fac: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x220facu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x220fb0: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x220fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x220fb4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x220fb4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x220fb8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x220fb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220fbc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x220fbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220fc0: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x220fc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x220fc4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x220fc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x220fc8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x220fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_220fcc:
    // 0x220fcc: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x220fccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x220fd0: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x220fd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x220fd4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x220fd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x220fd8: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x220fd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x220fdc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x220fdcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x220fe0: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x220fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x220fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x220FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220FE4u;
        // 0x220fe8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220FECu;
    // 0x220fec: 0x0  nop
    ctx->pc = 0x220fecu;
    // NOP
    ctx->pc = 0x220ff0u;
}
