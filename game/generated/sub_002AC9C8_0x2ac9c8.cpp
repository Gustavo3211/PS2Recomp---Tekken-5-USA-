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

// Function: sub_002AC9C8
// Address: 0x2ac9c8 - 0x2aced0
void sub_002AC9C8_0x2ac9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC9C8_0x2ac9c8");
#endif

    switch (ctx->pc) {
        case 0x2aca80u: goto label_2aca80;
        case 0x2aca8cu: goto label_2aca8c;
        case 0x2acad0u: goto label_2acad0;
        case 0x2acb08u: goto label_2acb08;
        case 0x2acb40u: goto label_2acb40;
        case 0x2acba8u: goto label_2acba8;
        case 0x2acbe0u: goto label_2acbe0;
        case 0x2acc18u: goto label_2acc18;
        case 0x2acc60u: goto label_2acc60;
        case 0x2acce4u: goto label_2acce4;
        case 0x2accf0u: goto label_2accf0;
        case 0x2acde0u: goto label_2acde0;
        case 0x2acdecu: goto label_2acdec;
        case 0x2ace60u: goto label_2ace60;
        case 0x2ace74u: goto label_2ace74;
        case 0x2ace84u: goto label_2ace84;
        case 0x2ace94u: goto label_2ace94;
        default: break;
    }

    ctx->pc = 0x2ac9c8u;

label_2ac9c8:
    // 0x2ac9c8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2ac9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2ac9cc: 0x28a30009  slti        $v1, $a1, 0x9
    ctx->pc = 0x2ac9ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2ac9d0: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x2ac9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x2ac9d4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2ac9d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac9d8: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2ac9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2ac9dc: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2ac9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2ac9e0: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2ac9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2ac9e4: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2ac9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2ac9e8: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2ac9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2ac9ec: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x2ac9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x2ac9f0: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x2ac9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x2ac9f4: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2ac9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2ac9f8: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x2ac9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x2ac9fc: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x2ac9fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2aca00: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2aca00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2aca04: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2aca04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2aca08: 0x8e620064  lw          $v0, 0x64($s3)
    ctx->pc = 0x2aca08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x2aca0c: 0xc4540000  lwc1        $f20, 0x0($v0)
    ctx->pc = 0x2aca0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2aca10: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x2aca10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x2aca14: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2ACA14u;
    {
        const bool branch_taken_0x2aca14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACA14u;
        // 0x2aca18: 0xc0b02d  daddu       $s6, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aca14) {
            ctx->pc = 0x2ACA98u;
            goto label_2aca98;
        }
    }
    ctx->pc = 0x2ACA1Cu;
    // 0x2aca1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2aca1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2aca20: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2aca20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aca24: 0xc6c00014  lwc1        $f0, 0x14($s6)
    ctx->pc = 0x2aca24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aca28: 0x8e62008c  lw          $v0, 0x8C($s3)
    ctx->pc = 0x2aca28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x2aca2c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2aca2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2aca30: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2aca30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2aca34: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2aca34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2aca38: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2aca38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2aca3c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2ACA3Cu;
    {
        const bool branch_taken_0x2aca3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aca3c) {
            ctx->pc = 0x2ACA40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ACA3Cu;
            // 0x2aca40: 0xae63008c  sw          $v1, 0x8C($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ACA44u;
            goto label_2aca44;
        }
    }
    ctx->pc = 0x2ACA44u;
