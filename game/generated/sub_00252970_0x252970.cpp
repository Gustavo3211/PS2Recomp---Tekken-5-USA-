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

// Function: sub_00252970
// Address: 0x252970 - 0x252b98
void sub_00252970_0x252970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252970_0x252970");
#endif

    switch (ctx->pc) {
        case 0x2529d4u: goto label_2529d4;
        case 0x252a60u: goto label_252a60;
        case 0x252aa8u: goto label_252aa8;
        default: break;
    }

    ctx->pc = 0x252970u;

    // 0x252970: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x252970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x252974: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x252974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x252978: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x252978u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25297c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x25297cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x252980: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x252980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x252984: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x252984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x252988: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x252988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25298c: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x25298cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x252990: 0x21783  sra         $v0, $v0, 30
    ctx->pc = 0x252990u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 30));
    // 0x252994: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x252994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x252998: 0x14400078  bnez        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x252998u;
    {
        const bool branch_taken_0x252998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252998u;
        // 0x25299c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252998) {
            ctx->pc = 0x252B7Cu;
            goto label_252b7c;
        }
    }
    ctx->pc = 0x2529A0u;
    // 0x2529a0: 0xc6010040  lwc1        $f1, 0x40($s0)
    ctx->pc = 0x2529a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2529a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2529a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2529a8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2529a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2529ac: 0x45030074  bc1tl       . + 4 + (0x74 << 2)
    ctx->pc = 0x2529ACu;
    {
        const bool branch_taken_0x2529ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2529ac) {
            ctx->pc = 0x2529B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2529ACu;
            // 0x2529b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252B80u;
            goto label_252b80;
        }
    }
    ctx->pc = 0x2529B4u;
    // 0x2529b4: 0xc6010044  lwc1        $f1, 0x44($s0)
    ctx->pc = 0x2529b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2529b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2529b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2529bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2529bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2529c0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2529c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2529c4: 0x4501006d  bc1t        . + 4 + (0x6D << 2)
    ctx->pc = 0x2529C4u;
    {
        const bool branch_taken_0x2529c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2529C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529C4u;
        // 0x2529c8: 0x3c057000  lui         $a1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2529c4) {
            ctx->pc = 0x252B7Cu;
            goto label_252b7c;
        }
    }
    ctx->pc = 0x2529CCu;
    // 0x2529cc: 0xc0948ea  jal         func_2523A8
    ctx->pc = 0x2529CCu;
    SET_GPR_U32(ctx, 31, 0x2529D4u);
    ctx->pc = 0x2529D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2529CCu;
    // 0x2529d0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2523A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2523A8u, 0x2529CCu, 0x2529D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2529D4u;
label_2529d4:
    // 0x2529d4: 0x2783c9f0  addiu       $v1, $gp, -0x3610
    ctx->pc = 0x2529d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953456));
    // 0x2529d8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2529d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2529dc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2529dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2529e0: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2529e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2529e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2529E4u;
    {
        const bool branch_taken_0x2529e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2529E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529E4u;
        // 0x2529e8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2529e4) {
            ctx->pc = 0x2529FCu;
            goto label_2529fc;
        }
    }
    ctx->pc = 0x2529ECu;
    // 0x2529ec: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x2529ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2529f0: 0x3c110017  lui         $s1, 0x17
    ctx->pc = 0x2529f0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)23 << 16));
    // 0x2529f4: 0x2631af00  addiu       $s1, $s1, -0x5100
    ctx->pc = 0x2529f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946560));
    // 0x2529f8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2529f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2529fc:
    // 0x2529fc: 0x1220005f  beqz        $s1, . + 4 + (0x5F << 2)
    ctx->pc = 0x2529FCu;
    {
        const bool branch_taken_0x2529fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x252A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529FCu;
        // 0x252a00: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2529fc) {
            ctx->pc = 0x252B7Cu;
            goto label_252b7c;
        }
    }
    ctx->pc = 0x252A04u;
    // 0x252a04: 0x9202005c  lbu         $v0, 0x5C($s0)
    ctx->pc = 0x252a04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x252a08: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x252a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x252a0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x252a0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x252a10: 0x34630050  ori         $v1, $v1, 0x50
    ctx->pc = 0x252a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)80);
    // 0x252a14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x252a14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252a18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x252a18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x252a1c: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x252a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x252a20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x252a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252a24: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x252a24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252a28: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x252a28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x252a2c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x252a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x252a30: 0x9202005d  lbu         $v0, 0x5D($s0)
    ctx->pc = 0x252a30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 93)));
    // 0x252a34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x252a34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252a38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x252a38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x252a3c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x252a3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x252a40: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x252a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x252a44: 0x9202005e  lbu         $v0, 0x5E($s0)
    ctx->pc = 0x252a44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 94)));
    // 0x252a48: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x252a48u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0)); // MMIO: 0x7000005c
    // 0x252a4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x252a4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252a50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x252a50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x252a54: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x252a54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x252a58: 0xc094896  jal         func_252258
    ctx->pc = 0x252A58u;
    SET_GPR_U32(ctx, 31, 0x252A60u);
    ctx->pc = 0x252A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252A58u;
    // 0x252a5c: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x252258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252258u, 0x252A58u, 0x252A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252A60u;
