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

// Function: sub_002ACED0
// Address: 0x2aced0 - 0x2ad2c0
void sub_002ACED0_0x2aced0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ACED0_0x2aced0");
#endif

    switch (ctx->pc) {
        case 0x2acf68u: goto label_2acf68;
        case 0x2acfa0u: goto label_2acfa0;
        case 0x2acfdcu: goto label_2acfdc;
        case 0x2ad048u: goto label_2ad048;
        case 0x2ad080u: goto label_2ad080;
        case 0x2ad0bcu: goto label_2ad0bc;
        case 0x2ad138u: goto label_2ad138;
        case 0x2ad268u: goto label_2ad268;
        case 0x2ad288u: goto label_2ad288;
        default: break;
    }

    ctx->pc = 0x2aced0u;

label_2aced0:
    // 0x2aced0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2aced0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2aced4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2aced4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2aced8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2aced8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acedc: 0x2a820009  slti        $v0, $s4, 0x9
    ctx->pc = 0x2acedcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2acee0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2acee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2acee4: 0xe7b50070  swc1        $f21, 0x70($sp)
    ctx->pc = 0x2acee4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2acee8: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x2acee8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x2aceec: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2aceecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2acef0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2acef0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acef4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2acef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2acef8: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2acef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2acefc: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x2acefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x2acf00: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x2acf00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x2acf04: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x2acf04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x2acf08: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2acf08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2acf0c: 0xe7b60078  swc1        $f22, 0x78($sp)
    ctx->pc = 0x2acf0cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2acf10: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2ACF10u;
    {
        const bool branch_taken_0x2acf10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACF10u;
        // 0x2acf14: 0xe7b40068  swc1        $f20, 0x68($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acf10) {
            ctx->pc = 0x2ACF30u;
            goto label_2acf30;
        }
    }
    ctx->pc = 0x2ACF18u;
    // 0x2acf18: 0x8e22008c  lw          $v0, 0x8C($s1)
    ctx->pc = 0x2acf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x2acf1c: 0x1c4000b5  bgtz        $v0, . + 4 + (0xB5 << 2)
    ctx->pc = 0x2ACF1Cu;
    {
        const bool branch_taken_0x2acf1c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2ACF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACF1Cu;
        // 0x2acf20: 0x142880  sll         $a1, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acf1c) {
            ctx->pc = 0x2AD1F4u;
            goto label_2ad1f4;
        }
    }
    ctx->pc = 0x2ACF24u;
    // 0x2acf24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2acf24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2acf28: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x2ACF28u;
    {
        const bool branch_taken_0x2acf28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACF28u;
        // 0x2acf2c: 0xae22008c  sw          $v0, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acf28) {
            ctx->pc = 0x2AD1F4u;
            goto label_2ad1f4;
        }
    }
    ctx->pc = 0x2ACF30u;
label_2acf30:
    // 0x2acf30: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x2acf30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x2acf34: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2acf34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2acf38: 0x104000a9  beqz        $v0, . + 4 + (0xA9 << 2)
    ctx->pc = 0x2ACF38u;
    {
        const bool branch_taken_0x2acf38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACF38u;
        // 0x2acf3c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acf38) {
            ctx->pc = 0x2AD1E0u;
            goto label_2ad1e0;
        }
    }
    ctx->pc = 0x2ACF40u;
    // 0x2acf40: 0x16820035  bne         $s4, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2ACF40u;
    {
        const bool branch_taken_0x2acf40 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ACF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACF40u;
        // 0x2acf44: 0x8e2300b4  lw          $v1, 0xB4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acf40) {
            ctx->pc = 0x2AD018u;
            goto label_2ad018;
        }
    }
    ctx->pc = 0x2ACF48u;
    // 0x2acf48: 0x18600033  blez        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x2ACF48u;
    {
        const bool branch_taken_0x2acf48 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2ACF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACF48u;
        // 0x2acf4c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acf48) {
            ctx->pc = 0x2AD018u;
            goto label_2ad018;
        }
    }
    ctx->pc = 0x2ACF50u;
    // 0x2acf50: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2acf50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2acf54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2acf54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2acf58: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2acf58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2acf5c: 0x2456cec8  addiu       $s6, $v0, -0x3138
    ctx->pc = 0x2acf5cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954696));
    // 0x2acf60: 0x26350008  addiu       $s5, $s1, 0x8
    ctx->pc = 0x2acf60u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2acf64: 0x0  nop
    ctx->pc = 0x2acf64u;
    // NOP
