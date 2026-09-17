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

// Function: sub_0029C870
// Address: 0x29c870 - 0x29cad8
void sub_0029C870_0x29c870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C870_0x29c870");
#endif

    switch (ctx->pc) {
        case 0x29c918u: goto label_29c918;
        case 0x29c93cu: goto label_29c93c;
        default: break;
    }

    ctx->pc = 0x29c870u;

    // 0x29c870: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x29c870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x29c874: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x29c874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x29c878: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29c878u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c87c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29c87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29c880: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x29c880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x29c884: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x29c884u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c888: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x29c888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x29c88c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x29c88cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c890: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x29c890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x29c894: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x29c894u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c898: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x29c898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x29c89c: 0x132880  sll         $a1, $s3, 2
    ctx->pc = 0x29c89cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x29c8a0: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x29c8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x29c8a4: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x29c8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x29c8a8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x29c8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x29c8ac: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x29c8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x29c8b0: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x29c8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x29c8b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29c8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29c8b8: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x29c8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x29c8bc: 0x139040  sll         $s2, $s3, 1
    ctx->pc = 0x29c8bcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x29c8c0: 0x8ea40154  lw          $a0, 0x154($s5)
    ctx->pc = 0x29c8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 340)));
    // 0x29c8c4: 0x8ea70150  lw          $a3, 0x150($s5)
    ctx->pc = 0x29c8c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 336)));
    // 0x29c8c8: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x29c8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x29c8cc: 0x249e0030  addiu       $fp, $a0, 0x30
    ctx->pc = 0x29c8ccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x29c8d0: 0x8c660070  lw          $a2, 0x70($v1)
    ctx->pc = 0x29c8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x29c8d4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x29c8d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c8d8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x29c8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x29c8dc: 0x24970050  addiu       $s7, $a0, 0x50
    ctx->pc = 0x29c8dcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x29c8e0: 0x8cc30080  lw          $v1, 0x80($a2)
    ctx->pc = 0x29c8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x29c8e4: 0x8c56000c  lw          $s6, 0xC($v0)
    ctx->pc = 0x29c8e4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x29c8e8: 0x24820080  addiu       $v0, $a0, 0x80
    ctx->pc = 0x29c8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x29c8ec: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x29c8ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x29c8f0: 0xacc30080  sw          $v1, 0x80($a2)
    ctx->pc = 0x29c8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 3));
    // 0x29c8f4: 0x248300a0  addiu       $v1, $a0, 0xA0
    ctx->pc = 0x29c8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x29c8f8: 0x248400c0  addiu       $a0, $a0, 0xC0
    ctx->pc = 0x29c8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x29c8fc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x29c8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x29c900: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x29c900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x29c904: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x29c904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x29c908: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x29c908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x29c90c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x29c90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x29c910: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x29c910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x29c914: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x29c914u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_29c918:
    // 0x29c918: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x29c918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x29c91c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x29c91cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c920: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29c920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29c924: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29c924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c928: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x29c928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x29c92c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x29c92cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c930: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x29c930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c934: 0xc0a757c  jal         func_29D5F0
    ctx->pc = 0x29C934u;
    SET_GPR_U32(ctx, 31, 0x29C93Cu);
    ctx->pc = 0x29C938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C934u;
    // 0x29c938: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D5F0u, 0x29C934u, 0x29C93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C93Cu;
label_29c93c:
    // 0x29c93c: 0x2511821  addu        $v1, $s2, $s1
    ctx->pc = 0x29c93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x29c940: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29c940u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29c944: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29c944u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x29c948: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x29c948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x29c94c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29C94Cu;
    {
        const bool branch_taken_0x29c94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C94Cu;
        // 0x29c950: 0x2a240002  slti        $a0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c94c) {
            ctx->pc = 0x29C960u;
            goto label_29c960;
        }
    }
    ctx->pc = 0x29C954u;
    // 0x29c954: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x29c954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x29c958: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29C958u;
    {
        const bool branch_taken_0x29c958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C958u;
        // 0x29c95c: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c958) {
            ctx->pc = 0x29C96Cu;
            goto label_29c96c;
        }
    }
    ctx->pc = 0x29C960u;
label_29c960:
    // 0x29c960: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x29c960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x29c964: 0x2405efff  addiu       $a1, $zero, -0x1001
    ctx->pc = 0x29c964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x29c968: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x29c968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_29c96c:
    // 0x29c96c: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x29c96cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x29c970: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x29c970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29c974: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x29c974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x29c978: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x29c978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x29c97c: 0x1480ffe6  bnez        $a0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x29C97Cu;
    {
        const bool branch_taken_0x29c97c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C97Cu;
        // 0x29c980: 0xac620080  sw          $v0, 0x80($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c97c) {
            ctx->pc = 0x29C918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29c918;
        }
    }
    ctx->pc = 0x29C984u;
    // 0x29c984: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x29c984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29c988: 0x1328c0  sll         $a1, $s3, 3
    ctx->pc = 0x29c988u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x29c98c: 0x2ec60001  sltiu       $a2, $s6, 0x1
    ctx->pc = 0x29c98cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x29c990: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x29c990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x29c994: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x29C994u;
    {
        const bool branch_taken_0x29c994 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C994u;
        // 0x29c998: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c994) {
            ctx->pc = 0x29C9A8u;
            goto label_29c9a8;
        }
    }
    ctx->pc = 0x29C99Cu;
    // 0x29c99c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29c99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29c9a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29C9A0u;
    {
        const bool branch_taken_0x29c9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C9A0u;
        // 0x29c9a4: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c9a0) {
            ctx->pc = 0x29C9B4u;
            goto label_29c9b4;
        }
    }
    ctx->pc = 0x29C9A8u;
