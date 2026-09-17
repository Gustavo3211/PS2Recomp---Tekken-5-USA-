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

// Function: sub_003748C0
// Address: 0x3748c0 - 0x374938
void sub_003748C0_0x3748c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003748C0_0x3748c0");
#endif

    switch (ctx->pc) {
        case 0x374908u: goto label_374908;
        case 0x374914u: goto label_374914;
        case 0x374920u: goto label_374920;
        default: break;
    }

    ctx->pc = 0x3748c0u;

    // 0x3748c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3748c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3748c4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3748c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3748c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3748c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3748cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3748ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3748d0: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x3748d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x3748d4: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x3748d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x3748d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3748d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3748dc: 0x26110080  addiu       $s1, $s0, 0x80
    ctx->pc = 0x3748dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x3748e0: 0x24421a60  addiu       $v0, $v0, 0x1A60
    ctx->pc = 0x3748e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6752));
    // 0x3748e4: 0x24631b08  addiu       $v1, $v1, 0x1B08
    ctx->pc = 0x3748e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6920));
    // 0x3748e8: 0x24c61be0  addiu       $a2, $a2, 0x1BE0
    ctx->pc = 0x3748e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7136));
    // 0x3748ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3748ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3748f0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3748f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3748f4: 0x26040118  addiu       $a0, $s0, 0x118
    ctx->pc = 0x3748f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
    // 0x3748f8: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x3748f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x3748fc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3748fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x374900: 0xc0cec5c  jal         func_33B170
    ctx->pc = 0x374900u;
    SET_GPR_U32(ctx, 31, 0x374908u);
    ctx->pc = 0x374904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374900u;
    // 0x374904: 0xae2600ec  sw          $a2, 0xEC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 236), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B170u, 0x374900u, 0x374908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374908u;
label_374908:
    // 0x374908: 0x260400cc  addiu       $a0, $s0, 0xCC
    ctx->pc = 0x374908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 204));
    // 0x37490c: 0xc0cec5c  jal         func_33B170
    ctx->pc = 0x37490Cu;
    SET_GPR_U32(ctx, 31, 0x374914u);
    ctx->pc = 0x374910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37490Cu;
    // 0x374910: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B170u, 0x37490Cu, 0x374914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374914u;
label_374914:
    // 0x374914: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x374914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374918: 0xc0cec5c  jal         func_33B170
    ctx->pc = 0x374918u;
    SET_GPR_U32(ctx, 31, 0x374920u);
    ctx->pc = 0x37491Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374918u;
    // 0x37491c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B170u, 0x374918u, 0x374920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374920u;
label_374920:
    // 0x374920: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x374920u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374924: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x374924u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x374928: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x374928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37492c: 0x3e00008  jr          $ra
    ctx->pc = 0x37492Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37492Cu;
        // 0x374930: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37492Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374934u;
    // 0x374934: 0x0  nop
    ctx->pc = 0x374934u;
    // NOP
    ctx->pc = 0x374938u;
}