label_2acf68:
    // 0x2acf68: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x2acf68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2acf6c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2acf6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2acf70: 0x751021  addu        $v0, $v1, $s5
    ctx->pc = 0x2acf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x2acf74: 0x8ec4001c  lw          $a0, 0x1C($s6)
    ctx->pc = 0x2acf74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28)));
    // 0x2acf78: 0x8c5000b0  lw          $s0, 0xB0($v0)
    ctx->pc = 0x2acf78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x2acf7c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2acf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2acf80: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2acf80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2acf84: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2ACF84u;
    {
        const bool branch_taken_0x2acf84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACF84u;
        // 0x2acf88: 0x3a39821  addu        $s3, $sp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acf84) {
            ctx->pc = 0x2ACFA8u;
            goto label_2acfa8;
        }
    }
    ctx->pc = 0x2ACF8Cu;
    // 0x2acf8c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2acf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2acf90: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2acf90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2acf94: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2acf94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2acf98: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2ACF98u;
    SET_GPR_U32(ctx, 31, 0x2ACFA0u);
    ctx->pc = 0x2ACF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACF98u;
    // 0x2acf9c: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2ACF98u, 0x2ACFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACFA0u;
label_2acfa0:
    // 0x2acfa0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2ACFA0u;
    {
        const bool branch_taken_0x2acfa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACFA0u;
        // 0x2acfa4: 0xc6010010  lwc1        $f1, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acfa0) {
            ctx->pc = 0x2ACFB0u;
            goto label_2acfb0;
        }
    }
    ctx->pc = 0x2ACFA8u;
label_2acfa8:
    // 0x2acfa8: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x2acfa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2acfac: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x2acfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2acfb0:
    // 0x2acfb0: 0x8e3000b8  lw          $s0, 0xB8($s1)
    ctx->pc = 0x2acfb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x2acfb4: 0x8ec3001c  lw          $v1, 0x1C($s6)
    ctx->pc = 0x2acfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28)));
    // 0x2acfb8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2acfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2acfbc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2acfbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2acfc0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2ACFC0u;
    {
        const bool branch_taken_0x2acfc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACFC0u;
        // 0x2acfc4: 0x46010500  add.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acfc0) {
            ctx->pc = 0x2ACFE8u;
            goto label_2acfe8;
        }
    }
    ctx->pc = 0x2ACFC8u;
    // 0x2acfc8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2acfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2acfcc: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2acfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2acfd0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2acfd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2acfd4: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2ACFD4u;
    SET_GPR_U32(ctx, 31, 0x2ACFDCu);
    ctx->pc = 0x2ACFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACFD4u;
    // 0x2acfd8: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2ACFD4u, 0x2ACFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACFDCu;
label_2acfdc:
    // 0x2acfdc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2ACFDCu;
    {
        const bool branch_taken_0x2acfdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACFDCu;
        // 0x2acfe0: 0xc6010010  lwc1        $f1, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acfdc) {
            ctx->pc = 0x2ACFF0u;
            goto label_2acff0;
        }
    }
    ctx->pc = 0x2ACFE4u;
    // 0x2acfe4: 0x0  nop
    ctx->pc = 0x2acfe4u;
    // NOP
label_2acfe8:
    // 0x2acfe8: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x2acfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2acfec: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x2acfecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2acff0:
    // 0x2acff0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2acff0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2acff4: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x2acff4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2acff8: 0x8e2300b4  lw          $v1, 0xB4($s1)
    ctx->pc = 0x2acff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x2acffc: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x2acffcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ad000: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x2ad000u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x2ad004: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x2AD004u;
    {
        const bool branch_taken_0x2ad004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AD008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD004u;
        // 0x2ad008: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad004) {
            ctx->pc = 0x2ACF68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2acf68;
        }
    }
    ctx->pc = 0x2AD00Cu;
    // 0x2ad00c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2AD00Cu;
    {
        const bool branch_taken_0x2ad00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD00Cu;
        // 0x2ad010: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad00c) {
            ctx->pc = 0x2AD01Cu;
            goto label_2ad01c;
        }
    }
    ctx->pc = 0x2AD014u;
    // 0x2ad014: 0x0  nop
    ctx->pc = 0x2ad014u;
    // NOP
