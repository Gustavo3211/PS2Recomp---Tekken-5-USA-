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

// Function: sub_002918D8
// Address: 0x2918d8 - 0x291928
void sub_002918D8_0x2918d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002918D8_0x2918d8");
#endif

    switch (ctx->pc) {
        case 0x291904u: goto label_291904;
        case 0x291914u: goto label_291914;
        default: break;
    }

    ctx->pc = 0x2918d8u;

    // 0x2918d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2918d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2918dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2918dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2918e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2918e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2918e4: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x2918e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
    // 0x2918e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2918e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2918ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2918ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2918f0: 0x26107118  addiu       $s0, $s0, 0x7118
    ctx->pc = 0x2918f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28952));
    // 0x2918f4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2918f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2918f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2918f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2918fc: 0xc0a4424  jal         func_291090
    ctx->pc = 0x2918FCu;
    SET_GPR_U32(ctx, 31, 0x291904u);
    ctx->pc = 0x291900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2918FCu;
    // 0x291900: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291090u, 0x2918FCu, 0x291904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291904u;
label_291904:
    // 0x291904: 0x260400ac  addiu       $a0, $s0, 0xAC
    ctx->pc = 0x291904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 172));
    // 0x291908: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x291908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29190c: 0xc0a4424  jal         func_291090
    ctx->pc = 0x29190Cu;
    SET_GPR_U32(ctx, 31, 0x291914u);
    ctx->pc = 0x291910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29190Cu;
    // 0x291910: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291090u, 0x29190Cu, 0x291914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291914u;
label_291914:
    // 0x291914: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x291914u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291918: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x291918u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29191c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29191cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291920: 0x3e00008  jr          $ra
    ctx->pc = 0x291920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291920u;
        // 0x291924: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291928u;
}
