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

// Function: sub_00247558
// Address: 0x247558 - 0x2475c8
void sub_00247558_0x247558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247558_0x247558");
#endif

    switch (ctx->pc) {
        case 0x247580u: goto label_247580;
        case 0x247594u: goto label_247594;
        default: break;
    }

    ctx->pc = 0x247558u;

    // 0x247558: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x247558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24755c: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x24755cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x247560: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x247560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x247564: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x247564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x247568: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x247568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24756c: 0x24506ec0  addiu       $s0, $v0, 0x6EC0
    ctx->pc = 0x24756cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28352));
    // 0x247570: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x247570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x247574: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x247574u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247578: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x247578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24757c: 0x0  nop
    ctx->pc = 0x24757cu;
    // NOP
label_247580:
    // 0x247580: 0xa6110002  sh          $s1, 0x2($s0)
    ctx->pc = 0x247580u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 17));
    // 0x247584: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x247584u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x247588: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24758c: 0xc091c70  jal         func_2471C0
    ctx->pc = 0x24758Cu;
    SET_GPR_U32(ctx, 31, 0x247594u);
    ctx->pc = 0x247590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24758Cu;
    // 0x247590: 0xa6120000  sh          $s2, 0x0($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2471C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2471C0u, 0x24758Cu, 0x247594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247594u;
label_247594:
    // 0x247594: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x247594u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x247598: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x247598u;
    {
        const bool branch_taken_0x247598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24759Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247598u;
        // 0x24759c: 0x26100048  addiu       $s0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247598) {
            ctx->pc = 0x247580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247580;
        }
    }
    ctx->pc = 0x2475A0u;
    // 0x2475a0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2475a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2475a4: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x2475a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2475a8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2475A8u;
    {
        const bool branch_taken_0x2475a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2475ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2475A8u;
        // 0x2475ac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2475a8) {
            ctx->pc = 0x247580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247580;
        }
    }
    ctx->pc = 0x2475B0u;
    // 0x2475b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2475b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2475b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2475b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2475b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2475b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2475bc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2475bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2475c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2475C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2475C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2475C0u;
        // 0x2475c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2475C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2475C8u;
}