label_29c9a8:
    // 0x29c9a8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29c9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29c9ac: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x29c9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x29c9b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29c9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_29c9b4:
    // 0x29c9b4: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29c9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x29c9b8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x29c9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29c9bc: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x29c9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x29c9c0: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x29C9C0u;
    {
        const bool branch_taken_0x29c9c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C9C0u;
        // 0x29c9c4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c9c0) {
            ctx->pc = 0x29C9D8u;
            goto label_29c9d8;
        }
    }
    ctx->pc = 0x29C9C8u;
    // 0x29c9c8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29c9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29c9cc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x29C9CCu;
    {
        const bool branch_taken_0x29c9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C9CCu;
        // 0x29c9d0: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c9cc) {
            ctx->pc = 0x29C9E4u;
            goto label_29c9e4;
        }
    }
    ctx->pc = 0x29C9D4u;
    // 0x29c9d4: 0x0  nop
    ctx->pc = 0x29c9d4u;
    // NOP
label_29c9d8:
    // 0x29c9d8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29c9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29c9dc: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x29c9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x29c9e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29c9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_29c9e4:
    // 0x29c9e4: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29c9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x29c9e8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x29c9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c9ec: 0x3ac70001  xori        $a3, $s6, 0x1
    ctx->pc = 0x29c9ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)1);
    // 0x29c9f0: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x29c9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x29c9f4: 0x14e00004  bnez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x29C9F4u;
    {
        const bool branch_taken_0x29c9f4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C9F4u;
        // 0x29c9f8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c9f4) {
            ctx->pc = 0x29CA08u;
            goto label_29ca08;
        }
    }
    ctx->pc = 0x29C9FCu;
    // 0x29c9fc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29c9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29ca00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29CA00u;
    {
        const bool branch_taken_0x29ca00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CA00u;
        // 0x29ca04: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ca00) {
            ctx->pc = 0x29CA14u;
            goto label_29ca14;
        }
    }
    ctx->pc = 0x29CA08u;
label_29ca08:
    // 0x29ca08: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29ca08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29ca0c: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x29ca0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x29ca10: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29ca10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_29ca14:
    // 0x29ca14: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29ca14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x29ca18: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x29ca18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ca1c: 0x3ac60002  xori        $a2, $s6, 0x2
    ctx->pc = 0x29ca1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)2);
    // 0x29ca20: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x29ca20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x29ca24: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x29CA24u;
    {
        const bool branch_taken_0x29ca24 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x29CA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CA24u;
        // 0x29ca28: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ca24) {
            ctx->pc = 0x29CA38u;
            goto label_29ca38;
        }
    }
    ctx->pc = 0x29CA2Cu;
    // 0x29ca2c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29ca2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29ca30: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29CA30u;
    {
        const bool branch_taken_0x29ca30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CA30u;
        // 0x29ca34: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ca30) {
            ctx->pc = 0x29CA44u;
            goto label_29ca44;
        }
    }
    ctx->pc = 0x29CA38u;
label_29ca38:
    // 0x29ca38: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29ca38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29ca3c: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x29ca3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x29ca40: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29ca40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_29ca44:
    // 0x29ca44: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29ca44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x29ca48: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x29ca48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x29ca4c: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x29ca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x29ca50: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x29CA50u;
    {
        const bool branch_taken_0x29ca50 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x29CA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CA50u;
        // 0x29ca54: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ca50) {
            ctx->pc = 0x29CA68u;
            goto label_29ca68;
        }
    }
    ctx->pc = 0x29CA58u;
    // 0x29ca58: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29ca58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29ca5c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x29CA5Cu;
    {
        const bool branch_taken_0x29ca5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CA5Cu;
        // 0x29ca60: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ca5c) {
            ctx->pc = 0x29CA74u;
            goto label_29ca74;
        }
    }
    ctx->pc = 0x29CA64u;
    // 0x29ca64: 0x0  nop
    ctx->pc = 0x29ca64u;
    // NOP
label_29ca68:
    // 0x29ca68: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29ca68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29ca6c: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x29ca6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x29ca70: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29ca70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_29ca74:
    // 0x29ca74: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29ca74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x29ca78: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x29ca78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x29ca7c: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x29ca7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x29ca80: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x29CA80u;
    {
        const bool branch_taken_0x29ca80 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x29CA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CA80u;
        // 0x29ca84: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ca80) {
            ctx->pc = 0x29CA98u;
            goto label_29ca98;
        }
    }
    ctx->pc = 0x29CA88u;
    // 0x29ca88: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29ca88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29ca8c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x29CA8Cu;
    {
        const bool branch_taken_0x29ca8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CA8Cu;
        // 0x29ca90: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ca8c) {
            ctx->pc = 0x29CAA4u;
            goto label_29caa4;
        }
    }
    ctx->pc = 0x29CA94u;
    // 0x29ca94: 0x0  nop
    ctx->pc = 0x29ca94u;
    // NOP
label_29ca98:
    // 0x29ca98: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29ca98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29ca9c: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x29ca9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x29caa0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29caa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_29caa4:
    // 0x29caa4: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29caa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x29caa8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x29caa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29caac: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x29caacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29cab0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29cab0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29cab4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x29cab4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29cab8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x29cab8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29cabc: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x29cabcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29cac0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x29cac0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29cac4: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x29cac4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x29cac8: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x29cac8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29cacc: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x29caccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29cad0: 0x3e00008  jr          $ra
    ctx->pc = 0x29CAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CAD0u;
        // 0x29cad4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CAD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29CAD8u;
}
