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

// Function: sub_002B39D8
// Address: 0x2b39d8 - 0x2b3e40
void sub_002B39D8_0x2b39d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B39D8_0x2b39d8");
#endif

    switch (ctx->pc) {
        case 0x2b3a00u: goto label_2b3a00;
        case 0x2b3a10u: goto label_2b3a10;
        case 0x2b3a28u: goto label_2b3a28;
        case 0x2b3a48u: goto label_2b3a48;
        case 0x2b3a60u: goto label_2b3a60;
        case 0x2b3a80u: goto label_2b3a80;
        case 0x2b3a98u: goto label_2b3a98;
        case 0x2b3abcu: goto label_2b3abc;
        case 0x2b3ad0u: goto label_2b3ad0;
        case 0x2b3ae0u: goto label_2b3ae0;
        case 0x2b3b00u: goto label_2b3b00;
        case 0x2b3b48u: goto label_2b3b48;
        case 0x2b3d20u: goto label_2b3d20;
        case 0x2b3d68u: goto label_2b3d68;
        case 0x2b3d78u: goto label_2b3d78;
        case 0x2b3d94u: goto label_2b3d94;
        case 0x2b3dacu: goto label_2b3dac;
        default: break;
    }

    ctx->pc = 0x2b39d8u;

    // 0x2b39d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b39d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b39dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b39dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b39e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b39e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b39e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b39e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b39e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b39e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b39ec: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x2b39ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2b39f0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B39F0u;
    {
        const bool branch_taken_0x2b39f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b39f0) {
            ctx->pc = 0x2B39F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B39F0u;
            // 0x2b39f4: 0x8e020078  lw          $v0, 0x78($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3A04u;
            goto label_2b3a04;
        }
    }
    ctx->pc = 0x2B39F8u;
    // 0x2b39f8: 0xc0aa5f4  jal         func_2A97D0
    ctx->pc = 0x2B39F8u;
    SET_GPR_U32(ctx, 31, 0x2B3A00u);
    ctx->pc = 0x2A97D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A97D0u, 0x2B39F8u, 0x2B3A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3A00u;
label_2b3a00:
    // 0x2b3a00: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x2b3a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_2b3a04:
    // 0x2b3a04: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2B3A04u;
    {
        const bool branch_taken_0x2b3a04 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B3A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3A04u;
        // 0x2b3a08: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3a04) {
            ctx->pc = 0x2B3A38u;
            goto label_2b3a38;
        }
    }
    ctx->pc = 0x2B3A0Cu;
    // 0x2b3a0c: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x2b3a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_2b3a10:
    // 0x2b3a10: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x2b3a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x2b3a14: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x2b3a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2b3a18: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2b3a18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2b3a1c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2b3a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2b3a20: 0xc0aad0a  jal         func_2AB428
    ctx->pc = 0x2B3A20u;
    SET_GPR_U32(ctx, 31, 0x2B3A28u);
    ctx->pc = 0x2B3A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3A20u;
    // 0x2b3a24: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB428u, 0x2B3A20u, 0x2B3A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3A28u;
label_2b3a28:
    // 0x2b3a28: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x2b3a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x2b3a2c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2b3a2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b3a30: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2B3A30u;
    {
        const bool branch_taken_0x2b3a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3a30) {
            ctx->pc = 0x2B3A34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3A30u;
            // 0x2b3a34: 0x112040  sll         $a0, $s1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b3a10;
        }
    }
    ctx->pc = 0x2B3A38u;
label_2b3a38:
    // 0x2b3a38: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x2b3a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2b3a3c: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2B3A3Cu;
    {
        const bool branch_taken_0x2b3a3c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B3A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3A3Cu;
        // 0x2b3a40: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3a3c) {
            ctx->pc = 0x2B3A70u;
            goto label_2b3a70;
        }
    }
    ctx->pc = 0x2B3A44u;
    // 0x2b3a44: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x2b3a44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_2b3a48:
    // 0x2b3a48: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x2b3a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x2b3a4c: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x2b3a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2b3a50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2b3a50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2b3a54: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2b3a54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b3a58: 0xc0aad94  jal         func_2AB650
    ctx->pc = 0x2B3A58u;
    SET_GPR_U32(ctx, 31, 0x2B3A60u);
    ctx->pc = 0x2B3A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3A58u;
    // 0x2b3a5c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB650u, 0x2B3A58u, 0x2B3A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3A60u;
