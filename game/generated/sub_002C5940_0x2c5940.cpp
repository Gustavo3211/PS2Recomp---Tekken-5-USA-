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

// Function: sub_002C5940
// Address: 0x2c5940 - 0x2c5c08
void sub_002C5940_0x2c5940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5940_0x2c5940");
#endif

    switch (ctx->pc) {
        case 0x2c59b4u: goto label_2c59b4;
        case 0x2c5afcu: goto label_2c5afc;
        default: break;
    }

    ctx->pc = 0x2c5940u;

    // 0x2c5940: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c5940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c5944: 0xc7809330  lwc1        $f0, -0x6CD0($gp)
    ctx->pc = 0x2c5944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5948: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c5948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2c594c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c594cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5950: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2c5950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2c5954: 0x26110720  addiu       $s1, $s0, 0x720
    ctx->pc = 0x2c5954u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1824));
    // 0x2c5958: 0xe7b60038  swc1        $f22, 0x38($sp)
    ctx->pc = 0x2c5958u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2c595c: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x2c595cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x2c5960: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x2c5960u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c5964: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c5964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5968: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x2c5968u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2c596c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c596cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c5970: 0x8606000c  lh          $a2, 0xC($s0)
    ctx->pc = 0x2c5970u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2c5974: 0x8602007a  lh          $v0, 0x7A($s0)
    ctx->pc = 0x2c5974u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 122)));
    // 0x2c5978: 0x86030010  lh          $v1, 0x10($s0)
    ctx->pc = 0x2c5978u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2c597c: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x2c597cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c5980: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c5980u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c5984: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2c5984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2c5988: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2c5988u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2c598c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2c598cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5990: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c5990u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c5994: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c5994u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c5998: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2c5998u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c599c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2c599cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2c59a0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c59a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c59a4: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2c59a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c59a8: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x2c59a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2c59ac: 0xc0b74c8  jal         func_2DD320
    ctx->pc = 0x2C59ACu;
    SET_GPR_U32(ctx, 31, 0x2C59B4u);
    ctx->pc = 0x2C59B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C59ACu;
    // 0x2c59b0: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD320u, 0x2C59ACu, 0x2C59B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C59B4u;
label_2c59b4:
    // 0x2c59b4: 0x8e0207c8  lw          $v0, 0x7C8($s0)
    ctx->pc = 0x2c59b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1992)));
    // 0x2c59b8: 0xc6160030  lwc1        $f22, 0x30($s0)
    ctx->pc = 0x2c59b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2c59bc: 0xc6140034  lwc1        $f20, 0x34($s0)
    ctx->pc = 0x2c59bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c59c0: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2C59C0u;
    {
        const bool branch_taken_0x2c59c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C59C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C59C0u;
        // 0x2c59c4: 0xc6150038  lwc1        $f21, 0x38($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c59c0) {
            ctx->pc = 0x2C5A68u;
            goto label_2c5a68;
        }
    }
    ctx->pc = 0x2C59C8u;
    // 0x2c59c8: 0x8e0207fc  lw          $v0, 0x7FC($s0)
    ctx->pc = 0x2c59c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2044)));
    // 0x2c59cc: 0x18400026  blez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2C59CCu;
    {
        const bool branch_taken_0x2c59cc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C59D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C59CCu;
        // 0x2c59d0: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c59cc) {
            ctx->pc = 0x2C5A68u;
            goto label_2c5a68;
        }
    }
    ctx->pc = 0x2C59D4u;
    // 0x2c59d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c59d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c59d8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c59d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c59dc: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x2c59dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x2c59e0: 0xc6000804  lwc1        $f0, 0x804($s0)
    ctx->pc = 0x2c59e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c59e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c59e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c59e8: 0x0  nop
    ctx->pc = 0x2c59e8u;
    // NOP
    // 0x2c59ec: 0x0  nop
    ctx->pc = 0x2c59ecu;
    // NOP
    // 0x2c59f0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2c59f0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2c59f4: 0xe60007f0  swc1        $f0, 0x7F0($s0)
    ctx->pc = 0x2c59f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2032), bits); }
    // 0x2c59f8: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x2c59f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x2c59fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c59fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2c5a00: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C5A00u;
    {
        const bool branch_taken_0x2c5a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5a00) {
            ctx->pc = 0x2C5A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5A00u;
            // 0x2c5a04: 0x960202f6  lhu         $v0, 0x2F6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5A10u;
            goto label_2c5a10;
        }
    }
    ctx->pc = 0x2C5A08u;
    // 0x2c5a08: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C5A08u;
    {
        const bool branch_taken_0x2c5a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5A08u;
        // 0x2c5a0c: 0xae0007e4  sw          $zero, 0x7E4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2020), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5a08) {
            ctx->pc = 0x2C5A24u;
            goto label_2c5a24;
        }
    }
    ctx->pc = 0x2C5A10u;
