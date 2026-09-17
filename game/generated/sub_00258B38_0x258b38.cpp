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

// Function: sub_00258B38
// Address: 0x258b38 - 0x258d20
void sub_00258B38_0x258b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258B38_0x258b38");
#endif

    ctx->pc = 0x258b38u;

    // 0x258b38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x258b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x258b3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x258b3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x258b40: 0x4800074  bltz        $a0, . + 4 + (0x74 << 2)
    ctx->pc = 0x258B40u;
    {
        const bool branch_taken_0x258b40 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x258B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258B40u;
        // 0x258b44: 0x28822710  slti        $v0, $a0, 0x2710 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x258b40) {
            ctx->pc = 0x258D14u;
            goto label_258d14;
        }
    }
    ctx->pc = 0x258B48u;
    // 0x258b48: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x258B48u;
    {
        const bool branch_taken_0x258b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258B48u;
        // 0x258b4c: 0x28824e20  slti        $v0, $a0, 0x4E20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x258b48) {
            ctx->pc = 0x258C08u;
            goto label_258c08;
        }
    }
    ctx->pc = 0x258B50u;
    // 0x258b50: 0x288203e8  slti        $v0, $a0, 0x3E8
    ctx->pc = 0x258b50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x258b54: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x258B54u;
    {
        const bool branch_taken_0x258b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258B54u;
        // 0x258b58: 0x28820bb8  slti        $v0, $a0, 0xBB8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x258b54) {
            ctx->pc = 0x258B88u;
            goto label_258b88;
        }
    }
    ctx->pc = 0x258B5Cu;
    // 0x258b5c: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x258b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x258b60: 0xc7838a74  lwc1        $f3, -0x758C($gp)
    ctx->pc = 0x258b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x258b64: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x258b64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x258b68: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x258b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x258b6c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x258b6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x258b70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x258b70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x258b74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x258b74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x258b78: 0xc7818a78  lwc1        $f1, -0x7588($gp)
    ctx->pc = 0x258b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258b7c: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x258B7Cu;
    {
        const bool branch_taken_0x258b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258B7Cu;
        // 0x258b80: 0x46030002  mul.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x258b7c) {
            ctx->pc = 0x258CF8u;
            goto label_258cf8;
        }
    }
    ctx->pc = 0x258B84u;
    // 0x258b84: 0x0  nop
    ctx->pc = 0x258b84u;
    // NOP
label_258b88:
    // 0x258b88: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x258B88u;
    {
        const bool branch_taken_0x258b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258B88u;
        // 0x258b8c: 0x28821388  slti        $v0, $a0, 0x1388 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x258b88) {
            ctx->pc = 0x258BB8u;
            goto label_258bb8;
        }
    }
    ctx->pc = 0x258B90u;
    // 0x258b90: 0x24020bb8  addiu       $v0, $zero, 0xBB8
    ctx->pc = 0x258b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    // 0x258b94: 0xc7838a7c  lwc1        $f3, -0x7584($gp)
    ctx->pc = 0x258b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x258b98: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x258b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x258b9c: 0x3c0144fa  lui         $at, 0x44FA
    ctx->pc = 0x258b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17658 << 16));
    // 0x258ba0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x258ba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x258ba4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x258ba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x258ba8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x258ba8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x258bac: 0xc7818a80  lwc1        $f1, -0x7580($gp)
    ctx->pc = 0x258bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258bb0: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x258BB0u;
    {
        const bool branch_taken_0x258bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258BB0u;
        // 0x258bb4: 0x46030002  mul.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x258bb0) {
            ctx->pc = 0x258CF8u;
            goto label_258cf8;
        }
    }
    ctx->pc = 0x258BB8u;
label_258bb8:
    // 0x258bb8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x258BB8u;
    {
        const bool branch_taken_0x258bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258BB8u;
        // 0x258bbc: 0x24022710  addiu       $v0, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258bb8) {
            ctx->pc = 0x258BE8u;
            goto label_258be8;
        }
    }
    ctx->pc = 0x258BC0u;
    // 0x258bc0: 0x24021388  addiu       $v0, $zero, 0x1388
    ctx->pc = 0x258bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
    // 0x258bc4: 0xc7838a84  lwc1        $f3, -0x757C($gp)
    ctx->pc = 0x258bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x258bc8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x258bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x258bcc: 0x3c0144fa  lui         $at, 0x44FA
    ctx->pc = 0x258bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17658 << 16));
    // 0x258bd0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x258bd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x258bd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x258bd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x258bd8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x258bd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x258bdc: 0xc7818a88  lwc1        $f1, -0x7578($gp)
    ctx->pc = 0x258bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258be0: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x258BE0u;
    {
        const bool branch_taken_0x258be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258BE0u;
        // 0x258be4: 0x46030002  mul.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x258be0) {
            ctx->pc = 0x258CF8u;
            goto label_258cf8;
        }
    }
    ctx->pc = 0x258BE8u;
