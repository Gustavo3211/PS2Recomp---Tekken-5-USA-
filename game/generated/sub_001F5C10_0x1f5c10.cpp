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

// Function: sub_001F5C10
// Address: 0x1f5c10 - 0x1f5d18
void sub_001F5C10_0x1f5c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5C10_0x1f5c10");
#endif

    switch (ctx->pc) {
        case 0x1f5c58u: goto label_1f5c58;
        case 0x1f5c68u: goto label_1f5c68;
        case 0x1f5c94u: goto label_1f5c94;
        case 0x1f5c9cu: goto label_1f5c9c;
        case 0x1f5ca4u: goto label_1f5ca4;
        case 0x1f5cdcu: goto label_1f5cdc;
        default: break;
    }

    ctx->pc = 0x1f5c10u;

    // 0x1f5c10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f5c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f5c14: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f5c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f5c18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f5c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f5c1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f5c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f5c20: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f5c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f5c24: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f5c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f5c28: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f5c28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5c2c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f5c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f5c30: 0x245388d0  addiu       $s3, $v0, -0x7730
    ctx->pc = 0x1f5c30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x1f5c34: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1f5c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1f5c38: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x1f5c38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f5c3c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1f5c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1f5c40: 0x24150040  addiu       $s5, $zero, 0x40
    ctx->pc = 0x1f5c40u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1f5c44: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1f5c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1f5c48: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x1f5c48u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f5c4c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1f5c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1f5c50: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1f5c50u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5c54: 0x128880  sll         $s1, $s2, 2
    ctx->pc = 0x1f5c54u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1f5c58:
    // 0x1f5c58: 0x2338021  addu        $s0, $s1, $s3
    ctx->pc = 0x1f5c58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x1f5c5c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1f5c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f5c60: 0xc09edd6  jal         func_27B758
    ctx->pc = 0x1F5C60u;
    SET_GPR_U32(ctx, 31, 0x1F5C68u);
    ctx->pc = 0x1F5C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5C60u;
    // 0x1f5c64: 0x8c85005c  lw          $a1, 0x5C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B758u, 0x1F5C60u, 0x1F5C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5C68u;
label_1f5c68:
    // 0x1f5c68: 0x10570007  beq         $v0, $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F5C68u;
    {
        const bool branch_taken_0x1f5c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        ctx->pc = 0x1F5C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C68u;
        // 0x1f5c6c: 0x28430002  slti        $v1, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5c68) {
            ctx->pc = 0x1F5C88u;
            goto label_1f5c88;
        }
    }
    ctx->pc = 0x1F5C70u;
    // 0x1f5c70: 0x5460001b  bnel        $v1, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x1F5C70u;
    {
        const bool branch_taken_0x1f5c70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5c70) {
            ctx->pc = 0x1F5C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5C70u;
            // 0x1f5c74: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5CE0u;
            goto label_1f5ce0;
        }
    }
    ctx->pc = 0x1F5C78u;
    // 0x1f5c78: 0x1056000b  beq         $v0, $s6, . + 4 + (0xB << 2)
    ctx->pc = 0x1F5C78u;
    {
        const bool branch_taken_0x1f5c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x1F5C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C78u;
        // 0x1f5c7c: 0x8f82a530  lw          $v0, -0x5AD0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5c78) {
            ctx->pc = 0x1F5CA8u;
            goto label_1f5ca8;
        }
    }
    ctx->pc = 0x1F5C80u;
    // 0x1f5c80: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1F5C80u;
    {
        const bool branch_taken_0x1f5c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C80u;
        // 0x1f5c84: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5c80) {
            ctx->pc = 0x1F5CE0u;
            goto label_1f5ce0;
        }
    }
    ctx->pc = 0x1F5C88u;
label_1f5c88:
    // 0x1f5c88: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1f5c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f5c8c: 0xc09f15c  jal         func_27C570
    ctx->pc = 0x1F5C8Cu;
    SET_GPR_U32(ctx, 31, 0x1F5C94u);
    ctx->pc = 0x1F5C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5C8Cu;
    // 0x1f5c90: 0x8c85005c  lw          $a1, 0x5C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C570u, 0x1F5C8Cu, 0x1F5C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5C94u;