label_2b3a60:
    // 0x2b3a60: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x2b3a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2b3a64: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2b3a64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b3a68: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2B3A68u;
    {
        const bool branch_taken_0x2b3a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3a68) {
            ctx->pc = 0x2B3A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3A68u;
            // 0x2b3a6c: 0x112040  sll         $a0, $s1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3A48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b3a48;
        }
    }
    ctx->pc = 0x2B3A70u;
label_2b3a70:
    // 0x2b3a70: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x2b3a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x2b3a74: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2B3A74u;
    {
        const bool branch_taken_0x2b3a74 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B3A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3A74u;
        // 0x2b3a78: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3a74) {
            ctx->pc = 0x2B3AA8u;
            goto label_2b3aa8;
        }
    }
    ctx->pc = 0x2B3A7Cu;
    // 0x2b3a7c: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x2b3a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2b3a80:
    // 0x2b3a80: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x2b3a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2b3a84: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x2b3a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2b3a88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2b3a88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2b3a8c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2b3a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b3a90: 0xc0ac960  jal         func_2B2580
    ctx->pc = 0x2B3A90u;
    SET_GPR_U32(ctx, 31, 0x2B3A98u);
    ctx->pc = 0x2B3A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3A90u;
    // 0x2b3a94: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2580u, 0x2B3A90u, 0x2B3A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3A98u;
label_2b3a98:
    // 0x2b3a98: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x2b3a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x2b3a9c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2b3a9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b3aa0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2B3AA0u;
    {
        const bool branch_taken_0x2b3aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3AA0u;
        // 0x2b3aa4: 0x112080  sll         $a0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3aa0) {
            ctx->pc = 0x2B3A80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b3a80;
        }
    }
    ctx->pc = 0x2B3AA8u;
label_2b3aa8:
    // 0x2b3aa8: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x2b3aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x2b3aac: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B3AACu;
    {
        const bool branch_taken_0x2b3aac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3aac) {
            ctx->pc = 0x2B3AB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3AACu;
            // 0x2b3ab0: 0x8e020070  lw          $v0, 0x70($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3AC0u;
            goto label_2b3ac0;
        }
    }
    ctx->pc = 0x2B3AB4u;
    // 0x2b3ab4: 0xc0aacce  jal         func_2AB338
    ctx->pc = 0x2B3AB4u;
    SET_GPR_U32(ctx, 31, 0x2B3ABCu);
    ctx->pc = 0x2AB338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB338u, 0x2B3AB4u, 0x2B3ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3ABCu;
label_2b3abc:
    // 0x2b3abc: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x2b3abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_2b3ac0:
    // 0x2b3ac0: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2B3AC0u;
    {
        const bool branch_taken_0x2b3ac0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B3AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3AC0u;
        // 0x2b3ac4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3ac0) {
            ctx->pc = 0x2B3AF0u;
            goto label_2b3af0;
        }
    }
    ctx->pc = 0x2B3AC8u;
    // 0x2b3ac8: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x2b3ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x2b3acc: 0x0  nop
    ctx->pc = 0x2b3accu;
    // NOP
label_2b3ad0:
    // 0x2b3ad0: 0x1121c0  sll         $a0, $s1, 7
    ctx->pc = 0x2b3ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 7));
    // 0x2b3ad4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2b3ad4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2b3ad8: 0xc0aacce  jal         func_2AB338
    ctx->pc = 0x2B3AD8u;
    SET_GPR_U32(ctx, 31, 0x2B3AE0u);
    ctx->pc = 0x2B3ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3AD8u;
    // 0x2b3adc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB338u, 0x2B3AD8u, 0x2B3AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3AE0u;
label_2b3ae0:
    // 0x2b3ae0: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x2b3ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2b3ae4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2b3ae4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b3ae8: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2B3AE8u;
    {
        const bool branch_taken_0x2b3ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3ae8) {
            ctx->pc = 0x2B3AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3AE8u;
            // 0x2b3aec: 0x8e020098  lw          $v0, 0x98($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3AD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b3ad0;
        }
    }
    ctx->pc = 0x2B3AF0u;