label_258be8:
    // 0x258be8: 0xc7838a8c  lwc1        $f3, -0x7574($gp)
    ctx->pc = 0x258be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x258bec: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x258becu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x258bf0: 0xc7828a90  lwc1        $f2, -0x7570($gp)
    ctx->pc = 0x258bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x258bf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x258bf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x258bf8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x258bf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x258bfc: 0xc7818a94  lwc1        $f1, -0x756C($gp)
    ctx->pc = 0x258bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258c00: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x258C00u;
    {
        const bool branch_taken_0x258c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C00u;
        // 0x258c04: 0x46030002  mul.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x258c00) {
            ctx->pc = 0x258CF8u;
            goto label_258cf8;
        }
    }
    ctx->pc = 0x258C08u;
label_258c08:
    // 0x258c08: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x258C08u;
    {
        const bool branch_taken_0x258c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C08u;
        // 0x258c0c: 0x28827530  slti        $v0, $a0, 0x7530 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)30000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x258c08) {
            ctx->pc = 0x258C38u;
            goto label_258c38;
        }
    }
    ctx->pc = 0x258C10u;
    // 0x258c10: 0x24024e20  addiu       $v0, $zero, 0x4E20
    ctx->pc = 0x258c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20000));
    // 0x258c14: 0xc7838a98  lwc1        $f3, -0x7568($gp)
    ctx->pc = 0x258c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x258c18: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x258c18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x258c1c: 0xc7828a9c  lwc1        $f2, -0x7564($gp)
    ctx->pc = 0x258c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x258c20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x258c20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x258c24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x258c24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x258c28: 0xc7818aa0  lwc1        $f1, -0x7560($gp)
    ctx->pc = 0x258c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258c2c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x258C2Cu;
    {
        const bool branch_taken_0x258c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C2Cu;
        // 0x258c30: 0x46030002  mul.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x258c2c) {
            ctx->pc = 0x258CF8u;
            goto label_258cf8;
        }
    }
    ctx->pc = 0x258C34u;
    // 0x258c34: 0x0  nop
    ctx->pc = 0x258c34u;
    // NOP
label_258c38:
    // 0x258c38: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x258C38u;
    {
        const bool branch_taken_0x258c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C38u;
        // 0x258c3c: 0x34029c3f  ori         $v0, $zero, 0x9C3F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39999);
        ctx->in_delay_slot = false;
        if (branch_taken_0x258c38) {
            ctx->pc = 0x258C68u;
            goto label_258c68;
        }
    }
    ctx->pc = 0x258C40u;
    // 0x258c40: 0x24027530  addiu       $v0, $zero, 0x7530
    ctx->pc = 0x258c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
    // 0x258c44: 0xc7838aa4  lwc1        $f3, -0x755C($gp)
    ctx->pc = 0x258c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x258c48: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x258c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x258c4c: 0xc7828aa8  lwc1        $f2, -0x7558($gp)
    ctx->pc = 0x258c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x258c50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x258c50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x258c54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x258c54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x258c58: 0xc7818aac  lwc1        $f1, -0x7554($gp)
    ctx->pc = 0x258c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258c5c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x258C5Cu;
    {
        const bool branch_taken_0x258c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C5Cu;
        // 0x258c60: 0x46030002  mul.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x258c5c) {
            ctx->pc = 0x258CF8u;
            goto label_258cf8;
        }
    }
    ctx->pc = 0x258C64u;
    // 0x258c64: 0x0  nop
    ctx->pc = 0x258c64u;
    // NOP
