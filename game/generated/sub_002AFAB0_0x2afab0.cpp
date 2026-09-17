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

// Function: sub_002AFAB0
// Address: 0x2afab0 - 0x2aff90
void sub_002AFAB0_0x2afab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AFAB0_0x2afab0");
#endif

    switch (ctx->pc) {
        case 0x2afb10u: goto label_2afb10;
        case 0x2afb90u: goto label_2afb90;
        case 0x2afc0cu: goto label_2afc0c;
        case 0x2afc8cu: goto label_2afc8c;
        case 0x2afd0cu: goto label_2afd0c;
        case 0x2afd8cu: goto label_2afd8c;
        case 0x2afe0cu: goto label_2afe0c;
        case 0x2afe8cu: goto label_2afe8c;
        case 0x2aff14u: goto label_2aff14;
        default: break;
    }

    ctx->pc = 0x2afab0u;

    // 0x2afab0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2afab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2afab4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2afab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2afab8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2afab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afabc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2afabcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2afac0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2afac0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afac4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2afac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2afac8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2afac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2afacc: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x2afaccu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    // 0x2afad0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2afad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2afad4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2afad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2afad8: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x2afad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2afadc: 0xe6210010  swc1        $f1, 0x10($s1)
    ctx->pc = 0x2afadcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x2afae0: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x2afae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2afae4: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x2afae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x2afae8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2afae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2afaec: 0x8e63cec8  lw          $v1, -0x3138($s3)
    ctx->pc = 0x2afaecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3BCEC8u));
    // 0x2afaf0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2afaf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2afaf4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AFAF4u;
    {
        const bool branch_taken_0x2afaf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFAF4u;
        // 0x2afaf8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afaf4) {
            ctx->pc = 0x2AFB18u;
            goto label_2afb18;
        }
    }
    ctx->pc = 0x2AFAFCu;
    // 0x2afafc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2afafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2afb00: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2afb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2afb04: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2afb04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2afb08: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AFB08u;
    SET_GPR_U32(ctx, 31, 0x2AFB10u);
    ctx->pc = 0x2AFB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFB08u;
    // 0x2afb0c: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AFB08u, 0x2AFB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFB10u;
label_2afb10:
    // 0x2afb10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AFB10u;
    {
        const bool branch_taken_0x2afb10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFB10u;
        // 0x2afb14: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afb10) {
            ctx->pc = 0x2AFB1Cu;
            goto label_2afb1c;
        }
    }
    ctx->pc = 0x2AFB18u;
label_2afb18:
    // 0x2afb18: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x2afb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2afb1c:
    // 0x2afb1c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2afb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2afb20: 0x52420001  beql        $s2, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AFB20u;
    {
        const bool branch_taken_0x2afb20 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2afb20) {
            ctx->pc = 0x2AFB24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFB20u;
            // 0x2afb24: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFB28u;
            goto label_2afb28;
        }
    }
    ctx->pc = 0x2AFB28u;
label_2afb28:
    // 0x2afb28: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2afb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2afb2c: 0x52420001  beql        $s2, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AFB2Cu;
    {
        const bool branch_taken_0x2afb2c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2afb2c) {
            ctx->pc = 0x2AFB30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFB2Cu;
            // 0x2afb30: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFB34u;
            goto label_2afb34;
        }
    }
    ctx->pc = 0x2AFB34u;
label_2afb34:
    // 0x2afb34: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2afb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2afb38: 0x8e63cec8  lw          $v1, -0x3138($s3)
    ctx->pc = 0x2afb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954696)));
    // 0x2afb3c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2afb3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2afb40: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AFB40u;
    {
        const bool branch_taken_0x2afb40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFB40u;
        // 0x2afb44: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afb40) {
            ctx->pc = 0x2AFB60u;
            goto label_2afb60;
        }
    }
    ctx->pc = 0x2AFB48u;
    // 0x2afb48: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2afb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2afb4c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2afb4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2afb50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2afb50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2afb54: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2afb54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2afb58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AFB58u;
    {
        const bool branch_taken_0x2afb58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFB58u;
        // 0x2afb5c: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afb58) {
            ctx->pc = 0x2AFB64u;
            goto label_2afb64;
        }
    }
    ctx->pc = 0x2AFB60u;