label_2aca44:
    // 0x2aca44: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2aca44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aca48: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x2aca48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2aca4c: 0x8e620088  lw          $v0, 0x88($s3)
    ctx->pc = 0x2aca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x2aca50: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x2aca50u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x2aca54: 0x2652ce88  addiu       $s2, $s2, -0x3178
    ctx->pc = 0x2aca54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954632));
    // 0x2aca58: 0x2459021  addu        $s2, $s2, $a1
    ctx->pc = 0x2aca58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x2aca5c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2aca5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2aca60: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2aca60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2aca64: 0x144000d3  bnez        $v0, . + 4 + (0xD3 << 2)
    ctx->pc = 0x2ACA64u;
    {
        const bool branch_taken_0x2aca64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ACA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACA64u;
        // 0x2aca68: 0xb31021  addu        $v0, $a1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aca64) {
            ctx->pc = 0x2ACDB4u;
            goto label_2acdb4;
        }
    }
    ctx->pc = 0x2ACA6Cu;
    // 0x2aca6c: 0x24a20090  addiu       $v0, $a1, 0x90
    ctx->pc = 0x2aca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
    // 0x2aca70: 0x8e650060  lw          $a1, 0x60($s3)
    ctx->pc = 0x2aca70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x2aca74: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2aca74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2aca78: 0xc0aa626  jal         func_2A9898
    ctx->pc = 0x2ACA78u;
    SET_GPR_U32(ctx, 31, 0x2ACA80u);
    ctx->pc = 0x2ACA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACA78u;
    // 0x2aca7c: 0x2628821  addu        $s1, $s3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9898u, 0x2ACA78u, 0x2ACA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACA80u;
label_2aca80:
    // 0x2aca80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2aca80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aca84: 0xc0aa622  jal         func_2A9888
    ctx->pc = 0x2ACA84u;
    SET_GPR_U32(ctx, 31, 0x2ACA8Cu);
    ctx->pc = 0x2ACA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACA84u;
    // 0x2aca88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9888u, 0x2ACA84u, 0x2ACA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACA8Cu;
label_2aca8c:
    // 0x2aca8c: 0x100000d8  b           . + 4 + (0xD8 << 2)
    ctx->pc = 0x2ACA8Cu;
    {
        const bool branch_taken_0x2aca8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACA8Cu;
        // 0x2aca90: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aca8c) {
            ctx->pc = 0x2ACDF0u;
            goto label_2acdf0;
        }
    }
    ctx->pc = 0x2ACA94u;
    // 0x2aca94: 0x0  nop
    ctx->pc = 0x2aca94u;
    // NOP
label_2aca98:
    // 0x2aca98: 0x8e630080  lw          $v1, 0x80($s3)
    ctx->pc = 0x2aca98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x2aca9c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2aca9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2acaa0: 0x104000b7  beqz        $v0, . + 4 + (0xB7 << 2)
    ctx->pc = 0x2ACAA0u;
    {
        const bool branch_taken_0x2acaa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACAA0u;
        // 0x2acaa4: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acaa0) {
            ctx->pc = 0x2ACD80u;
            goto label_2acd80;
        }
    }
    ctx->pc = 0x2ACAA8u;
    // 0x2acaa8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2acaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2acaac: 0x14620032  bne         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2ACAACu;
    {
        const bool branch_taken_0x2acaac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ACAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACAACu;
        // 0x2acab0: 0x8e6300b4  lw          $v1, 0xB4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acaac) {
            ctx->pc = 0x2ACB78u;
            goto label_2acb78;
        }
    }
    ctx->pc = 0x2ACAB4u;
    // 0x2acab4: 0x18600030  blez        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2ACAB4u;
    {
        const bool branch_taken_0x2acab4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2ACAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACAB4u;
        // 0x2acab8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acab4) {
            ctx->pc = 0x2ACB78u;
            goto label_2acb78;
        }
    }
    ctx->pc = 0x2ACABCu;
    // 0x2acabc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2acabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2acac0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2acac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2acac4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2acac4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2acac8: 0x2454cec8  addiu       $s4, $v0, -0x3138
    ctx->pc = 0x2acac8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954696));
    // 0x2acacc: 0x26770008  addiu       $s7, $s3, 0x8
    ctx->pc = 0x2acaccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_2acad0:
    // 0x2acad0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2acad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2acad4: 0x8e84001c  lw          $a0, 0x1C($s4)
    ctx->pc = 0x2acad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x2acad8: 0x571821  addu        $v1, $v0, $s7
    ctx->pc = 0x2acad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2acadc: 0x3a29021  addu        $s2, $sp, $v0
    ctx->pc = 0x2acadcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2acae0: 0x8c7000b0  lw          $s0, 0xB0($v1)
    ctx->pc = 0x2acae0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x2acae4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2acae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2acae8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2acae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2acaec: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2ACAECu;
    {
        const bool branch_taken_0x2acaec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2acaec) {
            ctx->pc = 0x2ACAF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ACAECu;
            // 0x2acaf0: 0xc6010010  lwc1        $f1, 0x10($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ACB10u;
            goto label_2acb10;
        }
    }
    ctx->pc = 0x2ACAF4u;
    // 0x2acaf4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2acaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2acaf8: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2acaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2acafc: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2acafcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2acb00: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2ACB00u;
    SET_GPR_U32(ctx, 31, 0x2ACB08u);
    ctx->pc = 0x2ACB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACB00u;
    // 0x2acb04: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2ACB00u, 0x2ACB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACB08u;