label_2c5a10:
    // 0x2c5a10: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C5A10u;
    {
        const bool branch_taken_0x2c5a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5a10) {
            ctx->pc = 0x2C5A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5A10u;
            // 0x2c5a14: 0xc60107f0  lwc1        $f1, 0x7F0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5A28u;
            goto label_2c5a28;
        }
    }
    ctx->pc = 0x2C5A18u;
    // 0x2c5a18: 0xae0007e0  sw          $zero, 0x7E0($s0)
    ctx->pc = 0x2c5a18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2016), GPR_U32(ctx, 0));
    // 0x2c5a1c: 0xae0007e4  sw          $zero, 0x7E4($s0)
    ctx->pc = 0x2c5a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2020), GPR_U32(ctx, 0));
    // 0x2c5a20: 0xae0007e8  sw          $zero, 0x7E8($s0)
    ctx->pc = 0x2c5a20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2024), GPR_U32(ctx, 0));
label_2c5a24:
    // 0x2c5a24: 0xc60107f0  lwc1        $f1, 0x7F0($s0)
    ctx->pc = 0x2c5a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c5a28:
    // 0x2c5a28: 0xc60007e0  lwc1        $f0, 0x7E0($s0)
    ctx->pc = 0x2c5a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5a2c: 0xc60207e4  lwc1        $f2, 0x7E4($s0)
    ctx->pc = 0x2c5a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c5a30: 0xc60307e8  lwc1        $f3, 0x7E8($s0)
    ctx->pc = 0x2c5a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c5a34: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c5a34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c5a38: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2c5a38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2c5a3c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2c5a3cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2c5a40: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x2c5a40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x2c5a44: 0x46141080  add.s       $f2, $f2, $f20
    ctx->pc = 0x2c5a44u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[20]);
    // 0x2c5a48: 0x461518c0  add.s       $f3, $f3, $f21
    ctx->pc = 0x2c5a48u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[21]);
    // 0x2c5a4c: 0xe60007b0  swc1        $f0, 0x7B0($s0)
    ctx->pc = 0x2c5a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1968), bits); }
    // 0x2c5a50: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2c5a50u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x2c5a54: 0xe60207b4  swc1        $f2, 0x7B4($s0)
    ctx->pc = 0x2c5a54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1972), bits); }
    // 0x2c5a58: 0x46001506  mov.s       $f20, $f2
    ctx->pc = 0x2c5a58u;
    ctx->f[20] = FPU_MOV_S(ctx->f[2]);
    // 0x2c5a5c: 0xe60307b8  swc1        $f3, 0x7B8($s0)
    ctx->pc = 0x2c5a5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1976), bits); }
    // 0x2c5a60: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C5A60u;
    {
        const bool branch_taken_0x2c5a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5A60u;
        // 0x2c5a64: 0x46001d46  mov.s       $f21, $f3 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5a60) {
            ctx->pc = 0x2C5A80u;
            goto label_2c5a80;
        }
    }
    ctx->pc = 0x2C5A68u;
label_2c5a68:
    // 0x2c5a68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c5a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c5a6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c5a6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5a70: 0xe61607b0  swc1        $f22, 0x7B0($s0)
    ctx->pc = 0x2c5a70u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1968), bits); }
    // 0x2c5a74: 0xe60007f0  swc1        $f0, 0x7F0($s0)
    ctx->pc = 0x2c5a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2032), bits); }
    // 0x2c5a78: 0xe61407b4  swc1        $f20, 0x7B4($s0)
    ctx->pc = 0x2c5a78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1972), bits); }
    // 0x2c5a7c: 0xe61507b8  swc1        $f21, 0x7B8($s0)
    ctx->pc = 0x2c5a7cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1976), bits); }
