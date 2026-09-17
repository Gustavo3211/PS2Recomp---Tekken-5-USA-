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

// Function: sub_004FAA48
// Address: 0x4faa48 - 0x4faca8
void sub_004FAA48_0x4faa48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FAA48_0x4faa48");
#endif

    switch (ctx->pc) {
        case 0x4faa84u: goto label_4faa84;
        case 0x4faad0u: goto label_4faad0;
        case 0x4faad4u: goto label_4faad4;
        case 0x4fab84u: goto label_4fab84;
        case 0x4fab94u: goto label_4fab94;
        case 0x4faba0u: goto label_4faba0;
        case 0x4fac64u: goto label_4fac64;
        case 0x4fac6cu: goto label_4fac6c;
        case 0x4fac78u: goto label_4fac78;
        case 0x4fac84u: goto label_4fac84;
        default: break;
    }

    ctx->pc = 0x4faa48u;

    // 0x4faa48: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4faa48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x4faa4c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x4faa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x4faa50: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4faa50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4faa54: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x4faa54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x4faa58: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x4faa58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x4faa5c: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x4faa5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x4faa60: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x4faa60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x4faa64: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x4faa64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x4faa68: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x4faa68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x4faa6c: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x4faa6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x4faa70: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x4faa70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
    // 0x4faa74: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x4faa74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x4faa78: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x4faa78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x4faa7c: 0xc13e660  jal         func_4F9980
    ctx->pc = 0x4FAA7Cu;
    SET_GPR_U32(ctx, 31, 0x4FAA84u);
    ctx->pc = 0x4FAA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FAA7Cu;
    // 0x4faa80: 0x3a29025  or          $s2, $sp, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 29) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9980u, 0x4FAA7Cu, 0x4FAA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FAA84u;
label_4faa84:
    // 0x4faa84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4faa84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4faa88: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4faa88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4faa8c: 0x8443d736  lh          $v1, -0x28CA($v0)
    ctx->pc = 0x4faa8cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x72D736u));
    // 0x4faa90: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4FAA90u;
    {
        const bool branch_taken_0x4faa90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FAA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FAA90u;
        // 0x4faa94: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4faa90) {
            ctx->pc = 0x4FAAACu;
            goto label_4faaac;
        }
    }
    ctx->pc = 0x4FAA98u;
    // 0x4faa98: 0x2443ceac  addiu       $v1, $v0, -0x3154
    ctx->pc = 0x4faa98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954668));
    // 0x4faa9c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4faa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4faaa0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4FAAA0u;
    {
        const bool branch_taken_0x4faaa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FAAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FAAA0u;
        // 0x4faaa4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4faaa0) {
            ctx->pc = 0x4FAAACu;
            goto label_4faaac;
        }
    }
    ctx->pc = 0x4FAAA8u;
    // 0x4faaa8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4faaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_4faaac:
    // 0x4faaac: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x4faaacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x4faab0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4faab0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4faab4: 0x245eceac  addiu       $fp, $v0, -0x3154
    ctx->pc = 0x4faab4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954668));
    // 0x4faab8: 0x3c170001  lui         $s7, 0x1
    ctx->pc = 0x4faab8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)1 << 16));
    // 0x4faabc: 0x241600ff  addiu       $s6, $zero, 0xFF
    ctx->pc = 0x4faabcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x4faac0: 0x3c15ff00  lui         $s5, 0xFF00
    ctx->pc = 0x4faac0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65280 << 16));
    // 0x4faac4: 0x24140008  addiu       $s4, $zero, 0x8
    ctx->pc = 0x4faac4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4faac8: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x4faac8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4faacc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4faaccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4faad0:
    // 0x4faad0: 0x30e2000f  andi        $v0, $a3, 0xF
    ctx->pc = 0x4faad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
label_4faad4:
    // 0x4faad4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4FAAD4u;
    {
        const bool branch_taken_0x4faad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FAAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FAAD4u;
        // 0x4faad8: 0x2171021  addu        $v0, $s0, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4faad4) {
            ctx->pc = 0x4FAAE4u;
            goto label_4faae4;
        }
    }
    ctx->pc = 0x4FAADCu;
    // 0x4faadc: 0xce000010  pref        0x00, 0x10($s0)
    ctx->pc = 0x4faadcu;
    // PREF instruction (ignored)
    // 0x4faae0: 0x2171021  addu        $v0, $s0, $s7
    ctx->pc = 0x4faae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
