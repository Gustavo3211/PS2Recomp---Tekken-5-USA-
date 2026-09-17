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

// Function: sub_00208280
// Address: 0x208280 - 0x208310
void sub_00208280_0x208280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208280_0x208280");
#endif

    switch (ctx->pc) {
        case 0x2082b8u: goto label_2082b8;
        case 0x2082c0u: goto label_2082c0;
        default: break;
    }

    ctx->pc = 0x208280u;

    // 0x208280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x208280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x208284: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x208284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x208288: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x208288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x20828c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x20828cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x208290: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x208290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x208294: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x208294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208298: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x208298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20829c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20829cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2082a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2082a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2082a4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2082a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2082a8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2082a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2082ac: 0x24738858  addiu       $s3, $v1, -0x77A8
    ctx->pc = 0x2082acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936664));
    // 0x2082b0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2082b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2082b4: 0x245488d0  addiu       $s4, $v0, -0x7730
    ctx->pc = 0x2082b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
label_2082b8:
    // 0x2082b8: 0xc0b233c  jal         func_2C8CF0
    ctx->pc = 0x2082B8u;
    SET_GPR_U32(ctx, 31, 0x2082C0u);
    ctx->pc = 0x2082BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2082B8u;
    // 0x2082bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8CF0u, 0x2082B8u, 0x2082C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2082C0u;
label_2082c0:
    // 0x2082c0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2082c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2082c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2082c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2082c8: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2082c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2082cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2082CCu;
    {
        const bool branch_taken_0x2082cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2082D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2082CCu;
        // 0x2082d0: 0x2a050002  slti        $a1, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2082cc) {
            ctx->pc = 0x2082E8u;
            goto label_2082e8;
        }
    }
    ctx->pc = 0x2082D4u;
    // 0x2082d4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2082d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2082d8: 0x8e640040  lw          $a0, 0x40($s3)
    ctx->pc = 0x2082d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x2082dc: 0x84430090  lh          $v1, 0x90($v0)
    ctx->pc = 0x2082dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x2082e0: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x2082e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2082e4: 0x243880a  movz        $s1, $s2, $v1
    ctx->pc = 0x2082e4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 18));
label_2082e8:
    // 0x2082e8: 0x14a0fff3  bnez        $a1, . + 4 + (-0xD << 2)
    ctx->pc = 0x2082E8u;
    {
        const bool branch_taken_0x2082e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2082ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2082E8u;
        // 0x2082ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2082e8) {
            ctx->pc = 0x2082B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2082b8;
        }
    }
    ctx->pc = 0x2082F0u;
    // 0x2082f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2082f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2082f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2082f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2082f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2082f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2082fc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2082fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x208300: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x208300u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x208304: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x208304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x208308: 0x3e00008  jr          $ra
    ctx->pc = 0x208308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20830Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208308u;
        // 0x20830c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208310u;
}