label_2acb08:
    // 0x2acb08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2ACB08u;
    {
        const bool branch_taken_0x2acb08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACB08u;
        // 0x2acb0c: 0xc6010010  lwc1        $f1, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acb08) {
            ctx->pc = 0x2ACB14u;
            goto label_2acb14;
        }
    }
    ctx->pc = 0x2ACB10u;
label_2acb10:
    // 0x2acb10: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x2acb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2acb14:
    // 0x2acb14: 0x8e7000b8  lw          $s0, 0xB8($s3)
    ctx->pc = 0x2acb14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
    // 0x2acb18: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x2acb18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x2acb1c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2acb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2acb20: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2acb20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2acb24: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2ACB24u;
    {
        const bool branch_taken_0x2acb24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACB24u;
        // 0x2acb28: 0x46010500  add.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acb24) {
            ctx->pc = 0x2ACB48u;
            goto label_2acb48;
        }
    }
    ctx->pc = 0x2ACB2Cu;
    // 0x2acb2c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2acb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2acb30: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2acb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2acb34: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2acb34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2acb38: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2ACB38u;
    SET_GPR_U32(ctx, 31, 0x2ACB40u);
    ctx->pc = 0x2ACB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACB38u;
    // 0x2acb3c: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2ACB38u, 0x2ACB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACB40u;
label_2acb40:
    // 0x2acb40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2ACB40u;
    {
        const bool branch_taken_0x2acb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACB40u;
        // 0x2acb44: 0xc6010010  lwc1        $f1, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acb40) {
            ctx->pc = 0x2ACB50u;
            goto label_2acb50;
        }
    }
    ctx->pc = 0x2ACB48u;
label_2acb48:
    // 0x2acb48: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x2acb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2acb4c: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x2acb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2acb50:
    // 0x2acb50: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2acb50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2acb54: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x2acb54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2acb58: 0x8e6300b4  lw          $v1, 0xB4($s3)
    ctx->pc = 0x2acb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x2acb5c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2acb5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2acb60: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x2acb60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2acb64: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x2acb64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x2acb68: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x2ACB68u;
    {
        const bool branch_taken_0x2acb68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ACB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACB68u;
        // 0x2acb6c: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acb68) {
            ctx->pc = 0x2ACAD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2acad0;
        }
    }
    ctx->pc = 0x2ACB70u;
    // 0x2acb70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2ACB70u;
    {
        const bool branch_taken_0x2acb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACB70u;
        // 0x2acb74: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acb70) {
            ctx->pc = 0x2ACB7Cu;
            goto label_2acb7c;
        }
    }
    ctx->pc = 0x2ACB78u;