label_2afb60:
    // 0x2afb60: 0xe6210018  swc1        $f1, 0x18($s1)
    ctx->pc = 0x2afb60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_2afb64:
    // 0x2afb64: 0x2662cec8  addiu       $v0, $s3, -0x3138
    ctx->pc = 0x2afb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954696));
    // 0x2afb68: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2afb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2afb6c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2afb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2afb70: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2afb70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2afb74: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AFB74u;
    {
        const bool branch_taken_0x2afb74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFB74u;
        // 0x2afb78: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afb74) {
            ctx->pc = 0x2AFB98u;
            goto label_2afb98;
        }
    }
    ctx->pc = 0x2AFB7Cu;
    // 0x2afb7c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2afb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2afb80: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2afb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2afb84: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2afb84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2afb88: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AFB88u;
    SET_GPR_U32(ctx, 31, 0x2AFB90u);
    ctx->pc = 0x2AFB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFB88u;
    // 0x2afb8c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AFB88u, 0x2AFB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFB90u;
label_2afb90:
    // 0x2afb90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AFB90u;
    {
        const bool branch_taken_0x2afb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFB90u;
        // 0x2afb94: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afb90) {
            ctx->pc = 0x2AFB9Cu;
            goto label_2afb9c;
        }
    }
    ctx->pc = 0x2AFB98u;
label_2afb98:
    // 0x2afb98: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x2afb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2afb9c:
    // 0x2afb9c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2afb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2afba0: 0x52820001  beql        $s4, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AFBA0u;
    {
        const bool branch_taken_0x2afba0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x2afba0) {
            ctx->pc = 0x2AFBA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFBA0u;
            // 0x2afba4: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFBA8u;
            goto label_2afba8;
        }
    }
    ctx->pc = 0x2AFBA8u;
label_2afba8:
    // 0x2afba8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2afba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2afbac: 0x52820001  beql        $s4, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AFBACu;
    {
        const bool branch_taken_0x2afbac = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x2afbac) {
            ctx->pc = 0x2AFBB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFBACu;
            // 0x2afbb0: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFBB4u;
            goto label_2afbb4;
        }
    }
    ctx->pc = 0x2AFBB4u;
label_2afbb4:
    // 0x2afbb4: 0x2662cec8  addiu       $v0, $s3, -0x3138
    ctx->pc = 0x2afbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954696));
    // 0x2afbb8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2afbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2afbbc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2afbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2afbc0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2afbc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2afbc4: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AFBC4u;
    {
        const bool branch_taken_0x2afbc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2afbc4) {
            ctx->pc = 0x2AFBC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFBC4u;
            // 0x2afbc8: 0xe6410014  swc1        $f1, 0x14($s2) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFBE4u;
            goto label_2afbe4;
        }
    }
    ctx->pc = 0x2AFBCCu;
    // 0x2afbcc: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x2afbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2afbd0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2afbd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2afbd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2afbd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2afbd8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2afbd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2afbdc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2afbdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2afbe0: 0x2662cec8  addiu       $v0, $s3, -0x3138
    ctx->pc = 0x2afbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954696));
label_2afbe4:
    // 0x2afbe4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2afbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2afbe8: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2afbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2afbec: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2afbecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2afbf0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AFBF0u;
    {
        const bool branch_taken_0x2afbf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFBF0u;
        // 0x2afbf4: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afbf0) {
            ctx->pc = 0x2AFC18u;
            goto label_2afc18;
        }
    }
    ctx->pc = 0x2AFBF8u;
    // 0x2afbf8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2afbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2afbfc: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2afbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2afc00: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2afc00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2afc04: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AFC04u;
    SET_GPR_U32(ctx, 31, 0x2AFC0Cu);
    ctx->pc = 0x2AFC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFC04u;
    // 0x2afc08: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AFC04u, 0x2AFC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFC0Cu;
