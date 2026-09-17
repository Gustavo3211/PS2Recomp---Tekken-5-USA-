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

// Function: sub_0029CF30
// Address: 0x29cf30 - 0x29d0d8
void sub_0029CF30_0x29cf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CF30_0x29cf30");
#endif

    switch (ctx->pc) {
        case 0x29cf88u: goto label_29cf88;
        case 0x29cf98u: goto label_29cf98;
        case 0x29cfb4u: goto label_29cfb4;
        case 0x29cfc8u: goto label_29cfc8;
        case 0x29cfe0u: goto label_29cfe0;
        case 0x29d03cu: goto label_29d03c;
        case 0x29d050u: goto label_29d050;
        case 0x29d07cu: goto label_29d07c;
        case 0x29d098u: goto label_29d098;
        default: break;
    }

    ctx->pc = 0x29cf30u;

    // 0x29cf30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x29cf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x29cf34: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x29cf34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x29cf38: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x29cf38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cf3c: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x29cf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x29cf40: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x29cf40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x29cf44: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x29cf44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x29cf48: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29cf48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cf4c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x29cf4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x29cf50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29cf50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cf54: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x29cf54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x29cf58: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x29cf58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cf5c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x29cf5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x29cf60: 0x3c140048  lui         $s4, 0x48
    ctx->pc = 0x29cf60u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)72 << 16));
    // 0x29cf64: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x29cf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x29cf68: 0x52a821  addu        $s5, $v0, $s2
    ctx->pc = 0x29cf68u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x29cf6c: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x29cf6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x29cf70: 0x3c160048  lui         $s6, 0x48
    ctx->pc = 0x29cf70u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)72 << 16));
    // 0x29cf74: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x29cf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x29cf78: 0x3c178000  lui         $s7, 0x8000
    ctx->pc = 0x29cf78u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)32768 << 16));
    // 0x29cf7c: 0xe7b40068  swc1        $f20, 0x68($sp)
    ctx->pc = 0x29cf7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x29cf80: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x29cf80u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x29cf84: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x29cf84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29cf88:
    // 0x29cf88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29cf88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cf8c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x29cf8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cf90: 0xc0a757c  jal         func_29D5F0
    ctx->pc = 0x29CF90u;
    SET_GPR_U32(ctx, 31, 0x29CF98u);
    ctx->pc = 0x29CF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CF90u;
    // 0x29cf94: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D5F0u, 0x29CF90u, 0x29CF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CF98u;
label_29cf98:
    // 0x29cf98: 0x2b01821  addu        $v1, $s5, $s0
    ctx->pc = 0x29cf98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x29cf9c: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x29CF9Cu;
    {
        const bool branch_taken_0x29cf9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CF9Cu;
        // 0x29cfa0: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cf9c) {
            ctx->pc = 0x29D098u;
            goto label_29d098;
        }
    }
    ctx->pc = 0x29CFA4u;
    // 0x29cfa4: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x29cfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x29cfa8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x29cfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29cfac: 0xc086346  jal         func_218D18
    ctx->pc = 0x29CFACu;
    SET_GPR_U32(ctx, 31, 0x29CFB4u);
    ctx->pc = 0x29CFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CFACu;
    // 0x29cfb0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218D18u, 0x29CFACu, 0x29CFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CFB4u;
label_29cfb4:
    // 0x29cfb4: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x29cfb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x29cfb8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29cfb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cfbc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x29cfbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cfc0: 0xc0cc3c8  jal         func_330F20
    ctx->pc = 0x29CFC0u;
    SET_GPR_U32(ctx, 31, 0x29CFC8u);
    ctx->pc = 0x29CFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CFC0u;
    // 0x29cfc4: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330F20u, 0x29CFC0u, 0x29CFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CFC8u;
label_29cfc8:
    // 0x29cfc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29cfc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cfcc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x29cfccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cfd0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x29cfd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cfd4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x29cfd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cfd8: 0xc0a754c  jal         func_29D530
    ctx->pc = 0x29CFD8u;
    SET_GPR_U32(ctx, 31, 0x29CFE0u);
    ctx->pc = 0x29CFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CFD8u;
    // 0x29cfdc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D530u, 0x29CFD8u, 0x29CFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CFE0u;
