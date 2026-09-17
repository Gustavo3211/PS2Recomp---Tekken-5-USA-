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

// Function: sub_003240F0
// Address: 0x3240f0 - 0x324150
void sub_003240F0_0x3240f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003240F0_0x3240f0");
#endif

    switch (ctx->pc) {
        case 0x32410cu: goto label_32410c;
        case 0x32411cu: goto label_32411c;
        case 0x32412cu: goto label_32412c;
        case 0x324138u: goto label_324138;
        default: break;
    }

    ctx->pc = 0x3240f0u;

    // 0x3240f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3240f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3240f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3240f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3240f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3240f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3240fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3240fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x324100: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x324100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x324104: 0xc0cb224  jal         func_32C890
    ctx->pc = 0x324104u;
    SET_GPR_U32(ctx, 31, 0x32410Cu);
    ctx->pc = 0x324108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324104u;
    // 0x324108: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C890u, 0x324104u, 0x32410Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32410Cu;
label_32410c:
    // 0x32410c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x32410Cu;
    {
        const bool branch_taken_0x32410c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32410Cu;
        // 0x324110: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32410c) {
            ctx->pc = 0x324138u;
            goto label_324138;
        }
    }
    ctx->pc = 0x324114u;
    // 0x324114: 0xc0d0200  jal         func_340800
    ctx->pc = 0x324114u;
    SET_GPR_U32(ctx, 31, 0x32411Cu);
    ctx->pc = 0x340800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340800u, 0x324114u, 0x32411Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32411Cu;
label_32411c:
    // 0x32411c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32411Cu;
    {
        const bool branch_taken_0x32411c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x324120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32411Cu;
        // 0x324120: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32411c) {
            ctx->pc = 0x324138u;
            goto label_324138;
        }
    }
    ctx->pc = 0x324124u;
    // 0x324124: 0xc0c92a4  jal         func_324A90
    ctx->pc = 0x324124u;
    SET_GPR_U32(ctx, 31, 0x32412Cu);
    ctx->pc = 0x324128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324124u;
    // 0x324128: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324A90u, 0x324124u, 0x32412Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32412Cu;
label_32412c:
    // 0x32412c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32412cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324130: 0xc0cb1d0  jal         func_32C740
    ctx->pc = 0x324130u;
    SET_GPR_U32(ctx, 31, 0x324138u);
    ctx->pc = 0x324134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324130u;
    // 0x324134: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C740u, 0x324130u, 0x324138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324138u;
label_324138:
    // 0x324138: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x324138u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32413c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32413cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x324140: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x324140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x324144: 0x3e00008  jr          $ra
    ctx->pc = 0x324144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324144u;
        // 0x324148: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32414Cu;
    // 0x32414c: 0x0  nop
    ctx->pc = 0x32414cu;
    // NOP
    ctx->pc = 0x324150u;
}