label_4faae4:
    // 0x4faae4: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x4faae4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4faae8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x4faae8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4faaec: 0xf63026  xor         $a2, $a3, $s6
    ctx->pc = 0x4faaecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 22));
    // 0x4faaf0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x4faaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4faaf4: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x4faaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x4faaf8: 0x92050001  lbu         $a1, 0x1($s0)
    ctx->pc = 0x4faaf8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x4faafc: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x4faafcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x4fab00: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4fab00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4fab04: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x4fab04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x4fab08: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4fab08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4fab0c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4fab0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4fab10: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x4fab10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4fab14: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x4fab14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4fab18: 0x30e30018  andi        $v1, $a3, 0x18
    ctx->pc = 0x4fab18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)24);
    // 0x4fab1c: 0x2a6200a  movz        $a0, $s5, $a2
    ctx->pc = 0x4fab1cu;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 21));
    // 0x4fab20: 0x10740003  beq         $v1, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x4FAB20u;
    {
        const bool branch_taken_0x4fab20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x4FAB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FAB20u;
        // 0x4fab24: 0x732826  xor         $a1, $v1, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fab20) {
            ctx->pc = 0x4FAB30u;
            goto label_4fab30;
        }
    }
    ctx->pc = 0x4FAB28u;
    // 0x4fab28: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x4fab28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x4fab2c: 0x5100b  movn        $v0, $zero, $a1
    ctx->pc = 0x4fab2cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_4fab30:
    // 0x4fab30: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x4fab30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4fab34: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4fab34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4fab38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4fab38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4fab3c: 0x28e30100  slti        $v1, $a3, 0x100
    ctx->pc = 0x4fab3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x4fab40: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x4fab40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x4fab44: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x4fab44u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4fab48: 0xac242260  sw          $a0, 0x2260($at)
    ctx->pc = 0x4fab48u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8800), GPR_U32(ctx, 4));
    // 0x4fab4c: 0x5460ffe1  bnel        $v1, $zero, . + 4 + (-0x1F << 2)
    ctx->pc = 0x4FAB4Cu;
    {
        const bool branch_taken_0x4fab4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4fab4c) {
            ctx->pc = 0x4FAB50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4FAB4Cu;
            // 0x4fab50: 0x30e2000f  andi        $v0, $a3, 0xF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FAAD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4faad4;
        }
    }
    ctx->pc = 0x4FAB54u;
    // 0x4fab54: 0x112c80  sll         $a1, $s1, 18
    ctx->pc = 0x4fab54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 18));
    // 0x4fab58: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4fab58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4fab5c: 0x3c012e00  lui         $at, 0x2E00
    ctx->pc = 0x4fab5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)11776 << 16));
    // 0x4fab60: 0x252821  addu        $a1, $at, $a1
    ctx->pc = 0x4fab60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x4fab64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4fab64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fab68: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4fab68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fab6c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4fab6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fab70: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x4fab70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4fab74: 0x240b0010  addiu       $t3, $zero, 0x10
    ctx->pc = 0x4fab74u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4fab78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4fab78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fab7c: 0xc040a78  jal         func_1029E0
    ctx->pc = 0x4FAB7Cu;
    SET_GPR_U32(ctx, 31, 0x4FAB84u);
    ctx->pc = 0x4FAB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FAB7Cu;
    // 0x4fab80: 0x52c03  sra         $a1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1029E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1029E0u, 0x4FAB7Cu, 0x4FAB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FAB84u;
label_4fab84:
    // 0x4fab84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4fab84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fab88: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x4fab88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x4fab8c: 0xc040af2  jal         func_102BC8
    ctx->pc = 0x4FAB8Cu;
    SET_GPR_U32(ctx, 31, 0x4FAB94u);
    ctx->pc = 0x4FAB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FAB8Cu;
    // 0x4fab90: 0x34a52260  ori         $a1, $a1, 0x2260 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8800);
    ctx->in_delay_slot = false;
    ctx->pc = 0x102BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102BC8u, 0x4FAB8Cu, 0x4FAB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FAB94u;
label_4fab94:
    // 0x4fab94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4fab94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fab98: 0xc0409b2  jal         func_1026C8
    ctx->pc = 0x4FAB98u;
    SET_GPR_U32(ctx, 31, 0x4FABA0u);
    ctx->pc = 0x4FAB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FAB98u;
    // 0x4fab9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1026C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1026C8u, 0x4FAB98u, 0x4FABA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FABA0u;
