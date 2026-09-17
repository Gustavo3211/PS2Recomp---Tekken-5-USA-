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

// Function: sub_00256500
// Address: 0x256500 - 0x256568
void sub_00256500_0x256500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256500_0x256500");
#endif

    switch (ctx->pc) {
        case 0x256528u: goto label_256528;
        case 0x256540u: goto label_256540;
        case 0x256554u: goto label_256554;
        default: break;
    }

    ctx->pc = 0x256500u;

    // 0x256500: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x256500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x256504: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x256504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x256508: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x256508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x25650c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25650cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256510: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x256510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x256514: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x256514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256518: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x256518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x25651c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25651cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x256520: 0xc094e68  jal         func_2539A0
    ctx->pc = 0x256520u;
    SET_GPR_U32(ctx, 31, 0x256528u);
    ctx->pc = 0x256524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256520u;
    // 0x256524: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2539A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2539A0u, 0x256520u, 0x256528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256528u;
label_256528:
    // 0x256528: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x256528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x25652c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25652cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256530: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x256530u;
    {
        const bool branch_taken_0x256530 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x256534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256530u;
        // 0x256534: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256530) {
            ctx->pc = 0x256540u;
            goto label_256540;
        }
    }
    ctx->pc = 0x256538u;
    // 0x256538: 0xc094e68  jal         func_2539A0
    ctx->pc = 0x256538u;
    SET_GPR_U32(ctx, 31, 0x256540u);
    ctx->pc = 0x2539A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2539A0u, 0x256538u, 0x256540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256540u;
label_256540:
    // 0x256540: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x256540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256544: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x256544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x256548: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x256548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25654c: 0xc08f4d4  jal         func_23D350
    ctx->pc = 0x25654Cu;
    SET_GPR_U32(ctx, 31, 0x256554u);
    ctx->pc = 0x256550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25654Cu;
    // 0x256550: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D350u, 0x25654Cu, 0x256554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256554u;
label_256554:
    // 0x256554: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x256554u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x256558: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x256558u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25655c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25655cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256560: 0x3e00008  jr          $ra
    ctx->pc = 0x256560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256560u;
        // 0x256564: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256568u;
}