label_2ad018:
    // 0x2ad018: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2ad018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2ad01c:
    // 0x2ad01c: 0x16820033  bne         $s4, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2AD01Cu;
    {
        const bool branch_taken_0x2ad01c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ad01c) {
            ctx->pc = 0x2AD0ECu;
            goto label_2ad0ec;
        }
    }
    ctx->pc = 0x2AD024u;
    // 0x2ad024: 0x18600031  blez        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x2AD024u;
    {
        const bool branch_taken_0x2ad024 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2AD028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD024u;
        // 0x2ad028: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad024) {
            ctx->pc = 0x2AD0ECu;
            goto label_2ad0ec;
        }
    }
    ctx->pc = 0x2AD02Cu;
    // 0x2ad02c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2ad02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2ad030: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ad030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ad034: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2ad034u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2ad038: 0x2456cec8  addiu       $s6, $v0, -0x3138
    ctx->pc = 0x2ad038u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954696));
    // 0x2ad03c: 0x26350008  addiu       $s5, $s1, 0x8
    ctx->pc = 0x2ad03cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2ad040: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x2ad040u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ad044: 0x0  nop
    ctx->pc = 0x2ad044u;
    // NOP
label_2ad048:
    // 0x2ad048: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x2ad048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2ad04c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2ad04cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2ad050: 0x751021  addu        $v0, $v1, $s5
    ctx->pc = 0x2ad050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x2ad054: 0x8ec40020  lw          $a0, 0x20($s6)
    ctx->pc = 0x2ad054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x2ad058: 0x8c5000b0  lw          $s0, 0xB0($v0)
    ctx->pc = 0x2ad058u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x2ad05c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ad05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ad060: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2ad060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2ad064: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AD064u;
    {
        const bool branch_taken_0x2ad064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD064u;
        // 0x2ad068: 0x2e39821  addu        $s3, $s7, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad064) {
            ctx->pc = 0x2AD088u;
            goto label_2ad088;
        }
    }
    ctx->pc = 0x2AD06Cu;
    // 0x2ad06c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ad06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ad070: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2ad070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ad074: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2ad074u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2ad078: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AD078u;
    SET_GPR_U32(ctx, 31, 0x2AD080u);
    ctx->pc = 0x2AD07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD078u;
    // 0x2ad07c: 0x8e040038  lw          $a0, 0x38($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AD078u, 0x2AD080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD080u;
label_2ad080:
    // 0x2ad080: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2AD080u;
    {
        const bool branch_taken_0x2ad080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD080u;
        // 0x2ad084: 0xc6010014  lwc1        $f1, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad080) {
            ctx->pc = 0x2AD090u;
            goto label_2ad090;
        }
    }
    ctx->pc = 0x2AD088u;
label_2ad088:
    // 0x2ad088: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x2ad088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ad08c: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x2ad08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ad090:
    // 0x2ad090: 0x8e3000b8  lw          $s0, 0xB8($s1)
    ctx->pc = 0x2ad090u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x2ad094: 0x8ec30020  lw          $v1, 0x20($s6)
    ctx->pc = 0x2ad094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x2ad098: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ad098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ad09c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ad09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ad0a0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AD0A0u;
    {
        const bool branch_taken_0x2ad0a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD0A0u;
        // 0x2ad0a4: 0x46010500  add.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad0a0) {
            ctx->pc = 0x2AD0C8u;
            goto label_2ad0c8;
        }
    }
    ctx->pc = 0x2AD0A8u;
    // 0x2ad0a8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ad0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ad0ac: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2ad0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ad0b0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2ad0b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2ad0b4: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AD0B4u;
    SET_GPR_U32(ctx, 31, 0x2AD0BCu);
    ctx->pc = 0x2AD0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD0B4u;
    // 0x2ad0b8: 0x8e040038  lw          $a0, 0x38($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AD0B4u, 0x2AD0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD0BCu;
label_2ad0bc:
    // 0x2ad0bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2AD0BCu;
    {
        const bool branch_taken_0x2ad0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD0BCu;
        // 0x2ad0c0: 0xc6010014  lwc1        $f1, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad0bc) {
            ctx->pc = 0x2AD0D0u;
            goto label_2ad0d0;
        }
    }
    ctx->pc = 0x2AD0C4u;
    // 0x2ad0c4: 0x0  nop
    ctx->pc = 0x2ad0c4u;
    // NOP