label_2acb78:
    // 0x2acb78: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2acb78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2acb7c:
    // 0x2acb7c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2acb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2acb80: 0x14820031  bne         $a0, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2ACB80u;
    {
        const bool branch_taken_0x2acb80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2acb80) {
            ctx->pc = 0x2ACC48u;
            goto label_2acc48;
        }
    }
    ctx->pc = 0x2ACB88u;
    // 0x2acb88: 0x1860002f  blez        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x2ACB88u;
    {
        const bool branch_taken_0x2acb88 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2ACB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACB88u;
        // 0x2acb8c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acb88) {
            ctx->pc = 0x2ACC48u;
            goto label_2acc48;
        }
    }
    ctx->pc = 0x2ACB90u;
    // 0x2acb90: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2acb90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2acb94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2acb94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2acb98: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2acb98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2acb9c: 0x2454cec8  addiu       $s4, $v0, -0x3138
    ctx->pc = 0x2acb9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954696));
    // 0x2acba0: 0x26770008  addiu       $s7, $s3, 0x8
    ctx->pc = 0x2acba0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2acba4: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x2acba4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2acba8:
    // 0x2acba8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2acba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2acbac: 0x8e840020  lw          $a0, 0x20($s4)
    ctx->pc = 0x2acbacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x2acbb0: 0x571821  addu        $v1, $v0, $s7
    ctx->pc = 0x2acbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2acbb4: 0x2a29021  addu        $s2, $s5, $v0
    ctx->pc = 0x2acbb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2acbb8: 0x8c7000b0  lw          $s0, 0xB0($v1)
    ctx->pc = 0x2acbb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x2acbbc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2acbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2acbc0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2acbc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2acbc4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2ACBC4u;
    {
        const bool branch_taken_0x2acbc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2acbc4) {
            ctx->pc = 0x2ACBC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ACBC4u;
            // 0x2acbc8: 0xc6010014  lwc1        $f1, 0x14($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ACBE8u;
            goto label_2acbe8;
        }
    }
    ctx->pc = 0x2ACBCCu;
    // 0x2acbcc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2acbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2acbd0: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2acbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2acbd4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2acbd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2acbd8: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2ACBD8u;
    SET_GPR_U32(ctx, 31, 0x2ACBE0u);
    ctx->pc = 0x2ACBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACBD8u;
    // 0x2acbdc: 0x8e040038  lw          $a0, 0x38($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2ACBD8u, 0x2ACBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACBE0u;
label_2acbe0:
    // 0x2acbe0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2ACBE0u;
    {
        const bool branch_taken_0x2acbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACBE0u;
        // 0x2acbe4: 0xc6010014  lwc1        $f1, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acbe0) {
            ctx->pc = 0x2ACBECu;
            goto label_2acbec;
        }
    }
    ctx->pc = 0x2ACBE8u;
label_2acbe8:
    // 0x2acbe8: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x2acbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2acbec:
    // 0x2acbec: 0x8e7000b8  lw          $s0, 0xB8($s3)
    ctx->pc = 0x2acbecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
    // 0x2acbf0: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x2acbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x2acbf4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2acbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2acbf8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2acbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2acbfc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2ACBFCu;
    {
        const bool branch_taken_0x2acbfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACBFCu;
        // 0x2acc00: 0x46010500  add.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acbfc) {
            ctx->pc = 0x2ACC20u;
            goto label_2acc20;
        }
    }
    ctx->pc = 0x2ACC04u;
    // 0x2acc04: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2acc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2acc08: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2acc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2acc0c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2acc0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2acc10: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2ACC10u;
    SET_GPR_U32(ctx, 31, 0x2ACC18u);
    ctx->pc = 0x2ACC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACC10u;
    // 0x2acc14: 0x8e040038  lw          $a0, 0x38($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2ACC10u, 0x2ACC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACC18u;
label_2acc18:
    // 0x2acc18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2ACC18u;
    {
        const bool branch_taken_0x2acc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACC18u;
        // 0x2acc1c: 0xc6010014  lwc1        $f1, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acc18) {
            ctx->pc = 0x2ACC28u;
            goto label_2acc28;
        }
    }
    ctx->pc = 0x2ACC20u;
label_2acc20:
    // 0x2acc20: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x2acc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2acc24: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x2acc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2acc28:
    // 0x2acc28: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2acc28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2acc2c: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x2acc2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2acc30: 0x8e6300b4  lw          $v1, 0xB4($s3)
    ctx->pc = 0x2acc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x2acc34: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2acc34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2acc38: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x2acc38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2acc3c: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x2acc3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x2acc40: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x2ACC40u;
    {
        const bool branch_taken_0x2acc40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ACC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACC40u;
        // 0x2acc44: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acc40) {
            ctx->pc = 0x2ACBA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2acba8;
        }
    }
    ctx->pc = 0x2ACC48u;