label_29cfe0:
    // 0x29cfe0: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x29cfe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x29cfe4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x29cfe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29cfe8: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x29cfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x29cfec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x29cfecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x29cff0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29cff0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cff4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x29cff4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29cff8: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x29cff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x29cffc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x29cffcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29d000: 0x2409006e  addiu       $t1, $zero, 0x6E
    ctx->pc = 0x29d000u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x29d004: 0x26c4c118  addiu       $a0, $s6, -0x3EE8
    ctx->pc = 0x29d004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294951192));
    // 0x29d008: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29d008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29d00c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29d00cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d010: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29d010u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x29d014: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x29d014u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x29d018: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x29D018u;
    {
        const bool branch_taken_0x29d018 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29D01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D018u;
        // 0x29d01c: 0x24070064  addiu       $a3, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d018) {
            ctx->pc = 0x29D030u;
            goto label_29d030;
        }
    }
    ctx->pc = 0x29D020u;
    // 0x29d020: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x29d020u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29d024: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29d024u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29d028: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x29d028u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x29d02c: 0xd73025  or          $a2, $a2, $s7
    ctx->pc = 0x29d02cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 23));
label_29d030:
    // 0x29d030: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x29d030u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x29d034: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x29D034u;
    SET_GPR_U32(ctx, 31, 0x29D03Cu);
    ctx->pc = 0x29D038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D034u;
    // 0x29d038: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x29D034u, 0x29D03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D03Cu;
label_29d03c:
    // 0x29d03c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29d03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d040: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x29d040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d044: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x29d044u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d048: 0xc0a7516  jal         func_29D458
    ctx->pc = 0x29D048u;
    SET_GPR_U32(ctx, 31, 0x29D050u);
    ctx->pc = 0x29D04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D048u;
    // 0x29d04c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D458u, 0x29D048u, 0x29D050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D050u;
label_29d050:
    // 0x29d050: 0x2684c360  addiu       $a0, $s4, -0x3CA0
    ctx->pc = 0x29d050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294951776));
    // 0x29d054: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x29d054u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x29d058: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29d058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29d05c: 0x240600d7  addiu       $a2, $zero, 0xD7
    ctx->pc = 0x29d05cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 215));
    // 0x29d060: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x29d060u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d064: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29d064u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29d068: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x29d068u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x29d06c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29D06Cu;
    {
        const bool branch_taken_0x29d06c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D06Cu;
        // 0x29d070: 0x244700f7  addiu       $a3, $v0, 0xF7 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 247));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d06c) {
            ctx->pc = 0x29D088u;
            goto label_29d088;
        }
    }
    ctx->pc = 0x29D074u;
    // 0x29d074: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x29D074u;
    SET_GPR_U32(ctx, 31, 0x29D07Cu);
    ctx->pc = 0x29D078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D074u;
    // 0x29d078: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x29D074u, 0x29D07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D07Cu;
label_29d07c:
    // 0x29d07c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29D07Cu;
    {
        const bool branch_taken_0x29d07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D07Cu;
        // 0x29d080: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d07c) {
            ctx->pc = 0x29D0A0u;
            goto label_29d0a0;
        }
    }
    ctx->pc = 0x29D084u;
    // 0x29d084: 0x0  nop
    ctx->pc = 0x29d084u;
    // NOP
label_29d088:
    // 0x29d088: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29d088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d08c: 0x240601ac  addiu       $a2, $zero, 0x1AC
    ctx->pc = 0x29d08cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 428));
    // 0x29d090: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x29D090u;
    SET_GPR_U32(ctx, 31, 0x29D098u);
    ctx->pc = 0x29D094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D090u;
    // 0x29d094: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x29D090u, 0x29D098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D098u;
label_29d098:
    // 0x29d098: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29d098u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x29d09c: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x29d09cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_29d0a0:
    // 0x29d0a0: 0x1440ffb9  bnez        $v0, . + 4 + (-0x47 << 2)
    ctx->pc = 0x29D0A0u;
    {
        const bool branch_taken_0x29d0a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D0A0u;
        // 0x29d0a4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d0a0) {
            ctx->pc = 0x29CF88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29cf88;
        }
    }
    ctx->pc = 0x29D0A8u;
    // 0x29d0a8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x29d0a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29d0ac: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x29d0acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29d0b0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x29d0b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29d0b4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x29d0b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d0b8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x29d0b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29d0bc: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x29d0bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x29d0c0: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x29d0c0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29d0c4: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x29d0c4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29d0c8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x29d0c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d0cc: 0xc7b40068  lwc1        $f20, 0x68($sp)
    ctx->pc = 0x29d0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29d0d0: 0x3e00008  jr          $ra
    ctx->pc = 0x29D0D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D0D0u;
        // 0x29d0d4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D0D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D0D8u;
}