label_2afc0c:
    // 0x2afc0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2AFC0Cu;
    {
        const bool branch_taken_0x2afc0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFC0Cu;
        // 0x2afc10: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afc0c) {
            ctx->pc = 0x2AFC1Cu;
            goto label_2afc1c;
        }
    }
    ctx->pc = 0x2AFC14u;
    // 0x2afc14: 0x0  nop
    ctx->pc = 0x2afc14u;
    // NOP
label_2afc18:
    // 0x2afc18: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x2afc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2afc1c:
    // 0x2afc1c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2afc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2afc20: 0x52820001  beql        $s4, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AFC20u;
    {
        const bool branch_taken_0x2afc20 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x2afc20) {
            ctx->pc = 0x2AFC24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFC20u;
            // 0x2afc24: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFC28u;
            goto label_2afc28;
        }
    }
    ctx->pc = 0x2AFC28u;
label_2afc28:
    // 0x2afc28: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2afc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2afc2c: 0x52820001  beql        $s4, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AFC2Cu;
    {
        const bool branch_taken_0x2afc2c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x2afc2c) {
            ctx->pc = 0x2AFC30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFC2Cu;
            // 0x2afc30: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFC34u;
            goto label_2afc34;
        }
    }
    ctx->pc = 0x2AFC34u;
label_2afc34:
    // 0x2afc34: 0x2662cec8  addiu       $v0, $s3, -0x3138
    ctx->pc = 0x2afc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954696));
    // 0x2afc38: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2afc38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2afc3c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2afc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2afc40: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2afc40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2afc44: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AFC44u;
    {
        const bool branch_taken_0x2afc44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2afc44) {
            ctx->pc = 0x2AFC48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFC44u;
            // 0x2afc48: 0xe6410018  swc1        $f1, 0x18($s2) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFC64u;
            goto label_2afc64;
        }
    }
    ctx->pc = 0x2AFC4Cu;
    // 0x2afc4c: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x2afc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2afc50: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2afc50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2afc54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2afc54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2afc58: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2afc58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2afc5c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2afc5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2afc60: 0x2662cec8  addiu       $v0, $s3, -0x3138
    ctx->pc = 0x2afc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954696));
label_2afc64:
    // 0x2afc64: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2afc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2afc68: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2afc68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2afc6c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2afc6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2afc70: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AFC70u;
    {
        const bool branch_taken_0x2afc70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFC70u;
        // 0x2afc74: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afc70) {
            ctx->pc = 0x2AFC98u;
            goto label_2afc98;
        }
    }
    ctx->pc = 0x2AFC78u;
    // 0x2afc78: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2afc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2afc7c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2afc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2afc80: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2afc80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2afc84: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AFC84u;
    SET_GPR_U32(ctx, 31, 0x2AFC8Cu);
    ctx->pc = 0x2AFC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFC84u;
    // 0x2afc88: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AFC84u, 0x2AFC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFC8Cu;
label_2afc8c:
    // 0x2afc8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2AFC8Cu;
    {
        const bool branch_taken_0x2afc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFC8Cu;
        // 0x2afc90: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afc8c) {
            ctx->pc = 0x2AFC9Cu;
            goto label_2afc9c;
        }
    }
    ctx->pc = 0x2AFC94u;
    // 0x2afc94: 0x0  nop
    ctx->pc = 0x2afc94u;
    // NOP
label_2afc98:
    // 0x2afc98: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x2afc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2afc9c:
    // 0x2afc9c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2afc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2afca0: 0x52820001  beql        $s4, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AFCA0u;
    {
        const bool branch_taken_0x2afca0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x2afca0) {
            ctx->pc = 0x2AFCA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFCA0u;
            // 0x2afca4: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFCA8u;
            goto label_2afca8;
        }
    }
    ctx->pc = 0x2AFCA8u;
label_2afca8:
    // 0x2afca8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2afca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2afcac: 0x52820001  beql        $s4, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AFCACu;
    {
        const bool branch_taken_0x2afcac = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x2afcac) {
            ctx->pc = 0x2AFCB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFCACu;
            // 0x2afcb0: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFCB4u;
            goto label_2afcb4;
        }
    }
    ctx->pc = 0x2AFCB4u;