label_252a60:
    // 0x252a60: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x252a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x252a64: 0xc4200000  lwc1        $f0, 0x0($at)
    ctx->pc = 0x252a64u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000000u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252a68: 0xc78289bc  lwc1        $f2, -0x7644($gp)
    ctx->pc = 0x252a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x252a6c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x252a6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252a70: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x252a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x252a74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x252a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252a78: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x252a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x252a7c: 0xc4200004  lwc1        $f0, 0x4($at)
    ctx->pc = 0x252a7cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000004u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252a80: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x252a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x252a84: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x252a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x252a88: 0xc4210008  lwc1        $f1, 0x8($at)
    ctx->pc = 0x252a88u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000008u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252a8c: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x252a8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x252a90: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x252a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252a94: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x252a94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x252a98: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x252a98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x252a9c: 0xe621001c  swc1        $f1, 0x1C($s1)
    ctx->pc = 0x252a9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x252aa0: 0xc0948b8  jal         func_2522E0
    ctx->pc = 0x252AA0u;
    SET_GPR_U32(ctx, 31, 0x252AA8u);
    ctx->pc = 0x252AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252AA0u;
    // 0x252aa4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2522E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2522E0u, 0x252AA0u, 0x252AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252AA8u;
label_252aa8:
    // 0x252aa8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x252aa8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252aac: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x252aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x252ab0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x252AB0u;
    {
        const bool branch_taken_0x252ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x252ab0) {
            ctx->pc = 0x252AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252AB0u;
            // 0x252ab4: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252AD0u;
            goto label_252ad0;
        }
    }
    ctx->pc = 0x252AB8u;
    // 0x252ab8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x252ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x252abc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x252abcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252ac0: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x252ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x252ac4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x252AC4u;
    {
        const bool branch_taken_0x252ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252AC4u;
        // 0x252ac8: 0xe6200010  swc1        $f0, 0x10($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x252ac4) {
            ctx->pc = 0x252ADCu;
            goto label_252adc;
        }
    }
    ctx->pc = 0x252ACCu;
    // 0x252acc: 0x0  nop
    ctx->pc = 0x252accu;
    // NOP
label_252ad0:
    // 0x252ad0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x252ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x252ad4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x252ad4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252ad8: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x252ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_252adc:
    // 0x252adc: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x252adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x252ae0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x252AE0u;
    {
        const bool branch_taken_0x252ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x252ae0) {
            ctx->pc = 0x252AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252AE0u;
            // 0x252ae4: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252B00u;
            goto label_252b00;
        }
    }
    ctx->pc = 0x252AE8u;
    // 0x252ae8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x252ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x252aec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x252aecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252af0: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x252af0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x252af4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x252AF4u;
    {
        const bool branch_taken_0x252af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252AF4u;
        // 0x252af8: 0xe6200014  swc1        $f0, 0x14($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x252af4) {
            ctx->pc = 0x252B0Cu;
            goto label_252b0c;
        }
    }
    ctx->pc = 0x252AFCu;
    // 0x252afc: 0x0  nop
    ctx->pc = 0x252afcu;
    // NOP
label_252b00:
    // 0x252b00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x252b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x252b04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x252b04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252b08: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x252b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_252b0c:
    // 0x252b0c: 0x8602004e  lh          $v0, 0x4E($s0)
    ctx->pc = 0x252b0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 78)));
    // 0x252b10: 0x2785c9f0  addiu       $a1, $gp, -0x3610
    ctx->pc = 0x252b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953456));
    // 0x252b14: 0xc6030040  lwc1        $f3, 0x40($s0)
    ctx->pc = 0x252b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x252b18: 0x2784c9f8  addiu       $a0, $gp, -0x3608
    ctx->pc = 0x252b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953464));
    // 0x252b1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x252b1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252b20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x252b20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x252b24: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x252b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x252b28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x252b28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x252b2c: 0xc6020054  lwc1        $f2, 0x54($s0)
    ctx->pc = 0x252b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x252b30: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x252b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
    // 0x252b34: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x252b34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x252b38: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x252b38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x252b3c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x252b3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x252b40: 0x0  nop
    ctx->pc = 0x252b40u;
    // NOP
    // 0x252b44: 0x0  nop
    ctx->pc = 0x252b44u;
    // NOP
    // 0x252b48: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x252b48u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x252b4c: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x252b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x252b50: 0x8602005a  lh          $v0, 0x5A($s0)
    ctx->pc = 0x252b50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 90)));
    // 0x252b54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x252b54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252b58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x252b58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x252b5c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x252b5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x252b60: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x252b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x252b64: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x252b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x252b68: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x252b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x252b6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x252b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x252b70: 0xac920004  sw          $s2, 0x4($a0)
    ctx->pc = 0x252b70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 18));
    // 0x252b74: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x252b74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x252b78: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x252b78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_252b7c:
    // 0x252b7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x252b7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_252b80:
    // 0x252b80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x252b80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x252b84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x252b84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252b88: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x252b88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x252b8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x252b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252b90: 0x3e00008  jr          $ra
    ctx->pc = 0x252B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252B90u;
        // 0x252b94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252B98u;
}