label_2ad0c8:
    // 0x2ad0c8: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x2ad0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ad0cc: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x2ad0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ad0d0:
    // 0x2ad0d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ad0d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ad0d4: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x2ad0d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2ad0d8: 0x8e2300b4  lw          $v1, 0xB4($s1)
    ctx->pc = 0x2ad0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x2ad0dc: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x2ad0dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ad0e0: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x2ad0e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x2ad0e4: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x2AD0E4u;
    {
        const bool branch_taken_0x2ad0e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AD0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD0E4u;
        // 0x2ad0e8: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad0e4) {
            ctx->pc = 0x2AD048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ad048;
        }
    }
    ctx->pc = 0x2AD0ECu;
label_2ad0ec:
    // 0x2ad0ec: 0x18600066  blez        $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x2AD0ECu;
    {
        const bool branch_taken_0x2ad0ec = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2AD0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD0ECu;
        // 0x2ad0f0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad0ec) {
            ctx->pc = 0x2AD288u;
            goto label_2ad288;
        }
    }
    ctx->pc = 0x2AD0F4u;
    // 0x2ad0f4: 0x268afffa  addiu       $t2, $s4, -0x6
    ctx->pc = 0x2ad0f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967290));
    // 0x2ad0f8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2ad0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2ad0fc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2ad0fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ad100: 0x2455cec8  addiu       $s5, $v0, -0x3138
    ctx->pc = 0x2ad100u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954696));
    // 0x2ad104: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ad104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2ad108: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ad108u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ad10c: 0x26280008  addiu       $t0, $s1, 0x8
    ctx->pc = 0x2ad10cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2ad110: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x2ad110u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad114: 0x24130007  addiu       $s3, $zero, 0x7
    ctx->pc = 0x2ad114u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ad118: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x2ad118u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ad11c: 0x2410000d  addiu       $s0, $zero, 0xD
    ctx->pc = 0x2ad11cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2ad120: 0x240f0010  addiu       $t7, $zero, 0x10
    ctx->pc = 0x2ad120u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ad124: 0x240e000e  addiu       $t6, $zero, 0xE
    ctx->pc = 0x2ad124u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2ad128: 0x27ad0010  addiu       $t5, $sp, 0x10
    ctx->pc = 0x2ad128u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ad12c: 0x240c0014  addiu       $t4, $zero, 0x14
    ctx->pc = 0x2ad12cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ad130: 0x93880  sll         $a3, $t1, 2
    ctx->pc = 0x2ad130u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2ad134: 0x0  nop
    ctx->pc = 0x2ad134u;
    // NOP
label_2ad138:
    // 0x2ad138: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x2ad138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2ad13c: 0x15730002  bne         $t3, $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AD13Cu;
    {
        const bool branch_taken_0x2ad13c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 19));
        ctx->pc = 0x2AD140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD13Cu;
        // 0x2ad140: 0x8c4600b0  lw          $a2, 0xB0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad13c) {
            ctx->pc = 0x2AD148u;
            goto label_2ad148;
        }
    }
    ctx->pc = 0x2AD144u;
    // 0x2ad144: 0xe4c10010  swc1        $f1, 0x10($a2)
    ctx->pc = 0x2ad144u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
label_2ad148:
    // 0x2ad148: 0x51520001  beql        $t2, $s2, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AD148u;
    {
        const bool branch_taken_0x2ad148 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 18));
        if (branch_taken_0x2ad148) {
            ctx->pc = 0x2AD14Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD148u;
            // 0x2ad14c: 0xe4c10014  swc1        $f1, 0x14($a2) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD150u;
            goto label_2ad150;
        }
    }
    ctx->pc = 0x2AD150u;
label_2ad150:
    // 0x2ad150: 0xa2880  sll         $a1, $t2, 2
    ctx->pc = 0x2ad150u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x2ad154: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x2ad154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2ad158: 0xb51821  addu        $v1, $a1, $s5
    ctx->pc = 0x2ad158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    // 0x2ad15c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2ad15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ad160: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2ad160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2ad164: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AD164u;
    {
        const bool branch_taken_0x2ad164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD164u;
        // 0x2ad168: 0xa61021  addu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad164) {
            ctx->pc = 0x2AD180u;
            goto label_2ad180;
        }
    }
    ctx->pc = 0x2AD16Cu;
    // 0x2ad16c: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x2ad16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2ad170: 0xe4620008  swc1        $f2, 0x8($v1)
    ctx->pc = 0x2ad170u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2ad174: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2AD174u;
    {
        const bool branch_taken_0x2ad174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD174u;
        // 0x2ad178: 0xe4750004  swc1        $f21, 0x4($v1) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad174) {
            ctx->pc = 0x2AD184u;
            goto label_2ad184;
        }
    }
    ctx->pc = 0x2AD17Cu;
    // 0x2ad17c: 0x0  nop
    ctx->pc = 0x2ad17cu;
    // NOP
