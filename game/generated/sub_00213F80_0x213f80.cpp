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

// Function: sub_00213F80
// Address: 0x213f80 - 0x214120
void sub_00213F80_0x213f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213F80_0x213f80");
#endif

    switch (ctx->pc) {
        case 0x213fb8u: goto label_213fb8;
        case 0x213fd0u: goto label_213fd0;
        case 0x213fd8u: goto label_213fd8;
        case 0x213ff0u: goto label_213ff0;
        case 0x21403cu: goto label_21403c;
        case 0x214058u: goto label_214058;
        case 0x214068u: goto label_214068;
        case 0x2140e0u: goto label_2140e0;
        default: break;
    }

    ctx->pc = 0x213f80u;

    // 0x213f80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x213f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x213f84: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x213f84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x213f88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x213f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x213f8c: 0x24843370  addiu       $a0, $a0, 0x3370
    ctx->pc = 0x213f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13168));
    // 0x213f90: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x213f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x213f94: 0x3c15003b  lui         $s5, 0x3B
    ctx->pc = 0x213f94u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)59 << 16));
    // 0x213f98: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x213f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x213f9c: 0x26b08858  addiu       $s0, $s5, -0x77A8
    ctx->pc = 0x213f9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294936664));
    // 0x213fa0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x213fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x213fa4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x213fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x213fa8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x213fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x213fac: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x213facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x213fb0: 0xc0a13f0  jal         func_284FC0
    ctx->pc = 0x213FB0u;
    SET_GPR_U32(ctx, 31, 0x213FB8u);
    ctx->pc = 0x213FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213FB0u;
    // 0x213fb4: 0x8e130004  lw          $s3, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284FC0u, 0x213FB0u, 0x213FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213FB8u;
label_213fb8:
    // 0x213fb8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x213fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x213fbc: 0x1043004e  beq         $v0, $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x213FBCu;
    {
        const bool branch_taken_0x213fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x213FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213FBCu;
        // 0x213fc0: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213fbc) {
            ctx->pc = 0x2140F8u;
            goto label_2140f8;
        }
    }
    ctx->pc = 0x213FC4u;
    // 0x213fc4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x213fc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213fc8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x213fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213fcc: 0x0  nop
    ctx->pc = 0x213fccu;
    // NOP
label_213fd0:
    // 0x213fd0: 0xc084fa8  jal         func_213EA0
    ctx->pc = 0x213FD0u;
    SET_GPR_U32(ctx, 31, 0x213FD8u);
    ctx->pc = 0x213FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213FD0u;
    // 0x213fd4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213EA0u, 0x213FD0u, 0x213FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213FD8u;
label_213fd8:
    // 0x213fd8: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x213FD8u;
    {
        const bool branch_taken_0x213fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213FD8u;
        // 0x213fdc: 0x119080  sll         $s2, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213fd8) {
            ctx->pc = 0x2140E8u;
            goto label_2140e8;
        }
    }
    ctx->pc = 0x213FE0u;
    // 0x213fe0: 0x25c8021  addu        $s0, $s2, $gp
    ctx->pc = 0x213fe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 28)));
    // 0x213fe4: 0x8e10a850  lw          $s0, -0x57B0($s0)
    ctx->pc = 0x213fe4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944848)));
    // 0x213fe8: 0xc085c76  jal         func_2171D8
    ctx->pc = 0x213FE8u;
    SET_GPR_U32(ctx, 31, 0x213FF0u);
    ctx->pc = 0x2171D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2171D8u, 0x213FE8u, 0x213FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213FF0u;
