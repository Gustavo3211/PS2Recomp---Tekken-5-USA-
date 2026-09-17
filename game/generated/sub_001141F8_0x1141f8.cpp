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

// Function: sub_001141F8
// Address: 0x1141f8 - 0x114288
void sub_001141F8_0x1141f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001141F8_0x1141f8");
#endif

    switch (ctx->pc) {
        case 0x114234u: goto label_114234;
        case 0x11424cu: goto label_11424c;
        case 0x114260u: goto label_114260;
        default: break;
    }

    ctx->pc = 0x1141f8u;

    // 0x1141f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1141f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1141fc: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x1141fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x114200: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x114200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x114204: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x114204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x114208: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x114208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11420c: 0x245310f3  addiu       $s3, $v0, 0x10F3
    ctx->pc = 0x11420cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4339));
    // 0x114210: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x114210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x114214: 0x2471ba68  addiu       $s1, $v1, -0x4598
    ctx->pc = 0x114214u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949480));
    // 0x114218: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x114218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11421c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x11421cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114220: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x114220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x114224: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114228: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x114228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11422c: 0xc04a100  jal         func_128400
    ctx->pc = 0x11422Cu;
    SET_GPR_U32(ctx, 31, 0x114234u);
    ctx->pc = 0x114230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11422Cu;
    // 0x114230: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128400u, 0x11422Cu, 0x114234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114234u;
label_114234:
    // 0x114234: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x114234u;
    {
        const bool branch_taken_0x114234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114234u;
        // 0x114238: 0x3c100013  lui         $s0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114234) {
            ctx->pc = 0x114264u;
            goto label_114264;
        }
    }
    ctx->pc = 0x11423Cu;
    // 0x11423c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11423cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114240: 0x8e0511a8  lw          $a1, 0x11A8($s0)
    ctx->pc = 0x114240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4520)));
    // 0x114244: 0xc04a100  jal         func_128400
    ctx->pc = 0x114244u;
    SET_GPR_U32(ctx, 31, 0x11424Cu);
    ctx->pc = 0x114248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114244u;
    // 0x114248: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128400u, 0x114244u, 0x11424Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11424Cu;
label_11424c:
    // 0x11424c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11424Cu;
    {
        const bool branch_taken_0x11424c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11424Cu;
        // 0x114250: 0x8e0511a8  lw          $a1, 0x11A8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11424c) {
            ctx->pc = 0x114264u;
            goto label_114264;
        }
    }
    ctx->pc = 0x114254u;
    // 0x114254: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x114254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114258: 0xc04a100  jal         func_128400
    ctx->pc = 0x114258u;
    SET_GPR_U32(ctx, 31, 0x114260u);
    ctx->pc = 0x11425Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114258u;
    // 0x11425c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128400u, 0x114258u, 0x114260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114260u;
label_114260:
    // 0x114260: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x114260u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_114264:
    // 0x114264: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x114264u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114268: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x114268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11426c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x11426cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x114270: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x114270u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x114274: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x114274u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114278: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x114278u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11427c: 0x3e00008  jr          $ra
    ctx->pc = 0x11427Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11427Cu;
        // 0x114280: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11427Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114284u;
    // 0x114284: 0x0  nop
    ctx->pc = 0x114284u;
    // NOP
    ctx->pc = 0x114288u;
}
