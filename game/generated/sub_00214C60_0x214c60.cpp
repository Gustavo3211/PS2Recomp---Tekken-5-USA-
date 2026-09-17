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

// Function: sub_00214C60
// Address: 0x214c60 - 0x214d38
void sub_00214C60_0x214c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214C60_0x214c60");
#endif

    switch (ctx->pc) {
        case 0x214ca4u: goto label_214ca4;
        case 0x214ce0u: goto label_214ce0;
        default: break;
    }

    ctx->pc = 0x214c60u;

    // 0x214c60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x214c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x214c64: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x214c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x214c68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x214c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x214c6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x214c6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214c70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x214c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x214c74: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x214c74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214c78: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x214c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x214c7c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x214c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x214c80: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x214c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x214c84: 0x14430024  bne         $v0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x214C84u;
    {
        const bool branch_taken_0x214c84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x214C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214C84u;
        // 0x214c88: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214c84) {
            ctx->pc = 0x214D18u;
            goto label_214d18;
        }
    }
    ctx->pc = 0x214C8Cu;
    // 0x214c8c: 0x84a30012  lh          $v1, 0x12($a1)
    ctx->pc = 0x214c8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x214c90: 0x9202002d  lbu         $v0, 0x2D($s0)
    ctx->pc = 0x214c90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
    // 0x214c94: 0x54620021  bnel        $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x214C94u;
    {
        const bool branch_taken_0x214c94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x214c94) {
            ctx->pc = 0x214C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214C94u;
            // 0x214c98: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214D1Cu;
            goto label_214d1c;
        }
    }
    ctx->pc = 0x214C9Cu;
    // 0x214c9c: 0xc0863ea  jal         func_218FA8
    ctx->pc = 0x214C9Cu;
    SET_GPR_U32(ctx, 31, 0x214CA4u);
    ctx->pc = 0x214CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214C9Cu;
    // 0x214ca0: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218FA8u, 0x214C9Cu, 0x214CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214CA4u;
label_214ca4:
    // 0x214ca4: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x214ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x214ca8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x214ca8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214cac: 0x2484b708  addiu       $a0, $a0, -0x48F8
    ctx->pc = 0x214cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948616));
    // 0x214cb0: 0x71180  sll         $v0, $a3, 6
    ctx->pc = 0x214cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x214cb4: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x214cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x214cb8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x214cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x214cbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x214cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214cc0: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x214cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x214cc4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x214cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x214cc8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x214cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x214ccc: 0x18600012  blez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x214CCCu;
    {
        const bool branch_taken_0x214ccc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x214CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214CCCu;
        // 0x214cd0: 0x8c88000c  lw          $t0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214ccc) {
            ctx->pc = 0x214D18u;
            goto label_214d18;
        }
    }
    ctx->pc = 0x214CD4u;
    // 0x214cd4: 0x240a0014  addiu       $t2, $zero, 0x14
    ctx->pc = 0x214cd4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x214cd8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x214cd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x214cdc: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x214cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_214ce0:
    // 0x214ce0: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x214ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x214ce4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x214ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x214ce8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x214ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x214cec: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x214cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x214cf0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x214cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214cf4: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x214CF4u;
    {
        const bool branch_taken_0x214cf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x214CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214CF4u;
        // 0x214cf8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214cf4) {
            ctx->pc = 0x214D08u;
            goto label_214d08;
        }
    }
    ctx->pc = 0x214CFCu;
    // 0x214cfc: 0x14ea0002  bne         $a3, $t2, . + 4 + (0x2 << 2)
    ctx->pc = 0x214CFCu;
    {
        const bool branch_taken_0x214cfc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 10));
        ctx->pc = 0x214D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214CFCu;
        // 0x214d00: 0x24110080  addiu       $s1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214cfc) {
            ctx->pc = 0x214D08u;
            goto label_214d08;
        }
    }
    ctx->pc = 0x214D04u;
    // 0x214d04: 0xae490000  sw          $t1, 0x0($s2)
    ctx->pc = 0x214d04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 9));
label_214d08:
    // 0x214d08: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x214d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x214d0c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x214d0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x214d10: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x214D10u;
    {
        const bool branch_taken_0x214d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x214D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214D10u;
        // 0x214d14: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214d10) {
            ctx->pc = 0x214CE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214ce0;
        }
    }
    ctx->pc = 0x214D18u;
label_214d18:
    // 0x214d18: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x214d18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_214d1c:
    // 0x214d1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214d1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214d20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x214d20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x214d24: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x214d24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214d28: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x214d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x214d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x214D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214D2Cu;
        // 0x214d30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214D34u;
    // 0x214d34: 0x0  nop
    ctx->pc = 0x214d34u;
    // NOP
    ctx->pc = 0x214d38u;
}