label_2afcb4:
    // 0x2afcb4: 0x2662cec8  addiu       $v0, $s3, -0x3138
    ctx->pc = 0x2afcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954696));
    // 0x2afcb8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2afcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2afcbc: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2afcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2afcc0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2afcc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2afcc4: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AFCC4u;
    {
        const bool branch_taken_0x2afcc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2afcc4) {
            ctx->pc = 0x2AFCC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFCC4u;
            // 0x2afcc8: 0xe641001c  swc1        $f1, 0x1C($s2) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFCE4u;
            goto label_2afce4;
        }
    }
    ctx->pc = 0x2AFCCCu;
    // 0x2afccc: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x2afcccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2afcd0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2afcd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2afcd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2afcd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2afcd8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2afcd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2afcdc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2afcdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2afce0: 0x2662cec8  addiu       $v0, $s3, -0x3138
    ctx->pc = 0x2afce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954696));
label_2afce4:
    // 0x2afce4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2afce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2afce8: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x2afce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2afcec: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2afcecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2afcf0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AFCF0u;
    {
        const bool branch_taken_0x2afcf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFCF0u;
        // 0x2afcf4: 0x24140004  addiu       $s4, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afcf0) {
            ctx->pc = 0x2AFD18u;
            goto label_2afd18;
        }
    }
    ctx->pc = 0x2AFCF8u;
    // 0x2afcf8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2afcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2afcfc: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2afcfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2afd00: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2afd00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2afd04: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AFD04u;
    SET_GPR_U32(ctx, 31, 0x2AFD0Cu);
    ctx->pc = 0x2AFD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFD04u;
    // 0x2afd08: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AFD04u, 0x2AFD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFD0Cu;
label_2afd0c:
    // 0x2afd0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2AFD0Cu;
    {
        const bool branch_taken_0x2afd0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFD0Cu;
        // 0x2afd10: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afd0c) {
            ctx->pc = 0x2AFD1Cu;
            goto label_2afd1c;
        }
    }
    ctx->pc = 0x2AFD14u;
    // 0x2afd14: 0x0  nop
    ctx->pc = 0x2afd14u;
    // NOP
label_2afd18:
    // 0x2afd18: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x2afd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2afd1c:
    // 0x2afd1c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2afd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2afd20: 0x52820001  beql        $s4, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AFD20u;
    {
        const bool branch_taken_0x2afd20 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x2afd20) {
            ctx->pc = 0x2AFD24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFD20u;
            // 0x2afd24: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFD28u;
            goto label_2afd28;
        }
    }
    ctx->pc = 0x2AFD28u;
label_2afd28:
    // 0x2afd28: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2afd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2afd2c: 0x52820001  beql        $s4, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AFD2Cu;
    {
        const bool branch_taken_0x2afd2c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x2afd2c) {
            ctx->pc = 0x2AFD30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFD2Cu;
            // 0x2afd30: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFD34u;
            goto label_2afd34;
        }
    }
    ctx->pc = 0x2AFD34u;
label_2afd34:
    // 0x2afd34: 0x2662cec8  addiu       $v0, $s3, -0x3138
    ctx->pc = 0x2afd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954696));
    // 0x2afd38: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2afd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2afd3c: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x2afd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2afd40: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2afd40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2afd44: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AFD44u;
    {
        const bool branch_taken_0x2afd44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2afd44) {
            ctx->pc = 0x2AFD48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFD44u;
            // 0x2afd48: 0xe6410020  swc1        $f1, 0x20($s2) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFD64u;
            goto label_2afd64;
        }
    }
    ctx->pc = 0x2AFD4Cu;
    // 0x2afd4c: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x2afd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2afd50: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2afd50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2afd54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2afd54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2afd58: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2afd58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2afd5c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2afd5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2afd60: 0x2662cec8  addiu       $v0, $s3, -0x3138
    ctx->pc = 0x2afd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954696));
