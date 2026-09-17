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

// Function: sub_00365AB8
// Address: 0x365ab8 - 0x366018
void sub_00365AB8_0x365ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00365AB8_0x365ab8");
#endif

    switch (ctx->pc) {
        case 0x365b0cu: goto label_365b0c;
        case 0x365b4cu: goto label_365b4c;
        case 0x365b54u: goto label_365b54;
        case 0x365b60u: goto label_365b60;
        case 0x365bc8u: goto label_365bc8;
        case 0x365bf0u: goto label_365bf0;
        case 0x365c24u: goto label_365c24;
        case 0x365c38u: goto label_365c38;
        case 0x365c60u: goto label_365c60;
        case 0x365c90u: goto label_365c90;
        case 0x365ca4u: goto label_365ca4;
        case 0x365cb8u: goto label_365cb8;
        case 0x365cf0u: goto label_365cf0;
        case 0x365d00u: goto label_365d00;
        case 0x365d3cu: goto label_365d3c;
        case 0x365d48u: goto label_365d48;
        case 0x365d58u: goto label_365d58;
        case 0x365d8cu: goto label_365d8c;
        case 0x365de0u: goto label_365de0;
        case 0x365e18u: goto label_365e18;
        case 0x365e4cu: goto label_365e4c;
        case 0x365e60u: goto label_365e60;
        case 0x365e90u: goto label_365e90;
        case 0x365ec0u: goto label_365ec0;
        case 0x365eecu: goto label_365eec;
        case 0x365f18u: goto label_365f18;
        case 0x365f4cu: goto label_365f4c;
        case 0x365f58u: goto label_365f58;
        case 0x365f80u: goto label_365f80;
        case 0x365fb0u: goto label_365fb0;
        case 0x365fc4u: goto label_365fc4;
        case 0x365fccu: goto label_365fcc;
        case 0x365fe0u: goto label_365fe0;
        case 0x365fe8u: goto label_365fe8;
        default: break;
    }

    ctx->pc = 0x365ab8u;

    // 0x365ab8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x365ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x365abc: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x365abcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x365ac0: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x365ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x365ac4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x365ac4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365ac8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x365ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365acc: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x365accu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x365ad0: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x365ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x365ad4: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x365ad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365ad8: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x365ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x365adc: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x365adcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365ae0: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x365ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x365ae4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x365ae4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365ae8: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x365ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x365aec: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x365aecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365af0: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x365af0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x365af4: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x365af4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x365af8: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x365af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x365afc: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x365afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x365b00: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x365b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x365b04: 0xc0d6062  jal         func_358188
    ctx->pc = 0x365B04u;
    SET_GPR_U32(ctx, 31, 0x365B0Cu);
    ctx->pc = 0x365B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365B04u;
    // 0x365b08: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x358188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358188u, 0x365B04u, 0x365B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365B0Cu;
label_365b0c:
    // 0x365b0c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x365b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x365b10: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x365b10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x365b14: 0x46140542  mul.s       $f21, $f0, $f20
    ctx->pc = 0x365b14u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x365b18: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x365b18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x365b1c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x365B1Cu;
    {
        const bool branch_taken_0x365b1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x365b1c) {
            ctx->pc = 0x365B20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x365B1Cu;
            // 0x365b20: 0x46000d46  mov.s       $f21, $f1 (Delay Slot)
            ctx->f[21] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x365B24u;
            goto label_365b24;
        }
    }
    ctx->pc = 0x365B24u;
label_365b24:
    // 0x365b24: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x365b24u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x365b28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x365b28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x365b2c: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x365b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x365b30: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x365b30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x365b34: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x365b34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x365b38: 0x0  nop
    ctx->pc = 0x365b38u;
    // NOP
    // 0x365b3c: 0x0  nop
    ctx->pc = 0x365b3cu;
    // NOP
    // 0x365b40: 0x46140543  div.s       $f21, $f0, $f20
    ctx->pc = 0x365b40u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[21] = ctx->f[0] / ctx->f[20];
    // 0x365b44: 0xc0d6312  jal         func_358C48
    ctx->pc = 0x365B44u;
    SET_GPR_U32(ctx, 31, 0x365B4Cu);
    ctx->pc = 0x358C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358C48u, 0x365B44u, 0x365B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365B4Cu;
label_365b4c:
    // 0x365b4c: 0xc0d6770  jal         func_359DC0
    ctx->pc = 0x365B4Cu;
    SET_GPR_U32(ctx, 31, 0x365B54u);
    ctx->pc = 0x365B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365B4Cu;
    // 0x365b50: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359DC0u, 0x365B4Cu, 0x365B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365B54u;