label_258c68:
    // 0x258c68: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x258c68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x258c6c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x258C6Cu;
    {
        const bool branch_taken_0x258c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C6Cu;
        // 0x258c70: 0x3402c34f  ori         $v0, $zero, 0xC34F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49999);
        ctx->in_delay_slot = false;
        if (branch_taken_0x258c6c) {
            ctx->pc = 0x258C98u;
            goto label_258c98;
        }
    }
    ctx->pc = 0x258C74u;
    // 0x258c74: 0x34029c40  ori         $v0, $zero, 0x9C40
    ctx->pc = 0x258c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40000);
    // 0x258c78: 0xc7838ab0  lwc1        $f3, -0x7550($gp)
    ctx->pc = 0x258c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x258c7c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x258c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x258c80: 0xc7828ab4  lwc1        $f2, -0x754C($gp)
    ctx->pc = 0x258c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x258c84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x258c84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x258c88: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x258c88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x258c8c: 0xc7818ab8  lwc1        $f1, -0x7548($gp)
    ctx->pc = 0x258c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258c90: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x258C90u;
    {
        const bool branch_taken_0x258c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C90u;
        // 0x258c94: 0x46030002  mul.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x258c90) {
            ctx->pc = 0x258CF8u;
            goto label_258cf8;
        }
    }
    ctx->pc = 0x258C98u;
label_258c98:
    // 0x258c98: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x258c98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x258c9c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x258C9Cu;
    {
        const bool branch_taken_0x258c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C9Cu;
        // 0x258ca0: 0x3c020003  lui         $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258c9c) {
            ctx->pc = 0x258CC8u;
            goto label_258cc8;
        }
    }
    ctx->pc = 0x258CA4u;
    // 0x258ca4: 0x3402c350  ori         $v0, $zero, 0xC350
    ctx->pc = 0x258ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
    // 0x258ca8: 0xc7838abc  lwc1        $f3, -0x7544($gp)
    ctx->pc = 0x258ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x258cac: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x258cacu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x258cb0: 0xc7828ac0  lwc1        $f2, -0x7540($gp)
    ctx->pc = 0x258cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x258cb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x258cb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x258cb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x258cb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x258cbc: 0xc7818ac4  lwc1        $f1, -0x753C($gp)
    ctx->pc = 0x258cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258cc0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x258CC0u;
    {
        const bool branch_taken_0x258cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258CC0u;
        // 0x258cc4: 0x46030002  mul.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x258cc0) {
            ctx->pc = 0x258CF8u;
            goto label_258cf8;
        }
    }
    ctx->pc = 0x258CC8u;
label_258cc8:
    // 0x258cc8: 0x34420d3f  ori         $v0, $v0, 0xD3F
    ctx->pc = 0x258cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3391);
    // 0x258ccc: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x258cccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x258cd0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x258CD0u;
    {
        const bool branch_taken_0x258cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258CD0u;
        // 0x258cd4: 0x3c020003  lui         $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258cd0) {
            ctx->pc = 0x258D10u;
            goto label_258d10;
        }
    }
    ctx->pc = 0x258CD8u;
    // 0x258cd8: 0xc7838ac8  lwc1        $f3, -0x7538($gp)
    ctx->pc = 0x258cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x258cdc: 0x34420d40  ori         $v0, $v0, 0xD40
    ctx->pc = 0x258cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3392);
    // 0x258ce0: 0xc7828acc  lwc1        $f2, -0x7534($gp)
    ctx->pc = 0x258ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x258ce4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x258ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x258ce8: 0xc7818ad0  lwc1        $f1, -0x7530($gp)
    ctx->pc = 0x258ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258cec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x258cecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x258cf0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x258cf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x258cf4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x258cf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_258cf8:
    // 0x258cf8: 0x0  nop
    ctx->pc = 0x258cf8u;
    // NOP
    // 0x258cfc: 0x0  nop
    ctx->pc = 0x258cfcu;
    // NOP
    // 0x258d00: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x258d00u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x258d04: 0x3e00008  jr          $ra
    ctx->pc = 0x258D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258D04u;
        // 0x258d08: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258D0Cu;
    // 0x258d0c: 0x0  nop
    ctx->pc = 0x258d0cu;
    // NOP
label_258d10:
    // 0x258d10: 0xc7808ad4  lwc1        $f0, -0x752C($gp)
    ctx->pc = 0x258d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258d14:
    // 0x258d14: 0x3e00008  jr          $ra
    ctx->pc = 0x258D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258D1Cu;
    // 0x258d1c: 0x0  nop
    ctx->pc = 0x258d1cu;
    // NOP
    ctx->pc = 0x258d20u;
}
