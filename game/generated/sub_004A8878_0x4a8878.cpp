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

// Function: sub_004A8878
// Address: 0x4a8878 - 0x4a8a50
void sub_004A8878_0x4a8878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A8878_0x4a8878");
#endif

    switch (ctx->pc) {
        case 0x4a8934u: goto label_4a8934;
        case 0x4a8940u: goto label_4a8940;
        default: break;
    }

    ctx->pc = 0x4a8878u;

    // 0x4a8878: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4a8878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4a887c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x4a887cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x4a8880: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4a8880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4a8884: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4a8884u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a8888: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4a8888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4a888c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4a888cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a8890: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4a8890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4a8894: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4a8894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4a8898: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4a8898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4a889c: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x4a889cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x4a88a0: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x4a88a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a88a4: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x4a88a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4a88a8: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4A88A8u;
    {
        const bool branch_taken_0x4a88a8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4A88ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A88A8u;
        // 0x4a88ac: 0x97a60000  lhu         $a2, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a88a8) {
            ctx->pc = 0x4A88D0u;
            goto label_4a88d0;
        }
    }
    ctx->pc = 0x4A88B0u;
    // 0x4a88b0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4a88b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4a88b4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4a88b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4a88b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4a88b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4a88bc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a88bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a88c0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4a88c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4a88c4: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x4a88c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4a88c8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x4a88c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x4a88cc: 0x97a60000  lhu         $a2, 0x0($sp)
    ctx->pc = 0x4a88ccu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_4a88d0:
    // 0x4a88d0: 0x27b10004  addiu       $s1, $sp, 0x4
    ctx->pc = 0x4a88d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x4a88d4: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4a88d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a88d8: 0x4430009  bgezl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4A88D8u;
    {
        const bool branch_taken_0x4a88d8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4a88d8) {
            ctx->pc = 0x4A88DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A88D8u;
            // 0x4a88dc: 0x96220000  lhu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A8900u;
            goto label_4a8900;
        }
    }
    ctx->pc = 0x4A88E0u;
    // 0x4a88e0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4a88e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4a88e4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4a88e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4a88e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4a88e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4a88ec: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4a88ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4a88f0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4a88f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4a88f4: 0x36520004  ori         $s2, $s2, 0x4
    ctx->pc = 0x4a88f4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)4);
    // 0x4a88f8: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x4a88f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x4a88fc: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4a88fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4a8900:
    // 0x4a8900: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x4a8900u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4a8904: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A8904u;
    {
        const bool branch_taken_0x4a8904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a8904) {
            ctx->pc = 0x4A8908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A8904u;
            // 0x4a8908: 0x86220000  lh          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A8924u;
            goto label_4a8924;
        }
    }
    ctx->pc = 0x4A890Cu;
    // 0x4a890c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a890cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a8910: 0x36520002  ori         $s2, $s2, 0x2
    ctx->pc = 0x4a8910u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)2);
    // 0x4a8914: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x4a8914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4a8918: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x4a8918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x4a891c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4a891cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4a8920: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4a8920u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4a8924:
    // 0x4a8924: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x4A8924u;
    {
        const bool branch_taken_0x4a8924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a8924) {
            ctx->pc = 0x4A8928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A8924u;
            // 0x4a8928: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A8960u;
            goto label_4a8960;
        }
    }
    ctx->pc = 0x4A892Cu;
    // 0x4a892c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4A892Cu;
    SET_GPR_U32(ctx, 31, 0x4A8934u);
    ctx->pc = 0x4A8930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A892Cu;
    // 0x4a8930: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4A892Cu, 0x4A8934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8934u;
label_4a8934:
    // 0x4a8934: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4a8934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a8938: 0xc13e4ca  jal         func_4F9328
    ctx->pc = 0x4A8938u;
    SET_GPR_U32(ctx, 31, 0x4A8940u);
    ctx->pc = 0x4A893Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8938u;
    // 0x4a893c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9328u, 0x4A8938u, 0x4A8940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8940u;