label_365b54:
    // 0x365b54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x365b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365b58: 0xc0d8142  jal         func_360508
    ctx->pc = 0x365B58u;
    SET_GPR_U32(ctx, 31, 0x365B60u);
    ctx->pc = 0x365B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365B58u;
    // 0x365b5c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x360508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360508u, 0x365B58u, 0x365B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365B60u;
label_365b60:
    // 0x365b60: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x365b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x365b64: 0x97a20004  lhu         $v0, 0x4($sp)
    ctx->pc = 0x365b64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x365b68: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x365b68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x365b6c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x365b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x365b70: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x365b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x365b74: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x365b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x365b78: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x365b78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x365b7c: 0x44140800  mfc1        $s4, $f1
    ctx->pc = 0x365b7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
    // 0x365b80: 0x16c3004f  bne         $s6, $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x365B80u;
    {
        const bool branch_taken_0x365b80 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        ctx->pc = 0x365B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365B80u;
        // 0x365b84: 0x29c03  sra         $s3, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365b80) {
            ctx->pc = 0x365CC0u;
            goto label_365cc0;
        }
    }
    ctx->pc = 0x365B88u;
    // 0x365b88: 0x82220885  lb          $v0, 0x885($s1)
    ctx->pc = 0x365b88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2181)));
    // 0x365b8c: 0x54400117  bnel        $v0, $zero, . + 4 + (0x117 << 2)
    ctx->pc = 0x365B8Cu;
    {
        const bool branch_taken_0x365b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x365b8c) {
            ctx->pc = 0x365B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x365B8Cu;
            // 0x365b90: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x365FECu;
            goto label_365fec;
        }
    }
    ctx->pc = 0x365B94u;
    // 0x365b94: 0x2602fffe  addiu       $v0, $s0, -0x2
    ctx->pc = 0x365b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
    // 0x365b98: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x365b98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x365b9c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x365B9Cu;
    {
        const bool branch_taken_0x365b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x365BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365B9Cu;
        // 0x365ba0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365b9c) {
            ctx->pc = 0x365C30u;
            goto label_365c30;
        }
    }
    ctx->pc = 0x365BA4u;
    // 0x365ba4: 0x82220a08  lb          $v0, 0xA08($s1)
    ctx->pc = 0x365ba4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2568)));
    // 0x365ba8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x365BA8u;
    {
        const bool branch_taken_0x365ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x365BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365BA8u;
        // 0x365bac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365ba8) {
            ctx->pc = 0x365C30u;
            goto label_365c30;
        }
    }
    ctx->pc = 0x365BB0u;
    // 0x365bb0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x365bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x365bb4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x365bb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x365bb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x365bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365bbc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x365bbcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x365bc0: 0xc0d81b6  jal         func_3606D8
    ctx->pc = 0x365BC0u;
    SET_GPR_U32(ctx, 31, 0x365BC8u);
    ctx->pc = 0x365BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365BC0u;
    // 0x365bc4: 0x241103e8  addiu       $s1, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3606D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3606D8u, 0x365BC0u, 0x365BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365BC8u;
label_365bc8:
    // 0x365bc8: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x365BC8u;
    {
        const bool branch_taken_0x365bc8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x365bc8) {
            ctx->pc = 0x365BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x365BC8u;
            // 0x365bcc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x365BD0u;
            goto label_365bd0;
        }
    }
    ctx->pc = 0x365BD0u;
label_365bd0:
    // 0x365bd0: 0x2828018  mult        $s0, $s4, $v0
    ctx->pc = 0x365bd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x365bd4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x365bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365bd8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x365bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365bdc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x365bdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365be0: 0x211001a  div         $zero, $s0, $s1
    ctx->pc = 0x365be0u;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x365be4: 0x8012  mflo        $s0
    ctx->pc = 0x365be4u;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x365be8: 0xc0d81b6  jal         func_3606D8
    ctx->pc = 0x365BE8u;
    SET_GPR_U32(ctx, 31, 0x365BF0u);
    ctx->pc = 0x365BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365BE8u;
    // 0x365bec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3606D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3606D8u, 0x365BE8u, 0x365BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365BF0u;
label_365bf0:
    // 0x365bf0: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x365bf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x365bf4: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x365bf4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x365bf8: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x365bf8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x365bfc: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x365bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x365c00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x365c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365c04: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x365c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365c08: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x365C08u;
    {
        const bool branch_taken_0x365c08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x365c08) {
            ctx->pc = 0x365C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x365C08u;
            // 0x365c0c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x365C10u;
            goto label_365c10;
        }
    }
    ctx->pc = 0x365C10u;