label_2ad180:
    // 0x2ad180: 0xe4550018  swc1        $f21, 0x18($v0)
    ctx->pc = 0x2ad180u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_2ad184:
    // 0x2ad184: 0x16900006  bne         $s4, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AD184u;
    {
        const bool branch_taken_0x2ad184 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 16));
        ctx->pc = 0x2AD188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD184u;
        // 0x2ad188: 0xe81821  addu        $v1, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad184) {
            ctx->pc = 0x2AD1A0u;
            goto label_2ad1a0;
        }
    }
    ctx->pc = 0x2AD18Cu;
    // 0x2ad18c: 0x3a72021  addu        $a0, $sp, $a3
    ctx->pc = 0x2ad18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 7)));
    // 0x2ad190: 0x8c6200b0  lw          $v0, 0xB0($v1)
    ctx->pc = 0x2ad190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x2ad194: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2ad194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ad198: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x2ad198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x2ad19c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2ad19cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2ad1a0:
    // 0x2ad1a0: 0x568e0008  bnel        $s4, $t6, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AD1A0u;
    {
        const bool branch_taken_0x2ad1a0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 14));
        if (branch_taken_0x2ad1a0) {
            ctx->pc = 0x2AD1A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD1A0u;
            // 0x2ad1a4: 0x8e2200b4  lw          $v0, 0xB4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD1C4u;
            goto label_2ad1c4;
        }
    }
    ctx->pc = 0x2AD1A8u;
    // 0x2ad1a8: 0xe81821  addu        $v1, $a3, $t0
    ctx->pc = 0x2ad1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2ad1ac: 0x1a72021  addu        $a0, $t5, $a3
    ctx->pc = 0x2ad1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x2ad1b0: 0x8c6200b0  lw          $v0, 0xB0($v1)
    ctx->pc = 0x2ad1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x2ad1b4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2ad1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ad1b8: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x2ad1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x2ad1bc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2ad1bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2ad1c0: 0x8e2200b4  lw          $v0, 0xB4($s1)
    ctx->pc = 0x2ad1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
label_2ad1c4:
    // 0x2ad1c4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2ad1c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2ad1c8: 0x122102a  slt         $v0, $t1, $v0
    ctx->pc = 0x2ad1c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ad1cc: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x2AD1CCu;
    {
        const bool branch_taken_0x2ad1cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AD1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD1CCu;
        // 0x2ad1d0: 0x93880  sll         $a3, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad1cc) {
            ctx->pc = 0x2AD138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ad138;
        }
    }
    ctx->pc = 0x2AD1D4u;
    // 0x2ad1d4: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2AD1D4u;
    {
        const bool branch_taken_0x2ad1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD1D4u;
        // 0x2ad1d8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad1d4) {
            ctx->pc = 0x2AD28Cu;
            goto label_2ad28c;
        }
    }
    ctx->pc = 0x2AD1DCu;
    // 0x2ad1dc: 0x0  nop
    ctx->pc = 0x2ad1dcu;
    // NOP
label_2ad1e0:
    // 0x2ad1e0: 0xde220080  ld          $v0, 0x80($s1)
    ctx->pc = 0x2ad1e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x2ad1e4: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x2ad1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x2ad1e8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2AD1E8u;
    {
        const bool branch_taken_0x2ad1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD1E8u;
        // 0x2ad1ec: 0x30620010  andi        $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad1e8) {
            ctx->pc = 0x2AD230u;
            goto label_2ad230;
        }
    }
    ctx->pc = 0x2AD1F0u;
    // 0x2ad1f0: 0x142880  sll         $a1, $s4, 2
    ctx->pc = 0x2ad1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_2ad1f4:
    // 0x2ad1f4: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x2ad1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x2ad1f8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2ad1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2ad1fc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ad1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ad200: 0x8c63ce88  lw          $v1, -0x3178($v1)
    ctx->pc = 0x2ad200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954632)));
    // 0x2ad204: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ad204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ad208: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AD208u;
    {
        const bool branch_taken_0x2ad208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD208u;
        // 0x2ad20c: 0xb11021  addu        $v0, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad208) {
            ctx->pc = 0x2AD228u;
            goto label_2ad228;
        }
    }
    ctx->pc = 0x2AD210u;
    // 0x2ad210: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ad210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2ad214: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ad214u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad218: 0x8c430090  lw          $v1, 0x90($v0)
    ctx->pc = 0x2ad218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x2ad21c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2ad21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2ad220: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2AD220u;
    {
        const bool branch_taken_0x2ad220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD220u;
        // 0x2ad224: 0xe4750004  swc1        $f21, 0x4($v1) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad220) {
            ctx->pc = 0x2AD288u;
            goto label_2ad288;
        }
    }
    ctx->pc = 0x2AD228u;