label_4a8940:
    // 0x4a8940: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4A8940u;
    {
        const bool branch_taken_0x4a8940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A8944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8940u;
        // 0x4a8944: 0x97a20000  lhu         $v0, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8940) {
            ctx->pc = 0x4A8964u;
            goto label_4a8964;
        }
    }
    ctx->pc = 0x4A8948u;
    // 0x4a8948: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4a8948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4a894c: 0x3603ffff  ori         $v1, $s0, 0xFFFF
    ctx->pc = 0x4a894cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4a8950: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x4a8950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x4a8954: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x4A8954u;
    {
        const bool branch_taken_0x4a8954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8954u;
        // 0x4a8958: 0x628024  and         $s0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8954) {
            ctx->pc = 0x4A89BCu;
            goto label_4a89bc;
        }
    }
    ctx->pc = 0x4A895Cu;
    // 0x4a895c: 0x0  nop
    ctx->pc = 0x4a895cu;
    // NOP
label_4a8960:
    // 0x4a8960: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x4a8960u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_4a8964:
    // 0x4a8964: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4a8964u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4a8968: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a8968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a896c: 0x3605ffff  ori         $a1, $s0, 0xFFFF
    ctx->pc = 0x4a896cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4a8970: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a8970u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a8974: 0x21503  sra         $v0, $v0, 20
    ctx->pc = 0x4a8974u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 20));
    // 0x4a8978: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a8978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a897c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4a897cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4a8980: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a8980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a8984: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4a8984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4a8988: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a8988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a898c: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x4a898cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a8990: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x4a8990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x4a8994: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4a8994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4a8998: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a8998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a899c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4a899cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4a89a0: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x4a89a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a89a4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4a89a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4a89a8: 0x3c030052  lui         $v1, 0x52
    ctx->pc = 0x4a89a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)82 << 16));
    // 0x4a89ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a89acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a89b0: 0x8463d0c0  lh          $v1, -0x2F40($v1)
    ctx->pc = 0x4a89b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294955200)));
    // 0x4a89b4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4a89b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4a89b8: 0xa38024  and         $s0, $a1, $v1
    ctx->pc = 0x4a89b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_4a89bc:
    // 0x4a89bc: 0x121843  sra         $v1, $s2, 1
    ctx->pc = 0x4a89bcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 1));
    // 0x4a89c0: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x4a89c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x4a89c4: 0x2447f900  addiu       $a3, $v0, -0x700
    ctx->pc = 0x4a89c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965504));
    // 0x4a89c8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x4a89c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4a89cc: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x4a89ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4a89d0: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4a89d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4a89d4: 0xc72021  addu        $a0, $a2, $a3
    ctx->pc = 0x4a89d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x4a89d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a89d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a89dc: 0x84830010  lh          $v1, 0x10($a0)
    ctx->pc = 0x4a89dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4a89e0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4a89e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4a89e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a89e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a89e8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x4a89e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x4a89ec: 0x87a30004  lh          $v1, 0x4($sp)
    ctx->pc = 0x4a89ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4a89f0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A89F0u;
    {
        const bool branch_taken_0x4a89f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A89F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A89F0u;
        // 0x4a89f4: 0x101400  sll         $v0, $s0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a89f0) {
            ctx->pc = 0x4A8A0Cu;
            goto label_4a8a0c;
        }
    }
    ctx->pc = 0x4A89F8u;
    // 0x4a89f8: 0x3603ffff  ori         $v1, $s0, 0xFFFF
    ctx->pc = 0x4a89f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4a89fc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a89fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a8a00: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4a8a00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4a8a04: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4a8a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4a8a08: 0x628024  and         $s0, $v1, $v0
    ctx->pc = 0x4a8a08u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4a8a0c:
    // 0x4a8a0c: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x4a8a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x4a8a10: 0x101400  sll         $v0, $s0, 16
    ctx->pc = 0x4a8a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x4a8a14: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x4a8a14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a8a18: 0x3603ffff  ori         $v1, $s0, 0xFFFF
    ctx->pc = 0x4a8a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4a8a1c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a8a1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a8a20: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4a8a20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a8a24: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4a8a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4a8a28: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4a8a28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a8a2c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4a8a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4a8a30: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4a8a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a8a34: 0x628024  and         $s0, $v1, $v0
    ctx->pc = 0x4a8a34u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a8a38: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x4a8a38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x4a8a3c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4a8a3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a8a40: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4a8a40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4a8a44: 0x3e00008  jr          $ra
    ctx->pc = 0x4A8A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A8A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8A44u;
        // 0x4a8a48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A8A4Cu;
    // 0x4a8a4c: 0x0  nop
    ctx->pc = 0x4a8a4cu;
    // NOP
    ctx->pc = 0x4a8a50u;
}