label_2afd64:
    // 0x2afd64: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2afd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2afd68: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x2afd68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2afd6c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2afd6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2afd70: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AFD70u;
    {
        const bool branch_taken_0x2afd70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFD70u;
        // 0x2afd74: 0x24140005  addiu       $s4, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afd70) {
            ctx->pc = 0x2AFD98u;
            goto label_2afd98;
        }
    }
    ctx->pc = 0x2AFD78u;
    // 0x2afd78: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2afd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2afd7c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2afd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2afd80: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2afd80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2afd84: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AFD84u;
    SET_GPR_U32(ctx, 31, 0x2AFD8Cu);
    ctx->pc = 0x2AFD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFD84u;
    // 0x2afd88: 0x8e04002c  lw          $a0, 0x2C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AFD84u, 0x2AFD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFD8Cu;
label_2afd8c:
    // 0x2afd8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2AFD8Cu;
    {
        const bool branch_taken_0x2afd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFD8Cu;
        // 0x2afd90: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afd8c) {
            ctx->pc = 0x2AFD9Cu;
            goto label_2afd9c;
        }
    }
    ctx->pc = 0x2AFD94u;
    // 0x2afd94: 0x0  nop
    ctx->pc = 0x2afd94u;
    // NOP
label_2afd98:
    // 0x2afd98: 0xc601002c  lwc1        $f1, 0x2C($s0)
    ctx->pc = 0x2afd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2afd9c:
    // 0x2afd9c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2afd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2afda0: 0x52820001  beql        $s4, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AFDA0u;
    {
        const bool branch_taken_0x2afda0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x2afda0) {
            ctx->pc = 0x2AFDA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFDA0u;
            // 0x2afda4: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFDA8u;
            goto label_2afda8;
        }
    }
    ctx->pc = 0x2AFDA8u;
label_2afda8:
    // 0x2afda8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2afda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2afdac: 0x52820001  beql        $s4, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AFDACu;
    {
        const bool branch_taken_0x2afdac = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x2afdac) {
            ctx->pc = 0x2AFDB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFDACu;
            // 0x2afdb0: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFDB4u;
            goto label_2afdb4;
        }
    }
    ctx->pc = 0x2AFDB4u;
label_2afdb4:
    // 0x2afdb4: 0x2662cec8  addiu       $v0, $s3, -0x3138
    ctx->pc = 0x2afdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954696));
    // 0x2afdb8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2afdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2afdbc: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x2afdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2afdc0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2afdc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2afdc4: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AFDC4u;
    {
        const bool branch_taken_0x2afdc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2afdc4) {
            ctx->pc = 0x2AFDC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFDC4u;
            // 0x2afdc8: 0xe6410024  swc1        $f1, 0x24($s2) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFDE4u;
            goto label_2afde4;
        }
    }
    ctx->pc = 0x2AFDCCu;
    // 0x2afdcc: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x2afdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x2afdd0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2afdd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2afdd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2afdd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2afdd8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2afdd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2afddc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2afddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2afde0: 0x2662cec8  addiu       $v0, $s3, -0x3138
    ctx->pc = 0x2afde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954696));
label_2afde4:
    // 0x2afde4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2afde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2afde8: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x2afde8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2afdec: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2afdecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2afdf0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AFDF0u;
    {
        const bool branch_taken_0x2afdf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFDF0u;
        // 0x2afdf4: 0x24140006  addiu       $s4, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afdf0) {
            ctx->pc = 0x2AFE18u;
            goto label_2afe18;
        }
    }
    ctx->pc = 0x2AFDF8u;
    // 0x2afdf8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2afdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2afdfc: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2afdfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2afe00: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2afe00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2afe04: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AFE04u;
    SET_GPR_U32(ctx, 31, 0x2AFE0Cu);
    ctx->pc = 0x2AFE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFE04u;
    // 0x2afe08: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AFE04u, 0x2AFE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFE0Cu;
label_2afe0c:
    // 0x2afe0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2AFE0Cu;
    {
        const bool branch_taken_0x2afe0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFE0Cu;
        // 0x2afe10: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afe0c) {
            ctx->pc = 0x2AFE1Cu;
            goto label_2afe1c;
        }
    }
    ctx->pc = 0x2AFE14u;
    // 0x2afe14: 0x0  nop
    ctx->pc = 0x2afe14u;
    // NOP