label_2acc48:
    // 0x2acc48: 0x18600093  blez        $v1, . + 4 + (0x93 << 2)
    ctx->pc = 0x2ACC48u;
    {
        const bool branch_taken_0x2acc48 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2ACC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACC48u;
        // 0x2acc4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acc48) {
            ctx->pc = 0x2ACE98u;
            goto label_2ace98;
        }
    }
    ctx->pc = 0x2ACC50u;
    // 0x2acc50: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2acc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2acc54: 0x26770008  addiu       $s7, $s3, 0x8
    ctx->pc = 0x2acc54u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2acc58: 0x245efffa  addiu       $fp, $v0, -0x6
    ctx->pc = 0x2acc58u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x2acc5c: 0x6a080  sll         $s4, $a2, 2
    ctx->pc = 0x2acc5cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2acc60:
    // 0x2acc60: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2acc60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2acc64: 0x2971021  addu        $v0, $s4, $s7
    ctx->pc = 0x2acc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 23)));
    // 0x2acc68: 0x17c30002  bne         $fp, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2ACC68u;
    {
        const bool branch_taken_0x2acc68 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 3));
        ctx->pc = 0x2ACC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACC68u;
        // 0x2acc6c: 0x8c5100b0  lw          $s1, 0xB0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acc68) {
            ctx->pc = 0x2ACC74u;
            goto label_2acc74;
        }
    }
    ctx->pc = 0x2ACC70u;
    // 0x2acc70: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x2acc70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_2acc74:
    // 0x2acc74: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2acc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2acc78: 0x53c20001  beql        $fp, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2ACC78u;
    {
        const bool branch_taken_0x2acc78 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        if (branch_taken_0x2acc78) {
            ctx->pc = 0x2ACC7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ACC78u;
            // 0x2acc7c: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ACC80u;
            goto label_2acc80;
        }
    }
    ctx->pc = 0x2ACC80u;
label_2acc80:
    // 0x2acc80: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2acc80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2acc84: 0x1e2880  sll         $a1, $fp, 2
    ctx->pc = 0x2acc84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x2acc88: 0x2463cec8  addiu       $v1, $v1, -0x3138
    ctx->pc = 0x2acc88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954696));
    // 0x2acc8c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2acc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2acc90: 0xa3a821  addu        $s5, $a1, $v1
    ctx->pc = 0x2acc90u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2acc94: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2acc94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2acc98: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2acc98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2acc9c: 0xc4740000  lwc1        $f20, 0x0($v1)
    ctx->pc = 0x2acc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2acca0: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x2acca0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x2acca4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2acca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2acca8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2ACCA8u;
    {
        const bool branch_taken_0x2acca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACCA8u;
        // 0x2accac: 0xb11021  addu        $v0, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acca8) {
            ctx->pc = 0x2ACCD0u;
            goto label_2accd0;
        }
    }
    ctx->pc = 0x2ACCB0u;
    // 0x2accb0: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x2accb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2accb4: 0xac760000  sw          $s6, 0x0($v1)
    ctx->pc = 0x2accb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 22));
    // 0x2accb8: 0xe4740004  swc1        $f20, 0x4($v1)
    ctx->pc = 0x2accb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2accbc: 0xc6c00014  lwc1        $f0, 0x14($s6)
    ctx->pc = 0x2accbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2accc0: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2accc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2accc4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2ACCC4u;
    {
        const bool branch_taken_0x2accc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACCC4u;
        // 0x2accc8: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2accc4) {
            ctx->pc = 0x2ACD1Cu;
            goto label_2acd1c;
        }
    }
    ctx->pc = 0x2ACCCCu;
    // 0x2acccc: 0x0  nop
    ctx->pc = 0x2accccu;
    // NOP
label_2accd0:
    // 0x2accd0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2accd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2accd4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2accd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2accd8: 0x24520018  addiu       $s2, $v0, 0x18
    ctx->pc = 0x2accd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x2accdc: 0xc0aa626  jal         func_2A9898
    ctx->pc = 0x2ACCDCu;
    SET_GPR_U32(ctx, 31, 0x2ACCE4u);
    ctx->pc = 0x2ACCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACCDCu;
    // 0x2acce0: 0x7fa60030  sq          $a2, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9898u, 0x2ACCDCu, 0x2ACCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACCE4u;
