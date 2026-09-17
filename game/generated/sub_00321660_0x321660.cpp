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

// Function: sub_00321660
// Address: 0x321660 - 0x3216f0
void sub_00321660_0x321660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321660_0x321660");
#endif

    switch (ctx->pc) {
        case 0x321684u: goto label_321684;
        case 0x32169cu: goto label_32169c;
        case 0x3216b0u: goto label_3216b0;
        case 0x3216c0u: goto label_3216c0;
        case 0x3216d0u: goto label_3216d0;
        default: break;
    }

    ctx->pc = 0x321660u;

    // 0x321660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x321660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x321664: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x321664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x321668: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x321668u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32166c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32166cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x321670: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x321670u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321674: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x321674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x321678: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x321678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x32167c: 0xc0c8338  jal         func_320CE0
    ctx->pc = 0x32167Cu;
    SET_GPR_U32(ctx, 31, 0x321684u);
    ctx->pc = 0x321680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32167Cu;
    // 0x321680: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320CE0u, 0x32167Cu, 0x321684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321684u;
label_321684:
    // 0x321684: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x321684u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321688: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x321688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
    // 0x32168c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x32168Cu;
    {
        const bool branch_taken_0x32168c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x321690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32168Cu;
        // 0x321690: 0x34420057  ori         $v0, $v0, 0x57 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)87);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32168c) {
            ctx->pc = 0x3216D4u;
            goto label_3216d4;
        }
    }
    ctx->pc = 0x321694u;
    // 0x321694: 0xc0c8de6  jal         func_323798
    ctx->pc = 0x321694u;
    SET_GPR_U32(ctx, 31, 0x32169Cu);
    ctx->pc = 0x323798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323798u, 0x321694u, 0x32169Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32169Cu;
label_32169c:
    // 0x32169c: 0x1a00000a  blez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x32169Cu;
    {
        const bool branch_taken_0x32169c = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x32169c) {
            ctx->pc = 0x3216C8u;
            goto label_3216c8;
        }
    }
    ctx->pc = 0x3216A4u;
    // 0x3216a4: 0x26520180  addiu       $s2, $s2, 0x180
    ctx->pc = 0x3216a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
    // 0x3216a8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3216a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3216ac: 0x0  nop
    ctx->pc = 0x3216acu;
    // NOP
label_3216b0:
    // 0x3216b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3216b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3216b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3216b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3216b8: 0xc0ce9f6  jal         func_33A7D8
    ctx->pc = 0x3216B8u;
    SET_GPR_U32(ctx, 31, 0x3216C0u);
    ctx->pc = 0x3216BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3216B8u;
    // 0x3216bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A7D8u, 0x3216B8u, 0x3216C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3216C0u;
label_3216c0:
    // 0x3216c0: 0x5600fffb  bnel        $s0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3216C0u;
    {
        const bool branch_taken_0x3216c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3216c0) {
            ctx->pc = 0x3216C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3216C0u;
            // 0x3216c4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3216B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3216b0;
        }
    }
    ctx->pc = 0x3216C8u;
label_3216c8:
    // 0x3216c8: 0xc0c8dde  jal         func_323778
    ctx->pc = 0x3216C8u;
    SET_GPR_U32(ctx, 31, 0x3216D0u);
    ctx->pc = 0x323778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323778u, 0x3216C8u, 0x3216D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3216D0u;
label_3216d0:
    // 0x3216d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3216d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3216d4:
    // 0x3216d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3216d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3216d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3216d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3216dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3216dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3216e0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3216e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3216e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3216E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3216E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3216E4u;
        // 0x3216e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3216E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3216ECu;
    // 0x3216ec: 0x0  nop
    ctx->pc = 0x3216ecu;
    // NOP
    ctx->pc = 0x3216f0u;
}