label_2c5a80:
    // 0x2c5a80: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2c5a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5a84: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x2c5a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2c5a88: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x2c5a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x2c5a8c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2c5a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5a90: 0xe6010018  swc1        $f1, 0x18($s0)
    ctx->pc = 0x2c5a90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2c5a94: 0xe6210034  swc1        $f1, 0x34($s1)
    ctx->pc = 0x2c5a94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x2c5a98: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2c5a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5a9c: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x2c5a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x2c5aa0: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x2c5aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x2c5aa4: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x2c5aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2c5aa8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2C5AA8u;
    {
        const bool branch_taken_0x2c5aa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5AA8u;
        // 0x2c5aac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5aa8) {
            ctx->pc = 0x2C5AD8u;
            goto label_2c5ad8;
        }
    }
    ctx->pc = 0x2C5AB0u;
    // 0x2c5ab0: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x2c5ab0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2c5ab4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C5AB4u;
    {
        const bool branch_taken_0x2c5ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5AB4u;
        // 0x2c5ab8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5ab4) {
            ctx->pc = 0x2C5AD8u;
            goto label_2c5ad8;
        }
    }
    ctx->pc = 0x2C5ABCu;
    // 0x2c5abc: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x2c5abcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2c5ac0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C5AC0u;
    {
        const bool branch_taken_0x2c5ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5AC0u;
        // 0x2c5ac4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5ac0) {
            ctx->pc = 0x2C5AD8u;
            goto label_2c5ad8;
        }
    }
    ctx->pc = 0x2C5AC8u;
    // 0x2c5ac8: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x2c5ac8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2c5acc: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C5ACCu;
    {
        const bool branch_taken_0x2c5acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5acc) {
            ctx->pc = 0x2C5AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5ACCu;
            // 0x2c5ad0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5AD8u;
            goto label_2c5ad8;
        }
    }
    ctx->pc = 0x2C5AD4u;
    // 0x2c5ad4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c5ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c5ad8:
    // 0x2c5ad8: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2C5AD8u;
    {
        const bool branch_taken_0x2c5ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5AD8u;
        // 0x2c5adc: 0x9203019a  lbu         $v1, 0x19A($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 410)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5ad8) {
            ctx->pc = 0x2C5BA0u;
            goto label_2c5ba0;
        }
    }
    ctx->pc = 0x2C5AE0u;
    // 0x2c5ae0: 0x5460003b  bnel        $v1, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x2C5AE0u;
    {
        const bool branch_taken_0x2c5ae0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5ae0) {
            ctx->pc = 0x2C5AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5AE0u;
            // 0x2c5ae4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5BD0u;
            goto label_2c5bd0;
        }
    }
    ctx->pc = 0x2C5AE8u;
    // 0x2c5ae8: 0x8606000e  lh          $a2, 0xE($s0)
    ctx->pc = 0x2c5ae8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x2c5aec: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x2c5aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x2c5af0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c5af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5af4: 0xc0b73fc  jal         func_2DCFF0
    ctx->pc = 0x2C5AF4u;
    SET_GPR_U32(ctx, 31, 0x2C5AFCu);
    ctx->pc = 0x2C5AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5AF4u;
    // 0x2c5af8: 0x63023  negu        $a2, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCFF0u, 0x2C5AF4u, 0x2C5AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5AFCu;