label_2acce4:
    // 0x2acce4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2acce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acce8: 0xc0aa622  jal         func_2A9888
    ctx->pc = 0x2ACCE8u;
    SET_GPR_U32(ctx, 31, 0x2ACCF0u);
    ctx->pc = 0x2ACCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACCE8u;
    // 0x2accec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9888u, 0x2ACCE8u, 0x2ACCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACCF0u;
label_2accf0:
    // 0x2accf0: 0x7ba60030  lq          $a2, 0x30($sp)
    ctx->pc = 0x2accf0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2accf4: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x2accf4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x2accf8: 0xae160000  sw          $s6, 0x0($s0)
    ctx->pc = 0x2accf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 22));
    // 0x2accfc: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x2accfcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2acd00: 0xc6c00014  lwc1        $f0, 0x14($s6)
    ctx->pc = 0x2acd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2acd04: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2acd04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2acd08: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2acd08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2acd0c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2acd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2acd10: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2acd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2acd14: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2acd14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2acd18: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2acd18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_2acd1c:
    // 0x2acd1c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2acd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2acd20: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2acd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2acd24: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2ACD24u;
    {
        const bool branch_taken_0x2acd24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ACD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACD24u;
        // 0x2acd28: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acd24) {
            ctx->pc = 0x2ACD44u;
            goto label_2acd44;
        }
    }
    ctx->pc = 0x2ACD2Cu;
    // 0x2acd2c: 0x2971021  addu        $v0, $s4, $s7
    ctx->pc = 0x2acd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 23)));
    // 0x2acd30: 0x3b41821  addu        $v1, $sp, $s4
    ctx->pc = 0x2acd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 20)));
    // 0x2acd34: 0x8c4400b0  lw          $a0, 0xB0($v0)
    ctx->pc = 0x2acd34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x2acd38: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2acd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2acd3c: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2acd3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2acd40: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2acd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2acd44:
    // 0x2acd44: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2acd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2acd48: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2ACD48u;
    {
        const bool branch_taken_0x2acd48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2acd48) {
            ctx->pc = 0x2ACD4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ACD48u;
            // 0x2acd4c: 0x8e6200b4  lw          $v0, 0xB4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ACD68u;
            goto label_2acd68;
        }
    }
    ctx->pc = 0x2ACD50u;
    // 0x2acd50: 0x3b42021  addu        $a0, $sp, $s4
    ctx->pc = 0x2acd50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 20)));
    // 0x2acd54: 0x2971021  addu        $v0, $s4, $s7
    ctx->pc = 0x2acd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 23)));
    // 0x2acd58: 0x8c4300b0  lw          $v1, 0xB0($v0)
    ctx->pc = 0x2acd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x2acd5c: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x2acd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2acd60: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x2acd60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x2acd64: 0x8e6200b4  lw          $v0, 0xB4($s3)
    ctx->pc = 0x2acd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
label_2acd68:
    // 0x2acd68: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2acd68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2acd6c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2acd6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2acd70: 0x1440ffbb  bnez        $v0, . + 4 + (-0x45 << 2)
    ctx->pc = 0x2ACD70u;
    {
        const bool branch_taken_0x2acd70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ACD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACD70u;
        // 0x2acd74: 0x6a080  sll         $s4, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acd70) {
            ctx->pc = 0x2ACC60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2acc60;
        }
    }
    ctx->pc = 0x2ACD78u;
    // 0x2acd78: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2ACD78u;
    {
        const bool branch_taken_0x2acd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACD78u;
        // 0x2acd7c: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acd78) {
            ctx->pc = 0x2ACE9Cu;
            goto label_2ace9c;
        }
    }
    ctx->pc = 0x2ACD80u;
label_2acd80:
    // 0x2acd80: 0xde620080  ld          $v0, 0x80($s3)
    ctx->pc = 0x2acd80u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x2acd84: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x2acd84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x2acd88: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2ACD88u;
    {
        const bool branch_taken_0x2acd88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACD88u;
        // 0x2acd8c: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acd88) {
            ctx->pc = 0x2ACE18u;
            goto label_2ace18;
        }
    }
    ctx->pc = 0x2ACD90u;
    // 0x2acd90: 0x8e620088  lw          $v0, 0x88($s3)
    ctx->pc = 0x2acd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x2acd94: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x2acd94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2acd98: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x2acd98u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x2acd9c: 0x2652ce88  addiu       $s2, $s2, -0x3178
    ctx->pc = 0x2acd9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954632));
    // 0x2acda0: 0x2459021  addu        $s2, $s2, $a1
    ctx->pc = 0x2acda0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x2acda4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2acda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2acda8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2acda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2acdac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2ACDACu;
    {
        const bool branch_taken_0x2acdac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACDACu;
        // 0x2acdb0: 0xb31021  addu        $v0, $a1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acdac) {
            ctx->pc = 0x2ACDD0u;
            goto label_2acdd0;
        }
    }
    ctx->pc = 0x2ACDB4u;