label_365c10:
    // 0x365c10: 0x51001a  div         $zero, $v0, $s1
    ctx->pc = 0x365c10u;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x365c14: 0x1012  mflo        $v0
    ctx->pc = 0x365c14u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x365c18: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x365c18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x365c1c: 0xc0d88b4  jal         func_3622D0
    ctx->pc = 0x365C1Cu;
    SET_GPR_U32(ctx, 31, 0x365C24u);
    ctx->pc = 0x365C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365C1Cu;
    // 0x365c20: 0x23403  sra         $a2, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3622D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3622D0u, 0x365C1Cu, 0x365C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365C24u;
label_365c24:
    // 0x365c24: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x365C24u;
    {
        const bool branch_taken_0x365c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x365C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365C24u;
        // 0x365c28: 0x97a20006  lhu         $v0, 0x6($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365c24) {
            ctx->pc = 0x365C94u;
            goto label_365c94;
        }
    }
    ctx->pc = 0x365C2Cu;
    // 0x365c2c: 0x0  nop
    ctx->pc = 0x365c2cu;
    // NOP
label_365c30:
    // 0x365c30: 0xc0d7fac  jal         func_35FEB0
    ctx->pc = 0x365C30u;
    SET_GPR_U32(ctx, 31, 0x365C38u);
    ctx->pc = 0x365C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365C30u;
    // 0x365c34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FEB0u, 0x365C30u, 0x365C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365C38u;
label_365c38:
    // 0x365c38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x365c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365c3c: 0x2828018  mult        $s0, $s4, $v0
    ctx->pc = 0x365c3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x365c40: 0x241103e8  addiu       $s1, $zero, 0x3E8
    ctx->pc = 0x365c40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x365c44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x365c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365c48: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x365C48u;
    {
        const bool branch_taken_0x365c48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x365c48) {
            ctx->pc = 0x365C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x365C48u;
            // 0x365c4c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x365C50u;
            goto label_365c50;
        }
    }
    ctx->pc = 0x365C50u;
label_365c50:
    // 0x365c50: 0x211001a  div         $zero, $s0, $s1
    ctx->pc = 0x365c50u;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x365c54: 0x8012  mflo        $s0
    ctx->pc = 0x365c54u;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x365c58: 0xc0d7fac  jal         func_35FEB0
    ctx->pc = 0x365C58u;
    SET_GPR_U32(ctx, 31, 0x365C60u);
    ctx->pc = 0x365C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365C58u;
    // 0x365c5c: 0x108400  sll         $s0, $s0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FEB0u, 0x365C58u, 0x365C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365C60u;
label_365c60:
    // 0x365c60: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x365c60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x365c64: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x365c64u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x365c68: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x365c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x365c6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x365c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365c70: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x365c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365c74: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x365C74u;
    {
        const bool branch_taken_0x365c74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x365c74) {
            ctx->pc = 0x365C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x365C74u;
            // 0x365c78: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x365C7Cu;
            goto label_365c7c;
        }
    }
    ctx->pc = 0x365C7Cu;
label_365c7c:
    // 0x365c7c: 0x51001a  div         $zero, $v0, $s1
    ctx->pc = 0x365c7cu;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x365c80: 0x1012  mflo        $v0
    ctx->pc = 0x365c80u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x365c84: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x365c84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x365c88: 0xc0d88b4  jal         func_3622D0
    ctx->pc = 0x365C88u;
    SET_GPR_U32(ctx, 31, 0x365C90u);
    ctx->pc = 0x365C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365C88u;
    // 0x365c8c: 0x23403  sra         $a2, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3622D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3622D0u, 0x365C88u, 0x365C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365C90u;
label_365c90:
    // 0x365c90: 0x97a20006  lhu         $v0, 0x6($sp)
    ctx->pc = 0x365c90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
label_365c94:
    // 0x365c94: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x365C94u;
    {
        const bool branch_taken_0x365c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x365c94) {
            ctx->pc = 0x365CB0u;
            goto label_365cb0;
        }
    }
    ctx->pc = 0x365C9Cu;
    // 0x365c9c: 0xc0d88ec  jal         func_3623B0
    ctx->pc = 0x365C9Cu;
    SET_GPR_U32(ctx, 31, 0x365CA4u);
    ctx->pc = 0x365CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365C9Cu;
    // 0x365ca0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3623B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3623B0u, 0x365C9Cu, 0x365CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365CA4u;
label_365ca4:
    // 0x365ca4: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x365CA4u;
    {
        const bool branch_taken_0x365ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x365CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365CA4u;
        // 0x365ca8: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365ca4) {
            ctx->pc = 0x365FECu;
            goto label_365fec;
        }
    }
    ctx->pc = 0x365CACu;
    // 0x365cac: 0x0  nop
    ctx->pc = 0x365cacu;
    // NOP