label_2afe18:
    // 0x2afe18: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x2afe18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2afe1c:
    // 0x2afe1c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2afe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2afe20: 0x52820001  beql        $s4, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AFE20u;
    {
        const bool branch_taken_0x2afe20 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x2afe20) {
            ctx->pc = 0x2AFE24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFE20u;
            // 0x2afe24: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFE28u;
            goto label_2afe28;
        }
    }
    ctx->pc = 0x2AFE28u;
label_2afe28:
    // 0x2afe28: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2afe28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2afe2c: 0x52820001  beql        $s4, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AFE2Cu;
    {
        const bool branch_taken_0x2afe2c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x2afe2c) {
            ctx->pc = 0x2AFE30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFE2Cu;
            // 0x2afe30: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFE34u;
            goto label_2afe34;
        }
    }
    ctx->pc = 0x2AFE34u;
label_2afe34:
    // 0x2afe34: 0x2662cec8  addiu       $v0, $s3, -0x3138
    ctx->pc = 0x2afe34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954696));
    // 0x2afe38: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2afe38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2afe3c: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x2afe3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2afe40: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2afe40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2afe44: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AFE44u;
    {
        const bool branch_taken_0x2afe44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2afe44) {
            ctx->pc = 0x2AFE48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFE44u;
            // 0x2afe48: 0xe6410028  swc1        $f1, 0x28($s2) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFE64u;
            goto label_2afe64;
        }
    }
    ctx->pc = 0x2AFE4Cu;
    // 0x2afe4c: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x2afe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x2afe50: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2afe50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2afe54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2afe54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2afe58: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2afe58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2afe5c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2afe5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2afe60: 0x2662cec8  addiu       $v0, $s3, -0x3138
    ctx->pc = 0x2afe60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954696));
label_2afe64:
    // 0x2afe64: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2afe64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2afe68: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x2afe68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2afe6c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2afe6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2afe70: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AFE70u;
    {
        const bool branch_taken_0x2afe70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFE70u;
        // 0x2afe74: 0x24140007  addiu       $s4, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afe70) {
            ctx->pc = 0x2AFE98u;
            goto label_2afe98;
        }
    }
    ctx->pc = 0x2AFE78u;
    // 0x2afe78: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2afe78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2afe7c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2afe7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2afe80: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2afe80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2afe84: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AFE84u;
    SET_GPR_U32(ctx, 31, 0x2AFE8Cu);
    ctx->pc = 0x2AFE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFE84u;
    // 0x2afe88: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AFE84u, 0x2AFE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFE8Cu;
label_2afe8c:
    // 0x2afe8c: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x2afe8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2afe90: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2AFE90u;
    {
        const bool branch_taken_0x2afe90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFE90u;
        // 0x2afe94: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afe90) {
            ctx->pc = 0x2AFEA4u;
            goto label_2afea4;
        }
    }
    ctx->pc = 0x2AFE98u;
label_2afe98:
    // 0x2afe98: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x2afe98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2afe9c: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x2afe9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2afea0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2afea0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2afea4:
    // 0x2afea4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2afea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2afea8: 0x52820001  beql        $s4, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AFEA8u;
    {
        const bool branch_taken_0x2afea8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x2afea8) {
            ctx->pc = 0x2AFEACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFEA8u;
            // 0x2afeac: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFEB0u;
            goto label_2afeb0;
        }
    }
    ctx->pc = 0x2AFEB0u;
label_2afeb0:
    // 0x2afeb0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2afeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2afeb4: 0x52820001  beql        $s4, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AFEB4u;
    {
        const bool branch_taken_0x2afeb4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x2afeb4) {
            ctx->pc = 0x2AFEB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFEB4u;
            // 0x2afeb8: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFEBCu;
            goto label_2afebc;
        }
    }
    ctx->pc = 0x2AFEBCu;