label_4faba0:
    // 0x4faba0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4faba0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4faba4: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x4faba4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x4faba8: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x4FABA8u;
    {
        const bool branch_taken_0x4faba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FABACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FABA8u;
        // 0x4fabac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4faba8) {
            ctx->pc = 0x4FAAD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4faad0;
        }
    }
    ctx->pc = 0x4FABB0u;
    // 0x4fabb0: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x4fabb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4fabb4: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x4fabb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x4fabb8: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x4fabb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4fabbc: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x4fabbcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x4fabc0: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x4fabc0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4fabc4: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x4fabc4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x4fabc8: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x4fabc8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4fabcc: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x4fabccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x4fabd0: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x4fabd0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4fabd4: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x4fabd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x4fabd8: 0x3e00008  jr          $ra
    ctx->pc = 0x4FABD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FABDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FABD8u;
        // 0x4fabdc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FABD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FABE0u;
    // 0x4fabe0: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x4fabe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x4fabe4: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4fabe4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4fabe8: 0x8c47cea4  lw          $a3, -0x315C($v0)
    ctx->pc = 0x4fabe8u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x56CEA4u));
    // 0x4fabec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4fabecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4fabf0: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x4fabf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x4fabf4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x4fabf4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x4fabf8: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x4fabf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x4fabfc: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x4fabfcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fac00: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x4fac00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fac04: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x4fac04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x4fac08: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4fac08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4fac0c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x4fac0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4fac10: 0x10660020  beq         $v1, $a2, . + 4 + (0x20 << 2)
    ctx->pc = 0x4FAC10u;
    {
        const bool branch_taken_0x4fac10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x4FAC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FAC10u;
        // 0x4fac14: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fac10) {
            ctx->pc = 0x4FAC94u;
            goto label_4fac94;
        }
    }
    ctx->pc = 0x4FAC18u;
    // 0x4fac18: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x4fac18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4fac1c: 0x24902000  addiu       $s0, $a0, 0x2000
    ctx->pc = 0x4fac1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8192));
    // 0x4fac20: 0x304affff  andi        $t2, $v0, 0xFFFF
    ctx->pc = 0x4fac20u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4fac24: 0x1940001a  blez        $t2, . + 4 + (0x1A << 2)
    ctx->pc = 0x4FAC24u;
    {
        const bool branch_taken_0x4fac24 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x4FAC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FAC24u;
        // 0x4fac28: 0x21402  srl         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fac24) {
            ctx->pc = 0x4FAC90u;
            goto label_4fac90;
        }
    }
    ctx->pc = 0x4FAC2Cu;
    // 0x4fac2c: 0x58400019  blezl       $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x4FAC2Cu;
    {
        const bool branch_taken_0x4fac2c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4fac2c) {
            ctx->pc = 0x4FAC30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4FAC2Cu;
            // 0x4fac30: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FAC94u;
            goto label_4fac94;
        }
    }
    ctx->pc = 0x4FAC34u;
    // 0x4fac34: 0x82c00  sll         $a1, $t0, 16
    ctx->pc = 0x4fac34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x4fac38: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4fac38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fac3c: 0x25d00  sll         $t3, $v0, 20
    ctx->pc = 0x4fac3cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x4fac40: 0xa5500  sll         $t2, $t2, 20
    ctx->pc = 0x4fac40u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 20));
    // 0x4fac44: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4fac44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fac48: 0xa5403  sra         $t2, $t2, 16
    ctx->pc = 0x4fac48u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 16));
    // 0x4fac4c: 0xb5c03  sra         $t3, $t3, 16
    ctx->pc = 0x4fac4cu;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 16));
    // 0x4fac50: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4fac50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4fac54: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x4fac54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x4fac58: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4fac58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fac5c: 0xc040a78  jal         func_1029E0
    ctx->pc = 0x4FAC5Cu;
    SET_GPR_U32(ctx, 31, 0x4FAC64u);
    ctx->pc = 0x4FAC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FAC5Cu;
    // 0x4fac60: 0x52c03  sra         $a1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1029E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1029E0u, 0x4FAC5Cu, 0x4FAC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FAC64u;
label_4fac64:
    // 0x4fac64: 0xc043d88  jal         func_10F620
    ctx->pc = 0x4FAC64u;
    SET_GPR_U32(ctx, 31, 0x4FAC6Cu);
    ctx->pc = 0x4FAC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FAC64u;
    // 0x4fac68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F620u, 0x4FAC64u, 0x4FAC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FAC6Cu;
label_4fac6c:
    // 0x4fac6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4fac6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fac70: 0xc040af2  jal         func_102BC8
    ctx->pc = 0x4FAC70u;
    SET_GPR_U32(ctx, 31, 0x4FAC78u);
    ctx->pc = 0x4FAC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FAC70u;
    // 0x4fac74: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102BC8u, 0x4FAC70u, 0x4FAC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FAC78u;
label_4fac78:
    // 0x4fac78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4fac78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fac7c: 0xc0409b2  jal         func_1026C8
    ctx->pc = 0x4FAC7Cu;
    SET_GPR_U32(ctx, 31, 0x4FAC84u);
    ctx->pc = 0x4FAC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FAC7Cu;
    // 0x4fac80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1026C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1026C8u, 0x4FAC7Cu, 0x4FAC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FAC84u;
label_4fac84:
    // 0x4fac84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4FAC84u;
    {
        const bool branch_taken_0x4fac84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FAC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FAC84u;
        // 0x4fac88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fac84) {
            ctx->pc = 0x4FAC94u;
            goto label_4fac94;
        }
    }
    ctx->pc = 0x4FAC8Cu;
    // 0x4fac8c: 0x0  nop
    ctx->pc = 0x4fac8cu;
    // NOP
label_4fac90:
    // 0x4fac90: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4fac90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4fac94:
    // 0x4fac94: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x4fac94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4fac98: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x4fac98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x4fac9c: 0x3e00008  jr          $ra
    ctx->pc = 0x4FAC9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FAC9Cu;
        // 0x4faca0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FAC9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FACA4u;
    // 0x4faca4: 0x0  nop
    ctx->pc = 0x4faca4u;
    // NOP
    ctx->pc = 0x4faca8u;
}
