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

// Function: sub_002A7AF0
// Address: 0x2a7af0 - 0x2a7c38
void sub_002A7AF0_0x2a7af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7AF0_0x2a7af0");
#endif

    switch (ctx->pc) {
        case 0x2a7b40u: goto label_2a7b40;
        case 0x2a7be0u: goto label_2a7be0;
        case 0x2a7becu: goto label_2a7bec;
        case 0x2a7c04u: goto label_2a7c04;
        default: break;
    }

    ctx->pc = 0x2a7af0u;

    // 0x2a7af0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a7af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a7af4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2a7af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2a7af8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a7af8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7afc: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2a7afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2a7b00: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a7b00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7b04: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2a7b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2a7b08: 0x24a40010  addiu       $a0, $a1, 0x10
    ctx->pc = 0x2a7b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2a7b0c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2a7b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2a7b10: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x2a7b10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x2a7b14: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a7b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a7b18: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2a7b18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x2a7b1c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2a7b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2a7b20: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2a7b20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2a7b24: 0x8cab0008  lw          $t3, 0x8($a1)
    ctx->pc = 0x2a7b24u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2a7b28: 0x18600023  blez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2A7B28u;
    {
        const bool branch_taken_0x2a7b28 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2A7B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7B28u;
        // 0x2a7b2c: 0xae04000c  sw          $a0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7b28) {
            ctx->pc = 0x2A7BB8u;
            goto label_2a7bb8;
        }
    }
    ctx->pc = 0x2A7B30u;
    // 0x2a7b30: 0x260a0004  addiu       $t2, $s0, 0x4
    ctx->pc = 0x2a7b30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2a7b34: 0x26090008  addiu       $t1, $s0, 0x8
    ctx->pc = 0x2a7b34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2a7b38: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2a7b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2a7b3c: 0x0  nop
    ctx->pc = 0x2a7b3cu;
    // NOP
label_2a7b40:
    // 0x2a7b40: 0x113940  sll         $a3, $s1, 5
    ctx->pc = 0x2a7b40u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x2a7b44: 0x112840  sll         $a1, $s1, 1
    ctx->pc = 0x2a7b44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2a7b48: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2a7b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2a7b4c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2a7b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2a7b50: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x2a7b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x2a7b54: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2a7b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a7b58: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2a7b58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2a7b5c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x2a7b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2a7b60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a7b60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2a7b64: 0x2053021  addu        $a2, $s0, $a1
    ctx->pc = 0x2a7b64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2a7b68: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a7b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a7b6c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x2a7b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x2a7b70: 0x1454021  addu        $t0, $t2, $a1
    ctx->pc = 0x2a7b70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x2a7b74: 0x1252821  addu        $a1, $t1, $a1
    ctx->pc = 0x2a7b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x2a7b78: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2a7b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2a7b7c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2a7b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2a7b80: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2a7b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2a7b84: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2a7b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2a7b88: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2a7b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2a7b8c: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x2a7b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x2a7b90: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x2a7b90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2a7b94: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x2a7b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2a7b98: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x2a7b98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2a7b9c: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x2a7b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2a7ba0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a7ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a7ba4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2a7ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2a7ba8: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x2a7ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2a7bac: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2a7bacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a7bb0: 0x5440ffe3  bnel        $v0, $zero, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2A7BB0u;
    {
        const bool branch_taken_0x2a7bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a7bb0) {
            ctx->pc = 0x2A7BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7BB0u;
            // 0x2a7bb4: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7b40;
        }
    }
    ctx->pc = 0x2A7BB8u;
label_2a7bb8:
    // 0x2a7bb8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2a7bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2a7bbc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a7bbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7bc0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2a7bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a7bc4: 0x3c120015  lui         $s2, 0x15
    ctx->pc = 0x2a7bc4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)21 << 16));
    // 0x2a7bc8: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x2a7bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2a7bcc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2a7bccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2a7bd0: 0xae020190  sw          $v0, 0x190($s0)
    ctx->pc = 0x2a7bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 2));
    // 0x2a7bd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a7bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7bd8: 0xae020194  sw          $v0, 0x194($s0)
    ctx->pc = 0x2a7bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 2));
    // 0x2a7bdc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a7bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2a7be0:
    // 0x2a7be0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a7be0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7be4: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x2A7BE4u;
    SET_GPR_U32(ctx, 31, 0x2A7BECu);
    ctx->pc = 0x2A7BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7BE4u;
    // 0x2a7be8: 0x264542f8  addiu       $a1, $s2, 0x42F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 17144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2A7BE4u, 0x2A7BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7BECu;
label_2a7bec:
    // 0x2a7bec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a7becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7bf0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a7bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7bf4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a7bf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2a7bf8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2a7bf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7bfc: 0xc0a9f1a  jal         func_2A7C68
    ctx->pc = 0x2A7BFCu;
    SET_GPR_U32(ctx, 31, 0x2A7C04u);
    ctx->pc = 0x2A7C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7BFCu;
    // 0x2a7c00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7C68u, 0x2A7BFCu, 0x2A7C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7C04u;
label_2a7c04:
    // 0x2a7c04: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x2a7c04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2a7c08: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2A7C08u;
    {
        const bool branch_taken_0x2a7c08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A7C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7C08u;
        // 0x2a7c0c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7c08) {
            ctx->pc = 0x2A7BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7be0;
        }
    }
    ctx->pc = 0x2A7C10u;
    // 0x2a7c10: 0x240301f4  addiu       $v1, $zero, 0x1F4
    ctx->pc = 0x2a7c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x2a7c14: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2a7c14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2a7c18: 0xae030198  sw          $v1, 0x198($s0)
    ctx->pc = 0x2a7c18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 3));
    // 0x2a7c1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a7c1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7c20: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2a7c20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a7c24: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2a7c24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a7c28: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2a7c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a7c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7C2Cu;
        // 0x2a7c30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7C34u;
    // 0x2a7c34: 0x0  nop
    ctx->pc = 0x2a7c34u;
    // NOP
    ctx->pc = 0x2a7c38u;
}