label_1f5c94:
    // 0x1f5c94: 0xc0842b6  jal         func_210AD8
    ctx->pc = 0x1F5C94u;
    SET_GPR_U32(ctx, 31, 0x1F5C9Cu);
    ctx->pc = 0x1F5C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5C94u;
    // 0x1f5c98: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210AD8u, 0x1F5C94u, 0x1F5C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5C9Cu;
label_1f5c9c:
    // 0x1f5c9c: 0xc080208  jal         func_200820
    ctx->pc = 0x1F5C9Cu;
    SET_GPR_U32(ctx, 31, 0x1F5CA4u);
    ctx->pc = 0x1F5CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5C9Cu;
    // 0x1f5ca0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200820u, 0x1F5C9Cu, 0x1F5CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5CA4u;
label_1f5ca4:
    // 0x1f5ca4: 0x8f82a530  lw          $v0, -0x5AD0($gp)
    ctx->pc = 0x1f5ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
label_1f5ca8:
    // 0x1f5ca8: 0x2551804  sllv        $v1, $s5, $s2
    ctx->pc = 0x1f5ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 18) & 0x1F));
    // 0x1f5cac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f5cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1f5cb0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F5CB0u;
    {
        const bool branch_taken_0x1f5cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5CB0u;
        // 0x1f5cb4: 0x2331021  addu        $v0, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5cb0) {
            ctx->pc = 0x1F5CD4u;
            goto label_1f5cd4;
        }
    }
    ctx->pc = 0x1F5CB8u;
    // 0x1f5cb8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f5cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f5cbc: 0x904301bb  lbu         $v1, 0x1BB($v0)
    ctx->pc = 0x1f5cbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 443)));
    // 0x1f5cc0: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F5CC0u;
    {
        const bool branch_taken_0x1f5cc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5cc0) {
            ctx->pc = 0x1F5CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5CC0u;
            // 0x1f5cc4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5CE0u;
            goto label_1f5ce0;
        }
    }
    ctx->pc = 0x1F5CC8u;
    // 0x1f5cc8: 0x84420180  lh          $v0, 0x180($v0)
    ctx->pc = 0x1f5cc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 384)));
    // 0x1f5ccc: 0x10540003  beq         $v0, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F5CCCu;
    {
        const bool branch_taken_0x1f5ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x1F5CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5CCCu;
        // 0x1f5cd0: 0x2331021  addu        $v0, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5ccc) {
            ctx->pc = 0x1F5CDCu;
            goto label_1f5cdc;
        }
    }
    ctx->pc = 0x1F5CD4u;
label_1f5cd4:
    // 0x1f5cd4: 0xc0af5f6  jal         func_2BD7D8
    ctx->pc = 0x1F5CD4u;
    SET_GPR_U32(ctx, 31, 0x1F5CDCu);
    ctx->pc = 0x1F5CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5CD4u;
    // 0x1f5cd8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BD7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BD7D8u, 0x1F5CD4u, 0x1F5CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5CDCu;
label_1f5cdc:
    // 0x1f5cdc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1f5cdcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1f5ce0:
    // 0x1f5ce0: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x1f5ce0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f5ce4: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1F5CE4u;
    {
        const bool branch_taken_0x1f5ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5CE4u;
        // 0x1f5ce8: 0x128880  sll         $s1, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5ce4) {
            ctx->pc = 0x1F5C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5c58;
        }
    }
    ctx->pc = 0x1F5CECu;
    // 0x1f5cec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f5cecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5cf0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f5cf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f5cf4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f5cf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5cf8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f5cf8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f5cfc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f5cfcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f5d00: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1f5d00u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f5d04: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1f5d04u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f5d08: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1f5d08u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5d0c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f5d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f5d10: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D10u;
        // 0x1f5d14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5D18u;
}