label_213ff0:
    // 0x213ff0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x213ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213ff4: 0x8e850050  lw          $a1, 0x50($s4)
    ctx->pc = 0x213ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x213ff8: 0x2231804  sllv        $v1, $v1, $s1
    ctx->pc = 0x213ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 17) & 0x1F));
    // 0x213ffc: 0x320608f0  andi        $a2, $s0, 0x8F0
    ctx->pc = 0x213ffcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2288);
    // 0x214000: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x214000u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x214004: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x214004u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214008: 0x32100800  andi        $s0, $s0, 0x800
    ctx->pc = 0x214008u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2048);
    // 0x21400c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21400cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214010: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x214010u;
    {
        const bool branch_taken_0x214010 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x214014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214010u;
        // 0x214014: 0xc2800b  movn        $s0, $a2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214010) {
            ctx->pc = 0x21402Cu;
            goto label_21402c;
        }
    }
    ctx->pc = 0x214018u;
    // 0x214018: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x214018u;
    {
        const bool branch_taken_0x214018 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x214018) {
            ctx->pc = 0x21402Cu;
            goto label_21402c;
        }
    }
    ctx->pc = 0x214020u;
    // 0x214020: 0x25c1021  addu        $v0, $s2, $gp
    ctx->pc = 0x214020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 28)));
    // 0x214024: 0x8c42c8f0  lw          $v0, -0x3710($v0)
    ctx->pc = 0x214024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953200)));
    // 0x214028: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x214028u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_21402c:
    // 0x21402c: 0x5060002f  beql        $v1, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x21402Cu;
    {
        const bool branch_taken_0x21402c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21402c) {
            ctx->pc = 0x214030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21402Cu;
            // 0x214030: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2140ECu;
            goto label_2140ec;
        }
    }
    ctx->pc = 0x214034u;
    // 0x214034: 0xc0b43c0  jal         func_2D0F00
    ctx->pc = 0x214034u;
    SET_GPR_U32(ctx, 31, 0x21403Cu);
    ctx->pc = 0x2D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0F00u, 0x214034u, 0x21403Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21403Cu;
label_21403c:
    // 0x21403c: 0x5040002b  beql        $v0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x21403Cu;
    {
        const bool branch_taken_0x21403c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21403c) {
            ctx->pc = 0x214040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21403Cu;
            // 0x214040: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2140ECu;
            goto label_2140ec;
        }
    }
    ctx->pc = 0x214044u;
    // 0x214044: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x214044u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x214048: 0x25c0821  addu        $at, $s2, $gp
    ctx->pc = 0x214048u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 28)));
    // 0x21404c: 0xac30c8f0  sw          $s0, -0x3710($at)
    ctx->pc = 0x21404cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953200), GPR_U32(ctx, 16));
    // 0x214050: 0xc085c76  jal         func_2171D8
    ctx->pc = 0x214050u;
    SET_GPR_U32(ctx, 31, 0x214058u);
    ctx->pc = 0x2171D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2171D8u, 0x214050u, 0x214058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214058u;
label_214058:
    // 0x214058: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x214058u;
    {
        const bool branch_taken_0x214058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x214058) {
            ctx->pc = 0x21405Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214058u;
            // 0x21405c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21406Cu;
            goto label_21406c;
        }
    }
    ctx->pc = 0x214060u;
    // 0x214060: 0xc092940  jal         func_24A500
    ctx->pc = 0x214060u;
    SET_GPR_U32(ctx, 31, 0x214068u);
    ctx->pc = 0x214064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214060u;
    // 0x214064: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x214060u, 0x214068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214068u;
