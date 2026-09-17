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

// Function: sub_005034E0
// Address: 0x5034e0 - 0x503560
void sub_005034E0_0x5034e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005034E0_0x5034e0");
#endif

    switch (ctx->pc) {
        case 0x5034fcu: goto label_5034fc;
        case 0x503508u: goto label_503508;
        case 0x50351cu: goto label_50351c;
        case 0x503528u: goto label_503528;
        default: break;
    }

    ctx->pc = 0x5034e0u;

    // 0x5034e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x5034e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x5034e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x5034e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x5034e8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x5034e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5034ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x5034ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x5034f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x5034f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x5034f4: 0xc1407ba  jal         func_501EE8
    ctx->pc = 0x5034F4u;
    SET_GPR_U32(ctx, 31, 0x5034FCu);
    ctx->pc = 0x5034F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5034F4u;
    // 0x5034f8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x501EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x501EE8u, 0x5034F4u, 0x5034FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5034FCu;
label_5034fc:
    // 0x5034fc: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x5034fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x503500: 0xc1407c0  jal         func_501F00
    ctx->pc = 0x503500u;
    SET_GPR_U32(ctx, 31, 0x503508u);
    ctx->pc = 0x503504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x503500u;
    // 0x503504: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x501F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x501F00u, 0x503500u, 0x503508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x503508u;
label_503508:
    // 0x503508: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x503508u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x50350c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x50350cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x503510: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x503510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503514: 0xc1407c0  jal         func_501F00
    ctx->pc = 0x503514u;
    SET_GPR_U32(ctx, 31, 0x50351Cu);
    ctx->pc = 0x503518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x503514u;
    // 0x503518: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x501F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x501F00u, 0x503514u, 0x50351Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50351Cu;
label_50351c:
    // 0x50351c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x50351cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503520: 0xc1407ba  jal         func_501EE8
    ctx->pc = 0x503520u;
    SET_GPR_U32(ctx, 31, 0x503528u);
    ctx->pc = 0x503524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x503520u;
    // 0x503524: 0xa6020006  sh          $v0, 0x6($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x501EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x501EE8u, 0x503520u, 0x503528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x503528u;
label_503528:
    // 0x503528: 0xa600000a  sh          $zero, 0xA($s0)
    ctx->pc = 0x503528u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x50352c: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x50352cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x503530: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x503530u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x503534: 0xa6030010  sh          $v1, 0x10($s0)
    ctx->pc = 0x503534u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x503538: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x503538u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50353c: 0xa600000c  sh          $zero, 0xC($s0)
    ctx->pc = 0x50353cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x503540: 0xa600000e  sh          $zero, 0xE($s0)
    ctx->pc = 0x503540u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x503544: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x503544u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x503548: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x503548u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50354c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x50354cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x503550: 0x3e00008  jr          $ra
    ctx->pc = 0x503550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x503554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x503550u;
        // 0x503554: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x503550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x503558u;
    // 0x503558: 0x3e00008  jr          $ra
    ctx->pc = 0x503558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x503558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x503560u;
}