label_2b3af0:
    // 0x2b3af0: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x2b3af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2b3af4: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B3AF4u;
    {
        const bool branch_taken_0x2b3af4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B3AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3AF4u;
        // 0x2b3af8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3af4) {
            ctx->pc = 0x2B3B30u;
            goto label_2b3b30;
        }
    }
    ctx->pc = 0x2B3AFCu;
    // 0x2b3afc: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x2b3afcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_2b3b00:
    // 0x2b3b00: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x2b3b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x2b3b04: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2b3b04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b3b08: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2b3b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2b3b0c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b3b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b3b10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b3b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b3b14: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x2b3b14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x2b3b18: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2b3b18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2b3b1c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2b3b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2b3b20: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x2b3b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2b3b24: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2b3b24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b3b28: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2B3B28u;
    {
        const bool branch_taken_0x2b3b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3B28u;
        // 0x2b3b2c: 0x41100  sll         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3b28) {
            ctx->pc = 0x2B3B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b3b00;
        }
    }
    ctx->pc = 0x2B3B30u;
label_2b3b30:
    // 0x2b3b30: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x2b3b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x2b3b34: 0x18400073  blez        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x2B3B34u;
    {
        const bool branch_taken_0x2b3b34 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B3B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3B34u;
        // 0x2b3b38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3b34) {
            ctx->pc = 0x2B3D04u;
            goto label_2b3d04;
        }
    }
    ctx->pc = 0x2B3B3Cu;
    // 0x2b3b3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b3b3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3b40: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x2b3b40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2b3b44: 0x0  nop
    ctx->pc = 0x2b3b44u;
    // NOP