label_365cb0:
    // 0x365cb0: 0xc0d8912  jal         func_362448
    ctx->pc = 0x365CB0u;
    SET_GPR_U32(ctx, 31, 0x365CB8u);
    ctx->pc = 0x365CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365CB0u;
    // 0x365cb4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362448u, 0x365CB0u, 0x365CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365CB8u;
label_365cb8:
    // 0x365cb8: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x365CB8u;
    {
        const bool branch_taken_0x365cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x365CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365CB8u;
        // 0x365cbc: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365cb8) {
            ctx->pc = 0x365FECu;
            goto label_365fec;
        }
    }
    ctx->pc = 0x365CC0u;
label_365cc0:
    // 0x365cc0: 0x16000035  bnez        $s0, . + 4 + (0x35 << 2)
    ctx->pc = 0x365CC0u;
    {
        const bool branch_taken_0x365cc0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x365CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365CC0u;
        // 0x365cc4: 0x2602fffe  addiu       $v0, $s0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365cc0) {
            ctx->pc = 0x365D98u;
            goto label_365d98;
        }
    }
    ctx->pc = 0x365CC8u;
    // 0x365cc8: 0x82220885  lb          $v0, 0x885($s1)
    ctx->pc = 0x365cc8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2181)));
    // 0x365ccc: 0x544000b9  bnel        $v0, $zero, . + 4 + (0xB9 << 2)
    ctx->pc = 0x365CCCu;
    {
        const bool branch_taken_0x365ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x365ccc) {
            ctx->pc = 0x365CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x365CCCu;
            // 0x365cd0: 0x97a20006  lhu         $v0, 0x6($sp) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x365FB4u;
            goto label_365fb4;
        }
    }
    ctx->pc = 0x365CD4u;
    // 0x365cd4: 0x2671ffc0  addiu       $s1, $s3, -0x40
    ctx->pc = 0x365cd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967232));
    // 0x365cd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x365cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365cdc: 0x118c00  sll         $s1, $s1, 16
    ctx->pc = 0x365cdcu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x365ce0: 0x241203e8  addiu       $s2, $zero, 0x3E8
    ctx->pc = 0x365ce0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x365ce4: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x365ce4u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    // 0x365ce8: 0xc0d7fac  jal         func_35FEB0
    ctx->pc = 0x365CE8u;
    SET_GPR_U32(ctx, 31, 0x365CF0u);
    ctx->pc = 0x365CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365CE8u;
    // 0x365cec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FEB0u, 0x365CE8u, 0x365CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365CF0u;
label_365cf0:
    // 0x365cf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x365cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365cf4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x365cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365cf8: 0xc0d7fac  jal         func_35FEB0
    ctx->pc = 0x365CF8u;
    SET_GPR_U32(ctx, 31, 0x365D00u);
    ctx->pc = 0x365CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365CF8u;
    // 0x365cfc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FEB0u, 0x365CF8u, 0x365D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365D00u;
label_365d00:
    // 0x365d00: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x365D00u;
    {
        const bool branch_taken_0x365d00 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x365d00) {
            ctx->pc = 0x365D04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x365D00u;
            // 0x365d04: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x365D08u;
            goto label_365d08;
        }
    }
    ctx->pc = 0x365D08u;
label_365d08:
    // 0x365d08: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x365d08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x365d0c: 0x2671003f  addiu       $s1, $s3, 0x3F
    ctx->pc = 0x365d0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 63));
    // 0x365d10: 0x2148018  mult        $s0, $s0, $s4
    ctx->pc = 0x365d10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x365d14: 0x118c00  sll         $s1, $s1, 16
    ctx->pc = 0x365d14u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x365d18: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x365d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365d1c: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x365d1cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    // 0x365d20: 0x7212001a  div1        $zero, $s0, $s2
    ctx->pc = 0x365d20u;
    { int32_t divisor = GPR_S32(ctx, 18); int32_t dividend = GPR_S32(ctx, 16); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x365d24: 0x70008012  mflo1       $s0
    ctx->pc = 0x365d24u;
    SET_GPR_U64(ctx, 16, ctx->lo1);
    // 0x365d28: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x365d28u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x365d2c: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x365d2cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x365d30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x365d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365d34: 0xc0d88b4  jal         func_3622D0
    ctx->pc = 0x365D34u;
    SET_GPR_U32(ctx, 31, 0x365D3Cu);
    ctx->pc = 0x365D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365D34u;
    // 0x365d38: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3622D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3622D0u, 0x365D34u, 0x365D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365D3Cu;
label_365d3c:
    // 0x365d3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x365d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365d40: 0xc0d7fac  jal         func_35FEB0
    ctx->pc = 0x365D40u;
    SET_GPR_U32(ctx, 31, 0x365D48u);
    ctx->pc = 0x365D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365D40u;
    // 0x365d44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FEB0u, 0x365D40u, 0x365D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365D48u;
label_365d48:
    // 0x365d48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x365d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365d4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x365d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365d50: 0xc0d7fac  jal         func_35FEB0
    ctx->pc = 0x365D50u;
    SET_GPR_U32(ctx, 31, 0x365D58u);
    ctx->pc = 0x365D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365D50u;
    // 0x365d54: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FEB0u, 0x365D50u, 0x365D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365D58u;
label_365d58:
    // 0x365d58: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x365d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x365d5c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x365d5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x365d60: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x365d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365d64: 0x2148018  mult        $s0, $s0, $s4
    ctx->pc = 0x365d64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x365d68: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x365D68u;
    {
        const bool branch_taken_0x365d68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x365d68) {
            ctx->pc = 0x365D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x365D68u;
            // 0x365d6c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x365D70u;
            goto label_365d70;
        }
    }
    ctx->pc = 0x365D70u;