label_2acdb4:
    // 0x2acdb4: 0x8c430090  lw          $v1, 0x90($v0)
    ctx->pc = 0x2acdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x2acdb8: 0xac760000  sw          $s6, 0x0($v1)
    ctx->pc = 0x2acdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 22));
    // 0x2acdbc: 0xe4740004  swc1        $f20, 0x4($v1)
    ctx->pc = 0x2acdbcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2acdc0: 0xc6c00014  lwc1        $f0, 0x14($s6)
    ctx->pc = 0x2acdc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2acdc4: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2acdc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2acdc8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2ACDC8u;
    {
        const bool branch_taken_0x2acdc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACDC8u;
        // 0x2acdcc: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acdc8) {
            ctx->pc = 0x2ACE98u;
            goto label_2ace98;
        }
    }
    ctx->pc = 0x2ACDD0u;
label_2acdd0:
    // 0x2acdd0: 0x8e650060  lw          $a1, 0x60($s3)
    ctx->pc = 0x2acdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x2acdd4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2acdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2acdd8: 0xc0aa626  jal         func_2A9898
    ctx->pc = 0x2ACDD8u;
    SET_GPR_U32(ctx, 31, 0x2ACDE0u);
    ctx->pc = 0x2ACDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACDD8u;
    // 0x2acddc: 0x24510090  addiu       $s1, $v0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9898u, 0x2ACDD8u, 0x2ACDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACDE0u;
label_2acde0:
    // 0x2acde0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2acde0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acde4: 0xc0aa622  jal         func_2A9888
    ctx->pc = 0x2ACDE4u;
    SET_GPR_U32(ctx, 31, 0x2ACDECu);
    ctx->pc = 0x2ACDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACDE4u;
    // 0x2acde8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9888u, 0x2ACDE4u, 0x2ACDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACDECu;
label_2acdec:
    // 0x2acdec: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2acdecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_2acdf0:
    // 0x2acdf0: 0xae160000  sw          $s6, 0x0($s0)
    ctx->pc = 0x2acdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 22));
    // 0x2acdf4: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x2acdf4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2acdf8: 0xc6c00014  lwc1        $f0, 0x14($s6)
    ctx->pc = 0x2acdf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2acdfc: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2acdfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2ace00: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2ace00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2ace04: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2ace04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ace08: 0x8e620088  lw          $v0, 0x88($s3)
    ctx->pc = 0x2ace08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x2ace0c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ace0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ace10: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2ACE10u;
    {
        const bool branch_taken_0x2ace10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACE10u;
        // 0x2ace14: 0xae620088  sw          $v0, 0x88($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ace10) {
            ctx->pc = 0x2ACE98u;
            goto label_2ace98;
        }
    }
    ctx->pc = 0x2ACE18u;
label_2ace18:
    // 0x2ace18: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x2ace18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2ace1c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2ACE1Cu;
    {
        const bool branch_taken_0x2ace1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACE1Cu;
        // 0x2ace20: 0x266300b4  addiu       $v1, $s3, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 180));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ace1c) {
            ctx->pc = 0x2ACE98u;
            goto label_2ace98;
        }
    }
    ctx->pc = 0x2ACE24u;
    // 0x2ace24: 0x8c66000c  lw          $a2, 0xC($v1)
    ctx->pc = 0x2ace24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2ace28: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ACE28u;
    {
        const bool branch_taken_0x2ace28 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ACE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACE28u;
        // 0x2ace2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ace28) {
            ctx->pc = 0x2ACE38u;
            goto label_2ace38;
        }
    }
    ctx->pc = 0x2ACE30u;
    // 0x2ace30: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2ACE30u;
    {
        const bool branch_taken_0x2ace30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACE30u;
        // 0x2ace34: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ace30) {
            ctx->pc = 0x2ACE54u;
            goto label_2ace54;
        }
    }
    ctx->pc = 0x2ACE38u;