label_2c5afc:
    // 0x2c5afc: 0xc6040024  lwc1        $f4, 0x24($s0)
    ctx->pc = 0x2c5afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c5b00: 0xc606002c  lwc1        $f6, 0x2C($s0)
    ctx->pc = 0x2c5b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c5b04: 0x4604b140  add.s       $f5, $f22, $f4
    ctx->pc = 0x2c5b04u;
    ctx->f[5] = FPU_ADD_S(ctx->f[22], ctx->f[4]);
    // 0x2c5b08: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2c5b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c5b0c: 0x4606a8c0  add.s       $f3, $f21, $f6
    ctx->pc = 0x2c5b0cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[21], ctx->f[6]);
    // 0x2c5b10: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2c5b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5b14: 0xc6290030  lwc1        $f9, 0x30($s1)
    ctx->pc = 0x2c5b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2c5b18: 0x460222c2  mul.s       $f11, $f4, $f2
    ctx->pc = 0x2c5b18u;
    ctx->f[11] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2c5b1c: 0x46003302  mul.s       $f12, $f6, $f0
    ctx->pc = 0x2c5b1cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2c5b20: 0xc62a0034  lwc1        $f10, 0x34($s1)
    ctx->pc = 0x2c5b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2c5b24: 0x46002842  mul.s       $f1, $f5, $f0
    ctx->pc = 0x2c5b24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2c5b28: 0xc6270038  lwc1        $f7, 0x38($s1)
    ctx->pc = 0x2c5b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2c5b2c: 0x46021a02  mul.s       $f8, $f3, $f2
    ctx->pc = 0x2c5b2cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2c5b30: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x2c5b30u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2c5b34: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2c5b34u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2c5b38: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2c5b38u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2c5b3c: 0x46080840  add.s       $f1, $f1, $f8
    ctx->pc = 0x2c5b3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
    // 0x2c5b40: 0x46023182  mul.s       $f6, $f6, $f2
    ctx->pc = 0x2c5b40u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x2c5b44: 0x46032941  sub.s       $f5, $f5, $f3
    ctx->pc = 0x2c5b44u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x2c5b48: 0x460c5ac1  sub.s       $f11, $f11, $f12
    ctx->pc = 0x2c5b48u;
    ctx->f[11] = FPU_SUB_S(ctx->f[11], ctx->f[12]);
    // 0x2c5b4c: 0x46014a40  add.s       $f9, $f9, $f1
    ctx->pc = 0x2c5b4cu;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[1]);
    // 0x2c5b50: 0x46062100  add.s       $f4, $f4, $f6
    ctx->pc = 0x2c5b50u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x2c5b54: 0x460539c0  add.s       $f7, $f7, $f5
    ctx->pc = 0x2c5b54u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[5]);
    // 0x2c5b58: 0xe6290030  swc1        $f9, 0x30($s1)
    ctx->pc = 0x2c5b58u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x2c5b5c: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x2c5b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5b60: 0xe6270038  swc1        $f7, 0x38($s1)
    ctx->pc = 0x2c5b60u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x2c5b64: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2c5b64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2c5b68: 0x46005280  add.s       $f10, $f10, $f0
    ctx->pc = 0x2c5b68u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[0]);
    // 0x2c5b6c: 0xe62a0034  swc1        $f10, 0x34($s1)
    ctx->pc = 0x2c5b6cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x2c5b70: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x2c5b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5b74: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x2c5b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c5b78: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x2c5b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5b7c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2c5b7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2c5b80: 0xc6030028  lwc1        $f3, 0x28($s0)
    ctx->pc = 0x2c5b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c5b84: 0x460b0000  add.s       $f0, $f0, $f11
    ctx->pc = 0x2c5b84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[11]);
    // 0x2c5b88: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2c5b88u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2c5b8c: 0xe6010014  swc1        $f1, 0x14($s0)
    ctx->pc = 0x2c5b8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2c5b90: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x2c5b90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x2c5b94: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2C5B94u;
    {
        const bool branch_taken_0x2c5b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5B94u;
        // 0x2c5b98: 0xe6020018  swc1        $f2, 0x18($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5b94) {
            ctx->pc = 0x2C5BE4u;
            goto label_2c5be4;
        }
    }
    ctx->pc = 0x2C5B9Cu;
    // 0x2c5b9c: 0x0  nop
    ctx->pc = 0x2c5b9cu;
    // NOP
label_2c5ba0:
    // 0x2c5ba0: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2C5BA0u;
    {
        const bool branch_taken_0x2c5ba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5BA0u;
        // 0x2c5ba4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5ba0) {
            ctx->pc = 0x2C5BD0u;
            goto label_2c5bd0;
        }
    }
    ctx->pc = 0x2C5BA8u;
    // 0x2c5ba8: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x2c5ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5bac: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x2c5bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5bb0: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2c5bb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2c5bb4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2c5bb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c5bb8: 0xe6210034  swc1        $f1, 0x34($s1)
    ctx->pc = 0x2c5bb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x2c5bbc: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x2c5bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5bc0: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x2c5bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5bc4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c5bc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c5bc8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C5BC8u;
    {
        const bool branch_taken_0x2c5bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5BC8u;
        // 0x2c5bcc: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5bc8) {
            ctx->pc = 0x2C5BE4u;
            goto label_2c5be4;
        }
    }
    ctx->pc = 0x2C5BD0u;
label_2c5bd0:
    // 0x2c5bd0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C5BD0u;
    {
        const bool branch_taken_0x2c5bd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C5BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5BD0u;
        // 0x2c5bd4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5bd0) {
            ctx->pc = 0x2C5BE8u;
            goto label_2c5be8;
        }
    }
    ctx->pc = 0x2C5BD8u;
    // 0x2c5bd8: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x2c5bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5bdc: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2c5bdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2c5be0: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x2c5be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
label_2c5be4:
    // 0x2c5be4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c5be4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c5be8:
    // 0x2c5be8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2c5be8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c5bec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c5becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c5bf0: 0xc7b60038  lwc1        $f22, 0x38($sp)
    ctx->pc = 0x2c5bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2c5bf4: 0xc7b50030  lwc1        $f21, 0x30($sp)
    ctx->pc = 0x2c5bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c5bf8: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x2c5bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c5bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5BFCu;
        // 0x2c5c00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5C04u;
    // 0x2c5c04: 0x0  nop
    ctx->pc = 0x2c5c04u;
    // NOP
    ctx->pc = 0x2c5c08u;
}