label_365d70:
    // 0x365d70: 0x212001a  div         $zero, $s0, $s2
    ctx->pc = 0x365d70u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x365d74: 0x8012  mflo        $s0
    ctx->pc = 0x365d74u;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x365d78: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x365d78u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x365d7c: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x365d7cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x365d80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x365d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365d84: 0xc0d88b4  jal         func_3622D0
    ctx->pc = 0x365D84u;
    SET_GPR_U32(ctx, 31, 0x365D8Cu);
    ctx->pc = 0x365D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365D84u;
    // 0x365d88: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3622D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3622D0u, 0x365D84u, 0x365D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365D8Cu;
label_365d8c:
    // 0x365d8c: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x365D8Cu;
    {
        const bool branch_taken_0x365d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x365D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365D8Cu;
        // 0x365d90: 0x97a20006  lhu         $v0, 0x6($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365d8c) {
            ctx->pc = 0x365FB4u;
            goto label_365fb4;
        }
    }
    ctx->pc = 0x365D94u;
    // 0x365d94: 0x0  nop
    ctx->pc = 0x365d94u;
    // NOP
label_365d98:
    // 0x365d98: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x365d98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x365d9c: 0x5040004a  beql        $v0, $zero, . + 4 + (0x4A << 2)
    ctx->pc = 0x365D9Cu;
    {
        const bool branch_taken_0x365d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x365d9c) {
            ctx->pc = 0x365DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x365D9Cu;
            // 0x365da0: 0x82220885  lb          $v0, 0x885($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2181)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x365EC8u;
            goto label_365ec8;
        }
    }
    ctx->pc = 0x365DA4u;
    // 0x365da4: 0x82220a08  lb          $v0, 0xA08($s1)
    ctx->pc = 0x365da4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2568)));
    // 0x365da8: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x365DA8u;
    {
        const bool branch_taken_0x365da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x365DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365DA8u;
        // 0x365dac: 0x82220885  lb          $v0, 0x885($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2181)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365da8) {
            ctx->pc = 0x365EC8u;
            goto label_365ec8;
        }
    }
    ctx->pc = 0x365DB0u;
    // 0x365db0: 0x54400080  bnel        $v0, $zero, . + 4 + (0x80 << 2)
    ctx->pc = 0x365DB0u;
    {
        const bool branch_taken_0x365db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x365db0) {
            ctx->pc = 0x365DB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x365DB0u;
            // 0x365db4: 0x97a20006  lhu         $v0, 0x6($sp) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x365FB4u;
            goto label_365fb4;
        }
    }
    ctx->pc = 0x365DB8u;
    // 0x365db8: 0x2671ffc0  addiu       $s1, $s3, -0x40
    ctx->pc = 0x365db8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967232));
    // 0x365dbc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x365dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x365dc0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x365dc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x365dc4: 0x118c00  sll         $s1, $s1, 16
    ctx->pc = 0x365dc4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x365dc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x365dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365dcc: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x365dccu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    // 0x365dd0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x365dd0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x365dd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x365dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365dd8: 0xc0d81b6  jal         func_3606D8
    ctx->pc = 0x365DD8u;
    SET_GPR_U32(ctx, 31, 0x365DE0u);
    ctx->pc = 0x365DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365DD8u;
    // 0x365ddc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3606D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3606D8u, 0x365DD8u, 0x365DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365DE0u;
