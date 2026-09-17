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

// Function: sub_00503468
// Address: 0x503468 - 0x5034e0
void sub_00503468_0x503468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00503468_0x503468");
#endif

    switch (ctx->pc) {
        case 0x503484u: goto label_503484;
        case 0x503494u: goto label_503494;
        case 0x5034b0u: goto label_5034b0;
        case 0x5034c4u: goto label_5034c4;
        default: break;
    }

    ctx->pc = 0x503468u;

    // 0x503468: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x503468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x50346c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x50346cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x503470: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x503470u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503474: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x503474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x503478: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x503478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x50347c: 0xc1407ba  jal         func_501EE8
    ctx->pc = 0x50347Cu;
    SET_GPR_U32(ctx, 31, 0x503484u);
    ctx->pc = 0x503480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50347Cu;
    // 0x503480: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x501EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x501EE8u, 0x50347Cu, 0x503484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x503484u;
label_503484:
    // 0x503484: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x503484u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x503488: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x503488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50348c: 0xc1407c0  jal         func_501F00
    ctx->pc = 0x50348Cu;
    SET_GPR_U32(ctx, 31, 0x503494u);
    ctx->pc = 0x503490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50348Cu;
    // 0x503490: 0xa6000002  sh          $zero, 0x2($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x501F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x501F00u, 0x50348Cu, 0x503494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x503494u;
label_503494:
    // 0x503494: 0xa6000006  sh          $zero, 0x6($s0)
    ctx->pc = 0x503494u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x503498: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x503498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x50349c: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x50349cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x5034a0: 0xa6030008  sh          $v1, 0x8($s0)
    ctx->pc = 0x5034a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x5034a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5034a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5034a8: 0xc1407c0  jal         func_501F00
    ctx->pc = 0x5034A8u;
    SET_GPR_U32(ctx, 31, 0x5034B0u);
    ctx->pc = 0x5034ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5034A8u;
    // 0x5034ac: 0xa600000a  sh          $zero, 0xA($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x501F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x501F00u, 0x5034A8u, 0x5034B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5034B0u;
label_5034b0:
    // 0x5034b0: 0xa600000e  sh          $zero, 0xE($s0)
    ctx->pc = 0x5034b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x5034b4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x5034b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x5034b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5034b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5034bc: 0xc1407ba  jal         func_501EE8
    ctx->pc = 0x5034BCu;
    SET_GPR_U32(ctx, 31, 0x5034C4u);
    ctx->pc = 0x5034C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5034BCu;
    // 0x5034c0: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x501EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x501EE8u, 0x5034BCu, 0x5034C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5034C4u;
label_5034c4:
    // 0x5034c4: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x5034c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x5034c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x5034c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5034cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x5034ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x5034d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x5034d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5034d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5034d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5034d8: 0x3e00008  jr          $ra
    ctx->pc = 0x5034D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5034DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5034D8u;
        // 0x5034dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5034D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5034E0u;
}
