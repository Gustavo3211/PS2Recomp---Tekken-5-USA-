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

// Function: sub_002B2F10
// Address: 0x2b2f10 - 0x2b3068
void sub_002B2F10_0x2b2f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2F10_0x2b2f10");
#endif

    switch (ctx->pc) {
        case 0x2b2ff8u: goto label_2b2ff8;
        case 0x2b3004u: goto label_2b3004;
        case 0x2b303cu: goto label_2b303c;
        default: break;
    }

    ctx->pc = 0x2b2f10u;

    // 0x2b2f10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b2f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b2f14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b2f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b2f18: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2b2f18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b2f1c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b2f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b2f20: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2b2f20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2f24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b2f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b2f28: 0x2405f00f  addiu       $a1, $zero, -0xFF1
    ctx->pc = 0x2b2f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963215));
    // 0x2b2f2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b2f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b2f30: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2b2f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2b2f34: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2b2f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2b2f38: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2b2f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2b2f3c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2b2f3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2b2f40: 0x8e510008  lw          $s1, 0x8($s2)
    ctx->pc = 0x2b2f40u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2b2f44: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x2b2f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b2f48: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x2b2f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b2f4c: 0xc6420038  lwc1        $f2, 0x38($s2)
    ctx->pc = 0x2b2f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b2f50: 0x86460002  lh          $a2, 0x2($s2)
    ctx->pc = 0x2b2f50u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2b2f54: 0xe6210044  swc1        $f1, 0x44($s1)
    ctx->pc = 0x2b2f54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x2b2f58: 0xe6200040  swc1        $f0, 0x40($s1)
    ctx->pc = 0x2b2f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
    // 0x2b2f5c: 0xe6220048  swc1        $f2, 0x48($s1)
    ctx->pc = 0x2b2f5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    // 0x2b2f60: 0xe623004c  swc1        $f3, 0x4C($s1)
    ctx->pc = 0x2b2f60u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x2b2f64: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2b2f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2b2f68: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2b2f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2b2f6c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2b2f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2b2f70: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2b2f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2b2f74: 0x30630ff0  andi        $v1, $v1, 0xFF0
    ctx->pc = 0x2b2f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4080);
    // 0x2b2f78: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2b2f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x2b2f7c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b2f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b2f80: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2b2f80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x2b2f84: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x2b2f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b2f88: 0xc4b40000  lwc1        $f20, 0x0($a1)
    ctx->pc = 0x2b2f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b2f8c: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x2b2f8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x2b2f90: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2b2f90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2b2f94: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b2f94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b2f98: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2b2f98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2b2f9c: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x2b2f9cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b2fa0: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B2FA0u;
    {
        const bool branch_taken_0x2b2fa0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b2fa0) {
            ctx->pc = 0x2B2FA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2FA0u;
            // 0x2b2fa4: 0xae22005c  sw          $v0, 0x5C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2FA8u;
            goto label_2b2fa8;
        }
    }
    ctx->pc = 0x2B2FA8u;
label_2b2fa8:
    // 0x2b2fa8: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x2b2fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2b2fac: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x2b2facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2b2fb0: 0x3c14003c  lui         $s4, 0x3C
    ctx->pc = 0x2b2fb0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
    // 0x2b2fb4: 0x2694cde0  addiu       $s4, $s4, -0x3220
    ctx->pc = 0x2b2fb4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294954464));
    // 0x2b2fb8: 0x284a021  addu        $s4, $s4, $a0
    ctx->pc = 0x2b2fb8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2b2fbc: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2b2fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2b2fc0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b2fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b2fc4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B2FC4u;
    {
        const bool branch_taken_0x2b2fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2FC4u;
        // 0x2b2fc8: 0x911021  addu        $v0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2fc4) {
            ctx->pc = 0x2B2FE8u;
            goto label_2b2fe8;
        }
    }
    ctx->pc = 0x2B2FCCu;
    // 0x2b2fcc: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x2b2fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x2b2fd0: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x2b2fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x2b2fd4: 0xe4740004  swc1        $f20, 0x4($v1)
    ctx->pc = 0x2b2fd4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2b2fd8: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x2b2fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b2fdc: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2b2fdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2b2fe0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2B2FE0u;
    {
        const bool branch_taken_0x2b2fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2FE0u;
        // 0x2b2fe4: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2fe0) {
            ctx->pc = 0x2B3040u;
            goto label_2b3040;
        }
    }
    ctx->pc = 0x2B2FE8u;
label_2b2fe8:
    // 0x2b2fe8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b2fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b2fec: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2b2fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2b2ff0: 0xc0aa626  jal         func_2A9898
    ctx->pc = 0x2B2FF0u;
    SET_GPR_U32(ctx, 31, 0x2B2FF8u);
    ctx->pc = 0x2B2FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2FF0u;
    // 0x2b2ff4: 0x24530064  addiu       $s3, $v0, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9898u, 0x2B2FF0u, 0x2B2FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2FF8u;
label_2b2ff8:
    // 0x2b2ff8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b2ff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2ffc: 0xc0aa622  jal         func_2A9888
    ctx->pc = 0x2B2FFCu;
    SET_GPR_U32(ctx, 31, 0x2B3004u);
    ctx->pc = 0x2B3000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2FFCu;
    // 0x2b3000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9888u, 0x2B2FFCu, 0x2B3004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3004u;
label_2b3004:
    // 0x2b3004: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x2b3004u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x2b3008: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x2b3008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x2b300c: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x2b300cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2b3010: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x2b3010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b3014: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2b3014u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2b3018: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2b3018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2b301c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2b301cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2b3020: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x2b3020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2b3024: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b3024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b3028: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B3028u;
    {
        const bool branch_taken_0x2b3028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B302Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3028u;
        // 0x2b302c: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3028) {
            ctx->pc = 0x2B3040u;
            goto label_2b3040;
        }
    }
    ctx->pc = 0x2B3030u;
    // 0x2b3030: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2b3030u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2b3034: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2B3034u;
    SET_GPR_U32(ctx, 31, 0x2B303Cu);
    ctx->pc = 0x2B3038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3034u;
    // 0x2b3038: 0x248401b8  addiu       $a0, $a0, 0x1B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2B3034u, 0x2B303Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B303Cu;
label_2b303c:
    // 0x2b303c: 0x0  nop
    ctx->pc = 0x2b303cu;
    // NOP
label_2b3040:
    // 0x2b3040: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b3040u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3044: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b3044u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b3048: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b3048u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b304c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b304cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3050: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2b3050u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b3054: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2b3054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b3058: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2b3058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b305c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B305Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B305Cu;
        // 0x2b3060: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B305Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3064u;
    // 0x2b3064: 0x0  nop
    ctx->pc = 0x2b3064u;
    // NOP
    ctx->pc = 0x2b3068u;
}