label_365de0:
    // 0x365de0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x365de0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x365de4: 0x2828018  mult        $s0, $s4, $v0
    ctx->pc = 0x365de4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x365de8: 0x241203e8  addiu       $s2, $zero, 0x3E8
    ctx->pc = 0x365de8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x365dec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x365decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365df0: 0x2671003f  addiu       $s1, $s3, 0x3F
    ctx->pc = 0x365df0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 63));
    // 0x365df4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x365df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365df8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x365df8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365dfc: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x365DFCu;
    {
        const bool branch_taken_0x365dfc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x365dfc) {
            ctx->pc = 0x365E00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x365DFCu;
            // 0x365e00: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x365E04u;
            goto label_365e04;
        }
    }
    ctx->pc = 0x365E04u;
label_365e04:
    // 0x365e04: 0x118c00  sll         $s1, $s1, 16
    ctx->pc = 0x365e04u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x365e08: 0x212001a  div         $zero, $s0, $s2
    ctx->pc = 0x365e08u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x365e0c: 0x8012  mflo        $s0
    ctx->pc = 0x365e0cu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x365e10: 0xc0d81b6  jal         func_3606D8
    ctx->pc = 0x365E10u;
    SET_GPR_U32(ctx, 31, 0x365E18u);
    ctx->pc = 0x365E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365E10u;
    // 0x365e14: 0x118c03  sra         $s1, $s1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3606D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3606D8u, 0x365E10u, 0x365E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365E18u;
label_365e18:
    // 0x365e18: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x365e18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x365e1c: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x365e1cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x365e20: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x365e20u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x365e24: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x365e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x365e28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x365e28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365e2c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x365e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365e30: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x365E30u;
    {
        const bool branch_taken_0x365e30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x365e30) {
            ctx->pc = 0x365E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x365E30u;
            // 0x365e34: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x365E38u;
            goto label_365e38;
        }
    }
    ctx->pc = 0x365E38u;
label_365e38:
    // 0x365e38: 0x52001a  div         $zero, $v0, $s2
    ctx->pc = 0x365e38u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x365e3c: 0x1012  mflo        $v0
    ctx->pc = 0x365e3cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x365e40: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x365e40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x365e44: 0xc0d88b4  jal         func_3622D0
    ctx->pc = 0x365E44u;
    SET_GPR_U32(ctx, 31, 0x365E4Cu);
    ctx->pc = 0x365E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365E44u;
    // 0x365e48: 0x23403  sra         $a2, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3622D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3622D0u, 0x365E44u, 0x365E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365E4Cu;
label_365e4c:
    // 0x365e4c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x365e4cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x365e50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x365e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365e54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x365e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365e58: 0xc0d81b6  jal         func_3606D8
    ctx->pc = 0x365E58u;
    SET_GPR_U32(ctx, 31, 0x365E60u);
    ctx->pc = 0x365E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365E58u;
    // 0x365e5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3606D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3606D8u, 0x365E58u, 0x365E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365E60u;
label_365e60:
    // 0x365e60: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x365e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x365e64: 0x2828018  mult        $s0, $s4, $v0
    ctx->pc = 0x365e64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x365e68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x365e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365e6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x365e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365e70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x365e70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365e74: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x365e74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x365e78: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x365E78u;
    {
        const bool branch_taken_0x365e78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x365e78) {
            ctx->pc = 0x365E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x365E78u;
            // 0x365e7c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x365E80u;
            goto label_365e80;
        }
    }
    ctx->pc = 0x365E80u;
label_365e80:
    // 0x365e80: 0x212001a  div         $zero, $s0, $s2
    ctx->pc = 0x365e80u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x365e84: 0x8012  mflo        $s0
    ctx->pc = 0x365e84u;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x365e88: 0xc0d81b6  jal         func_3606D8
    ctx->pc = 0x365E88u;
    SET_GPR_U32(ctx, 31, 0x365E90u);
    ctx->pc = 0x365E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365E88u;
    // 0x365e8c: 0x108400  sll         $s0, $s0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3606D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3606D8u, 0x365E88u, 0x365E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365E90u;
label_365e90:
    // 0x365e90: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x365e90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x365e94: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x365e94u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x365e98: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x365e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x365e9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x365e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365ea0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x365ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365ea4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x365EA4u;
    {
        const bool branch_taken_0x365ea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x365ea4) {
            ctx->pc = 0x365EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x365EA4u;
            // 0x365ea8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x365EACu;
            goto label_365eac;
        }
    }
    ctx->pc = 0x365EACu;
label_365eac:
    // 0x365eac: 0x52001a  div         $zero, $v0, $s2
    ctx->pc = 0x365eacu;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x365eb0: 0x1012  mflo        $v0
    ctx->pc = 0x365eb0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x365eb4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x365eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x365eb8: 0xc0d88b4  jal         func_3622D0
    ctx->pc = 0x365EB8u;
    SET_GPR_U32(ctx, 31, 0x365EC0u);
    ctx->pc = 0x365EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365EB8u;
    // 0x365ebc: 0x23403  sra         $a2, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3622D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3622D0u, 0x365EB8u, 0x365EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365EC0u;
