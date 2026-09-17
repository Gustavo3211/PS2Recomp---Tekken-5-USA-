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

// Function: sub_002C5C08
// Address: 0x2c5c08 - 0x2c5d30
void sub_002C5C08_0x2c5c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5C08_0x2c5c08");
#endif

    switch (ctx->pc) {
        case 0x2c5c64u: goto label_2c5c64;
        case 0x2c5c70u: goto label_2c5c70;
        case 0x2c5c84u: goto label_2c5c84;
        default: break;
    }

    ctx->pc = 0x2c5c08u;

    // 0x2c5c08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c5c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c5c0c: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x2c5c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x2c5c10: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2c5c10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2c5c14: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2c5c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2c5c18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c5c18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5c1c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2c5c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2c5c20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c5c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c5c24: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c5c24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c5c28: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x2c5c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5c2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c5c2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c5c30: 0xc60100ac  lwc1        $f1, 0xAC($s0)
    ctx->pc = 0x2c5c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5c34: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x2c5c34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2c5c38: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2c5c38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2c5c3c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2c5c3cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c5c40: 0x46020b01  sub.s       $f12, $f1, $f2
    ctx->pc = 0x2c5c40u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2c5c44: 0x46046034  c.lt.s      $f12, $f4
    ctx->pc = 0x2c5c44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c5c48: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C5C48u;
    {
        const bool branch_taken_0x2c5c48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C5C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5C48u;
        // 0x2c5c4c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5c48) {
            ctx->pc = 0x2C5C54u;
            goto label_2c5c54;
        }
    }
    ctx->pc = 0x2C5C50u;
    // 0x2c5c50: 0x46002306  mov.s       $f12, $f4
    ctx->pc = 0x2c5c50u;
    ctx->f[12] = FPU_MOV_S(ctx->f[4]);
label_2c5c54:
    // 0x2c5c54: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x2c5c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x2c5c58: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c5c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5c5c: 0xc0b1472  jal         func_2C51C8
    ctx->pc = 0x2C5C5Cu;
    SET_GPR_U32(ctx, 31, 0x2C5C64u);
    ctx->pc = 0x2C5C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5C5Cu;
    // 0x2c5c60: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C51C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C51C8u, 0x2C5C5Cu, 0x2C5C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5C64u;
label_2c5c64:
    // 0x2c5c64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c5c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5c68: 0xc0af21a  jal         func_2BC868
    ctx->pc = 0x2C5C68u;
    SET_GPR_U32(ctx, 31, 0x2C5C70u);
    ctx->pc = 0x2C5C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5C68u;
    // 0x2c5c6c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC868u, 0x2C5C68u, 0x2C5C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5C70u;
label_2c5c70:
    // 0x2c5c70: 0x8606000e  lh          $a2, 0xE($s0)
    ctx->pc = 0x2c5c70u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x2c5c74: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x2c5c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x2c5c78: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2c5c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c5c7c: 0xc0b73fc  jal         func_2DCFF0
    ctx->pc = 0x2C5C7Cu;
    SET_GPR_U32(ctx, 31, 0x2C5C84u);
    ctx->pc = 0x2C5C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5C7Cu;
    // 0x2c5c80: 0x63023  negu        $a2, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCFF0u, 0x2C5C7Cu, 0x2C5C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5C84u;
label_2c5c84:
    // 0x2c5c84: 0x8e0207c8  lw          $v0, 0x7C8($s0)
    ctx->pc = 0x2c5c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1992)));
    // 0x2c5c88: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2c5c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c5c8c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2c5c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5c90: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x2c5c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c5c94: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x2c5c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5c98: 0x460011c0  add.s       $f7, $f2, $f0
    ctx->pc = 0x2c5c98u;
    ctx->f[7] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2c5c9c: 0xc7a90020  lwc1        $f9, 0x20($sp)
    ctx->pc = 0x2c5c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2c5ca0: 0x46011980  add.s       $f6, $f3, $f1
    ctx->pc = 0x2c5ca0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2c5ca4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C5CA4u;
    {
        const bool branch_taken_0x2c5ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5CA4u;
        // 0x2c5ca8: 0xc7a80024  lwc1        $f8, 0x24($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5ca4) {
            ctx->pc = 0x2C5CECu;
            goto label_2c5cec;
        }
    }
    ctx->pc = 0x2C5CACu;
    // 0x2c5cac: 0x8e0207fc  lw          $v0, 0x7FC($s0)
    ctx->pc = 0x2c5cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2044)));
    // 0x2c5cb0: 0x5840000f  blezl       $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2C5CB0u;
    {
        const bool branch_taken_0x2c5cb0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c5cb0) {
            ctx->pc = 0x2C5CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5CB0u;
            // 0x2c5cb4: 0x46093882  mul.s       $f2, $f7, $f9 (Delay Slot)
            ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[9]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5CF0u;
            goto label_2c5cf0;
        }
    }
    ctx->pc = 0x2C5CB8u;
    // 0x2c5cb8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2c5cb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2c5cbc: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2c5cbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2c5cc0: 0xc60207e0  lwc1        $f2, 0x7E0($s0)
    ctx->pc = 0x2c5cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c5cc4: 0xc6000804  lwc1        $f0, 0x804($s0)
    ctx->pc = 0x2c5cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5cc8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c5cc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c5ccc: 0xc60107e8  lwc1        $f1, 0x7E8($s0)
    ctx->pc = 0x2c5cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5cd0: 0x0  nop
    ctx->pc = 0x2c5cd0u;
    // NOP
    // 0x2c5cd4: 0x0  nop
    ctx->pc = 0x2c5cd4u;
    // NOP
    // 0x2c5cd8: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x2c5cd8u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x2c5cdc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c5cdcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c5ce0: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2c5ce0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c5ce4: 0x46013180  add.s       $f6, $f6, $f1
    ctx->pc = 0x2c5ce4u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x2c5ce8: 0x460239c0  add.s       $f7, $f7, $f2
    ctx->pc = 0x2c5ce8u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
label_2c5cec:
    // 0x2c5cec: 0x46093882  mul.s       $f2, $f7, $f9
    ctx->pc = 0x2c5cecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[9]);
label_2c5cf0:
    // 0x2c5cf0: 0xc6040750  lwc1        $f4, 0x750($s0)
    ctx->pc = 0x2c5cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c5cf4: 0x46083142  mul.s       $f5, $f6, $f8
    ctx->pc = 0x2c5cf4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[8]);
    // 0x2c5cf8: 0xc6010758  lwc1        $f1, 0x758($s0)
    ctx->pc = 0x2c5cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5cfc: 0x46083802  mul.s       $f0, $f7, $f8
    ctx->pc = 0x2c5cfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[8]);
    // 0x2c5d00: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2c5d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c5d04: 0x460930c2  mul.s       $f3, $f6, $f9
    ctx->pc = 0x2c5d04u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[9]);
    // 0x2c5d08: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x2c5d08u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x2c5d0c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2c5d0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2c5d10: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2c5d10u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2c5d14: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x2c5d14u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2c5d18: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x2c5d18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2c5d1c: 0xe6040000  swc1        $f4, 0x0($s0)
    ctx->pc = 0x2c5d1cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2c5d20: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2c5d20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c5d24: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5D24u;
        // 0x2c5d28: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5D2Cu;
    // 0x2c5d2c: 0x0  nop
    ctx->pc = 0x2c5d2cu;
    // NOP
    ctx->pc = 0x2c5d30u;
}
