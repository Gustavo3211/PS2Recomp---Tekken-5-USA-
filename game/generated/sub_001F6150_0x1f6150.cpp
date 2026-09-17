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

// Function: sub_001F6150
// Address: 0x1f6150 - 0x1f61c8
void sub_001F6150_0x1f6150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6150_0x1f6150");
#endif

    switch (ctx->pc) {
        case 0x1f616cu: goto label_1f616c;
        case 0x1f6178u: goto label_1f6178;
        case 0x1f6188u: goto label_1f6188;
        case 0x1f61a4u: goto label_1f61a4;
        default: break;
    }

    ctx->pc = 0x1f6150u;

    // 0x1f6150: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f6150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f6154: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f6154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f6158: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f6158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f615c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f615cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f6160: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1f6160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1f6164: 0xc09d47a  jal         func_2751E8
    ctx->pc = 0x1F6164u;
    SET_GPR_U32(ctx, 31, 0x1F616Cu);
    ctx->pc = 0x1F6168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6164u;
    // 0x1f6168: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751E8u, 0x1F6164u, 0x1F616Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F616Cu;
label_1f616c:
    // 0x1f616c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f616cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6170: 0xc09d480  jal         func_275200
    ctx->pc = 0x1F6170u;
    SET_GPR_U32(ctx, 31, 0x1F6178u);
    ctx->pc = 0x1F6174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6170u;
    // 0x1f6174: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x1F6170u, 0x1F6178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6178u;
label_1f6178:
    // 0x1f6178: 0x1a40000d  blez        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x1F6178u;
    {
        const bool branch_taken_0x1f6178 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1F617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6178u;
        // 0x1f617c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6178) {
            ctx->pc = 0x1F61B0u;
            goto label_1f61b0;
        }
    }
    ctx->pc = 0x1F6180u;
    // 0x1f6180: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x1f6180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1f6184: 0x0  nop
    ctx->pc = 0x1f6184u;
    // NOP
label_1f6188:
    // 0x1f6188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f6188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f618c: 0x96030096  lhu         $v1, 0x96($s0)
    ctx->pc = 0x1f618cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x1f6190: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6190u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f6194: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x1f6194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x1f6198: 0xa6030098  sh          $v1, 0x98($s0)
    ctx->pc = 0x1f6198u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f619c: 0xc07d746  jal         func_1F5D18
    ctx->pc = 0x1F619Cu;
    SET_GPR_U32(ctx, 31, 0x1F61A4u);
    ctx->pc = 0x1F61A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F619Cu;
    // 0x1f61a0: 0x261008d0  addiu       $s0, $s0, 0x8D0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5D18u, 0x1F619Cu, 0x1F61A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F61A4u;
label_1f61a4:
    // 0x1f61a4: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x1f61a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1f61a8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1F61A8u;
    {
        const bool branch_taken_0x1f61a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f61a8) {
            ctx->pc = 0x1F61ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F61A8u;
            // 0x1f61ac: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6188;
        }
    }
    ctx->pc = 0x1F61B0u;
label_1f61b0:
    // 0x1f61b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f61b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f61b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f61b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f61b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f61b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f61bc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f61bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f61c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F61C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F61C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F61C0u;
        // 0x1f61c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F61C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F61C8u;
}