label_2afebc:
    // 0x2afebc: 0x2662cec8  addiu       $v0, $s3, -0x3138
    ctx->pc = 0x2afebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954696));
    // 0x2afec0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2afec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2afec4: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x2afec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2afec8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2afec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2afecc: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AFECCu;
    {
        const bool branch_taken_0x2afecc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2afecc) {
            ctx->pc = 0x2AFED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFECCu;
            // 0x2afed0: 0xe641002c  swc1        $f1, 0x2C($s2) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFEECu;
            goto label_2afeec;
        }
    }
    ctx->pc = 0x2AFED4u;
    // 0x2afed4: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x2afed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x2afed8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2afed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2afedc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2afedcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2afee0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2afee0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2afee4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2afee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2afee8: 0x2662cec8  addiu       $v0, $s3, -0x3138
    ctx->pc = 0x2afee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954696));
label_2afeec:
    // 0x2afeec: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2afeecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2afef0: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x2afef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2afef4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2afef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2afef8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AFEF8u;
    {
        const bool branch_taken_0x2afef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFEF8u;
        // 0x2afefc: 0x24140008  addiu       $s4, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afef8) {
            ctx->pc = 0x2AFF20u;
            goto label_2aff20;
        }
    }
    ctx->pc = 0x2AFF00u;
    // 0x2aff00: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2aff00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2aff04: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2aff04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2aff08: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2aff08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2aff0c: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AFF0Cu;
    SET_GPR_U32(ctx, 31, 0x2AFF14u);
    ctx->pc = 0x2AFF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFF0Cu;
    // 0x2aff10: 0x8e040038  lw          $a0, 0x38($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AFF0Cu, 0x2AFF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFF14u;
label_2aff14:
    // 0x2aff14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2AFF14u;
    {
        const bool branch_taken_0x2aff14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFF14u;
        // 0x2aff18: 0xc6010014  lwc1        $f1, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aff14) {
            ctx->pc = 0x2AFF28u;
            goto label_2aff28;
        }
    }
    ctx->pc = 0x2AFF1Cu;
    // 0x2aff1c: 0x0  nop
    ctx->pc = 0x2aff1cu;
    // NOP
label_2aff20:
    // 0x2aff20: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x2aff20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aff24: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x2aff24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2aff28:
    // 0x2aff28: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2aff28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2aff2c: 0x16820002  bne         $s4, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AFF2Cu;
    {
        const bool branch_taken_0x2aff2c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AFF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFF2Cu;
        // 0x2aff30: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aff2c) {
            ctx->pc = 0x2AFF38u;
            goto label_2aff38;
        }
    }
    ctx->pc = 0x2AFF34u;
    // 0x2aff34: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x2aff34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_2aff38:
    // 0x2aff38: 0x56800001  bnel        $s4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AFF38u;
    {
        const bool branch_taken_0x2aff38 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aff38) {
            ctx->pc = 0x2AFF3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFF38u;
            // 0x2aff3c: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFF40u;
            goto label_2aff40;
        }
    }
    ctx->pc = 0x2AFF40u;
label_2aff40:
    // 0x2aff40: 0x2662cec8  addiu       $v0, $s3, -0x3138
    ctx->pc = 0x2aff40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954696));
    // 0x2aff44: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2aff44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2aff48: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x2aff48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2aff4c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2aff4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2aff50: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AFF50u;
    {
        const bool branch_taken_0x2aff50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aff50) {
            ctx->pc = 0x2AFF54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFF50u;
            // 0x2aff54: 0xe6410030  swc1        $f1, 0x30($s2) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFF6Cu;
            goto label_2aff6c;
        }
    }
    ctx->pc = 0x2AFF58u;
    // 0x2aff58: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x2aff58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x2aff5c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2aff5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2aff60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2aff60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aff64: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2aff64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2aff68: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2aff68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2aff6c:
    // 0x2aff6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2aff6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aff70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2aff70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aff74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2aff74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aff78: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2aff78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aff7c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2aff7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aff80: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2aff80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2aff84: 0x3e00008  jr          $ra
    ctx->pc = 0x2AFF84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AFF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFF84u;
        // 0x2aff88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AFF84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AFF8Cu;
    // 0x2aff8c: 0x0  nop
    ctx->pc = 0x2aff8cu;
    // NOP
    ctx->pc = 0x2aff90u;
}
