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

// Function: sub_00328338
// Address: 0x328338 - 0x3283a0
void sub_00328338_0x328338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328338_0x328338");
#endif

    switch (ctx->pc) {
        case 0x32836cu: goto label_32836c;
        case 0x32837cu: goto label_32837c;
        case 0x328384u: goto label_328384;
        default: break;
    }

    ctx->pc = 0x328338u;

    // 0x328338: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x328338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32833c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32833cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x328340: 0x3c100044  lui         $s0, 0x44
    ctx->pc = 0x328340u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)68 << 16));
    // 0x328344: 0x2610f340  addiu       $s0, $s0, -0xCC0
    ctx->pc = 0x328344u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964032));
    // 0x328348: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x328348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32834c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32834cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x328350: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x328350u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328354: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x328354u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328358: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x328358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32835c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32835cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328360: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x328360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x328364: 0xc0ca0e8  jal         func_3283A0
    ctx->pc = 0x328364u;
    SET_GPR_U32(ctx, 31, 0x32836Cu);
    ctx->pc = 0x328368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328364u;
    // 0x328368: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3283A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3283A0u, 0x328364u, 0x32836Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32836Cu;
label_32836c:
    // 0x32836c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x32836cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328370: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x328370u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328374: 0xc0ca172  jal         func_3285C8
    ctx->pc = 0x328374u;
    SET_GPR_U32(ctx, 31, 0x32837Cu);
    ctx->pc = 0x328378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328374u;
    // 0x328378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3285C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3285C8u, 0x328374u, 0x32837Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32837Cu;
label_32837c:
    // 0x32837c: 0xc0ca112  jal         func_328448
    ctx->pc = 0x32837Cu;
    SET_GPR_U32(ctx, 31, 0x328384u);
    ctx->pc = 0x328380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32837Cu;
    // 0x328380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328448u, 0x32837Cu, 0x328384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328384u;
label_328384:
    // 0x328384: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x328384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328388: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x328388u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32838c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32838cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x328390: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x328390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x328394: 0x3e00008  jr          $ra
    ctx->pc = 0x328394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328394u;
        // 0x328398: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32839Cu;
    // 0x32839c: 0x0  nop
    ctx->pc = 0x32839cu;
    // NOP
    ctx->pc = 0x3283a0u;
}