label_214068:
    // 0x214068: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x214068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_21406c:
    // 0x21406c: 0x16620006  bne         $s3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21406Cu;
    {
        const bool branch_taken_0x21406c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x214070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21406Cu;
        // 0x214070: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21406c) {
            ctx->pc = 0x214088u;
            goto label_214088;
        }
    }
    ctx->pc = 0x214074u;
    // 0x214074: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x214074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x214078: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x214078u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x21407c: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x21407Cu;
    {
        const bool branch_taken_0x21407c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21407c) {
            ctx->pc = 0x214080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21407Cu;
            // 0x214080: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2140FCu;
            goto label_2140fc;
        }
    }
    ctx->pc = 0x214084u;
    // 0x214084: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x214084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_214088:
    // 0x214088: 0x12620009  beq         $s3, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x214088u;
    {
        const bool branch_taken_0x214088 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x21408Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214088u;
        // 0x21408c: 0x2a620004  slti        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x214088) {
            ctx->pc = 0x2140B0u;
            goto label_2140b0;
        }
    }
    ctx->pc = 0x214090u;
    // 0x214090: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x214090u;
    {
        const bool branch_taken_0x214090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x214094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214090u;
        // 0x214094: 0x2a620008  slti        $v0, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x214090) {
            ctx->pc = 0x2140D8u;
            goto label_2140d8;
        }
    }
    ctx->pc = 0x214098u;
    // 0x214098: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x214098u;
    {
        const bool branch_taken_0x214098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21409Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214098u;
        // 0x21409c: 0x2a620006  slti        $v0, $s3, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x214098) {
            ctx->pc = 0x2140D8u;
            goto label_2140d8;
        }
    }
    ctx->pc = 0x2140A0u;
    // 0x2140a0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2140A0u;
    {
        const bool branch_taken_0x2140a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2140A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2140A0u;
        // 0x2140a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2140a0) {
            ctx->pc = 0x2140D8u;
            goto label_2140d8;
        }
    }
    ctx->pc = 0x2140A8u;
    // 0x2140a8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2140A8u;
    {
        const bool branch_taken_0x2140a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2140ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2140A8u;
        // 0x2140ac: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2140a8) {
            ctx->pc = 0x214100u;
            goto label_214100;
        }
    }
    ctx->pc = 0x2140B0u;
label_2140b0:
    // 0x2140b0: 0x26a48858  addiu       $a0, $s5, -0x77A8
    ctx->pc = 0x2140b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294936664));
    // 0x2140b4: 0x2301004  sllv        $v0, $s0, $s1
    ctx->pc = 0x2140b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 17) & 0x1F));
    // 0x2140b8: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x2140b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2140bc: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2140bcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2140c0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2140c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2140c4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2140C4u;
    {
        const bool branch_taken_0x2140c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2140C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2140C4u;
        // 0x2140c8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2140c4) {
            ctx->pc = 0x2140D8u;
            goto label_2140d8;
        }
    }
    ctx->pc = 0x2140CCu;
    // 0x2140cc: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2140ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2140d0: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2140D0u;
    {
        const bool branch_taken_0x2140d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2140D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2140D0u;
        // 0x2140d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2140d0) {
            ctx->pc = 0x2140FCu;
            goto label_2140fc;
        }
    }
    ctx->pc = 0x2140D8u;
label_2140d8:
    // 0x2140d8: 0xc0896ca  jal         func_225B28
    ctx->pc = 0x2140D8u;
    SET_GPR_U32(ctx, 31, 0x2140E0u);
    ctx->pc = 0x225B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225B28u, 0x2140D8u, 0x2140E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2140E0u;
label_2140e0:
    // 0x2140e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2140E0u;
    {
        const bool branch_taken_0x2140e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2140E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2140E0u;
        // 0x2140e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2140e0) {
            ctx->pc = 0x2140FCu;
            goto label_2140fc;
        }
    }
    ctx->pc = 0x2140E8u;
label_2140e8:
    // 0x2140e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2140e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2140ec:
    // 0x2140ec: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x2140ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2140f0: 0x1440ffb7  bnez        $v0, . + 4 + (-0x49 << 2)
    ctx->pc = 0x2140F0u;
    {
        const bool branch_taken_0x2140f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2140F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2140F0u;
        // 0x2140f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2140f0) {
            ctx->pc = 0x213FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213fd0;
        }
    }
    ctx->pc = 0x2140F8u;
label_2140f8:
    // 0x2140f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2140f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2140fc:
    // 0x2140fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2140fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_214100:
    // 0x214100: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x214100u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214104: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x214104u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x214108: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x214108u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21410c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x21410cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x214110: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x214110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x214114: 0x3e00008  jr          $ra
    ctx->pc = 0x214114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214114u;
        // 0x214118: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21411Cu;
    // 0x21411c: 0x0  nop
    ctx->pc = 0x21411cu;
    // NOP
    ctx->pc = 0x214120u;
}
