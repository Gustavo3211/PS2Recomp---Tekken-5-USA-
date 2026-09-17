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

// Function: sub_0031E558
// Address: 0x31e558 - 0x31e5a8
void sub_0031E558_0x31e558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E558_0x31e558");
#endif

    switch (ctx->pc) {
        case 0x31e558u: goto label_31e558;
        case 0x31e55cu: goto label_31e55c;
        case 0x31e560u: goto label_31e560;
        case 0x31e564u: goto label_31e564;
        case 0x31e568u: goto label_31e568;
        case 0x31e56cu: goto label_31e56c;
        case 0x31e570u: goto label_31e570;
        case 0x31e574u: goto label_31e574;
        case 0x31e578u: goto label_31e578;
        case 0x31e57cu: goto label_31e57c;
        case 0x31e580u: goto label_31e580;
        case 0x31e584u: goto label_31e584;
        case 0x31e588u: goto label_31e588;
        case 0x31e58cu: goto label_31e58c;
        case 0x31e590u: goto label_31e590;
        case 0x31e594u: goto label_31e594;
        case 0x31e598u: goto label_31e598;
        case 0x31e59cu: goto label_31e59c;
        case 0x31e5a0u: goto label_31e5a0;
        case 0x31e5a4u: goto label_31e5a4;
        default: break;
    }

    ctx->pc = 0x31e558u;

label_31e558:
    // 0x31e558: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31e558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_31e55c:
    // 0x31e55c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x31e55cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31e560:
    // 0x31e560: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31e560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31e564:
    // 0x31e564: 0x94a2000a  lhu         $v0, 0xA($a1)
    ctx->pc = 0x31e564u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
label_31e568:
    // 0x31e568: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31e568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_31e56c:
    // 0x31e56c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x31e56cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_31e570:
    // 0x31e570: 0xa4a2000a  sh          $v0, 0xA($a1)
    ctx->pc = 0x31e570u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 2));
label_31e574:
    // 0x31e574: 0x31403  sra         $v0, $v1, 16
    ctx->pc = 0x31e574u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 16));
label_31e578:
    // 0x31e578: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_31e57c:
    if (ctx->pc == 0x31E57Cu) {
        ctx->pc = 0x31E57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E578u;
        // 0x31e57c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E580u;
        goto label_31e580;
    }
    ctx->pc = 0x31E578u;
    {
        const bool branch_taken_0x31e578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e578) {
            ctx->pc = 0x31E57Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E578u;
            // 0x31e57c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E5A0u;
            goto label_31e5a0;
        }
    }
    ctx->pc = 0x31E580u;
label_31e580:
    // 0x31e580: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x31e580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_31e584:
    // 0x31e584: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x31e584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_31e588:
    // 0x31e588: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x31e588u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_31e58c:
    // 0x31e58c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x31e58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_31e590:
    // 0x31e590: 0x60f809  jalr        $v1
label_31e594:
    if (ctx->pc == 0x31E594u) {
        ctx->pc = 0x31E594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E590u;
        // 0x31e594: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E598u;
        goto label_31e598;
    }
    ctx->pc = 0x31E590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x31E598u);
        ctx->pc = 0x31E594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E590u;
        // 0x31e594: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E590u, 0x31E598u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31E598u;
label_31e598:
    // 0x31e598: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31e598u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31e59c:
    // 0x31e59c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31e59cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31e5a0:
    // 0x31e5a0: 0x3e00008  jr          $ra
label_31e5a4:
    if (ctx->pc == 0x31E5A4u) {
        ctx->pc = 0x31E5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E5A0u;
        // 0x31e5a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E5A8u;
        goto label_fallthrough_0x31e5a0;
    }
    ctx->pc = 0x31E5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E5A0u;
        // 0x31e5a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E5A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31e5a0:
    ctx->pc = 0x31E5A8u;
}