label_365ec0:
    // 0x365ec0: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x365EC0u;
    {
        const bool branch_taken_0x365ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x365EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365EC0u;
        // 0x365ec4: 0x97a20006  lhu         $v0, 0x6($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365ec0) {
            ctx->pc = 0x365FB4u;
            goto label_365fb4;
        }
    }
    ctx->pc = 0x365EC8u;
label_365ec8:
    // 0x365ec8: 0x5440003a  bnel        $v0, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x365EC8u;
    {
        const bool branch_taken_0x365ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x365ec8) {
            ctx->pc = 0x365ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x365EC8u;
            // 0x365ecc: 0x97a20006  lhu         $v0, 0x6($sp) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x365FB4u;
            goto label_365fb4;
        }
    }
    ctx->pc = 0x365ED0u;
    // 0x365ed0: 0x2671ffc0  addiu       $s1, $s3, -0x40
    ctx->pc = 0x365ed0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967232));
    // 0x365ed4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x365ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365ed8: 0x118c00  sll         $s1, $s1, 16
    ctx->pc = 0x365ed8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x365edc: 0x241203e8  addiu       $s2, $zero, 0x3E8
    ctx->pc = 0x365edcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x365ee0: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x365ee0u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    // 0x365ee4: 0xc0d7fac  jal         func_35FEB0
    ctx->pc = 0x365EE4u;
    SET_GPR_U32(ctx, 31, 0x365EECu);
    ctx->pc = 0x365EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365EE4u;
    // 0x365ee8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FEB0u, 0x365EE4u, 0x365EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365EECu;
label_365eec:
    // 0x365eec: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x365EECu;
    {
        const bool branch_taken_0x365eec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x365eec) {
            ctx->pc = 0x365EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x365EECu;
            // 0x365ef0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x365EF4u;
            goto label_365ef4;
        }
    }
    ctx->pc = 0x365EF4u;
label_365ef4:
    // 0x365ef4: 0x2828018  mult        $s0, $s4, $v0
    ctx->pc = 0x365ef4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x365ef8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x365ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365efc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x365efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365f00: 0x2671003f  addiu       $s1, $s3, 0x3F
    ctx->pc = 0x365f00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 63));
    // 0x365f04: 0x118c00  sll         $s1, $s1, 16
    ctx->pc = 0x365f04u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x365f08: 0x212001a  div         $zero, $s0, $s2
    ctx->pc = 0x365f08u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x365f0c: 0x8012  mflo        $s0
    ctx->pc = 0x365f0cu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x365f10: 0xc0d7fac  jal         func_35FEB0
    ctx->pc = 0x365F10u;
    SET_GPR_U32(ctx, 31, 0x365F18u);
    ctx->pc = 0x365F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365F10u;
    // 0x365f14: 0x118c03  sra         $s1, $s1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FEB0u, 0x365F10u, 0x365F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365F18u;
label_365f18:
    // 0x365f18: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x365f18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x365f1c: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x365f1cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x365f20: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x365f20u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x365f24: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x365f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x365f28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x365f28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365f2c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x365f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365f30: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x365F30u;
    {
        const bool branch_taken_0x365f30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x365f30) {
            ctx->pc = 0x365F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x365F30u;
            // 0x365f34: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x365F38u;
            goto label_365f38;
        }
    }
    ctx->pc = 0x365F38u;
label_365f38:
    // 0x365f38: 0x52001a  div         $zero, $v0, $s2
    ctx->pc = 0x365f38u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x365f3c: 0x1012  mflo        $v0
    ctx->pc = 0x365f3cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x365f40: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x365f40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x365f44: 0xc0d88b4  jal         func_3622D0
    ctx->pc = 0x365F44u;
    SET_GPR_U32(ctx, 31, 0x365F4Cu);
    ctx->pc = 0x365F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365F44u;
    // 0x365f48: 0x23403  sra         $a2, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3622D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3622D0u, 0x365F44u, 0x365F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365F4Cu;
label_365f4c:
    // 0x365f4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x365f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365f50: 0xc0d7fac  jal         func_35FEB0
    ctx->pc = 0x365F50u;
    SET_GPR_U32(ctx, 31, 0x365F58u);
    ctx->pc = 0x365F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365F50u;
    // 0x365f54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FEB0u, 0x365F50u, 0x365F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365F58u;