label_2ad228:
    // 0x2ad228: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2AD228u;
    {
        const bool branch_taken_0x2ad228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD228u;
        // 0x2ad22c: 0xe4550090  swc1        $f21, 0x90($v0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad228) {
            ctx->pc = 0x2AD288u;
            goto label_2ad288;
        }
    }
    ctx->pc = 0x2AD230u;
label_2ad230:
    // 0x2ad230: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2AD230u;
    {
        const bool branch_taken_0x2ad230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD230u;
        // 0x2ad234: 0x262400b4  addiu       $a0, $s1, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 180));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad230) {
            ctx->pc = 0x2AD288u;
            goto label_2ad288;
        }
    }
    ctx->pc = 0x2AD238u;
    // 0x2ad238: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ad238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ad23c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AD23Cu;
    {
        const bool branch_taken_0x2ad23c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AD240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD23Cu;
        // 0x2ad240: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad23c) {
            ctx->pc = 0x2AD250u;
            goto label_2ad250;
        }
    }
    ctx->pc = 0x2AD244u;
    // 0x2ad244: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2AD244u;
    {
        const bool branch_taken_0x2ad244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD244u;
        // 0x2ad248: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad244) {
            ctx->pc = 0x2AD25Cu;
            goto label_2ad25c;
        }
    }
    ctx->pc = 0x2AD24Cu;
    // 0x2ad24c: 0x0  nop
    ctx->pc = 0x2ad24cu;
    // NOP
label_2ad250:
    // 0x2ad250: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AD250u;
    {
        const bool branch_taken_0x2ad250 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AD254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD250u;
        // 0x2ad254: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad250) {
            ctx->pc = 0x2AD270u;
            goto label_2ad270;
        }
    }
    ctx->pc = 0x2AD258u;
    // 0x2ad258: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2ad258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2ad25c:
    // 0x2ad25c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ad25cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad260: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2AD260u;
    SET_GPR_U32(ctx, 31, 0x2AD268u);
    ctx->pc = 0x2AD264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD260u;
    // 0x2ad264: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    goto label_2aced0;
    ctx->pc = 0x2AD268u;
label_2ad268:
    // 0x2ad268: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2AD268u;
    {
        const bool branch_taken_0x2ad268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD268u;
        // 0x2ad26c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad268) {
            ctx->pc = 0x2AD28Cu;
            goto label_2ad28c;
        }
    }
    ctx->pc = 0x2AD270u;
label_2ad270:
    // 0x2ad270: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AD270u;
    {
        const bool branch_taken_0x2ad270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AD274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD270u;
        // 0x2ad274: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad270) {
            ctx->pc = 0x2AD28Cu;
            goto label_2ad28c;
        }
    }
    ctx->pc = 0x2AD278u;
    // 0x2ad278: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x2ad278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2ad27c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ad27cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad280: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2AD280u;
    SET_GPR_U32(ctx, 31, 0x2AD288u);
    ctx->pc = 0x2AD284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD280u;
    // 0x2ad284: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    goto label_2aced0;
    ctx->pc = 0x2AD288u;
label_2ad288:
    // 0x2ad288: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2ad288u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ad28c:
    // 0x2ad28c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2ad28cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ad290: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2ad290u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ad294: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2ad294u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ad298: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2ad298u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ad29c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x2ad29cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ad2a0: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x2ad2a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ad2a4: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x2ad2a4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2ad2a8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2ad2a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ad2ac: 0xc7b60078  lwc1        $f22, 0x78($sp)
    ctx->pc = 0x2ad2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2ad2b0: 0xc7b50070  lwc1        $f21, 0x70($sp)
    ctx->pc = 0x2ad2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2ad2b4: 0xc7b40068  lwc1        $f20, 0x68($sp)
    ctx->pc = 0x2ad2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ad2b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD2B8u;
        // 0x2ad2bc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD2B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD2C0u;
}
