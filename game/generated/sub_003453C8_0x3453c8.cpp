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

// Function: sub_003453C8
// Address: 0x3453c8 - 0x345430
void sub_003453C8_0x3453c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003453C8_0x3453c8");
#endif

    switch (ctx->pc) {
        case 0x3453f8u: goto label_3453f8;
        case 0x345400u: goto label_345400;
        default: break;
    }

    ctx->pc = 0x3453c8u;

    // 0x3453c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3453c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3453cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3453ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3453d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3453d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3453d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3453d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3453d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3453d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3453dc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3453dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3453e0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3453e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3453e4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3453E4u;
    {
        const bool branch_taken_0x3453e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3453E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3453E4u;
        // 0x3453e8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3453e4) {
            ctx->pc = 0x345414u;
            goto label_345414;
        }
    }
    ctx->pc = 0x3453ECu;
    // 0x3453ec: 0x2630000c  addiu       $s0, $s1, 0xC
    ctx->pc = 0x3453ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x3453f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3453f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3453f4: 0x0  nop
    ctx->pc = 0x3453f4u;
    // NOP
label_3453f8:
    // 0x3453f8: 0xc0d12e4  jal         func_344B90
    ctx->pc = 0x3453F8u;
    SET_GPR_U32(ctx, 31, 0x345400u);
    ctx->pc = 0x3453FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3453F8u;
    // 0x3453fc: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344B90u, 0x3453F8u, 0x345400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345400u;
label_345400:
    // 0x345400: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x345400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x345404: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x345404u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x345408: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x345408u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x34540c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34540Cu;
    {
        const bool branch_taken_0x34540c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x345410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34540Cu;
        // 0x345410: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34540c) {
            ctx->pc = 0x3453F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3453f8;
        }
    }
    ctx->pc = 0x345414u;
label_345414:
    // 0x345414: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x345414u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x345418: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x345418u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34541c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34541cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x345420: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x345420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x345424: 0x3e00008  jr          $ra
    ctx->pc = 0x345424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345424u;
        // 0x345428: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34542Cu;
    // 0x34542c: 0x0  nop
    ctx->pc = 0x34542cu;
    // NOP
    ctx->pc = 0x345430u;
}