label_365f58:
    // 0x365f58: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x365f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x365f5c: 0x2828018  mult        $s0, $s4, $v0
    ctx->pc = 0x365f5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x365f60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x365f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365f64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x365f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365f68: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x365F68u;
    {
        const bool branch_taken_0x365f68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x365f68) {
            ctx->pc = 0x365F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x365F68u;
            // 0x365f6c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x365F70u;
            goto label_365f70;
        }
    }
    ctx->pc = 0x365F70u;
label_365f70:
    // 0x365f70: 0x212001a  div         $zero, $s0, $s2
    ctx->pc = 0x365f70u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x365f74: 0x8012  mflo        $s0
    ctx->pc = 0x365f74u;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x365f78: 0xc0d7fac  jal         func_35FEB0
    ctx->pc = 0x365F78u;
    SET_GPR_U32(ctx, 31, 0x365F80u);
    ctx->pc = 0x365F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365F78u;
    // 0x365f7c: 0x108400  sll         $s0, $s0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FEB0u, 0x365F78u, 0x365F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365F80u;
label_365f80:
    // 0x365f80: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x365f80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x365f84: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x365f84u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x365f88: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x365f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x365f8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x365f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365f90: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x365f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365f94: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x365F94u;
    {
        const bool branch_taken_0x365f94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x365f94) {
            ctx->pc = 0x365F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x365F94u;
            // 0x365f98: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x365F9Cu;
            goto label_365f9c;
        }
    }
    ctx->pc = 0x365F9Cu;
label_365f9c:
    // 0x365f9c: 0x52001a  div         $zero, $v0, $s2
    ctx->pc = 0x365f9cu;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x365fa0: 0x1012  mflo        $v0
    ctx->pc = 0x365fa0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x365fa4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x365fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x365fa8: 0xc0d88b4  jal         func_3622D0
    ctx->pc = 0x365FA8u;
    SET_GPR_U32(ctx, 31, 0x365FB0u);
    ctx->pc = 0x365FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365FA8u;
    // 0x365fac: 0x23403  sra         $a2, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3622D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3622D0u, 0x365FA8u, 0x365FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365FB0u;
label_365fb0:
    // 0x365fb0: 0x97a20006  lhu         $v0, 0x6($sp)
    ctx->pc = 0x365fb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
label_365fb4:
    // 0x365fb4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x365FB4u;
    {
        const bool branch_taken_0x365fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x365fb4) {
            ctx->pc = 0x365FD8u;
            goto label_365fd8;
        }
    }
    ctx->pc = 0x365FBCu;
    // 0x365fbc: 0xc0d88ec  jal         func_3623B0
    ctx->pc = 0x365FBCu;
    SET_GPR_U32(ctx, 31, 0x365FC4u);
    ctx->pc = 0x365FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365FBCu;
    // 0x365fc0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3623B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3623B0u, 0x365FBCu, 0x365FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365FC4u;
label_365fc4:
    // 0x365fc4: 0xc0d88ec  jal         func_3623B0
    ctx->pc = 0x365FC4u;
    SET_GPR_U32(ctx, 31, 0x365FCCu);
    ctx->pc = 0x365FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365FC4u;
    // 0x365fc8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3623B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3623B0u, 0x365FC4u, 0x365FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365FCCu;
label_365fcc:
    // 0x365fcc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x365FCCu;
    {
        const bool branch_taken_0x365fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x365FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365FCCu;
        // 0x365fd0: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365fcc) {
            ctx->pc = 0x365FECu;
            goto label_365fec;
        }
    }
    ctx->pc = 0x365FD4u;
    // 0x365fd4: 0x0  nop
    ctx->pc = 0x365fd4u;
    // NOP
label_365fd8:
    // 0x365fd8: 0xc0d8912  jal         func_362448
    ctx->pc = 0x365FD8u;
    SET_GPR_U32(ctx, 31, 0x365FE0u);
    ctx->pc = 0x365FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365FD8u;
    // 0x365fdc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362448u, 0x365FD8u, 0x365FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365FE0u;
label_365fe0:
    // 0x365fe0: 0xc0d8912  jal         func_362448
    ctx->pc = 0x365FE0u;
    SET_GPR_U32(ctx, 31, 0x365FE8u);
    ctx->pc = 0x365FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365FE0u;
    // 0x365fe4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362448u, 0x365FE0u, 0x365FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365FE8u;
label_365fe8:
    // 0x365fe8: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x365fe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_365fec:
    // 0x365fec: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x365fecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x365ff0: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x365ff0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x365ff4: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x365ff4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x365ff8: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x365ff8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x365ffc: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x365ffcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x366000: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x366000u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x366004: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x366004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x366008: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x366008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x36600c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x36600cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x366010: 0x3e00008  jr          $ra
    ctx->pc = 0x366010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366010u;
        // 0x366014: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366018u;
}
