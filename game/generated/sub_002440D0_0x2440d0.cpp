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

// Function: sub_002440D0
// Address: 0x2440d0 - 0x244218
void sub_002440D0_0x2440d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002440D0_0x2440d0");
#endif

    switch (ctx->pc) {
        case 0x244160u: goto label_244160;
        default: break;
    }

    ctx->pc = 0x2440d0u;

    // 0x2440d0: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x2440d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x2440d4: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x2440d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2440d8: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x2440d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2440dc: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x2440dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2440e0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2440e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2440e4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2440e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2440e8: 0x3c050016  lui         $a1, 0x16
    ctx->pc = 0x2440e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22 << 16));
    // 0x2440ec: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2440ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2440f0: 0x8ca56694  lw          $a1, 0x6694($a1)
    ctx->pc = 0x2440f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 26260)));
    // 0x2440f4: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x2440f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2440f8: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x2440f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2440fc: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2440fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x244100: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x244100u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x244104: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x244104u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x244108: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x244108u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x24410c: 0xc4a10034  lwc1        $f1, 0x34($a1)
    ctx->pc = 0x24410cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244110: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x244110u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244114: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x244114u;
    {
        const bool branch_taken_0x244114 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x244114) {
            ctx->pc = 0x244118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244114u;
            // 0x244118: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244128u;
            goto label_244128;
        }
    }
    ctx->pc = 0x24411Cu;
    // 0x24411c: 0x3e00008  jr          $ra
    ctx->pc = 0x24411Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24411Cu;
        // 0x244120: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24411Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244124u;
    // 0x244124: 0x0  nop
    ctx->pc = 0x244124u;
    // NOP
label_244128:
    // 0x244128: 0x8ca70020  lw          $a3, 0x20($a1)
    ctx->pc = 0x244128u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x24412c: 0x24446690  addiu       $a0, $v0, 0x6690
    ctx->pc = 0x24412cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26256));
    // 0x244130: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x244130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x244134: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x244134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x244138: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x244138u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24413c: 0x10e00034  beqz        $a3, . + 4 + (0x34 << 2)
    ctx->pc = 0x24413Cu;
    {
        const bool branch_taken_0x24413c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x244140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24413Cu;
        // 0x244140: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24413c) {
            ctx->pc = 0x244210u;
            goto label_244210;
        }
    }
    ctx->pc = 0x244144u;
    // 0x244144: 0x8c860110  lw          $a2, 0x110($a0)
    ctx->pc = 0x244144u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
    // 0x244148: 0x46001246  mov.s       $f9, $f2
    ctx->pc = 0x244148u;
    ctx->f[9] = FPU_MOV_S(ctx->f[2]);
    // 0x24414c: 0x44805000  mtc1        $zero, $f10
    ctx->pc = 0x24414cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x244150: 0x46001a06  mov.s       $f8, $f3
    ctx->pc = 0x244150u;
    ctx->f[8] = FPU_MOV_S(ctx->f[3]);
    // 0x244154: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x244154u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244158: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x244158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x24415c: 0x0  nop
    ctx->pc = 0x24415cu;
    // NOP
label_244160:
    // 0x244160: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x244160u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244164: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x244164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x244168: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x244168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x24416c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x24416cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x244170: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x244170u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x244174: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x244174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x244178: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x244178u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x24417c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x24417cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244180: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x244180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x244184: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x244184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x244188: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x244188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24418c: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x24418cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x244190: 0x460801c1  sub.s       $f7, $f0, $f8
    ctx->pc = 0x244190u;
    ctx->f[7] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x244194: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x244194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x244198: 0x46081081  sub.s       $f2, $f2, $f8
    ctx->pc = 0x244198u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[8]);
    // 0x24419c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x24419cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2441a0: 0x46081981  sub.s       $f6, $f3, $f8
    ctx->pc = 0x2441a0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[3], ctx->f[8]);
    // 0x2441a4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2441a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2441a8: 0x46092101  sub.s       $f4, $f4, $f9
    ctx->pc = 0x2441a8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[9]);
    // 0x2441ac: 0x46090141  sub.s       $f5, $f0, $f9
    ctx->pc = 0x2441acu;
    ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[9]);
    // 0x2441b0: 0x46090841  sub.s       $f1, $f1, $f9
    ctx->pc = 0x2441b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[9]);
    // 0x2441b4: 0x460220c2  mul.s       $f3, $f4, $f2
    ctx->pc = 0x2441b4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2441b8: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2441b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2441bc: 0x46060802  mul.s       $f0, $f1, $f6
    ctx->pc = 0x2441bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x2441c0: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x2441c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x2441c4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2441c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2441c8: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x2441c8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2441cc: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2441ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2441d0: 0x460a0036  c.le.s      $f0, $f10
    ctx->pc = 0x2441d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2441d4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x2441D4u;
    {
        const bool branch_taken_0x2441d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2441D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2441D4u;
        // 0x2441d8: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2441d4) {
            ctx->pc = 0x2441F8u;
            goto label_2441f8;
        }
    }
    ctx->pc = 0x2441DCu;
    // 0x2441dc: 0x46072842  mul.s       $f1, $f5, $f7
    ctx->pc = 0x2441dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x2441e0: 0x46062002  mul.s       $f0, $f4, $f6
    ctx->pc = 0x2441e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x2441e4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2441e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2441e8: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2441e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2441ec: 0x460a0836  c.le.s      $f1, $f10
    ctx->pc = 0x2441ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2441f0: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2441F0u;
    {
        const bool branch_taken_0x2441f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2441f0) {
            ctx->pc = 0x2441F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2441F0u;
            // 0x2441f4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2441F8u;
            goto label_2441f8;
        }
    }
    ctx->pc = 0x2441F8u;
label_2441f8:
    // 0x2441f8: 0x54e00005  bnel        $a3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2441F8u;
    {
        const bool branch_taken_0x2441f8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2441f8) {
            ctx->pc = 0x2441FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2441F8u;
            // 0x2441fc: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244210u;
            goto label_244210;
        }
    }
    ctx->pc = 0x244200u;
    // 0x244200: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x244200u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x244204: 0x109102b  sltu        $v0, $t0, $t1
    ctx->pc = 0x244204u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x244208: 0x5440ffd5  bnel        $v0, $zero, . + 4 + (-0x2B << 2)
    ctx->pc = 0x244208u;
    {
        const bool branch_taken_0x244208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x244208) {
            ctx->pc = 0x24420Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244208u;
            // 0x24420c: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244160;
        }
    }
    ctx->pc = 0x244210u;
label_244210:
    // 0x244210: 0x3e00008  jr          $ra
    ctx->pc = 0x244210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244210u;
        // 0x244214: 0x140102d  daddu       $v0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244218u;
}