label_2b3b48:
    // 0x2b3b48: 0x8e0300ac  lw          $v1, 0xAC($s0)
    ctx->pc = 0x2b3b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x2b3b4c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2b3b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2b3b50: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2b3b50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2b3b54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b3b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b3b58: 0x8c640080  lw          $a0, 0x80($v1)
    ctx->pc = 0x2b3b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2b3b5c: 0xac600060  sw          $zero, 0x60($v1)
    ctx->pc = 0x2b3b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 0));
    // 0x2b3b60: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x2b3b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x2b3b64: 0xac600064  sw          $zero, 0x64($v1)
    ctx->pc = 0x2b3b64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 0));
    // 0x2b3b68: 0xac600088  sw          $zero, 0x88($v1)
    ctx->pc = 0x2b3b68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 0));
    // 0x2b3b6c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2b3b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2b3b70: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2b3b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2b3b74: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2b3b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2b3b78: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2b3b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2b3b7c: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x2b3b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x2b3b80: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x2b3b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x2b3b84: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x2b3b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x2b3b88: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x2b3b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x2b3b8c: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x2b3b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x2b3b90: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x2b3b90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x2b3b94: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x2b3b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x2b3b98: 0xe460002c  swc1        $f0, 0x2C($v1)
    ctx->pc = 0x2b3b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
    // 0x2b3b9c: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x2b3b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x2b3ba0: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x2b3ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x2b3ba4: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x2b3ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x2b3ba8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B3BA8u;
    {
        const bool branch_taken_0x2b3ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3BA8u;
        // 0x2b3bac: 0xe460003c  swc1        $f0, 0x3C($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3ba8) {
            ctx->pc = 0x2B3BB8u;
            goto label_2b3bb8;
        }
    }
    ctx->pc = 0x2B3BB0u;
    // 0x2b3bb0: 0xac6000ec  sw          $zero, 0xEC($v1)
    ctx->pc = 0x2b3bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 236), GPR_U32(ctx, 0));
    // 0x2b3bb4: 0x8c640080  lw          $a0, 0x80($v1)
    ctx->pc = 0x2b3bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_2b3bb8:
    // 0x2b3bb8: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x2b3bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x2b3bbc: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x2B3BBCu;
    {
        const bool branch_taken_0x2b3bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3BBCu;
        // 0x2b3bc0: 0x246500b4  addiu       $a1, $v1, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3bbc) {
            ctx->pc = 0x2B3CF0u;
            goto label_2b3cf0;
        }
    }
    ctx->pc = 0x2B3BC4u;
    // 0x2b3bc4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2b3bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b3bc8: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x2b3bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x2b3bcc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2b3bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b3bd0: 0xac600064  sw          $zero, 0x64($v1)
    ctx->pc = 0x2b3bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 0));
    // 0x2b3bd4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2b3bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b3bd8: 0xac40008c  sw          $zero, 0x8C($v0)
    ctx->pc = 0x2b3bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 0));
    // 0x2b3bdc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2b3bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b3be0: 0xac600088  sw          $zero, 0x88($v1)
    ctx->pc = 0x2b3be0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 0));
    // 0x2b3be4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2b3be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b3be8: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x2b3be8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x2b3bec: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b3becu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b3bf0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2b3bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2b3bf4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2b3bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2b3bf8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2b3bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2b3bfc: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x2b3bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x2b3c00: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x2b3c00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x2b3c04: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x2b3c04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x2b3c08: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x2b3c08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x2b3c0c: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x2b3c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x2b3c10: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x2b3c10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x2b3c14: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x2b3c14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x2b3c18: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x2b3c18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x2b3c1c: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x2b3c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x2b3c20: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x2b3c20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x2b3c24: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x2b3c24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x2b3c28: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2b3c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2b3c2c: 0xac600060  sw          $zero, 0x60($v1)
    ctx->pc = 0x2b3c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 0));
    // 0x2b3c30: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2b3c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2b3c34: 0xac400064  sw          $zero, 0x64($v0)
    ctx->pc = 0x2b3c34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 0));
    // 0x2b3c38: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2b3c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2b3c3c: 0xac60008c  sw          $zero, 0x8C($v1)
    ctx->pc = 0x2b3c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 0));
    // 0x2b3c40: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2b3c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2b3c44: 0xac800088  sw          $zero, 0x88($a0)
    ctx->pc = 0x2b3c44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
    // 0x2b3c48: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2b3c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2b3c4c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b3c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b3c50: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2b3c50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2b3c54: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2b3c54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2b3c58: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2b3c58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2b3c5c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x2b3c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x2b3c60: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x2b3c60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x2b3c64: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x2b3c64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x2b3c68: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x2b3c68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x2b3c6c: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x2b3c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x2b3c70: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x2b3c70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x2b3c74: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x2b3c74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x2b3c78: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x2b3c78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x2b3c7c: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x2b3c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x2b3c80: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x2b3c80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x2b3c84: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x2b3c84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x2b3c88: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x2b3c88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x2b3c8c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2b3c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2b3c90: 0xac600060  sw          $zero, 0x60($v1)
    ctx->pc = 0x2b3c90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 0));
    // 0x2b3c94: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2b3c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2b3c98: 0xac400064  sw          $zero, 0x64($v0)
    ctx->pc = 0x2b3c98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 0));
    // 0x2b3c9c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2b3c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2b3ca0: 0xac60008c  sw          $zero, 0x8C($v1)
    ctx->pc = 0x2b3ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 0));
    // 0x2b3ca4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2b3ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2b3ca8: 0xac800088  sw          $zero, 0x88($a0)
    ctx->pc = 0x2b3ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
    // 0x2b3cac: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2b3cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2b3cb0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b3cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b3cb4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2b3cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2b3cb8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2b3cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2b3cbc: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2b3cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2b3cc0: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x2b3cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x2b3cc4: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x2b3cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x2b3cc8: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x2b3cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x2b3ccc: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x2b3cccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x2b3cd0: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x2b3cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x2b3cd4: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x2b3cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x2b3cd8: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x2b3cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x2b3cdc: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x2b3cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x2b3ce0: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x2b3ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x2b3ce4: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x2b3ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x2b3ce8: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x2b3ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x2b3cec: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x2b3cecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_2b3cf0:
    // 0x2b3cf0: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x2b3cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x2b3cf4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2b3cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2b3cf8: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2b3cf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b3cfc: 0x1440ff92  bnez        $v0, . + 4 + (-0x6E << 2)
    ctx->pc = 0x2B3CFCu;
    {
        const bool branch_taken_0x2b3cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3CFCu;
        // 0x2b3d00: 0x61100  sll         $v0, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3cfc) {
            ctx->pc = 0x2B3B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b3b48;
        }
    }
    ctx->pc = 0x2B3D04u;
label_2b3d04:
    // 0x2b3d04: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x2b3d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2b3d08: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2B3D08u;
    {
        const bool branch_taken_0x2b3d08 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B3D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D08u;
        // 0x2b3d0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3d08) {
            ctx->pc = 0x2B3D5Cu;
            goto label_2b3d5c;
        }
    }
    ctx->pc = 0x2B3D10u;
    // 0x2b3d10: 0x3c06efff  lui         $a2, 0xEFFF
    ctx->pc = 0x2b3d10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61439 << 16));
    // 0x2b3d14: 0x2407fffd  addiu       $a3, $zero, -0x3
    ctx->pc = 0x2b3d14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2b3d18: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2b3d18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2b3d1c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x2b3d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2b3d20:
    // 0x2b3d20: 0x8e0400a4  lw          $a0, 0xA4($s0)
    ctx->pc = 0x2b3d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x2b3d24: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2b3d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2b3d28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b3d28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b3d2c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2b3d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2b3d30: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2b3d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2b3d34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b3d34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b3d38: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2b3d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2b3d3c: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x2b3d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x2b3d40: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2b3d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2b3d44: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x2b3d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x2b3d48: 0xac820074  sw          $v0, 0x74($a0)
    ctx->pc = 0x2b3d48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 2));
    // 0x2b3d4c: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x2b3d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2b3d50: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x2b3d50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2b3d54: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x2B3D54u;
    {
        const bool branch_taken_0x2b3d54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D54u;
        // 0x2b3d58: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3d54) {
            ctx->pc = 0x2B3D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b3d20;
        }
    }
    ctx->pc = 0x2B3D5Cu;
