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

// Function: sub_002B5BC8
// Address: 0x2b5bc8 - 0x2b5c60
void sub_002B5BC8_0x2b5bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5BC8_0x2b5bc8");
#endif

    switch (ctx->pc) {
        case 0x2b5bf8u: goto label_2b5bf8;
        case 0x2b5c18u: goto label_2b5c18;
        default: break;
    }

    ctx->pc = 0x2b5bc8u;

    // 0x2b5bc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b5bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b5bcc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b5bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b5bd0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b5bd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5bd4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b5bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b5bd8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b5bd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5bdc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2b5bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2b5be0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b5be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b5be4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b5be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b5be8: 0x8e420078  lw          $v0, 0x78($s2)
    ctx->pc = 0x2b5be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x2b5bec: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2B5BECu;
    {
        const bool branch_taken_0x2b5bec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B5BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5BECu;
        // 0x2b5bf0: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5bec) {
            ctx->pc = 0x2B5C3Cu;
            goto label_2b5c3c;
        }
    }
    ctx->pc = 0x2B5BF4u;
    // 0x2b5bf4: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x2b5bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_2b5bf8:
    // 0x2b5bf8: 0x8e4300a0  lw          $v1, 0xA0($s2)
    ctx->pc = 0x2b5bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x2b5bfc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2b5bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2b5c00: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2b5c00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2b5c04: 0x280c0  sll         $s0, $v0, 3
    ctx->pc = 0x2b5c04u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2b5c08: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b5c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5c0c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2b5c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2b5c10: 0xc0a9d5a  jal         func_2A7568
    ctx->pc = 0x2B5C10u;
    SET_GPR_U32(ctx, 31, 0x2B5C18u);
    ctx->pc = 0x2B5C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5C10u;
    // 0x2b5c14: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7568u, 0x2B5C10u, 0x2B5C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5C18u;
label_2b5c18:
    // 0x2b5c18: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B5C18u;
    {
        const bool branch_taken_0x2b5c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5c18) {
            ctx->pc = 0x2B5C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5C18u;
            // 0x2b5c1c: 0x8e420078  lw          $v0, 0x78($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5C30u;
            goto label_2b5c30;
        }
    }
    ctx->pc = 0x2B5C20u;
    // 0x2b5c20: 0x8e4200a0  lw          $v0, 0xA0($s2)
    ctx->pc = 0x2b5c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x2b5c24: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B5C24u;
    {
        const bool branch_taken_0x2b5c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5C24u;
        // 0x2b5c28: 0x501021  addu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5c24) {
            ctx->pc = 0x2B5C40u;
            goto label_2b5c40;
        }
    }
    ctx->pc = 0x2B5C2Cu;
    // 0x2b5c2c: 0x0  nop
    ctx->pc = 0x2b5c2cu;
    // NOP
label_2b5c30:
    // 0x2b5c30: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2b5c30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b5c34: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2B5C34u;
    {
        const bool branch_taken_0x2b5c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5C34u;
        // 0x2b5c38: 0x111040  sll         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5c34) {
            ctx->pc = 0x2B5BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b5bf8;
        }
    }
    ctx->pc = 0x2B5C3Cu;
label_2b5c3c:
    // 0x2b5c3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b5c3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b5c40:
    // 0x2b5c40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b5c40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5c44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b5c44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5c48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b5c48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5c4c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b5c4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5c50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b5c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b5c54: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5C54u;
        // 0x2b5c58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5C5Cu;
    // 0x2b5c5c: 0x0  nop
    ctx->pc = 0x2b5c5cu;
    // NOP
    ctx->pc = 0x2b5c60u;
}