label_2ace38:
    // 0x2ace38: 0x14c20003  bne         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ACE38u;
    {
        const bool branch_taken_0x2ace38 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ACE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACE38u;
        // 0x2ace3c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ace38) {
            ctx->pc = 0x2ACE48u;
            goto label_2ace48;
        }
    }
    ctx->pc = 0x2ACE40u;
    // 0x2ace40: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2ACE40u;
    {
        const bool branch_taken_0x2ace40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACE40u;
        // 0x2ace44: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ace40) {
            ctx->pc = 0x2ACE54u;
            goto label_2ace54;
        }
    }
    ctx->pc = 0x2ACE48u;
label_2ace48:
    // 0x2ace48: 0x14c20014  bne         $a2, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2ACE48u;
    {
        const bool branch_taken_0x2ace48 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ACE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACE48u;
        // 0x2ace4c: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ace48) {
            ctx->pc = 0x2ACE9Cu;
            goto label_2ace9c;
        }
    }
    ctx->pc = 0x2ACE50u;
    // 0x2ace50: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2ace50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2ace54:
    // 0x2ace54: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2ace54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ace58: 0xc0ab272  jal         func_2AC9C8
    ctx->pc = 0x2ACE58u;
    SET_GPR_U32(ctx, 31, 0x2ACE60u);
    ctx->pc = 0x2ACE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACE58u;
    // 0x2ace5c: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC9C8u;
    goto label_2ac9c8;
    ctx->pc = 0x2ACE60u;
label_2ace60:
    // 0x2ace60: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2ACE60u;
    {
        const bool branch_taken_0x2ace60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACE60u;
        // 0x2ace64: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ace60) {
            ctx->pc = 0x2ACE9Cu;
            goto label_2ace9c;
        }
    }
    ctx->pc = 0x2ACE68u;
    // 0x2ace68: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2ace68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2ace6c: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2ACE6Cu;
    SET_GPR_U32(ctx, 31, 0x2ACE74u);
    ctx->pc = 0x2ACE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACE6Cu;
    // 0x2ace70: 0x2484010c  addiu       $a0, $a0, 0x10C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 268));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2ACE6Cu, 0x2ACE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACE74u;
label_2ace74:
    // 0x2ace74: 0x0  nop
    ctx->pc = 0x2ace74u;
    // NOP
    // 0x2ace78: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2ace78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2ace7c: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2ACE7Cu;
    SET_GPR_U32(ctx, 31, 0x2ACE84u);
    ctx->pc = 0x2ACE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACE7Cu;
    // 0x2ace80: 0x2484011c  addiu       $a0, $a0, 0x11C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2ACE7Cu, 0x2ACE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACE84u;
label_2ace84:
    // 0x2ace84: 0x0  nop
    ctx->pc = 0x2ace84u;
    // NOP
    // 0x2ace88: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2ace88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2ace8c: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2ACE8Cu;
    SET_GPR_U32(ctx, 31, 0x2ACE94u);
    ctx->pc = 0x2ACE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACE8Cu;
    // 0x2ace90: 0x2484012c  addiu       $a0, $a0, 0x12C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 300));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2ACE8Cu, 0x2ACE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACE94u;
label_2ace94:
    // 0x2ace94: 0x0  nop
    ctx->pc = 0x2ace94u;
    // NOP
label_2ace98:
    // 0x2ace98: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2ace98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2ace9c:
    // 0x2ace9c: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2ace9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2acea0: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2acea0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2acea4: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x2acea4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2acea8: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2acea8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2aceac: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x2aceacu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2aceb0: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2aceb0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2aceb4: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x2aceb4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2aceb8: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2aceb8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2acebc: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x2acebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2acec0: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x2acec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2acec4: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2acec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2acec8: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACEC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACEC8u;
        // 0x2acecc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACEC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACED0u;
}
