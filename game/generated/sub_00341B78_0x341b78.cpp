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

// Function: sub_00341B78
// Address: 0x341b78 - 0x341c28
void sub_00341B78_0x341b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341B78_0x341b78");
#endif

    switch (ctx->pc) {
        case 0x341bb8u: goto label_341bb8;
        case 0x341bd0u: goto label_341bd0;
        case 0x341be4u: goto label_341be4;
        default: break;
    }

    ctx->pc = 0x341b78u;

    // 0x341b78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x341b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x341b7c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x341b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x341b80: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x341b80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341b84: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x341b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x341b88: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x341b88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341b8c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x341b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x341b90: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x341b90u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341b94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x341b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x341b98: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x341b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x341b9c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x341b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x341ba0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x341ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x341ba4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x341ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x341ba8: 0x9674000a  lhu         $s4, 0xA($s3)
    ctx->pc = 0x341ba8u;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x341bac: 0x12800014  beqz        $s4, . + 4 + (0x14 << 2)
    ctx->pc = 0x341BACu;
    {
        const bool branch_taken_0x341bac = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x341BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341BACu;
        // 0x341bb0: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341bac) {
            ctx->pc = 0x341C00u;
            goto label_341c00;
        }
    }
    ctx->pc = 0x341BB4u;
    // 0x341bb4: 0x0  nop
    ctx->pc = 0x341bb4u;
    // NOP
label_341bb8:
    // 0x341bb8: 0x94b20002  lhu         $s2, 0x2($a1)
    ctx->pc = 0x341bb8u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x341bbc: 0x24b00018  addiu       $s0, $a1, 0x18
    ctx->pc = 0x341bbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x341bc0: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x341BC0u;
    {
        const bool branch_taken_0x341bc0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x341BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341BC0u;
        // 0x341bc4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341bc0) {
            ctx->pc = 0x341BF0u;
            goto label_341bf0;
        }
    }
    ctx->pc = 0x341BC8u;
    // 0x341bc8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x341bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341bcc: 0x0  nop
    ctx->pc = 0x341bccu;
    // NOP
label_341bd0:
    // 0x341bd0: 0x26100028  addiu       $s0, $s0, 0x28
    ctx->pc = 0x341bd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x341bd4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x341bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341bd8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x341bd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341bdc: 0xc0d070a  jal         func_341C28
    ctx->pc = 0x341BDCu;
    SET_GPR_U32(ctx, 31, 0x341BE4u);
    ctx->pc = 0x341BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341BDCu;
    // 0x341be0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C28u, 0x341BDCu, 0x341BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341BE4u;
label_341be4:
    // 0x341be4: 0x232182b  sltu        $v1, $s1, $s2
    ctx->pc = 0x341be4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x341be8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x341BE8u;
    {
        const bool branch_taken_0x341be8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x341BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341BE8u;
        // 0x341bec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341be8) {
            ctx->pc = 0x341BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341bd0;
        }
    }
    ctx->pc = 0x341BF0u;
label_341bf0:
    // 0x341bf0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x341bf0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x341bf4: 0x2d4102b  sltu        $v0, $s6, $s4
    ctx->pc = 0x341bf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x341bf8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x341BF8u;
    {
        const bool branch_taken_0x341bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x341BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341BF8u;
        // 0x341bfc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341bf8) {
            ctx->pc = 0x341BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341bb8;
        }
    }
    ctx->pc = 0x341C00u;
label_341c00:
    // 0x341c00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x341c00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x341c04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x341c04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x341c08: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x341c08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x341c0c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x341c0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x341c10: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x341c10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x341c14: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x341c14u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x341c18: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x341c18u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x341c1c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x341c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x341c20: 0x3e00008  jr          $ra
    ctx->pc = 0x341C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341C20u;
        // 0x341c24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341C28u;
}
