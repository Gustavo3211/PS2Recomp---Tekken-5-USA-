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

// Function: sub_005033F0
// Address: 0x5033f0 - 0x503468
void sub_005033F0_0x5033f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005033F0_0x5033f0");
#endif

    switch (ctx->pc) {
        case 0x503420u: goto label_503420;
        case 0x50342cu: goto label_50342c;
        case 0x503440u: goto label_503440;
        case 0x50344cu: goto label_50344c;
        default: break;
    }

    ctx->pc = 0x5033f0u;

    // 0x5033f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x5033f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x5033f4: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x5033f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x5033f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x5033f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x5033fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x5033fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503400: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x503400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x503404: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x503404u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503408: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x503408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x50340c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x50340cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x503410: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x503410u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x503414: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x503414u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x503418: 0xc1407ba  jal         func_501EE8
    ctx->pc = 0x503418u;
    SET_GPR_U32(ctx, 31, 0x503420u);
    ctx->pc = 0x50341Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x503418u;
    // 0x50341c: 0xa6000006  sh          $zero, 0x6($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x501EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x501EE8u, 0x503418u, 0x503420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x503420u;
label_503420:
    // 0x503420: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x503420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503424: 0xc1407c0  jal         func_501F00
    ctx->pc = 0x503424u;
    SET_GPR_U32(ctx, 31, 0x50342Cu);
    ctx->pc = 0x503428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x503424u;
    // 0x503428: 0xa6020008  sh          $v0, 0x8($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x501F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x501F00u, 0x503424u, 0x50342Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50342Cu;
label_50342c:
    // 0x50342c: 0xa600000c  sh          $zero, 0xC($s0)
    ctx->pc = 0x50342cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x503430: 0x21023  negu        $v0, $v0
    ctx->pc = 0x503430u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x503434: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x503434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503438: 0xc1407c0  jal         func_501F00
    ctx->pc = 0x503438u;
    SET_GPR_U32(ctx, 31, 0x503440u);
    ctx->pc = 0x50343Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x503438u;
    // 0x50343c: 0xa602000a  sh          $v0, 0xA($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x501F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x501F00u, 0x503438u, 0x503440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x503440u;
label_503440:
    // 0x503440: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x503440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503444: 0xc1407ba  jal         func_501EE8
    ctx->pc = 0x503444u;
    SET_GPR_U32(ctx, 31, 0x50344Cu);
    ctx->pc = 0x503448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x503444u;
    // 0x503448: 0xa602000e  sh          $v0, 0xE($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x501EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x501EE8u, 0x503444u, 0x50344Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50344Cu;
label_50344c:
    // 0x50344c: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x50344cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x503450: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x503450u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503454: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x503454u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x503458: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x503458u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50345c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x50345cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x503460: 0x3e00008  jr          $ra
    ctx->pc = 0x503460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x503464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x503460u;
        // 0x503464: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x503460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x503468u;
}