label_2b3d5c:
    // 0x2b3d5c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x2b3d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2b3d60: 0xc0c82d8  jal         func_320B60
    ctx->pc = 0x2B3D60u;
    SET_GPR_U32(ctx, 31, 0x2B3D68u);
    ctx->pc = 0x2B3D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3D60u;
    // 0x2b3d64: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320B60u, 0x2B3D60u, 0x2B3D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3D68u;
label_2b3d68:
    // 0x2b3d68: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x2b3d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2b3d6c: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2B3D6Cu;
    {
        const bool branch_taken_0x2b3d6c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B3D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D6Cu;
        // 0x2b3d70: 0x111040  sll         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3d6c) {
            ctx->pc = 0x2B3DA4u;
            goto label_2b3da4;
        }
    }
    ctx->pc = 0x2B3D74u;
    // 0x2b3d74: 0x0  nop
    ctx->pc = 0x2b3d74u;
    // NOP
label_2b3d78:
    // 0x2b3d78: 0x8e030094  lw          $v1, 0x94($s0)
    ctx->pc = 0x2b3d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x2b3d7c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2b3d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2b3d80: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2b3d80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2b3d84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b3d84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b3d88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b3d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b3d8c: 0xc0c8dca  jal         func_323728
    ctx->pc = 0x2B3D8Cu;
    SET_GPR_U32(ctx, 31, 0x2B3D94u);
    ctx->pc = 0x2B3D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3D8Cu;
    // 0x2b3d90: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323728u, 0x2B3D8Cu, 0x2B3D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3D94u;
label_2b3d94:
    // 0x2b3d94: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x2b3d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2b3d98: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2b3d98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b3d9c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2B3D9Cu;
    {
        const bool branch_taken_0x2b3d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D9Cu;
        // 0x2b3da0: 0x111040  sll         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3d9c) {
            ctx->pc = 0x2B3D78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b3d78;
        }
    }
    ctx->pc = 0x2B3DA4u;
label_2b3da4:
    // 0x2b3da4: 0xc0a9e86  jal         func_2A7A18
    ctx->pc = 0x2B3DA4u;
    SET_GPR_U32(ctx, 31, 0x2B3DACu);
    ctx->pc = 0x2B3DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3DA4u;
    // 0x2b3da8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7A18u, 0x2B3DA4u, 0x2B3DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3DACu;
label_2b3dac:
    // 0x2b3dac: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x2b3dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x2b3db0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b3db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b3db4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b3db4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3db8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2b3db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b3dbc: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x2b3dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
    // 0x2b3dc0: 0xe60000b8  swc1        $f0, 0xB8($s0)
    ctx->pc = 0x2b3dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 184), bits); }
    // 0x2b3dc4: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x2b3dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x2b3dc8: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x2b3dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x2b3dcc: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x2b3dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x2b3dd0: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x2b3dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x2b3dd4: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x2b3dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x2b3dd8: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x2b3dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x2b3ddc: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x2b3ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x2b3de0: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x2b3de0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x2b3de4: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x2b3de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x2b3de8: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x2b3de8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x2b3dec: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x2b3decu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x2b3df0: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x2b3df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x2b3df4: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x2b3df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x2b3df8: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x2b3df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x2b3dfc: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x2b3dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x2b3e00: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x2b3e00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x2b3e04: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x2b3e04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x2b3e08: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x2b3e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x2b3e0c: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x2b3e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x2b3e10: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x2b3e10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x2b3e14: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x2b3e14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x2b3e18: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x2b3e18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x2b3e1c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x2b3e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x2b3e20: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x2b3e20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x2b3e24: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x2b3e24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
    // 0x2b3e28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b3e28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b3e2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b3e2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3e30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b3e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b3e34: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E34u;
        // 0x2b3e38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3E34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3E3Cu;
    // 0x2b3e3c: 0x0  nop
    ctx->pc = 0x2b3e3cu;
    // NOP
    ctx->pc = 0x2b3e40u;
}
