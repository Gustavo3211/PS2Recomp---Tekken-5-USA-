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

// Function: sub_00488948
// Address: 0x488948 - 0x488a10
void sub_00488948_0x488948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00488948_0x488948");
#endif

    switch (ctx->pc) {
        case 0x488958u: goto label_488958;
        case 0x488960u: goto label_488960;
        case 0x488968u: goto label_488968;
        case 0x488970u: goto label_488970;
        case 0x488978u: goto label_488978;
        case 0x4889a4u: goto label_4889a4;
        case 0x4889acu: goto label_4889ac;
        case 0x4889b4u: goto label_4889b4;
        case 0x4889bcu: goto label_4889bc;
        case 0x4889c4u: goto label_4889c4;
        case 0x4889ccu: goto label_4889cc;
        case 0x4889d4u: goto label_4889d4;
        case 0x4889dcu: goto label_4889dc;
        case 0x4889e0u: goto label_4889e0;
        case 0x4889e8u: goto label_4889e8;
        case 0x4889f0u: goto label_4889f0;
        case 0x4889f8u: goto label_4889f8;
        default: break;
    }

    ctx->pc = 0x488948u;

    // 0x488948: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x488948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48894c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48894cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x488950: 0xc13e640  jal         func_4F9900
    ctx->pc = 0x488950u;
    SET_GPR_U32(ctx, 31, 0x488958u);
    ctx->pc = 0x4F9900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9900u, 0x488950u, 0x488958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488958u;
label_488958:
    // 0x488958: 0xc140efc  jal         func_503BF0
    ctx->pc = 0x488958u;
    SET_GPR_U32(ctx, 31, 0x488960u);
    ctx->pc = 0x503BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503BF0u, 0x488958u, 0x488960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488960u;
label_488960:
    // 0x488960: 0xc140ef2  jal         func_503BC8
    ctx->pc = 0x488960u;
    SET_GPR_U32(ctx, 31, 0x488968u);
    ctx->pc = 0x503BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503BC8u, 0x488960u, 0x488968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488968u;
label_488968:
    // 0x488968: 0xc140efe  jal         func_503BF8
    ctx->pc = 0x488968u;
    SET_GPR_U32(ctx, 31, 0x488970u);
    ctx->pc = 0x503BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503BF8u, 0x488968u, 0x488970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488970u;
label_488970:
    // 0x488970: 0xc04098c  jal         func_102630
    ctx->pc = 0x488970u;
    SET_GPR_U32(ctx, 31, 0x488978u);
    ctx->pc = 0x488974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488970u;
    // 0x488974: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102630u, 0x488970u, 0x488978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488978u;
label_488978:
    // 0x488978: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x488978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48897c: 0x3e00008  jr          $ra
    ctx->pc = 0x48897Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x488980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48897Cu;
        // 0x488980: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48897Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x488984u;
    // 0x488984: 0x0  nop
    ctx->pc = 0x488984u;
    // NOP
    // 0x488988: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x488988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48898c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48898cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x488990: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x488990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x488994: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x488994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x488998: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x488998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x48899c: 0xc123e2e  jal         func_48F8B8
    ctx->pc = 0x48899Cu;
    SET_GPR_U32(ctx, 31, 0x4889A4u);
    ctx->pc = 0x4889A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48899Cu;
    // 0x4889a0: 0xa440fa02  sh          $zero, -0x5FE($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294965762), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48F8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48F8B8u, 0x48899Cu, 0x4889A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4889A4u;
label_4889a4:
    // 0x4889a4: 0xc13e7c2  jal         func_4F9F08
    ctx->pc = 0x4889A4u;
    SET_GPR_U32(ctx, 31, 0x4889ACu);
    ctx->pc = 0x4F9F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9F08u, 0x4889A4u, 0x4889ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4889ACu;
label_4889ac:
    // 0x4889ac: 0xc13e70a  jal         func_4F9C28
    ctx->pc = 0x4889ACu;
    SET_GPR_U32(ctx, 31, 0x4889B4u);
    ctx->pc = 0x4F9C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9C28u, 0x4889ACu, 0x4889B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4889B4u;
label_4889b4:
    // 0x4889b4: 0xc123c54  jal         func_48F150
    ctx->pc = 0x4889B4u;
    SET_GPR_U32(ctx, 31, 0x4889BCu);
    ctx->pc = 0x48F150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48F150u, 0x4889B4u, 0x4889BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4889BCu;
label_4889bc:
    // 0x4889bc: 0xc13e5f8  jal         func_4F97E0
    ctx->pc = 0x4889BCu;
    SET_GPR_U32(ctx, 31, 0x4889C4u);
    ctx->pc = 0x4F97E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F97E0u, 0x4889BCu, 0x4889C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4889C4u;
label_4889c4:
    // 0x4889c4: 0xc1220b8  jal         func_4882E0
    ctx->pc = 0x4889C4u;
    SET_GPR_U32(ctx, 31, 0x4889CCu);
    ctx->pc = 0x4882E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4882E0u, 0x4889C4u, 0x4889CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4889CCu;
label_4889cc:
    // 0x4889cc: 0xc14436e  jal         func_510DB8
    ctx->pc = 0x4889CCu;
    SET_GPR_U32(ctx, 31, 0x4889D4u);
    ctx->pc = 0x510DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x510DB8u, 0x4889CCu, 0x4889D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4889D4u;
label_4889d4:
    // 0x4889d4: 0xc04098c  jal         func_102630
    ctx->pc = 0x4889D4u;
    SET_GPR_U32(ctx, 31, 0x4889DCu);
    ctx->pc = 0x4889D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4889D4u;
    // 0x4889d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102630u, 0x4889D4u, 0x4889DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4889DCu;
label_4889dc:
    // 0x4889dc: 0x0  nop
    ctx->pc = 0x4889dcu;
    // NOP
label_4889e0:
    // 0x4889e0: 0xc122842  jal         func_48A108
    ctx->pc = 0x4889E0u;
    SET_GPR_U32(ctx, 31, 0x4889E8u);
    ctx->pc = 0x4889E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4889E0u;
    // 0x4889e4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48A108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48A108u, 0x4889E0u, 0x4889E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4889E8u;
label_4889e8:
    // 0x4889e8: 0xc123caa  jal         func_48F2A8
    ctx->pc = 0x4889E8u;
    SET_GPR_U32(ctx, 31, 0x4889F0u);
    ctx->pc = 0x48F2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48F2A8u, 0x4889E8u, 0x4889F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4889F0u;
label_4889f0:
    // 0x4889f0: 0xc04098c  jal         func_102630
    ctx->pc = 0x4889F0u;
    SET_GPR_U32(ctx, 31, 0x4889F8u);
    ctx->pc = 0x4889F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4889F0u;
    // 0x4889f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102630u, 0x4889F0u, 0x4889F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4889F8u;
label_4889f8:
    // 0x4889f8: 0x1a00fff9  blez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4889F8u;
    {
        const bool branch_taken_0x4889f8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x4889FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4889F8u;
        // 0x4889fc: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4889f8) {
            ctx->pc = 0x4889E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4889e0;
        }
    }
    ctx->pc = 0x488A00u;
    // 0x488a00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x488a00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x488a04: 0x3e00008  jr          $ra
    ctx->pc = 0x488A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x488A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488A04u;
        // 0x488a08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x488A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x488A0Cu;
    // 0x488a0c: 0x0  nop
    ctx->pc = 0x488a0cu;
    // NOP
    ctx->pc = 0x488a10u;
}
